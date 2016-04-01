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

#include "globals.h"

#include <QTime>

using namespace QArv;

const char* QArv::qarv_datafiles = QARV_DATA;

MessageSender QArvDebug::messageSender __attribute__((init_priority(1000)));

MessageSender::MessageSender(): QObject(), connected(false) {}

/*
void MessageSender::connectNotify(const char * signal)
{
	QObject::connectNotify(signal);
	connected = true;
	foreach (const QString& msg, preconnectMessages)
		emit newDebugMessage(msg);
	preconnectMessages.clear();
}

void MessageSender::disconnectNotify(const char * signal)
{
	QObject::disconnectNotify(signal);
	if (receivers(SIGNAL(newDebugMessage(QString))) < 1)
		connected = false;
}
*/

void MessageSender::sendMessage(const QString& message) {
	if (connected) emit newDebugMessage(message);
	else preconnectMessages << message;
}

QArvDebug::~QArvDebug() {
	auto now = QTime::currentTime().toString("[hh:mm:ss] ");
	foreach (auto line, message.split('\n')) {
		if (line.startsWith('"')) {
			auto lineref = line.midRef(1, line.length() - 3);
			qDebug(prepend ? "QArv %s%s" : "%s%s", 
			       now.toLocal8Bit().constData(), 
			       lineref.toLocal8Bit().constData());
			messageSender.sendMessage(now + lineref.toString());
		} else {
			qDebug(prepend ? "QArv %s%s" : "%s%s", 
			       now.toLocal8Bit().constData(), 
			       line.toLocal8Bit().constData());
			messageSender.sendMessage(now + line);
		}
	}
}
