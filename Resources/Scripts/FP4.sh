#!/bin/bash

# Build an Android kernel that is actually UEFI disguised as the Kernel
cat ./BootShim/BootShim.bin "./Build/FP4Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/FP4_UEFI.fd" > "./Build/FP4Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/FP4_UEFI.fd-bootshim"||exit 1
gzip -c < "./Build/FP4Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/FP4_UEFI.fd-bootshim" > "./Build/FP4Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/FP4_UEFI.fd-bootshim.gz"||exit 1
cat "./Build/FP4Pkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/FP4_UEFI.fd-bootshim.gz" ./Resources/DTBs/FP4.dtb > ./Resources/bootpayload.bin||exit 1

# Create bootable Android boot.img
python3 ./Resources/Scripts/mkbootimg.py \
  --kernel ./Resources/bootpayload.bin \
  --ramdisk ./Resources/ramdisk \
  --kernel_offset 0x00000000 \
  --ramdisk_offset 0x00000000 \
  --tags_offset 0x00000000 \
  --os_version 15.0.0 \
  --os_patch_level "$(date '+%Y-%m')" \
  --header_version 1 \
  -o boot.img \
  ||_error "\nFailed to create Android Boot Image!\n"

# Compress Boot Image in a tar File for Odin/heimdall Flash
tar -c boot.img -f Mu-FP4.tar||exit 1
mv boot.img Mu-FP4.img||exit 1
