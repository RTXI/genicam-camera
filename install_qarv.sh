#! /bin/bash

################################################################################
# Install qarv dependences.
################################################################################
sudo apt-get install \
	cmake libswscale-dev libavutil-dev libavcodec-dev libopencv-dev

################################################################################
# Clone my (anselg) repository and build.
################################################################################
git clone https://github.com/anselg/qarv qarv-git
cd qarv-git
mkdir build
cd build
cmake ..
make -j`nproc` && sudo make install
