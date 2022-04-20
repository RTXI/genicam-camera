#! /bin/bash
set -eu

################################################################################
# Install qarv dependences.
################################################################################

sudo apt-get install -y \
  cmake libswscale-dev libavutil-dev libavcodec-dev libopencv-dev \
  gstreamer1.0-libavi libsystemd-dev


################################################################################
# Clone my (anselg) repository and build.
################################################################################

SCRIPT_DIR=$(pwd)
DEP_DIR=$(dirname `pwd`)/deps
QARV_VERSION=2.1.0

cd ${DEP_DIR}
git clone https://github.com/AD-Vega/qarv.git
cd ${DEP_DIR}/qarv

mkdir -p build
cd build
cmake .. 
make -j`nproc` && sudo make install
#sudo ldconfig

cd ${SCRIPT_DIR}
