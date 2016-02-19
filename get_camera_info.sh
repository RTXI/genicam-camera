#! /bin/bash

# Generate camera xml file.
CAMERA_NAME=$(arv-tool-0.4)
arv-tool-0.4 -n ${CAMERA_NAME} genicam > "${CAMERA_NAME}.xml" && \
sed -i 's///g' "${CAMERA_NAME}.xml"
