cmd_/home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/asm/.install := bash scripts/headers_install.sh /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/asm ./arch/mips/include/uapi/asm bitfield.h bitsperlong.h break.h byteorder.h cachectl.h errno.h fcntl.h inst.h ioctl.h ioctls.h kvm.h kvm_para.h mman.h msgbuf.h param.h poll.h posix_types.h ptrace.h resource.h sembuf.h setup.h sgidefs.h shmbuf.h sigcontext.h siginfo.h signal.h socket.h sockios.h stat.h statfs.h swab.h sysmips.h termbits.h termios.h types.h unistd.h; bash scripts/headers_install.sh /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/asm ./arch/mips/include/asm ; bash scripts/headers_install.sh /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/asm ./arch/mips/include/generated/uapi/asm ; for F in auxvec.h ipcbuf.h; do echo "\#include <asm-generic/$$F>" > /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/asm/$$F; done; touch /home/openwrt/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/asm/.install
