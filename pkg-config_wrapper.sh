#!/bin/sh
PKG_CONFIG_SYSROOT_DIR=/opt/sdk/poky-sdk/2.2.2/sysroots/cortexa7hf-neon-vfpv4-poky-linux-gnueabi
export PKG_CONFIG_SYSROOT_DIR
PKG_CONFIG_LIBDIR=/opt/sdk/poky-sdk/2.2.2/sysroots/cortexa7hf-neon-vfpv4-poky-linux-gnueabi/usr/lib/pkgconfig
export PKG_CONFIG_LIBDIR
exec pkg-config "$@"
