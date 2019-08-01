KERNELVERSION=4.4.22
MOD_DESTDIR=/lib/modules/4.4.22/extra
check_module_directory /lib/modules/4.4.22
install_file drm_nulldisp.ko ${MOD_DESTDIR}/drm_nulldisp.ko "kernel_module" 0644 0:0
install_file pvrsrvkm.ko ${MOD_DESTDIR}/pvrsrvkm.ko "kernel_module" 0644 0:0
