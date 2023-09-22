SUMMARY = "nInvaders game"
DESCRIPTION = \
  "nInvaders is a Space Invaders clone based on ncurses for ASCII output"
HOMEPAGE = "https://github.com/TheZ3ro/ninvaders"
SECTION = "console/utils"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://LICENSE;md5=393a5ca445f6965873eca0259a17f833"
DEPENDS = "ncurses"
SRC_URI = "git://github.com/TheZ3ro/ninvaders.git;protocol=https;branch=master"
SRCREV = "c6ab4117ba977da44024ef59ff6de58d07cff35d"
S = "${WORKDIR}/git"

inherit autotools-brokensep

EXTRA_OEMAKE += "'CC=${CC}'"

CFLAGS += "-fcommon"

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/nInvaders ${D}${bindir}
}

