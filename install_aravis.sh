#! /bin/bash

# Should ultimately use a static version of the software, not the latest
# git version. 
git clone git://git.gnome.org/aravis aravis-git

# Install package dependencies.
sudo apt-get install \
	intltool libgstreamer1.0-dev libgtk-3-dev gtk-doc-tools libnotify-dev \
	libgstreamer-plugins-base1.0-dev libgirepository1.0-dev \
	libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev \
	gobject-introspection

cd aravis-git
# Need to install dependencies first, instructions missing.
./autogen.sh --enable-viewer --enable-introspection=yes \
             --enable-gst-0.10-plugin --enable-gst-plugin && \
make -j`nproc` && sudo make install
