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
          include/decoders/moc_bayer.cpp \
          include/decoders/moc_monounpackeddecoders.cpp \
          include/decoders/moc_mono12packed.cpp \
          include/recorders/moc_rawrecorders.cpp \
          include/recorders/moc_imagerecorder.cpp \
          include/recorders/moc_gstrecorders.cpp \

CXXFLAGS += $(shell pkg-config --cflags aravis-0.4 libavformat libavutil libswscale) 
LDFLAGS  += $(shell pkg-config --libs aravis-0.4 libavformat libavutil libswscale) 

### Do not edit below this line ###

include $(shell rtxi_plugin_config --pkgdata-dir)/Makefile.plugin_compile

clean::
	rm -rf include/.libs
	rm -rf include/api/.libs
	rm -rf include/decoders/.libs
	rm -rf include/recorders/.libs
	rm -rf include/filters/.libs
	rm -f include/*.o
	rm -f include/api/*.o
	rm -f include/decoders/*.o
	rm -f include/recorders/*.o
	rm -f include/filters/*.o
	rm -f include/moc_*
	rm -f include/api/moc_*
	rm -f include/decoders/moc_*
	rm -f include/recorders/moc_*
	rm -f include/filters/moc_*

#	rm -f $(OBJECTS)
#	rm -f $(MOOBJECTS)
#	rm -f moc_*
#	rm -f *.o
#	rm -f $(PLUGIN_NAME).la
#	rm -f $(PLUGIN_NAME).o
#	rm -rf .libs
