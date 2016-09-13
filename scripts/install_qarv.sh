#! /bin/bash
set -eu

################################################################################
# Install qarv dependences.
################################################################################

sudo apt-get install -y \
  cmake libswscale-dev libavutil-dev libavcodec-dev libopencv-dev \
  gstreamer1.0-libav


################################################################################
# Clone my (anselg) repository and build.
################################################################################

SCRIPT_DIR=$(pwd)
DEP_DIR=$(dirname `pwd`)/deps
QARV_VERSION=2

cd ${DEP_DIR}
tar xf qarv-${QARV_VERSION}.tar.xz
cd ${DEP_DIR}/qarv-${QARV_VERSION}

mkdir -p build
cd build
cmake .. 
make -j`nproc` && sudo make install

cd ${SCRIPT_DIR}
