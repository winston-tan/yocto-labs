LICENSE = "GPL-3.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=1ebbd3e34237af26da5dc08a4e440464"

SRC_URI = "${GNU_MIRROR}/hello/hello-${PV}.tar.gz \
           file://0001-Changed-message.patch \
           "
SRC_URI[sha256sum] = "8d99142afd92576f30b0cd7cb42a8dc6809998bc5d607d88761f512e26c7db20"

inherit gettext autotools-brokensep
