### GenICam Module

**Requirements:** See `install_aravis.sh` and `install_qarv.sh`
**Limitations:** non-real-time

![Genicam Camera GUI](genicam-camera.png)

Module for controlling cameras that the use the open GenICam standard.
Currently a work in progress. Will include: 

- [x] Video/image capture
- [x] Events to trigger capture from other modules (non-real time)
- [x] Camera controls (setting gain, exposure time, etc.)
- [ ] Support loadable plugins for image processing
- [ ] Support Real-Time Events handling

To install the module, you need to install Aravis and QArv. Aravis is a
GNOME-supported set of drivers for streaming images from GeniICam cameras.
QArv is a Qt wrapper for Aravis functions used to create the RTXI module. This
module comes packaged with some scripts to install the needed dependencies.
After cloning the repository, run: 

``` 
cd scripts/  
./install_aravis.sh  
./install_qarv.sh  
```

Once the packages are installed, build the module. From the base of the
repository, run: 
``` 
make 
sudo make install 
```

**For ethernet cameras:** For the module to detect the camera, you need to set
its IP address. Open the NetworkManager connection editor
(`nm-connection-editor`) and create a new ethernet connection. 

Hit "Add" to open the connection creation dialog, pick "Ethernet," and hit
"Create." Another dialog box will open up. Under the "Etheret" tab (the one it
opens first), set the device MAC address from the dropdown menu. You'll need to
know beforehand which device interface name (i.e., `eth0`, `eth1`, etc.)
corresponds to your camera. (Run `ifconfig` in another terminal to see
what interfaces exist.) Once the MAC address is set, **set the MTU to 9000**. 

Next, switch to the "IPv4 Settings" tab, and set the IPv4 settings to
Link-Local (look int the "Method" dropdown menu). 

You don't need to configure anything else in this tab. Hit "Save...", and
you're done. 

To open a camera within RTXI, load the module and pick it from the dropdown
menu. If you just installed the module, the first detected camera will be
"Aravis Fake." Switch to you own camera via the dropdown menu. 

#### Recording

You can use this module to take snapshots and record video. Snapshots can be
raw values or as pngs (lossless compression). Videos can be stored in raw
format or also stored as uncompressed avi containers or as x264 (lossless
compression) in Matroska containers. Avi files will be *big*, so if you don't
need to view raw values, consider the compressed versions. 

If you see artifacts in the recordings, those are bugs and should be reported. 


Based almost entirely on [QArv](https://github.com/AD-Vega/qarv). 
