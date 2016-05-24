#! /bin/bash

SCRIPT_DIR=$(pwd)
BASE_DIR=../
BUILD_DIR=${BASE_DIR}/build

################################################################################
# Install qarv dependences.
################################################################################
sudo apt-get install \
	cmake libswscale-dev libavutil-dev libavcodec-dev libopencv-dev \
	gstreamer1.0-libav

################################################################################
# Clone my (anselg) repository and build.
################################################################################
git clone https://github.com/anselg/qarv ${BUILD_DIR}/qarv-git
cd ${BUILD_DIR}/qarv-git

mkdir build
cd build
cmake ..
make -j`nproc` && sudo make install

cd ${SCRIPT_DIR}
