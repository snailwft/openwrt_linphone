cmd_/home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/sunrpc/.install := bash scripts/headers_install.sh /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/sunrpc ./include/uapi/linux/sunrpc debug.h; bash scripts/headers_install.sh /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/sunrpc ./include/linux/sunrpc ; bash scripts/headers_install.sh /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/sunrpc ./include/generated/uapi/linux/sunrpc ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/sunrpc/$$F; done; touch /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/sunrpc/.install
