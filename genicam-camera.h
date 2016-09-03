/*
 * The Real-Time eXperiment Interface (RTXI)
 * Copyright (C) 2011 Georgia Institute of Technology, University of Utah, and
 * Weill Cornell Medical College
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 *  this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GENICAM_CAMERA_H
#define GENICAM_CAMERA_H

#include <event.h>
#include <plugin.h>
#include <rt.h>
#include <settings.h>
#include <workspace.h>

#include <qarvcamera.h>
#include <qarvgui.h>

#include <QtGlobal>
#if QT_VERSION >= 0x050000
#include <QtWidgets>
#else
#include <QtGui>
#endif

#include <iostream>

namespace Genicam {
extern const char *START_GENICAM_RECORDING_EVENT;
extern const char *PAUSE_GENICAM_RECORDING_EVENT;
extern const char *STOP_GENICAM_RECORDING_EVENT;
extern const char *GENICAM_SNAPSHOT_EVENT;
}

class GenicamCamera : public QWidget,
                      public RT::Thread,
                      public Plugin::Object,
                      public Workspace::Instance,
                      public Event::Handler,
                      public Event::RTHandler {

  Q_OBJECT

public:
  GenicamCamera(void);
  virtual ~GenicamCamera(void);
  void receiveEvent(const ::Event::Object *);
  void receiveEventRT(const ::Event::Object *);

public slots:

protected:
private:
  static void *bounce(void *);
  pthread_t thread;
  void createGUI(void);
  void initialize(void);
  QMdiSubWindow *subWindow;
  QArvGui *widget;

private slots:
};

#endif
