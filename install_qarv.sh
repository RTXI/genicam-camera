#! /bin/bash

# install dependences
sudo apt-get install \
	cmake libswscale-dev libavutil-dev libavcodec-dev libopencv-dev

# clone reop and build
git clone https://github.com/AD-Vega/qarv
cd qarv
mkdir build
cd build
cmake ..
make -j`nproc` && sudo make install
