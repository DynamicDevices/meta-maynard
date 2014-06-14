This README file contains information on the contents of the
maynard layer.

Please see the corresponding sections below for details.


Dependencies
============

This layer depends on:

  URI: git://git.openembedded.org/bitbake
  branch: master

  URI: git://git.openembedded.org/openembedded-core
  layers: meta, meta-gnome
  branch: master

NOTE: At this time an additional patch is required for gnome-menu3 support.

See http://tinyurl.com/okprw99

Patches
=======

Please fork at https://github.com/DynamicDevices/meta-openembedded

Commit changes to fork, creat pull request and contact maintainer.

Maintainer: Alex Lennon <ajlennon@dynamicdevices.co.uk>

Table of Contents
=================

  I. Adding the maynard layer to your build
 II. Running the maynard desktop

I. Adding the maynard layer to your build
=========================================

In order to use this layer, you need to make the build system aware of
it.

Assuming the maynard layer exists at the top-level of your
yocto build tree, you can add it to the build system by adding the
location of the maynard layer to bblayers.conf, along with any
other layers needed. e.g.:

  BBLAYERS ?= " \
    /path/to/yocto/meta \
    /path/to/yocto/meta-yocto \
    /path/to/yocto/meta-yocto-bsp \
    /path/to/yocto/meta-gnome \
    /path/to/yocto/meta-maynard \
    "

You will also need to add the maynard distro feature to your conf/local.conf

  DISTRO_FEATURES_append = " maynard"

II. Running the maynard desktop
===============================
 
Add needed layers to conf/bblayers.conf 

  bitbake core-image-maynard
  
  [copy to boot media/boot target system/login]

  mkdir /tmp/root-maynard
  chmod 0700 /tmp/root/maynard
  export XDG_
