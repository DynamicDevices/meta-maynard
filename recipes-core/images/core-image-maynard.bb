#
# Maynard/Wayland based image 
#

require recipes-graphics/images/core-image-weston.bb

SUMMARY = "A very basic Maynard image"

REQUIRED_DISTRO_FEATURES = "maynard"

CORE_IMAGE_EXTRA_INSTALL += "maynard"

export IMAGE_BASENAME = "core-image-maynard"
