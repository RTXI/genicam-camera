#! /bin/bash 
set -e

################################################################################
# Uninstall qarv libs, includes, and other files.
################################################################################

sudo rm -f /usr/local/lib/libqarv-2.so.2
sudo rm -f /usr/local/lib/libqarv-2.so
sudo rm -f /usr/local/bin/qarv
sudo rm -f /usr/local/bin/qarv_videoplayer
sudo rm -rf /usr/local/include/qarv-2/
sudo rm -rf /usr/local/share/qarv/
sudo rm -f /usr/local/share/icons/application-x-qarv.svgz
sudo rm -f /usr/local/share/applications/qarv.desktop
sudo rm -f /usr/local/share/applications/qarv-player.desktop
sudo rm -f /usr/local/share/mime/packages/qarv.xml
sudo rm -f /usr/local/lib/pkgconfig/qarv-2.pc

sudo ldconfig
