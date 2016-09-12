#! /bin/bash
set -eu

################################################################################
# Install package dependencies.
################################################################################

sudo apt-get install \
  intltool libgstreamer1.0-dev libgtk-3-dev gtk-doc-tools libnotify-dev \
  libgstreamer-plugins-base1.0-dev libgirepository1.0-dev \
  libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev \
  python-gobject-dev python-gst0.10-dev python-gst-1.0 \
  gobject-introspection


################################################################################
# Download and install aravis.
################################################################################

SCRIPT_DIR=$(pwd)
BUILD_DIR=${SCRIPT_DIR}/../build
ARAVIS_VERSION=0.5.1

# Should ultimately use a static version of the software, not the latest git 
# version.
mkdir -p ${BUILD_DIR}
cd ${BUIlD_DIR}
wget http://ftp.acc.umu.se/pub/GNOME/sources/aravis/${ARAVIS_VERSION%.*}/aravis-${ARAVIS_VERSION}.tar.xz
wget http://ftp.acc.umu.se/pub/GNOME/sources/aravis/${ARAVIS_VERSION%.*}/aravis-${ARAVIS_VERSION}.news
wget http://ftp.acc.umu.se/pub/GNOME/sources/aravis/${ARAVIS_VERSION%.*}/aravis-${ARAVIS_VERSION}.sha256sum
sha256sum -c aravis-${ARAVIS_VERSION}.sha256sum
tar xf aravis-${ARAVIS_VERSION}.tar.gz


cd ${BUILD_DIR}/aravis-git
# Need to install dependencies first, instructions missing.
./autogen.sh --enable-introspection=yes --enable-gst-0.10-plugin \
             --enable-gst-plugin --enable-cpp-test && \
make -j`nproc` && sudo make install

cd ${SCRIPT_DIR}


################################################################################
# Export variables. Assumes that the script is run from the base of the 
# repository. Values will be lost when you close your shell, so you may want 
# manually enter the full path name (i.e., without pwd) in your shell profile.
################################################################################

export GI_TYPELIB_PATH=$GI_TYPELIB_PATH:$(pwd)/aravis-git/src
export LD_LIBRARY_PATH=$(pwd)/aravis-git/src/.libs
