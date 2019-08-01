export ARCH=arm
export CROSS_COMPILE=arm-linux-gnueabihf-
export KCFLAGS=-fno-pic
#make -j8 CC=arm-linux-gnueabihf-gcc-6 CXX=arm-linux-gnueabihf-g++-6
#make -j8 modules CC=arm-linux-gnueabihf-gcc-6 CXX=arm-linux-gnueabihf-g++-6 && make modules_install INSTALL_MOD_PATH=mods
