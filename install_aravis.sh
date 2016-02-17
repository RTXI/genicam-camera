#! /bin/bash

# Should ultimately use a static version of the software, not the latest
# git version. 
git clone git://git.gnome.org/aravis aravis-git

cd aravis-git
# Need to install dependencies first, instructions missing.
./autogen.sh --enable-viewer --enable-introspection=yes \
             --enable-gst-plugin-0.10 --enable-gst-plugin && \
make -j`nproc` && sudo make install

# Generate camera xml file.
arv-tool-0.4 -n $(arv-tool-0.4) genicam > "$(arv-tool-0.4).xml"
