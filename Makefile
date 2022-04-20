PLUGIN_NAME = genicam_camera

HEADERS = genicam-camera.h 
SOURCES = genicam-camera.cpp \
          moc_genicam-camera.cpp 

CXXFLAGS := $(shell pkg-config --cflags aravis-0.8 libavformat libavcodec \
              libavutil libswscale opencv4 qarv-3) 
LDFLAGS  := $(shell pkg-config --libs aravis-0.8 libavformat libavcodec \
              libavutil libswscale opencv4 qarv-3)


### Do not edit below this line ###

include $(shell rtxi_plugin_config --pkgdata-dir)/Makefile.plugin_compile

