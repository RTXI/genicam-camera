PLUGIN_NAME = genicam_camera

HEADERS = genicam-camera.h \
          include/getmtu_linux.h \
          include/api/qarvcamera.h \
          include/api/qarvdecoder.h \
          include/api/qarvrecordedvideo.h \
          include/api/qarvtype.h \
          include/api/qarvcameradelegate.h \
          include/glhistogramwidget.h \
          include/globals.h \
          include/qarvfeaturetree.h \
          include/qarvmainwindow.h \
          include/roicombobox.h \
          include/glvideowidget.h \
          include/ui_mainwindow.h \
          include/workthread.h \
          include/decoders/bayer.h \
          include/decoders/graymap.h \
          include/decoders/mono12packed.h \
          include/decoders/swscaledecoder.h \
          include/decoders/unsupported.h \
          include/decoders/monounpacked.h \
          include/decoders/monounpackeddecoders.h \
          include/recorders/recorder.h \
          include/recorders/rawrecorders.h \
          include/recorders/imagerecorder.h \
          include/recorders/gstrecorder_implementation.h \
          include/recorders/gstrecorders.h \


SOURCES = genicam-camera.cpp \
          include/api/qarvcamera.cpp \
          include/api/qarvgui.cpp \
          include/api/qarvdecoder.cpp \
          include/api/qarvrecordedvideo.cpp \
          include/api/qarvtype.cpp \
          include/api/qarvcameradelegate.cpp \
          include/glhistogramwidget.cpp \
          include/globals.cpp \
          include/qarvmainwindow.cpp \
          include/roicombobox.cpp \
          include/glvideowidget.cpp \
          include/workthread.cpp \
          include/decoders/bayer.cpp \
          include/decoders/graymap.cpp \
          include/decoders/mono12packed.cpp \
          include/decoders/swscaledecoder.cpp \
          include/decoders/monounpackeddecoders.cpp \
          include/recorders/recorder.cpp \
          include/recorders/rawrecorders.cpp \
          include/recorders/imagerecorder.cpp \
          include/recorders/gstrecorder_implementation.cpp \
          include/recorders/gstrecorders.cpp \
          moc_genicam-camera.cpp \
          include/api/moc_qarvcamera.cpp \
          include/api/moc_qarvgui.cpp \
          include/api/moc_qarvdecoder.cpp \
          include/api/moc_qarvrecordedvideo.cpp \
          include/api/moc_qarvtype.cpp \
          include/api/moc_qarvcameradelegate.cpp \
          include/moc_glhistogramwidget.cpp \
          include/moc_globals.cpp \
          include/moc_qarvmainwindow.cpp \
          include/moc_roicombobox.cpp \
          include/moc_glvideowidget.cpp \
          include/moc_workthread.cpp \
          include/recorders/moc_rawrecorders.cpp \
          include/recorders/moc_imagerecorder.cpp \
          include/recorders/moc_gstrecorders.cpp \


### Do not edit below this line ###

include $(shell rtxi_plugin_config --pkgdata-dir)/Makefile.plugin_compile

#OBJECTS   = $(shell echo $(SOURCES) | sed "s/\.cpp[ \t\n]*/\.lo /g")
#MOOBJECTS = $(shell echo $(HEADERS) | sed "s/\.h[ \t\n]*/\.lo /g")

clean: 
	rm -f $(OBJECTS)
	rm -f $(MOOBJECTS)
	rm -f moc_*
	rm -f *.o
	rm -f $(PLUGIN_NAME).la
	rm -f $(PLUGIN_NAME).o
	rm -rf .libs
	rm -rf include/.libs
	rm -rf include/api/.libs
	rm -rf include/decoders/.libs
	rm -rf include/recorders/.libs
	rm -rf include/filters/.libs
	rm -r include/*.lo
	rm -r include/api/*.lo
	rm -r include/decoders/*.lo
	rm -r include/recorders/*.lo
	rm -r include/filters/*.lo
	rm -r include/*.o
	rm -r include/api/*.o
	rm -r include/decoders/*.o
	rm -r include/recorders/*.o
	rm -r include/filters/*.o
	rm -r include/moc_*
	rm -r include/api/moc_*
	rm -r include/decoders/moc_*
	rm -r include/recorders/moc_*
	rm -r include/filters/moc_*
