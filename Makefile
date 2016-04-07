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
          include/decoders/graymap.h \
          include/decoders/mono12packed.h \
          include/decoders/swscaledecoder.h \
          include/decoders/unsupported.h \
          include/decoders/bayer.h \
          include/decoders/bayer/bayerbg10.h \
          include/decoders/bayer/bayerbg12.h \
          include/decoders/bayer/bayerbg12_packed.h \
          include/decoders/bayer/bayerbg16.h \
          include/decoders/bayer/bayerbg8.h \
          include/decoders/bayer/bayergb10.h \
          include/decoders/bayer/bayergb12.h \
          include/decoders/bayer/bayergb12_packed.h \
          include/decoders/bayer/bayergb16.h \
          include/decoders/bayer/bayergb8.h \
          include/decoders/bayer/bayergr10.h \
          include/decoders/bayer/bayergr12.h \
          include/decoders/bayer/bayergr12_packed.h \
          include/decoders/bayer/bayergr16.h \
          include/decoders/bayer/bayergr8.h \
          include/decoders/bayer/bayerrg10.h \
          include/decoders/bayer/bayerrg12.h \
          include/decoders/bayer/bayerrg12_packed.h \
          include/decoders/bayer/bayerrg16.h \
          include/decoders/bayer/bayerrg8.h \
          include/decoders/monounpacked.h \
          include/decoders/mono/mono10.h \
          include/decoders/mono/mono12.h \
          include/decoders/mono/mono14.h \
          include/decoders/mono/mono16.h \
          include/decoders/mono/mono8.h \
          include/decoders/mono/mono8signed.h \
          include/recorders/recorder.h \
          include/recorders/imagerecorder.h \
          include/recorders/gstrecorder_implementation.h \
          include/recorders/gstrecorders.h \
          include/recorders/rawrecorders/rawdecoded8.h \
          include/recorders/rawrecorders/rawdecoded16.h \
          include/recorders/rawrecorders/rawundecoded.h \


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
          include/decoders/bayer/bayerbg10.cpp \
          include/decoders/bayer/bayerbg12.cpp \
          include/decoders/bayer/bayerbg12_packed.cpp \
          include/decoders/bayer/bayerbg16.cpp \
          include/decoders/bayer/bayerbg8.cpp \
          include/decoders/bayer/bayergb10.cpp \
          include/decoders/bayer/bayergb12.cpp \
          include/decoders/bayer/bayergb12_packed.cpp \
          include/decoders/bayer/bayergb16.cpp \
          include/decoders/bayer/bayergb8.cpp \
          include/decoders/bayer/bayergr10.cpp \
          include/decoders/bayer/bayergr12.cpp \
          include/decoders/bayer/bayergr12_packed.cpp \
          include/decoders/bayer/bayergr16.cpp \
          include/decoders/bayer/bayergr8.cpp \
          include/decoders/bayer/bayerrg10.cpp \
          include/decoders/bayer/bayerrg12.cpp \
          include/decoders/bayer/bayerrg12_packed.cpp \
          include/decoders/bayer/bayerrg16.cpp \
          include/decoders/bayer/bayerrg8.cpp \
          include/decoders/graymap.cpp \
          include/decoders/mono/mono10.cpp \
          include/decoders/mono/mono12.cpp \
          include/decoders/mono/mono14.cpp \
          include/decoders/mono/mono16.cpp \
          include/decoders/mono/mono8.cpp \
          include/decoders/mono/mono8signed.cpp \
          include/decoders/mono12packed.cpp \
          include/decoders/swscaledecoder.cpp \
          include/recorders/recorder.cpp \
          include/recorders/imagerecorder.cpp \
          include/recorders/gstrecorder_implementation.cpp \
          include/recorders/gstrecorders.cpp \
          include/recorders/rawrecorders/rawdecoded8.cpp \
          include/recorders/rawrecorders/rawdecoded16.cpp \
          include/recorders/rawrecorders/rawundecoded.cpp \
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
          include/decoders/bayer/moc_bayerbg10.cpp \
          include/decoders/bayer/moc_bayerbg12.cpp \
          include/decoders/bayer/moc_bayerbg12_packed.cpp \
          include/decoders/bayer/moc_bayerbg16.cpp \
          include/decoders/bayer/moc_bayerbg8.cpp \
          include/decoders/bayer/moc_bayergb10.cpp \
          include/decoders/bayer/moc_bayergb12.cpp \
          include/decoders/bayer/moc_bayergb12_packed.cpp \
          include/decoders/bayer/moc_bayergb16.cpp \
          include/decoders/bayer/moc_bayergb8.cpp \
          include/decoders/bayer/moc_bayergr10.cpp \
          include/decoders/bayer/moc_bayergr12.cpp \
          include/decoders/bayer/moc_bayergr12_packed.cpp \
          include/decoders/bayer/moc_bayergr16.cpp \
          include/decoders/bayer/moc_bayergr8.cpp \
          include/decoders/bayer/moc_bayerrg10.cpp \
          include/decoders/bayer/moc_bayerrg12.cpp \
          include/decoders/bayer/moc_bayerrg12_packed.cpp \
          include/decoders/bayer/moc_bayerrg16.cpp \
          include/decoders/bayer/moc_bayerrg8.cpp \
          include/decoders/mono/moc_mono10.cpp \
          include/decoders/mono/moc_mono12.cpp \
          include/decoders/mono/moc_mono14.cpp \
          include/decoders/mono/moc_mono16.cpp \
          include/decoders/mono/moc_mono8.cpp \
          include/decoders/mono/moc_mono8signed.cpp \
          include/decoders/moc_mono12packed.cpp \
          include/recorders/moc_imagerecorder.cpp \
          include/recorders/moc_gstrecorders.cpp \
          include/recorders/rawrecorders/moc_rawdecoded8.cpp \
          include/recorders/rawrecorders/moc_rawdecoded16.cpp \
          include/recorders/rawrecorders/moc_rawundecoded.cpp \

CXXFLAGS += $(shell pkg-config --cflags aravis-0.4 libavformat libavutil libswscale) 
LDFLAGS  += $(shell pkg-config --libs aravis-0.4 libavformat libavutil libswscale) 

### Do not edit below this line ###

include $(shell rtxi_plugin_config --pkgdata-dir)/Makefile.plugin_compile

clean::
	rm -rf include/.libs
	rm -rf include/api/.libs
	rm -rf include/decoders/.libs
	rm -rf include/decoders/bayer/.libs
	rm -rf include/decoders/mono/.libs
	rm -rf include/recorders/.libs
	rm -rf include/recorders/rawrecorders/.libs
	rm -rf include/filters/.libs
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

#	rm -f $(OBJECTS)
#	rm -f $(MOOBJECTS)
#	rm -f moc_*
#	rm -f *.o
#	rm -f $(PLUGIN_NAME).la
#	rm -f $(PLUGIN_NAME).o
#	rm -rf .libs
