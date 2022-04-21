/*
 * The Real-Time eXperiment Interface (RTXI)
 *
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
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <pthread.h>

#include "genicam-camera.h"

extern "C" Plugin::Object*
createRTXIPlugin(void)
{
  return new GenicamCamera();
}

// INPUTs, OUTPUTs, PARAMETERs, and STATEs
static Workspace::variable_t vars[] = { 
  {
    "Input", "Input", Workspace::INPUT,
  },
  {
    "Output", "Output", Workspace::OUTPUT,
  },
  {
    "State", "State", Workspace::STATE,
  },
  {
    "Parameter", "Parameter", Workspace::PARAMETER,
  }
};

// Number of variables in vars
static size_t num_vars = sizeof(vars) / sizeof(Workspace::variable_t);

GenicamCamera::GenicamCamera(void)
  : QWidget(MainWindow::getInstance()->centralWidget())
  , RT::Thread(0)
  , Workspace::Instance("GenICam Module", vars, num_vars)
{

  //pthread_create(&thread, 0, bounce, this);

  setWindowTitle(QString::number(getID()) + " GenICam Module");
  QArvCamera::init();

  QCoreApplication::setOrganizationDomain("org.qt-project");
  QCoreApplication::setOrganizationName("Qt");
  QCoreApplication::setApplicationName("QArv");

  createGUI();
  initialize();
  show();
}

GenicamCamera::~GenicamCamera(void)
{
  //pthread_join(thread, 0);
}

void*
GenicamCamera::bounce(void* thing)
{
  std::cout << "bounce. bounce." << std::endl;
}

void
GenicamCamera::initialize(void)
{
}

void
GenicamCamera::createGUI(void)
{

  subWindow = new QMdiSubWindow;
  subWindow->setAttribute(Qt::WA_DeleteOnClose);
  subWindow->setWindowIcon(QIcon("/usr/local/lib/rtxi/RTXI-widget-icon.png"));
  subWindow->setWindowFlags(Qt::CustomizeWindowHint |
                            Qt::WindowCloseButtonHint |
                            Qt::WindowMinimizeButtonHint);
  MainWindow::getInstance()->createMdi(subWindow);

  widget = new QArvGui(subWindow, true);
  QVBoxLayout* layout = new QVBoxLayout(this);
  layout->addWidget(widget);

  setLayout(layout);
  subWindow->setWidget(this);
  widget->show();
  subWindow->show();
  subWindow->adjustSize();
}

void
GenicamCamera::receiveEvent(const ::Event::Object* event)
{
  if (event->getName() == Event::START_GENICAM_RECORDING_EVENT) {
    std::cout << event->getName() << std::endl;
  } else if (event->getName() == Event::STOP_GENICAM_RECORDING_EVENT) {
    std::cout << event->getName() << std::endl;
  } else if (event->getName() == Event::GENICAM_SNAPSHOT_EVENT) {
    std::cout << event->getName() << std::endl;
  } else {
    std::cout << "Genicam: " << event->getName() << std::endl;
  }
}

void
GenicamCamera::receiveEventRT(const ::Event::Object* event)
{
//  if (event->getName() == Event::START_GENICAM_RECORDING_EVENT) {
//    dynamic_cast<QArv::QArvMainWindow*>(widget->mainWindow())
//      ->recordAction->setChecked(true);
//    std::cout << event->getName() << " RT" << std::endl;
//  } else if (event->getName() == Event::PAUSE_GENICAM_RECORDING_EVENT) {
//    std::cout << event->getName() << " RT" << std::endl;
//    dynamic_cast<QArv::QArvMainWindow*>(widget->mainWindow())
//      ->recordAction->setChecked(false);
//  } else if (event->getName() == Event::STOP_GENICAM_RECORDING_EVENT) {
//    std::cout << event->getName() << " RT" << std::endl;
//    dynamic_cast<QArv::QArvMainWindow*>(widget->mainWindow())
//      ->recordAction->setChecked(false);
//    dynamic_cast<QArv::QArvMainWindow*>(widget->mainWindow())
//      ->closeFileAction->trigger();
//  } else if (event->getName() == Event::GENICAM_SNAPSHOT_EVENT) {
//    std::cout << event->getName() << " RT" << std::endl;
//    dynamic_cast<QArv::QArvMainWindow*>(widget->mainWindow())
//      ->snapshotAction->setChecked(true);
//  } else {
//    std::cout << "Genicam RT: " << event->getName() << std::endl;
//  }
}
