/*
 * QArv, a Qt interface to aravis.
 * Copyright (C) 2012-2014 Jure Varlec <jure.varlec@ad-vega.si>
 * Andrej Lajovic <andrej.lajovic@ad-vega.si>
 *
 * This program is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, or 
 * (at your option) any later version. 
 *
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
 * GNU General Public License for more details. 
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "include/recorders/rawrecorders/rawundecoded.h"
#include <QFile>
#include <QSettings>
#include <QRegExp>
#include <QFileInfo>
#include "include/globals.h"
extern "C" {
#include <libavutil/pixdesc.h>
}

using namespace QArv;

// Make sure settings format matches qarvrecordedvideo.cpp!

static const QString descExt(".qarv");

static void initDescfile(QSettings& s, QSize size, int FPS) {
	s.beginGroup("qarv_raw_video_description");
	s.remove("");
	s.setValue("description_version", "0.1");
	QFileInfo finfo(s.fileName());
	QString fname(finfo.completeBaseName());
	s.setValue("file_name", fname);
	s.setValue("frame_size", size);
	s.setValue("nominal_fps", FPS);
}

class RawUndecoded: public Recorder {
	public:
		RawUndecoded(QArvDecoder* decoder_, QString fileName, QSize size, 
		             int FPS, bool writeInfo) :
			file(fileName), decoder(decoder_), bytesizeWritten(false) {
			file.open(QIODevice::WriteOnly);
			if (isOK() && writeInfo) {
				QSettings s(fileName + descExt, QSettings::Format::IniFormat);
				initDescfile(s, size, FPS);
				s.setValue("encoding_type", "aravis");
				auto pxfmt = QString::number(decoder->pixelFormat(), 16);
				s.setValue("arv_pixel_format", QString("0x") + pxfmt);
			}
		}

		bool isOK() {
			return file.isOpen() && (file.error() == QFile::NoError);
		}

		bool recordsRaw() {
			return true;
		}

		void recordFrame(QByteArray raw) {
			if (isOK()) {
				file.write(raw);
				if (!bytesizeWritten) {
					bytesizeWritten = true;
					QSettings s(file.fileName() + descExt, QSettings::Format::IniFormat);
					s.beginGroup("qarv_raw_video_description");
					s.setValue("frame_bytes", raw.size());
					frameBytes = raw.size();
				}
			}
		}

		QPair<qint64, qint64> fileSize() {
			qint64 s, n;
			if (!bytesizeWritten || !frameBytes) {
				s = n = 0;
			} else {
				s = file.size();
				n = s / frameBytes;
			}
			return qMakePair(s, n);
		}

	private:
		QFile file;
		QArvDecoder* decoder;
		bool bytesizeWritten;
		qint64 frameBytes;
};

Recorder* RawUndecodedFormat::makeRecorder(QArvDecoder* decoder, 
                                           QString fileName, 
                                           QSize frameSize, 
                                           int framesPerSecond, 
                                           bool writeInfo) {
	return new RawUndecoded(decoder, fileName, frameSize, framesPerSecond, writeInfo);
}

Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QArvOutputFormat")
//Q_EXPORT_PLUGIN2(RawUndecoded, QArv::RawUndecodedFormat)
Q_IMPORT_PLUGIN(RawUndecodedFormat)
