PLUGIN_NAME = genicam_camera

HEADERS = genicam-camera.h \
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


SOURCES = genicam-camera.cpp \
          moc_genicam-camera.cpp \
          include/api/qarvcamera.cpp \
          include/api/qarvgui.cpp \
          include/api/moc_qarvcamera.cpp \
          include/api/moc_qarvgui.cpp \
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

### Do not edit below this line ###

include $(shell rtxi_plugin_config --pkgdata-dir)/Makefile.plugin_compile
