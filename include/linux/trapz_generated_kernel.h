/**
 * TRAPZ COMPONENT DEFINITIONS
 *
 * THIS FILE IS AUTOMATICALLY GENERATED. DO NOT MODIFY.
 * This file was generated by the following command line:
 *
 * device/amazon/acos/trapz/scripts/trapztool.py header --rootdir /home/yourch/projects/bueller --category KERN kernel/include/linux/trapz_generated_kernel.h.new
 *
 */

#ifndef _TRAPZ_GENERATED_H
#define _TRAPZ_GENERATED_H 1

#define TRAPZ__ID                                          0
#define TRAPZ__NAME                                        "Trapz"
#define TRAPZ__CAT                                         4
#define TRAPZ_KERN__ID                                     1
#define TRAPZ_KERN__NAME                                   "Kernel"
#define TRAPZ_KERN__CAT                                    0
#define   TRAPZ_KERN_SCHED__ID                               2
#define   TRAPZ_KERN_SCHED__NAME                             "Scheduler"
#define   TRAPZ_KERN_SCHED__CAT                              0
#define   TRAPZ_KERN_SCHED___CtxSw                           0
#define   TRAPZ_KERN_SCHED___TaskComm                        1
#define     TRAPZ_KERN_SCHED_IDLE__ID                          3
#define     TRAPZ_KERN_SCHED_IDLE__NAME                        "Idle"
#define     TRAPZ_KERN_SCHED_IDLE__CAT                         0
#define   TRAPZ_KERN_FS__ID                                  4
#define   TRAPZ_KERN_FS__NAME                                "Filesystem"
#define   TRAPZ_KERN_FS__CAT                                 0
#define     TRAPZ_KERN_FS_FIO__ID                              5
#define     TRAPZ_KERN_FS_FIO__NAME                            "FileIO"
#define     TRAPZ_KERN_FS_FIO__CAT                             0
#define   TRAPZ_KERN_INP__ID                                 6
#define   TRAPZ_KERN_INP__NAME                               "KernelInput"
#define   TRAPZ_KERN_INP__CAT                                0
#define     TRAPZ_KERN_INP_TOUCH__ID                           7
#define     TRAPZ_KERN_INP_TOUCH__NAME                         "Touch"
#define     TRAPZ_KERN_INP_TOUCH__CAT                          0
#define   TRAPZ_KERN_DISP__ID                                8
#define   TRAPZ_KERN_DISP__NAME                              "Display"
#define   TRAPZ_KERN_DISP__CAT                               0
#define   TRAPZ_KERN_DISP___Vsyncirq                         0
#define     TRAPZ_KERN_DISP_DSS__ID                            9
#define     TRAPZ_KERN_DISP_DSS__NAME                          "DssDriver"
#define     TRAPZ_KERN_DISP_DSS__CAT                           0
#define     TRAPZ_KERN_DISP_PVR__ID                            10
#define     TRAPZ_KERN_DISP_PVR__NAME                          "PvrDriver"
#define     TRAPZ_KERN_DISP_PVR__CAT                           0
#define       TRAPZ_KERN_DISP_PVR_TUNE__ID                       11
#define       TRAPZ_KERN_DISP_PVR_TUNE__NAME                     "PvrTune"
#define       TRAPZ_KERN_DISP_PVR_TUNE__CAT                      0
#define   TRAPZ_KERN_ABE__ID                                 12
#define   TRAPZ_KERN_ABE__NAME                               "AudioABE"
#define   TRAPZ_KERN_ABE__CAT                                0
#define   TRAPZ_KERN_PCM__ID                                 13
#define   TRAPZ_KERN_PCM__NAME                               "Pcm"
#define   TRAPZ_KERN_PCM__CAT                                0
#define   TRAPZ_KERN_DVFS__ID                                14
#define   TRAPZ_KERN_DVFS__NAME                              "DVFS"
#define   TRAPZ_KERN_DVFS__CAT                               0
#define   TRAPZ_KERN_CPU__ID                                 15
#define   TRAPZ_KERN_CPU__NAME                               "CPU"
#define   TRAPZ_KERN_CPU__CAT                                0
#define   TRAPZ_KERN_CPU___CPUFreq                           0
#define   TRAPZ_KERN_CPUFREQ__ID                             16
#define   TRAPZ_KERN_CPUFREQ__NAME                           "CpuFreq"
#define   TRAPZ_KERN_CPUFREQ__CAT                            0
#define   TRAPZ_KERN_CPUIDLE__ID                             17
#define   TRAPZ_KERN_CPUIDLE__NAME                           "CpuIdle"
#define   TRAPZ_KERN_CPUIDLE__CAT                            0
#define   TRAPZ_KERN_RPMSG__ID                               18
#define   TRAPZ_KERN_RPMSG__NAME                             "Rpmsg"
#define   TRAPZ_KERN_RPMSG__CAT                              0
#define   TRAPZ_KERN_MMC__ID                                 19
#define   TRAPZ_KERN_MMC__NAME                               "eMMC"
#define   TRAPZ_KERN_MMC__CAT                                0
#define   TRAPZ_KERN_MMC___mmc_start_command                 0
#define   TRAPZ_KERN_MMC___mmc_dma_map_sg                    1
#define   TRAPZ_KERN_MMC___mmc_pio_irq                       2
#define   TRAPZ_KERN_MMC___mmc_sdcc_irq                      3
#define   TRAPZ_KERN_NET__ID                                 20
#define   TRAPZ_KERN_NET__NAME                               "Net"
#define   TRAPZ_KERN_NET__CAT                                0
#define     TRAPZ_KERN_NET_WIFI__ID                            21
#define     TRAPZ_KERN_NET_WIFI__NAME                          "Wifi"
#define     TRAPZ_KERN_NET_WIFI__CAT                           0
#define     TRAPZ_KERN_NET_WIFI___tx_drop_packet               0
#define     TRAPZ_KERN_NET_WIFI___tx_error_packet              1
#define     TRAPZ_KERN_NET_WIFI___tx_packet                    2
#define     TRAPZ_KERN_NET_WIFI___rx_packet                    3
#define     TRAPZ_KERN_NET_WIFI___rx_error_packet              4
#define     TRAPZ_KERN_NET_SOCK__ID                            22
#define     TRAPZ_KERN_NET_SOCK__NAME                          "Socket"
#define     TRAPZ_KERN_NET_SOCK__CAT                           0
#define     TRAPZ_KERN_NET_SOCK___BTRemoteConnected            0
#define     TRAPZ_KERN_NET_SOCK___BTRemoteDisconnected         1
#define   TRAPZ_KERN_TEST__ID                                23
#define   TRAPZ_KERN_TEST__NAME                              "KTest"
#define   TRAPZ_KERN_TEST__CAT                               0
#define     TRAPZ_KERN_TEST_1__ID                              24
#define     TRAPZ_KERN_TEST_1__NAME                            "KTest1"
#define     TRAPZ_KERN_TEST_1__CAT                             0
#define     TRAPZ_KERN_TEST_2__ID                              25
#define     TRAPZ_KERN_TEST_2__NAME                            "KTest2"
#define     TRAPZ_KERN_TEST_2__CAT                             0
#define     TRAPZ_KERN_TEST_3__ID                              26
#define     TRAPZ_KERN_TEST_3__NAME                            "KTest3"
#define     TRAPZ_KERN_TEST_3__CAT                             0
#define     TRAPZ_KERN_TEST_4__ID                              27
#define     TRAPZ_KERN_TEST_4__NAME                            "KTest4"
#define     TRAPZ_KERN_TEST_4__CAT                             0

#endif /* _TRAPZ_GENERATED_H */