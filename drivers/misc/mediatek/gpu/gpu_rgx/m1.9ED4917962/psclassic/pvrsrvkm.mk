pvrsrvkm-y += \
 server_breakpoint_bridge.o \
 client_cache_direct_bridge.o \
 server_cache_bridge.o \
 server_cmm_bridge.o \
 server_debugmisc_bridge.o \
 server_dmabuf_bridge.o \
 client_htbuffer_direct_bridge.o \
 server_htbuffer_bridge.o \
 client_mm_direct_bridge.o \
 server_mm_bridge.o \
 client_pvrtl_direct_bridge.o \
 server_pvrtl_bridge.o \
 server_regconfig_bridge.o \
 server_rgxcmp_bridge.o \
 server_rgxhwperf_bridge.o \
 server_rgxkicksync_bridge.o \
 server_rgxray_bridge.o \
 server_rgxsignals_bridge.o \
 server_rgxta3d_bridge.o \
 server_rgxtq2_bridge.o \
 server_rgxtq_bridge.o \
 server_srvcore_bridge.o \
 client_sync_direct_bridge.o \
 server_sync_bridge.o \
 server_timerquery_bridge.o \
 pvr_buffer_sync.o \
 pvr_drm.o \
 pvr_fence.o \
 pvr_platform_drv.o \
 cache_km.o \
 connection_server.o \
 devicemem_heapcfg.o \
 devicemem_server.o \
 handle.o \
 htbserver.o \
 info_page_km.o \
 lists.o \
 mmu_common.o \
 physheap.o \
 physmem.o \
 physmem_hostmem.o \
 physmem_lma.o \
 physmem_tdsecbuf.o \
 pmr.o \
 power.o \
 process_stats.o \
 pvr_notifier.o \
 pvrsrv.o \
 pvrsrv_pool.o \
 srvcore.o \
 sync_checkpoint.o \
 sync_server.o \
 tlintern.o \
 tlserver.o \
 tlstream.o \
 debugmisc_server.o \
 rgxfwload.o \
 rgxbreakpoint.o \
 rgxccb.o \
 rgxcompute.o \
 rgxdebug.o \
 rgxfwimageutils.o \
 rgxfwutils.o \
 rgxhwperf.o \
 rgxinit.o \
 rgxkicksync.o \
 rgxlayer_impl.o \
 rgxmem.o \
 rgxmipsmmuinit.o \
 rgxmmuinit.o \
 rgxpower.o \
 rgxray.o \
 rgxregconfig.o \
 rgxsignals.o \
 rgxsrvinit.o \
 rgxsrvinit_script.o \
 rgxstartstop.o \
 rgxta3d.o \
 rgxtdmtransfer.o \
 rgxtimecorr.o \
 rgxtimerquery.o \
 rgxtransfer.o \
 rgxutils.o \
 allocmem.o \
 event.o \
 handle_idr.o \
 km_apphint.o \
 module_common.o \
 osconnection_server.o \
 osfunc.o \
 osmmap_stub.o \
 pdump.o \
 physmem_dmabuf.o \
 physmem_osmem_linux.o \
 pmr_os.o \
 pvr_bridge_k.o \
 pvr_debug.o \
 pvr_debugfs.o \
 pvr_gputrace.o \
 devicemem.o \
 devicemem_utils.o \
 hash.o \
 htbuffer.o \
 mem_utils.o \
 ra.o \
 sync.o \
 tlclient.o \
 uniq_key_splay_tree.o \
 rgx_compat_bvnc.o \
 rgx_hwperf_table.o \
 system/dma_support.o \
 system/pci_support.o \
 system/vmm_pvz_client.o \
 system/vmm_pvz_server.o \
 system/vmm_type_stub.o \
 system/vz_physheap_common.o \
 system/vz_physheap_generic.o \
 system/vz_support.o \
 system/vz_vmm_pvz.o \
 system/vz_vmm_vm.o \
 apollo/sysconfig.o
pvrsrvkm-$(CONFIG_DRM_POWERVR_ROGUE_DEBUG) += \
 client_devicememhistory_direct_bridge.o \
 server_devicememhistory_bridge.o \
 client_ri_direct_bridge.o \
 server_ri_bridge.o \
 devicemem_history_server.o \
 ri_server.o
pvrsrvkm-$(CONFIG_ARM)   += osfunc_arm.o
pvrsrvkm-$(CONFIG_ARM64) += osfunc_arm64.o
pvrsrvkm-$(CONFIG_EVENT_TRACING) += trace_events.o
pvrsrvkm-$(CONFIG_MIPS)  += osfunc_mips.o
pvrsrvkm-$(CONFIG_X86)   += osfunc_x86.o
