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

#ifndef BAYERRG12_H
#define BAYERRG12_H

#include "api/qarvdecoder.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <QDataStream>
extern "C" {
	#include <arvenums.h>
}

// Some formats appeared only after aravis-0.2.0, so
// we check for their presence. The 12_PACKED formats
// were added individually.

namespace QArv {

class BayerRG12 : public QObject, public QArvPixelFormat {
	Q_OBJECT
	Q_INTERFACES(QArvPixelFormat)
	Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QArvPixelFormat")

	public:
		ArvPixelFormat pixelFormat() { return ARV_PIXEL_FORMAT_BAYER_RG_12; }
		QArvDecoder* makeDecoder(QSize size) {
			return new BayerDecoder<ARV_PIXEL_FORMAT_BAYER_RG_12>(size);
		}
};

}

#endif
