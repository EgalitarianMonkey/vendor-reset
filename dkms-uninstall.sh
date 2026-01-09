#!/usr/bin/env bash

if [ "$EUID" -ne 0 ]; then
  echo "Please run as root"
  exit 1
fi

version=$(dkms status vendor-reset | grep -m 1 -oP '(?<=^vendor-reset/)[a-f0-9]+')
if [ -z "${version}" ]; then
  echo "vendor-reset is not added to DKMS"
  exit 0
fi

dir_name="/usr/src/vendor-reset-${version}"

dkms uninstall "vendor-reset/${version}"
dkms remove "vendor-reset/${version}"
if [ -d "${dir_name}" ]; then
  rm -r $dir_name
fi
