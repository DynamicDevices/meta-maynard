DESCRIPTION = "This is a desktop shell client for Weston based on GTK."
LICENSE = "MIT GPLv2"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b9ed56aa8997241d26cf7e4ff11745c9"

FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRCBRANCH ?= "master"
SRCFORK ?= "raspberrypi"
SRCREV ?= "f19b00ed0d4f8445e33ea77dea72199b5d455c3c"

SRC_URI = "git://github.com/${SRCFORK}/maynard.git;protocol=git;branch=${SRCBRANCH} \
	  "
S = "${WORKDIR}/git"

DEPENDS = "wayland weston gtk+ intltool alsa-lib gnome-desktop3 gnome-menus3"
RDEPENDS_${PN} = "wayland"

inherit autotools gettext

FILES_${PN} += "${libdir}/weston/* \
		/usr/share/glib-2.0/schemas/*.xml \
               "
FILES_${PN}-dbg += "${libdir}/weston/.debug/*"

# Need this for for weston-launch
DISTRO_FEATURES_append += " pam"

