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

#ifndef GLOBALS_H
#define GLOBALS_H

#include <QDebug>
#include <QStandardItemModel>

namespace QArv {

#ifndef QARV_DATA
#define QARV_DATA "res/icons/"
#endif

extern const char* qarv_datafiles;

class MessageSender : public QObject
{

  Q_OBJECT

public:
signals:
  void newDebugMessage(QString message);

private:
  bool connected;
  QStringList preconnectMessages;

  MessageSender();
  void connectNotify(const QMetaMethod& signal);
  void disconnectNotify(const QMetaMethod& signal);

  void sendMessage(const QString& message);

  friend class QArvDebug;
};

class QArvDebug : public QDebug
{
public:
  ~QArvDebug();
  static MessageSender messageSender;

private:
  QArvDebug(bool prependProgramName)
    : QDebug(&message)
    , prepend(prependProgramName)
  {
  }
  QString message;
  bool prepend;

  friend QArvDebug logMessage(bool);
};

inline QArvDebug
logMessage(bool prependProgramName = true)
{
  return QArvDebug(prependProgramName);
}

const int slidersteps = 1000;

static inline double
slider2value_log(int slidervalue, QPair<double, double>& range)
{
  double value = log2(range.second) - log2(range.first);
  return exp2(value * slidervalue / slidersteps + log2(range.first));
}

static inline int
value2slider_log(double value, QPair<double, double>& range)
{
  return slidersteps * (log2(value) - log2(range.first)) /
         (log2(range.second) - log2(range.first));
}

template <typename T>
static inline QVariant
ptr2var(const T* ptr)
{
  return QVariant::fromValue<quintptr>(reinterpret_cast<quintptr>(ptr));
}

template <typename T>
static inline T*
var2ptr(const QVariant& val)
{
  return reinterpret_cast<T*>(val.value<quintptr>());
}
}

#endif
