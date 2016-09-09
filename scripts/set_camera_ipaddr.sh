#! /bin/bash
set -eu

################################################################################
# NEEDS ATTENTION. Using nettools to set the ip address will cause conflicts
# with networkmanager and cause the connection to the ethernet camera to drop.
# Instead, define another connection via networkmanager. 
################################################################################

sudo ifconfig

echo "--> Which device corresponds to your camera?"
read answer

if [[ "$answer" == eth[0-9] ]]; then 
  sudo ifconfig $answer mtu 9000
else 
  echo "ERROR: $answer"
fi
