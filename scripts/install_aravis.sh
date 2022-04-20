#! /bin/bash
set -eu

################################################################################
# Install package dependencies.
################################################################################

#sudo apt-get update && sudo apt-get -y install \
#  intltool libgstreamer1.0-dev libgtk-3-dev gtk-doc-tools libnotify-dev \
#  libgstreamer-plugins-base1.0-dev libgirepository1.0-dev \
#  libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev \
#  python-gobject-dev python-gst0.10-dev python-gst-1.0 \
#  gobject-introspection gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly

sudo apt install libxml2-dev libglib2.0-dev cmake libusb-1.0-0-dev gobject-introspection \
                 libgtk-3-dev gtk-doc-tools  xsltproc libgstreamer1.0-dev \
                 libgstreamer-plugins-base1.0-dev libgstreamer-plugins-good1.0-dev \
                 libgirepository1.0-dev meson 

#pip3 install meson
#PATH="$PATH:$HOME/.local/bin"

################################################################################
# Install aravis.
################################################################################

SCRIPT_DIR=$(pwd)
DEP_DIR=$(dirname `pwd`)/deps
ARAVIS_VERSION=0.8.21

cd ${DEP_DIR}
wget -nc https://github.com/AravisProject/aravis/releases/download/${ARAVIS_VERSION}/aravis-${ARAVIS_VERSION}.tar.xz
tar xf aravis-${ARAVIS_VERSION}.tar.xz
cd ${DEP_DIR}/aravis-${ARAVIS_VERSION}

#./configure \
#    --enable-introspection --disable-viewer --enable-gst-0.10-plugin \
#    --enable-gst-plugin --enable-cpp-test && \
#  make -j`nproc` && sudo ake install

# New steps for building aravis use meson now
#~/.local/bin/meson configure ./build/ -Ddocumentation=disabled
meson build -Ddocumentation=disabled
cd build
ninja
ninja install

#sudo ldconfig

cd ${SCRIPT_DIR}
