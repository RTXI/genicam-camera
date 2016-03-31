PLUGIN_NAME = genicam_camera

HEADERS = genicam-camera.h

SOURCES = genicam-camera.cpp \
          moc_genicam-camera.cpp\

### Do not edit below this line ###

include $(shell rtxi_plugin_config --pkgdata-dir)/Makefile.plugin_compile
