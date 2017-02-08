# config.make.  Generated from config.make.in by configure.
# Don't edit this file.  Put configuration parameters in configparms instead.

version = 2.17
release = stable

# Installation prefixes.
install_root = $(DESTDIR)
prefix = /home/openwrt/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2
exec_prefix = ${prefix}
datadir = ${datarootdir}
libdir = ${exec_prefix}/lib
slibdir = 
localedir = 
sysconfdir = ${prefix}/etc
libexecdir = ${exec_prefix}/libexec
rootsbindir = 
infodir = ${datarootdir}/info
includedir = ${prefix}/include
datarootdir = ${prefix}/share
localstatedir = ${prefix}/var

# Should we use and build ldconfig?
use-ldconfig = yes

# Maybe the `ldd' script must be rewritten.
ldd-rewrite-script = no

# System configuration.
config-machine = mipsel
base-machine = mips
config-vendor = openwrt
config-os = linux-uclibc
config-sysdirs =  ports/sysdeps/unix/sysv/linux/mips/mips32/nptl ports/sysdeps/unix/sysv/linux/mips/mips32 ports/sysdeps/unix/sysv/linux/mips/nptl ports/sysdeps/unix/sysv/linux/mips nptl/sysdeps/unix/sysv/linux nptl/sysdeps/pthread sysdeps/pthread ports/sysdeps/unix/sysv/linux sysdeps/unix/sysv/linux sysdeps/gnu sysdeps/unix/inet nptl/sysdeps/unix/sysv ports/sysdeps/unix/sysv sysdeps/unix/sysv ports/sysdeps/unix/mips/mips32 ports/sysdeps/unix/mips nptl/sysdeps/unix ports/sysdeps/unix sysdeps/unix sysdeps/posix ports/sysdeps/mips/mips32 ports/sysdeps/mips/ieee754 ports/sysdeps/mips sysdeps/ieee754/flt-32 sysdeps/ieee754/dbl-64 sysdeps/wordsize-32 ports/sysdeps/mips/fpu ports/sysdeps/mips/nptl sysdeps/ieee754 sysdeps/generic
cflags-cpu = 
asflags-cpu = 

config-extra-cflags = 
config-cflags-sse4 = 
config-cflags-avx = 
config-cflags-sse2avx = 
config-cflags-novzeroupper = 
config-cflags-nofma = -ffp-contract=off
config-asflags-i686 = 

defines = 
sysheaders = 
sysincludes = 
c++-sysincludes = 
all-warnings = 

have-z-combreloc = no
have-z-execstack = yes
have-Bgroup = yes
with-fp = yes
old-glibc-headers = no
unwind-find-fde = yes
have-forced-unwind = yes
have-fpie = yes
have-mfma4 = 
have-as-vis3 = 
gnu89-inline-CFLAGS = -fgnu89-inline
have-ssp = yes
have-selinux = no
have-libaudit = 
have-libcap = 
have-cc-with-libunwind = no
fno-unit-at-a-time = -fno-toplevel-reorder -fno-section-anchors
bind-now = no
have-hash-style = no
use-default-link = no
output-format = elf32-tradlittlemips

static-libgcc = -static-libgcc

versioning = yes
oldest-abi = default
exceptions = -fexceptions
multi-arch = no

mach-interface-list = 

have-bash2 = yes
have-ksh = yes

sizeof-long-double = 8

nss-crypt = no

# Configuration options.
build-shared = yes
build-pic-default= no
build-profile = no
build-bounded = no
build-static-nss = no
add-ons = libidn nptl ports
add-on-subdirs =  libidn
sysdeps-add-ons =  nptl ports
cross-compiling = yes
force-install = yes
link-obsolete-rpc = no
build-nscd = yes
use-nscd = yes

# Build tools.
CC = mipsel-openwrt-linux-uclibc-gcc
CXX = mipsel-openwrt-linux-uclibc-g++
BUILD_CC = gcc
CFLAGS = -g -O2
CPPFLAGS-config = 
CPPUNDEFS = 
ASFLAGS-config =  -Wa,--noexecstack
AR = /home/openwrt/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/../../../../mipsel-openwrt-linux-uclibc/bin/ar
NM = mipsel-openwrt-linux-uclibc-nm
MAKEINFO = :
AS = $(CC) -c
MIG = 
BISON = /usr/bin/bison
AUTOCONF = no
OBJDUMP = /home/openwrt/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/../../../../mipsel-openwrt-linux-uclibc/bin/objdump
OBJCOPY = /home/openwrt/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/../../../../mipsel-openwrt-linux-uclibc/bin/objcopy
READELF = mipsel-openwrt-linux-uclibc-readelf

# Installation tools.
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = /usr/sbin/install-info
LN_S = ln -s
MSGFMT = msgfmt

# Script execution tools.
BASH = /bin/bash
KSH = /bin/bash
AWK = gawk
PERL = /usr/bin/perl

# Additional libraries.
LIBGD = no

# Package versions and bug reporting configuration.
PKGVERSION = (GNU libc) 
PKGVERSION_TEXI = (GNU libc) 
REPORT_BUGS_TO = <http://www.gnu.org/software/libc/bugs.html>
REPORT_BUGS_TEXI = @uref{http://www.gnu.org/software/libc/bugs.html}

# More variables may be inserted below by configure.

override stddef.h = # The installed <stddef.h> seems to be libc-friendly.
