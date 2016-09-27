PLUGIN_NAME = genicam_camera

HEADERS = genicam-camera.h \
          include/getmtu_linux.h \
          include/glhistogramwidget.h \
          include/globals.h \
          include/qarvfeaturetree.h \
          include/qarvmainwindow.h \
          include/roicombobox.h \
          include/glvideowidget.h \
          include/ui_mainwindow.h \
          include/workthread.h \
          include/decoders/graymap.h \
          include/decoders/monoumpacked.h \
          include/decoders/swscaledecoder.h \
          include/decoders/unsupported.h \
          include/recorders/recorder.h \
          include/recorders/gstrecorder_implementation.h \
          include/filters/filter.h \
          include/filters/levels.h \
          include/filters/ui_levels.h \

SOURCES = genicam-camera.cpp \
          include/glhistogramwidget.cpp \
          include/globals.cpp \
          include/qarvfeaturetree.cpp \
          include/qarvmainwindow.cpp \
          include/roicombobox.cpp \
          include/glvideowidget.cpp \
          include/workthread.cpp \
          include/decoders/graymap.cpp \
          include/decoders/monoumpacked.cpp \
          include/decoders/swscaledecoder.cpp \
          include/recorders/recorder.cpp \
          include/recorders/gstrecorder_implementation.cpp \
          include/filters/filter.cpp \
          include/filters/levels.cpp \
          moc_genicam-camera.cpp \
          include/moc_glhistogramwidget.cpp \
          include/moc_globals.cpp \
          include/moc_qarvmainwindow.cpp \
          include/moc_roicombobox.cpp \
          include/moc_glvideowidget.cpp \
          include/moc_workthread.cpp \
          include/filters/moc_filter.cpp \
          include/filters/moc_levels.cpp \

CXXFLAGS := $(shell pkg-config --cflags aravis-0.4 libavformat libavcodec \
              libavutil libswscale opencv qarv-2) 
LDFLAGS  := $(shell pkg-config --libs aravis-0.4 libavformat libavcodec \
              libavutil libswscale opencv qarv-2)


### Do not edit below this line ###

include $(shell rtxi_plugin_config --pkgdata-dir)/Makefile.plugin_compile

clean: extraclean

extraclean: 
	rm -rf include/.libs
	rm -rf include/api/.libs
	rm -rf include/decoders/.libs
	rm -rf include/decoders/bayer/.libs
	rm -rf include/decoders/mono/.libs
	rm -rf include/recorders/.libs
	rm -rf include/recorders/rawrecorders/.libs
	rm -rf include/filters/.libs
	rm -f include/*.lo
	rm -f include/api/*.lo
	rm -f include/decoders/*.lo
	rm -f include/decoders/bayer/*.lo
	rm -f include/decoders/mono/*.lo
	rm -f include/recorders/*.lo
	rm -f include/recorders/rawrecorders/*.lo
	rm -f include/filters/*.lo
	rm -f include/*.o
	rm -f include/api/*.o
	rm -f include/decoders/*.o
	rm -f include/decoders/bayer/*.o
	rm -f include/decoders/mono/*.o
	rm -f include/recorders/*.o
	rm -f include/recorders/rawrecorders/*.o
	rm -f include/filters/*.o
	rm -f include/moc_*
	rm -f include/api/moc_*
	rm -f include/decoders/moc_*
	rm -f include/decoders/bayer/moc_*
	rm -f include/decoders/mono/moc_*
	rm -f include/recorders/moc_*
	rm -f include/recorders/rawrecorders/moc_*
	rm -f include/filters/moc_*
