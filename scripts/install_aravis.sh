#! /bin/bash
set -eu

################################################################################
# Install package dependencies.
################################################################################

sudo apt-get update && sudo apt-get -y install \
  intltool libgstreamer1.0-dev libgtk-3-dev gtk-doc-tools libnotify-dev \
  libgstreamer-plugins-base1.0-dev libgirepository1.0-dev \
  libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev \
  python-gobject-dev python-gst0.10-dev python-gst-1.0 \
  gobject-introspection gstreamer1.0-plugins-bad


################################################################################
# Install aravis.
################################################################################

SCRIPT_DIR=$(pwd)
DEP_DIR=$(dirname `pwd`)/deps
ARAVIS_VERSION=0.4.1

cd ${DEP_DIR}
tar xf aravis-${ARAVIS_VERSION}.tar.xz
cd ${DEP_DIR}/aravis-${ARAVIS_VERSION}

./configure \
    --enable-introspection --disable-viewer --enable-gst-0.10-plugin \
    --enable-gst-plugin --enable-cpp-test && \
  make -j`nproc` && sudo make install

cd ${SCRIPT_DIR}


################################################################################
# Export variables. Assumes that the script is run from the base of the 
# repository. Values will be lost when you close your shell, so you may want 
# manually enter the full path name (i.e., without pwd) in your shell profile.
################################################################################

#export GI_TYPELIB_PATH=$GI_TYPELIB_PATH:$(pwd)/aravis-git/src
#export LD_LIBRARY_PATH=$(pwd)/aravis-git/src/.libs
