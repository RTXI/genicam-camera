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

#include <main_window.h>

#include <QtGlobal>
#if QT_VERSION >= 0x050000
	#include <QtWidgets>
#else
	#include <QtGui>
#endif

#include "genicam-camera.h"
#include "include/api/qarvcamera.h"
#include "include/api/qarvgui.h"

#include <iostream>


extern "C" Plugin::Object *createRTXIPlugin(void) {
    return new GenicamCamera();
}

// INPUTs, OUTPUTs, PARAMETERs, and STATEs
static Workspace::variable_t vars[] = {
	{ "Input", "Input", Workspace::INPUT, }, 
	{ "Output", "Output", Workspace::OUTPUT, }, 
	{ "State", "State", Workspace::STATE, }, 
	{ "Parameter", "Parameter", Workspace::PARAMETER, }
};

// Number of variables in vars
static size_t num_vars = sizeof(vars) / sizeof(Workspace::variable_t);

GenicamCamera::GenicamCamera(void) 
	: QWidget(MainWindow::getInstance()->centralWidget()), RT::Thread(0), 
	  Workspace::Instance("GenICam Module", vars, num_vars) {

	setWindowTitle(QString::number( getID() ) + " GenICam Module");
	QArvCamera::init();
	createGUI();
	initialize();
	show();
}

GenicamCamera::~GenicamCamera(void) {}

void GenicamCamera::initialize(void) {}

void GenicamCamera::createGUI(void) {

	QMdiSubWindow *subWindow = new QMdiSubWindow;
	subWindow->setAttribute(Qt::WA_DeleteOnClose);
	subWindow->setWindowIcon(QIcon("/usr/local/lib/rtxi/RTXI-widget-icon.png"));
	subWindow->setWindowFlags(Qt::CustomizeWindowHint | 
	                          Qt::WindowCloseButtonHint | 
	                          Qt::WindowMinimizeButtonHint );
	MainWindow::getInstance()->createMdi(subWindow); 
	subWindow->setWidget(this);

	QArvGui *widget = new QArvGui(subWindow, false);
	QVBoxLayout *layout = new QVBoxLayout(this);
	setLayout(layout);

	layout->addWidget(widget);

//	QPushButton *button = new QPushButton("Howdy.");
//	layout->addWidget(button);

//	QObject::connect(button, SIGNAL(clicked(void)), 
//	                 this, SLOT(buttonClicked(void)));

	subWindow->adjustSize();
}

/*
void GenicamCamera::buttonClicked(void) {
	std::cout<<"button clicked"<<std::endl;
}
*/
