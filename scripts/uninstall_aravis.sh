#! /bin/bash
set -eu

################################################################################
# Uninstall aravis.
################################################################################

SCRIPT_DIR=$(pwd)
DEP_DIR=$(dirname `pwd`)/deps
ARAVIS_VERSION=0.4.1

cd ${DEP_DIR}
if [ -d aravis-${ARAVIS_VERSION} ]; then
  rm -rf aravis-${ARAVIS_VERSION}
fi
tar xf aravis-${ARAVIS_VERSION}.tar.xz
cd ${DEP_DIR}/aravis-${ARAVIS_VERSION}

./configure \
    --enable-introspection --disable-viewer --enable-gst-0.10-plugin \
    --enable-gst-plugin --enable-cpp-test && \
  sudo make uninstall

cd ${SCRIPT_DIR}
