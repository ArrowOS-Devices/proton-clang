/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef LLVM_IR_INTRINSIC_VE_ENUMS_H
#define LLVM_IR_INTRINSIC_VE_ENUMS_H

namespace llvm {
namespace Intrinsic {
enum VEIntrinsics : unsigned {
// Enum values for intrinsics
    ve_vl_lsv_vvss = 6848,                            // llvm.ve.vl.lsv.vvss
    ve_vl_lvm_MMss,                            // llvm.ve.vl.lvm.MMss
    ve_vl_lvm_mmss,                            // llvm.ve.vl.lvm.mmss
    ve_vl_lvsd_svs,                            // llvm.ve.vl.lvsd.svs
    ve_vl_lvsl_svs,                            // llvm.ve.vl.lvsl.svs
    ve_vl_lvss_svs,                            // llvm.ve.vl.lvss.svs
    ve_vl_pfchv_ssl,                           // llvm.ve.vl.pfchv.ssl
    ve_vl_pfchvnc_ssl,                         // llvm.ve.vl.pfchvnc.ssl
    ve_vl_pvadds_vsvMvl,                       // llvm.ve.vl.pvadds.vsvMvl
    ve_vl_pvadds_vsvl,                         // llvm.ve.vl.pvadds.vsvl
    ve_vl_pvadds_vsvvl,                        // llvm.ve.vl.pvadds.vsvvl
    ve_vl_pvadds_vvvMvl,                       // llvm.ve.vl.pvadds.vvvMvl
    ve_vl_pvadds_vvvl,                         // llvm.ve.vl.pvadds.vvvl
    ve_vl_pvadds_vvvvl,                        // llvm.ve.vl.pvadds.vvvvl
    ve_vl_pvaddu_vsvMvl,                       // llvm.ve.vl.pvaddu.vsvMvl
    ve_vl_pvaddu_vsvl,                         // llvm.ve.vl.pvaddu.vsvl
    ve_vl_pvaddu_vsvvl,                        // llvm.ve.vl.pvaddu.vsvvl
    ve_vl_pvaddu_vvvMvl,                       // llvm.ve.vl.pvaddu.vvvMvl
    ve_vl_pvaddu_vvvl,                         // llvm.ve.vl.pvaddu.vvvl
    ve_vl_pvaddu_vvvvl,                        // llvm.ve.vl.pvaddu.vvvvl
    ve_vl_pvand_vsvMvl,                        // llvm.ve.vl.pvand.vsvMvl
    ve_vl_pvand_vsvl,                          // llvm.ve.vl.pvand.vsvl
    ve_vl_pvand_vsvvl,                         // llvm.ve.vl.pvand.vsvvl
    ve_vl_pvand_vvvMvl,                        // llvm.ve.vl.pvand.vvvMvl
    ve_vl_pvand_vvvl,                          // llvm.ve.vl.pvand.vvvl
    ve_vl_pvand_vvvvl,                         // llvm.ve.vl.pvand.vvvvl
    ve_vl_pvbrd_vsMvl,                         // llvm.ve.vl.pvbrd.vsMvl
    ve_vl_pvbrd_vsl,                           // llvm.ve.vl.pvbrd.vsl
    ve_vl_pvbrd_vsvl,                          // llvm.ve.vl.pvbrd.vsvl
    ve_vl_pvcmps_vsvMvl,                       // llvm.ve.vl.pvcmps.vsvMvl
    ve_vl_pvcmps_vsvl,                         // llvm.ve.vl.pvcmps.vsvl
    ve_vl_pvcmps_vsvvl,                        // llvm.ve.vl.pvcmps.vsvvl
    ve_vl_pvcmps_vvvMvl,                       // llvm.ve.vl.pvcmps.vvvMvl
    ve_vl_pvcmps_vvvl,                         // llvm.ve.vl.pvcmps.vvvl
    ve_vl_pvcmps_vvvvl,                        // llvm.ve.vl.pvcmps.vvvvl
    ve_vl_pvcmpu_vsvMvl,                       // llvm.ve.vl.pvcmpu.vsvMvl
    ve_vl_pvcmpu_vsvl,                         // llvm.ve.vl.pvcmpu.vsvl
    ve_vl_pvcmpu_vsvvl,                        // llvm.ve.vl.pvcmpu.vsvvl
    ve_vl_pvcmpu_vvvMvl,                       // llvm.ve.vl.pvcmpu.vvvMvl
    ve_vl_pvcmpu_vvvl,                         // llvm.ve.vl.pvcmpu.vvvl
    ve_vl_pvcmpu_vvvvl,                        // llvm.ve.vl.pvcmpu.vvvvl
    ve_vl_pveqv_vsvMvl,                        // llvm.ve.vl.pveqv.vsvMvl
    ve_vl_pveqv_vsvl,                          // llvm.ve.vl.pveqv.vsvl
    ve_vl_pveqv_vsvvl,                         // llvm.ve.vl.pveqv.vsvvl
    ve_vl_pveqv_vvvMvl,                        // llvm.ve.vl.pveqv.vvvMvl
    ve_vl_pveqv_vvvl,                          // llvm.ve.vl.pveqv.vvvl
    ve_vl_pveqv_vvvvl,                         // llvm.ve.vl.pveqv.vvvvl
    ve_vl_pvmaxs_vsvMvl,                       // llvm.ve.vl.pvmaxs.vsvMvl
    ve_vl_pvmaxs_vsvl,                         // llvm.ve.vl.pvmaxs.vsvl
    ve_vl_pvmaxs_vsvvl,                        // llvm.ve.vl.pvmaxs.vsvvl
    ve_vl_pvmaxs_vvvMvl,                       // llvm.ve.vl.pvmaxs.vvvMvl
    ve_vl_pvmaxs_vvvl,                         // llvm.ve.vl.pvmaxs.vvvl
    ve_vl_pvmaxs_vvvvl,                        // llvm.ve.vl.pvmaxs.vvvvl
    ve_vl_pvmins_vsvMvl,                       // llvm.ve.vl.pvmins.vsvMvl
    ve_vl_pvmins_vsvl,                         // llvm.ve.vl.pvmins.vsvl
    ve_vl_pvmins_vsvvl,                        // llvm.ve.vl.pvmins.vsvvl
    ve_vl_pvmins_vvvMvl,                       // llvm.ve.vl.pvmins.vvvMvl
    ve_vl_pvmins_vvvl,                         // llvm.ve.vl.pvmins.vvvl
    ve_vl_pvmins_vvvvl,                        // llvm.ve.vl.pvmins.vvvvl
    ve_vl_pvor_vsvMvl,                         // llvm.ve.vl.pvor.vsvMvl
    ve_vl_pvor_vsvl,                           // llvm.ve.vl.pvor.vsvl
    ve_vl_pvor_vsvvl,                          // llvm.ve.vl.pvor.vsvvl
    ve_vl_pvor_vvvMvl,                         // llvm.ve.vl.pvor.vvvMvl
    ve_vl_pvor_vvvl,                           // llvm.ve.vl.pvor.vvvl
    ve_vl_pvor_vvvvl,                          // llvm.ve.vl.pvor.vvvvl
    ve_vl_pvseq_vl,                            // llvm.ve.vl.pvseq.vl
    ve_vl_pvseq_vvl,                           // llvm.ve.vl.pvseq.vvl
    ve_vl_pvseqlo_vl,                          // llvm.ve.vl.pvseqlo.vl
    ve_vl_pvseqlo_vvl,                         // llvm.ve.vl.pvseqlo.vvl
    ve_vl_pvsequp_vl,                          // llvm.ve.vl.pvsequp.vl
    ve_vl_pvsequp_vvl,                         // llvm.ve.vl.pvsequp.vvl
    ve_vl_pvsla_vvsMvl,                        // llvm.ve.vl.pvsla.vvsMvl
    ve_vl_pvsla_vvsl,                          // llvm.ve.vl.pvsla.vvsl
    ve_vl_pvsla_vvsvl,                         // llvm.ve.vl.pvsla.vvsvl
    ve_vl_pvsla_vvvMvl,                        // llvm.ve.vl.pvsla.vvvMvl
    ve_vl_pvsla_vvvl,                          // llvm.ve.vl.pvsla.vvvl
    ve_vl_pvsla_vvvvl,                         // llvm.ve.vl.pvsla.vvvvl
    ve_vl_pvsll_vvsMvl,                        // llvm.ve.vl.pvsll.vvsMvl
    ve_vl_pvsll_vvsl,                          // llvm.ve.vl.pvsll.vvsl
    ve_vl_pvsll_vvsvl,                         // llvm.ve.vl.pvsll.vvsvl
    ve_vl_pvsll_vvvMvl,                        // llvm.ve.vl.pvsll.vvvMvl
    ve_vl_pvsll_vvvl,                          // llvm.ve.vl.pvsll.vvvl
    ve_vl_pvsll_vvvvl,                         // llvm.ve.vl.pvsll.vvvvl
    ve_vl_pvsra_vvsMvl,                        // llvm.ve.vl.pvsra.vvsMvl
    ve_vl_pvsra_vvsl,                          // llvm.ve.vl.pvsra.vvsl
    ve_vl_pvsra_vvsvl,                         // llvm.ve.vl.pvsra.vvsvl
    ve_vl_pvsra_vvvMvl,                        // llvm.ve.vl.pvsra.vvvMvl
    ve_vl_pvsra_vvvl,                          // llvm.ve.vl.pvsra.vvvl
    ve_vl_pvsra_vvvvl,                         // llvm.ve.vl.pvsra.vvvvl
    ve_vl_pvsrl_vvsMvl,                        // llvm.ve.vl.pvsrl.vvsMvl
    ve_vl_pvsrl_vvsl,                          // llvm.ve.vl.pvsrl.vvsl
    ve_vl_pvsrl_vvsvl,                         // llvm.ve.vl.pvsrl.vvsvl
    ve_vl_pvsrl_vvvMvl,                        // llvm.ve.vl.pvsrl.vvvMvl
    ve_vl_pvsrl_vvvl,                          // llvm.ve.vl.pvsrl.vvvl
    ve_vl_pvsrl_vvvvl,                         // llvm.ve.vl.pvsrl.vvvvl
    ve_vl_pvsubs_vsvMvl,                       // llvm.ve.vl.pvsubs.vsvMvl
    ve_vl_pvsubs_vsvl,                         // llvm.ve.vl.pvsubs.vsvl
    ve_vl_pvsubs_vsvvl,                        // llvm.ve.vl.pvsubs.vsvvl
    ve_vl_pvsubs_vvvMvl,                       // llvm.ve.vl.pvsubs.vvvMvl
    ve_vl_pvsubs_vvvl,                         // llvm.ve.vl.pvsubs.vvvl
    ve_vl_pvsubs_vvvvl,                        // llvm.ve.vl.pvsubs.vvvvl
    ve_vl_pvsubu_vsvMvl,                       // llvm.ve.vl.pvsubu.vsvMvl
    ve_vl_pvsubu_vsvl,                         // llvm.ve.vl.pvsubu.vsvl
    ve_vl_pvsubu_vsvvl,                        // llvm.ve.vl.pvsubu.vsvvl
    ve_vl_pvsubu_vvvMvl,                       // llvm.ve.vl.pvsubu.vvvMvl
    ve_vl_pvsubu_vvvl,                         // llvm.ve.vl.pvsubu.vvvl
    ve_vl_pvsubu_vvvvl,                        // llvm.ve.vl.pvsubu.vvvvl
    ve_vl_pvxor_vsvMvl,                        // llvm.ve.vl.pvxor.vsvMvl
    ve_vl_pvxor_vsvl,                          // llvm.ve.vl.pvxor.vsvl
    ve_vl_pvxor_vsvvl,                         // llvm.ve.vl.pvxor.vsvvl
    ve_vl_pvxor_vvvMvl,                        // llvm.ve.vl.pvxor.vvvMvl
    ve_vl_pvxor_vvvl,                          // llvm.ve.vl.pvxor.vvvl
    ve_vl_pvxor_vvvvl,                         // llvm.ve.vl.pvxor.vvvvl
    ve_vl_svm_sMs,                             // llvm.ve.vl.svm.sMs
    ve_vl_svm_sms,                             // llvm.ve.vl.svm.sms
    ve_vl_vaddsl_vsvl,                         // llvm.ve.vl.vaddsl.vsvl
    ve_vl_vaddsl_vsvmvl,                       // llvm.ve.vl.vaddsl.vsvmvl
    ve_vl_vaddsl_vsvvl,                        // llvm.ve.vl.vaddsl.vsvvl
    ve_vl_vaddsl_vvvl,                         // llvm.ve.vl.vaddsl.vvvl
    ve_vl_vaddsl_vvvmvl,                       // llvm.ve.vl.vaddsl.vvvmvl
    ve_vl_vaddsl_vvvvl,                        // llvm.ve.vl.vaddsl.vvvvl
    ve_vl_vaddswsx_vsvl,                       // llvm.ve.vl.vaddswsx.vsvl
    ve_vl_vaddswsx_vsvmvl,                     // llvm.ve.vl.vaddswsx.vsvmvl
    ve_vl_vaddswsx_vsvvl,                      // llvm.ve.vl.vaddswsx.vsvvl
    ve_vl_vaddswsx_vvvl,                       // llvm.ve.vl.vaddswsx.vvvl
    ve_vl_vaddswsx_vvvmvl,                     // llvm.ve.vl.vaddswsx.vvvmvl
    ve_vl_vaddswsx_vvvvl,                      // llvm.ve.vl.vaddswsx.vvvvl
    ve_vl_vaddswzx_vsvl,                       // llvm.ve.vl.vaddswzx.vsvl
    ve_vl_vaddswzx_vsvmvl,                     // llvm.ve.vl.vaddswzx.vsvmvl
    ve_vl_vaddswzx_vsvvl,                      // llvm.ve.vl.vaddswzx.vsvvl
    ve_vl_vaddswzx_vvvl,                       // llvm.ve.vl.vaddswzx.vvvl
    ve_vl_vaddswzx_vvvmvl,                     // llvm.ve.vl.vaddswzx.vvvmvl
    ve_vl_vaddswzx_vvvvl,                      // llvm.ve.vl.vaddswzx.vvvvl
    ve_vl_vaddul_vsvl,                         // llvm.ve.vl.vaddul.vsvl
    ve_vl_vaddul_vsvmvl,                       // llvm.ve.vl.vaddul.vsvmvl
    ve_vl_vaddul_vsvvl,                        // llvm.ve.vl.vaddul.vsvvl
    ve_vl_vaddul_vvvl,                         // llvm.ve.vl.vaddul.vvvl
    ve_vl_vaddul_vvvmvl,                       // llvm.ve.vl.vaddul.vvvmvl
    ve_vl_vaddul_vvvvl,                        // llvm.ve.vl.vaddul.vvvvl
    ve_vl_vadduw_vsvl,                         // llvm.ve.vl.vadduw.vsvl
    ve_vl_vadduw_vsvmvl,                       // llvm.ve.vl.vadduw.vsvmvl
    ve_vl_vadduw_vsvvl,                        // llvm.ve.vl.vadduw.vsvvl
    ve_vl_vadduw_vvvl,                         // llvm.ve.vl.vadduw.vvvl
    ve_vl_vadduw_vvvmvl,                       // llvm.ve.vl.vadduw.vvvmvl
    ve_vl_vadduw_vvvvl,                        // llvm.ve.vl.vadduw.vvvvl
    ve_vl_vand_vsvl,                           // llvm.ve.vl.vand.vsvl
    ve_vl_vand_vsvmvl,                         // llvm.ve.vl.vand.vsvmvl
    ve_vl_vand_vsvvl,                          // llvm.ve.vl.vand.vsvvl
    ve_vl_vand_vvvl,                           // llvm.ve.vl.vand.vvvl
    ve_vl_vand_vvvmvl,                         // llvm.ve.vl.vand.vvvmvl
    ve_vl_vand_vvvvl,                          // llvm.ve.vl.vand.vvvvl
    ve_vl_vbrdd_vsl,                           // llvm.ve.vl.vbrdd.vsl
    ve_vl_vbrdd_vsmvl,                         // llvm.ve.vl.vbrdd.vsmvl
    ve_vl_vbrdd_vsvl,                          // llvm.ve.vl.vbrdd.vsvl
    ve_vl_vbrdl_vsl,                           // llvm.ve.vl.vbrdl.vsl
    ve_vl_vbrdl_vsmvl,                         // llvm.ve.vl.vbrdl.vsmvl
    ve_vl_vbrdl_vsvl,                          // llvm.ve.vl.vbrdl.vsvl
    ve_vl_vbrds_vsl,                           // llvm.ve.vl.vbrds.vsl
    ve_vl_vbrds_vsmvl,                         // llvm.ve.vl.vbrds.vsmvl
    ve_vl_vbrds_vsvl,                          // llvm.ve.vl.vbrds.vsvl
    ve_vl_vbrdw_vsl,                           // llvm.ve.vl.vbrdw.vsl
    ve_vl_vbrdw_vsmvl,                         // llvm.ve.vl.vbrdw.vsmvl
    ve_vl_vbrdw_vsvl,                          // llvm.ve.vl.vbrdw.vsvl
    ve_vl_vcmpsl_vsvl,                         // llvm.ve.vl.vcmpsl.vsvl
    ve_vl_vcmpsl_vsvmvl,                       // llvm.ve.vl.vcmpsl.vsvmvl
    ve_vl_vcmpsl_vsvvl,                        // llvm.ve.vl.vcmpsl.vsvvl
    ve_vl_vcmpsl_vvvl,                         // llvm.ve.vl.vcmpsl.vvvl
    ve_vl_vcmpsl_vvvmvl,                       // llvm.ve.vl.vcmpsl.vvvmvl
    ve_vl_vcmpsl_vvvvl,                        // llvm.ve.vl.vcmpsl.vvvvl
    ve_vl_vcmpswsx_vsvl,                       // llvm.ve.vl.vcmpswsx.vsvl
    ve_vl_vcmpswsx_vsvmvl,                     // llvm.ve.vl.vcmpswsx.vsvmvl
    ve_vl_vcmpswsx_vsvvl,                      // llvm.ve.vl.vcmpswsx.vsvvl
    ve_vl_vcmpswsx_vvvl,                       // llvm.ve.vl.vcmpswsx.vvvl
    ve_vl_vcmpswsx_vvvmvl,                     // llvm.ve.vl.vcmpswsx.vvvmvl
    ve_vl_vcmpswsx_vvvvl,                      // llvm.ve.vl.vcmpswsx.vvvvl
    ve_vl_vcmpswzx_vsvl,                       // llvm.ve.vl.vcmpswzx.vsvl
    ve_vl_vcmpswzx_vsvmvl,                     // llvm.ve.vl.vcmpswzx.vsvmvl
    ve_vl_vcmpswzx_vsvvl,                      // llvm.ve.vl.vcmpswzx.vsvvl
    ve_vl_vcmpswzx_vvvl,                       // llvm.ve.vl.vcmpswzx.vvvl
    ve_vl_vcmpswzx_vvvmvl,                     // llvm.ve.vl.vcmpswzx.vvvmvl
    ve_vl_vcmpswzx_vvvvl,                      // llvm.ve.vl.vcmpswzx.vvvvl
    ve_vl_vcmpul_vsvl,                         // llvm.ve.vl.vcmpul.vsvl
    ve_vl_vcmpul_vsvmvl,                       // llvm.ve.vl.vcmpul.vsvmvl
    ve_vl_vcmpul_vsvvl,                        // llvm.ve.vl.vcmpul.vsvvl
    ve_vl_vcmpul_vvvl,                         // llvm.ve.vl.vcmpul.vvvl
    ve_vl_vcmpul_vvvmvl,                       // llvm.ve.vl.vcmpul.vvvmvl
    ve_vl_vcmpul_vvvvl,                        // llvm.ve.vl.vcmpul.vvvvl
    ve_vl_vcmpuw_vsvl,                         // llvm.ve.vl.vcmpuw.vsvl
    ve_vl_vcmpuw_vsvmvl,                       // llvm.ve.vl.vcmpuw.vsvmvl
    ve_vl_vcmpuw_vsvvl,                        // llvm.ve.vl.vcmpuw.vsvvl
    ve_vl_vcmpuw_vvvl,                         // llvm.ve.vl.vcmpuw.vvvl
    ve_vl_vcmpuw_vvvmvl,                       // llvm.ve.vl.vcmpuw.vvvmvl
    ve_vl_vcmpuw_vvvvl,                        // llvm.ve.vl.vcmpuw.vvvvl
    ve_vl_vdivsl_vsvl,                         // llvm.ve.vl.vdivsl.vsvl
    ve_vl_vdivsl_vsvmvl,                       // llvm.ve.vl.vdivsl.vsvmvl
    ve_vl_vdivsl_vsvvl,                        // llvm.ve.vl.vdivsl.vsvvl
    ve_vl_vdivsl_vvsl,                         // llvm.ve.vl.vdivsl.vvsl
    ve_vl_vdivsl_vvsmvl,                       // llvm.ve.vl.vdivsl.vvsmvl
    ve_vl_vdivsl_vvsvl,                        // llvm.ve.vl.vdivsl.vvsvl
    ve_vl_vdivsl_vvvl,                         // llvm.ve.vl.vdivsl.vvvl
    ve_vl_vdivsl_vvvmvl,                       // llvm.ve.vl.vdivsl.vvvmvl
    ve_vl_vdivsl_vvvvl,                        // llvm.ve.vl.vdivsl.vvvvl
    ve_vl_vdivswsx_vsvl,                       // llvm.ve.vl.vdivswsx.vsvl
    ve_vl_vdivswsx_vsvmvl,                     // llvm.ve.vl.vdivswsx.vsvmvl
    ve_vl_vdivswsx_vsvvl,                      // llvm.ve.vl.vdivswsx.vsvvl
    ve_vl_vdivswsx_vvsl,                       // llvm.ve.vl.vdivswsx.vvsl
    ve_vl_vdivswsx_vvsmvl,                     // llvm.ve.vl.vdivswsx.vvsmvl
    ve_vl_vdivswsx_vvsvl,                      // llvm.ve.vl.vdivswsx.vvsvl
    ve_vl_vdivswsx_vvvl,                       // llvm.ve.vl.vdivswsx.vvvl
    ve_vl_vdivswsx_vvvmvl,                     // llvm.ve.vl.vdivswsx.vvvmvl
    ve_vl_vdivswsx_vvvvl,                      // llvm.ve.vl.vdivswsx.vvvvl
    ve_vl_vdivswzx_vsvl,                       // llvm.ve.vl.vdivswzx.vsvl
    ve_vl_vdivswzx_vsvmvl,                     // llvm.ve.vl.vdivswzx.vsvmvl
    ve_vl_vdivswzx_vsvvl,                      // llvm.ve.vl.vdivswzx.vsvvl
    ve_vl_vdivswzx_vvsl,                       // llvm.ve.vl.vdivswzx.vvsl
    ve_vl_vdivswzx_vvsmvl,                     // llvm.ve.vl.vdivswzx.vvsmvl
    ve_vl_vdivswzx_vvsvl,                      // llvm.ve.vl.vdivswzx.vvsvl
    ve_vl_vdivswzx_vvvl,                       // llvm.ve.vl.vdivswzx.vvvl
    ve_vl_vdivswzx_vvvmvl,                     // llvm.ve.vl.vdivswzx.vvvmvl
    ve_vl_vdivswzx_vvvvl,                      // llvm.ve.vl.vdivswzx.vvvvl
    ve_vl_vdivul_vsvl,                         // llvm.ve.vl.vdivul.vsvl
    ve_vl_vdivul_vsvmvl,                       // llvm.ve.vl.vdivul.vsvmvl
    ve_vl_vdivul_vsvvl,                        // llvm.ve.vl.vdivul.vsvvl
    ve_vl_vdivul_vvsl,                         // llvm.ve.vl.vdivul.vvsl
    ve_vl_vdivul_vvsmvl,                       // llvm.ve.vl.vdivul.vvsmvl
    ve_vl_vdivul_vvsvl,                        // llvm.ve.vl.vdivul.vvsvl
    ve_vl_vdivul_vvvl,                         // llvm.ve.vl.vdivul.vvvl
    ve_vl_vdivul_vvvmvl,                       // llvm.ve.vl.vdivul.vvvmvl
    ve_vl_vdivul_vvvvl,                        // llvm.ve.vl.vdivul.vvvvl
    ve_vl_vdivuw_vsvl,                         // llvm.ve.vl.vdivuw.vsvl
    ve_vl_vdivuw_vsvmvl,                       // llvm.ve.vl.vdivuw.vsvmvl
    ve_vl_vdivuw_vsvvl,                        // llvm.ve.vl.vdivuw.vsvvl
    ve_vl_vdivuw_vvsl,                         // llvm.ve.vl.vdivuw.vvsl
    ve_vl_vdivuw_vvsmvl,                       // llvm.ve.vl.vdivuw.vvsmvl
    ve_vl_vdivuw_vvsvl,                        // llvm.ve.vl.vdivuw.vvsvl
    ve_vl_vdivuw_vvvl,                         // llvm.ve.vl.vdivuw.vvvl
    ve_vl_vdivuw_vvvmvl,                       // llvm.ve.vl.vdivuw.vvvmvl
    ve_vl_vdivuw_vvvvl,                        // llvm.ve.vl.vdivuw.vvvvl
    ve_vl_veqv_vsvl,                           // llvm.ve.vl.veqv.vsvl
    ve_vl_veqv_vsvmvl,                         // llvm.ve.vl.veqv.vsvmvl
    ve_vl_veqv_vsvvl,                          // llvm.ve.vl.veqv.vsvvl
    ve_vl_veqv_vvvl,                           // llvm.ve.vl.veqv.vvvl
    ve_vl_veqv_vvvmvl,                         // llvm.ve.vl.veqv.vvvmvl
    ve_vl_veqv_vvvvl,                          // llvm.ve.vl.veqv.vvvvl
    ve_vl_vld_vssl,                            // llvm.ve.vl.vld.vssl
    ve_vl_vld_vssvl,                           // llvm.ve.vl.vld.vssvl
    ve_vl_vld2d_vssl,                          // llvm.ve.vl.vld2d.vssl
    ve_vl_vld2d_vssvl,                         // llvm.ve.vl.vld2d.vssvl
    ve_vl_vld2dnc_vssl,                        // llvm.ve.vl.vld2dnc.vssl
    ve_vl_vld2dnc_vssvl,                       // llvm.ve.vl.vld2dnc.vssvl
    ve_vl_vldl2dsx_vssl,                       // llvm.ve.vl.vldl2dsx.vssl
    ve_vl_vldl2dsx_vssvl,                      // llvm.ve.vl.vldl2dsx.vssvl
    ve_vl_vldl2dsxnc_vssl,                     // llvm.ve.vl.vldl2dsxnc.vssl
    ve_vl_vldl2dsxnc_vssvl,                    // llvm.ve.vl.vldl2dsxnc.vssvl
    ve_vl_vldl2dzx_vssl,                       // llvm.ve.vl.vldl2dzx.vssl
    ve_vl_vldl2dzx_vssvl,                      // llvm.ve.vl.vldl2dzx.vssvl
    ve_vl_vldl2dzxnc_vssl,                     // llvm.ve.vl.vldl2dzxnc.vssl
    ve_vl_vldl2dzxnc_vssvl,                    // llvm.ve.vl.vldl2dzxnc.vssvl
    ve_vl_vldlsx_vssl,                         // llvm.ve.vl.vldlsx.vssl
    ve_vl_vldlsx_vssvl,                        // llvm.ve.vl.vldlsx.vssvl
    ve_vl_vldlsxnc_vssl,                       // llvm.ve.vl.vldlsxnc.vssl
    ve_vl_vldlsxnc_vssvl,                      // llvm.ve.vl.vldlsxnc.vssvl
    ve_vl_vldlzx_vssl,                         // llvm.ve.vl.vldlzx.vssl
    ve_vl_vldlzx_vssvl,                        // llvm.ve.vl.vldlzx.vssvl
    ve_vl_vldlzxnc_vssl,                       // llvm.ve.vl.vldlzxnc.vssl
    ve_vl_vldlzxnc_vssvl,                      // llvm.ve.vl.vldlzxnc.vssvl
    ve_vl_vldnc_vssl,                          // llvm.ve.vl.vldnc.vssl
    ve_vl_vldnc_vssvl,                         // llvm.ve.vl.vldnc.vssvl
    ve_vl_vldu_vssl,                           // llvm.ve.vl.vldu.vssl
    ve_vl_vldu_vssvl,                          // llvm.ve.vl.vldu.vssvl
    ve_vl_vldu2d_vssl,                         // llvm.ve.vl.vldu2d.vssl
    ve_vl_vldu2d_vssvl,                        // llvm.ve.vl.vldu2d.vssvl
    ve_vl_vldu2dnc_vssl,                       // llvm.ve.vl.vldu2dnc.vssl
    ve_vl_vldu2dnc_vssvl,                      // llvm.ve.vl.vldu2dnc.vssvl
    ve_vl_vldunc_vssl,                         // llvm.ve.vl.vldunc.vssl
    ve_vl_vldunc_vssvl,                        // llvm.ve.vl.vldunc.vssvl
    ve_vl_vmaxsl_vsvl,                         // llvm.ve.vl.vmaxsl.vsvl
    ve_vl_vmaxsl_vsvmvl,                       // llvm.ve.vl.vmaxsl.vsvmvl
    ve_vl_vmaxsl_vsvvl,                        // llvm.ve.vl.vmaxsl.vsvvl
    ve_vl_vmaxsl_vvvl,                         // llvm.ve.vl.vmaxsl.vvvl
    ve_vl_vmaxsl_vvvmvl,                       // llvm.ve.vl.vmaxsl.vvvmvl
    ve_vl_vmaxsl_vvvvl,                        // llvm.ve.vl.vmaxsl.vvvvl
    ve_vl_vmaxswsx_vsvl,                       // llvm.ve.vl.vmaxswsx.vsvl
    ve_vl_vmaxswsx_vsvmvl,                     // llvm.ve.vl.vmaxswsx.vsvmvl
    ve_vl_vmaxswsx_vsvvl,                      // llvm.ve.vl.vmaxswsx.vsvvl
    ve_vl_vmaxswsx_vvvl,                       // llvm.ve.vl.vmaxswsx.vvvl
    ve_vl_vmaxswsx_vvvmvl,                     // llvm.ve.vl.vmaxswsx.vvvmvl
    ve_vl_vmaxswsx_vvvvl,                      // llvm.ve.vl.vmaxswsx.vvvvl
    ve_vl_vmaxswzx_vsvl,                       // llvm.ve.vl.vmaxswzx.vsvl
    ve_vl_vmaxswzx_vsvmvl,                     // llvm.ve.vl.vmaxswzx.vsvmvl
    ve_vl_vmaxswzx_vsvvl,                      // llvm.ve.vl.vmaxswzx.vsvvl
    ve_vl_vmaxswzx_vvvl,                       // llvm.ve.vl.vmaxswzx.vvvl
    ve_vl_vmaxswzx_vvvmvl,                     // llvm.ve.vl.vmaxswzx.vvvmvl
    ve_vl_vmaxswzx_vvvvl,                      // llvm.ve.vl.vmaxswzx.vvvvl
    ve_vl_vminsl_vsvl,                         // llvm.ve.vl.vminsl.vsvl
    ve_vl_vminsl_vsvmvl,                       // llvm.ve.vl.vminsl.vsvmvl
    ve_vl_vminsl_vsvvl,                        // llvm.ve.vl.vminsl.vsvvl
    ve_vl_vminsl_vvvl,                         // llvm.ve.vl.vminsl.vvvl
    ve_vl_vminsl_vvvmvl,                       // llvm.ve.vl.vminsl.vvvmvl
    ve_vl_vminsl_vvvvl,                        // llvm.ve.vl.vminsl.vvvvl
    ve_vl_vminswsx_vsvl,                       // llvm.ve.vl.vminswsx.vsvl
    ve_vl_vminswsx_vsvmvl,                     // llvm.ve.vl.vminswsx.vsvmvl
    ve_vl_vminswsx_vsvvl,                      // llvm.ve.vl.vminswsx.vsvvl
    ve_vl_vminswsx_vvvl,                       // llvm.ve.vl.vminswsx.vvvl
    ve_vl_vminswsx_vvvmvl,                     // llvm.ve.vl.vminswsx.vvvmvl
    ve_vl_vminswsx_vvvvl,                      // llvm.ve.vl.vminswsx.vvvvl
    ve_vl_vminswzx_vsvl,                       // llvm.ve.vl.vminswzx.vsvl
    ve_vl_vminswzx_vsvmvl,                     // llvm.ve.vl.vminswzx.vsvmvl
    ve_vl_vminswzx_vsvvl,                      // llvm.ve.vl.vminswzx.vsvvl
    ve_vl_vminswzx_vvvl,                       // llvm.ve.vl.vminswzx.vvvl
    ve_vl_vminswzx_vvvmvl,                     // llvm.ve.vl.vminswzx.vvvmvl
    ve_vl_vminswzx_vvvvl,                      // llvm.ve.vl.vminswzx.vvvvl
    ve_vl_vmulsl_vsvl,                         // llvm.ve.vl.vmulsl.vsvl
    ve_vl_vmulsl_vsvmvl,                       // llvm.ve.vl.vmulsl.vsvmvl
    ve_vl_vmulsl_vsvvl,                        // llvm.ve.vl.vmulsl.vsvvl
    ve_vl_vmulsl_vvvl,                         // llvm.ve.vl.vmulsl.vvvl
    ve_vl_vmulsl_vvvmvl,                       // llvm.ve.vl.vmulsl.vvvmvl
    ve_vl_vmulsl_vvvvl,                        // llvm.ve.vl.vmulsl.vvvvl
    ve_vl_vmulslw_vsvl,                        // llvm.ve.vl.vmulslw.vsvl
    ve_vl_vmulslw_vsvvl,                       // llvm.ve.vl.vmulslw.vsvvl
    ve_vl_vmulslw_vvvl,                        // llvm.ve.vl.vmulslw.vvvl
    ve_vl_vmulslw_vvvvl,                       // llvm.ve.vl.vmulslw.vvvvl
    ve_vl_vmulswsx_vsvl,                       // llvm.ve.vl.vmulswsx.vsvl
    ve_vl_vmulswsx_vsvmvl,                     // llvm.ve.vl.vmulswsx.vsvmvl
    ve_vl_vmulswsx_vsvvl,                      // llvm.ve.vl.vmulswsx.vsvvl
    ve_vl_vmulswsx_vvvl,                       // llvm.ve.vl.vmulswsx.vvvl
    ve_vl_vmulswsx_vvvmvl,                     // llvm.ve.vl.vmulswsx.vvvmvl
    ve_vl_vmulswsx_vvvvl,                      // llvm.ve.vl.vmulswsx.vvvvl
    ve_vl_vmulswzx_vsvl,                       // llvm.ve.vl.vmulswzx.vsvl
    ve_vl_vmulswzx_vsvmvl,                     // llvm.ve.vl.vmulswzx.vsvmvl
    ve_vl_vmulswzx_vsvvl,                      // llvm.ve.vl.vmulswzx.vsvvl
    ve_vl_vmulswzx_vvvl,                       // llvm.ve.vl.vmulswzx.vvvl
    ve_vl_vmulswzx_vvvmvl,                     // llvm.ve.vl.vmulswzx.vvvmvl
    ve_vl_vmulswzx_vvvvl,                      // llvm.ve.vl.vmulswzx.vvvvl
    ve_vl_vmulul_vsvl,                         // llvm.ve.vl.vmulul.vsvl
    ve_vl_vmulul_vsvmvl,                       // llvm.ve.vl.vmulul.vsvmvl
    ve_vl_vmulul_vsvvl,                        // llvm.ve.vl.vmulul.vsvvl
    ve_vl_vmulul_vvvl,                         // llvm.ve.vl.vmulul.vvvl
    ve_vl_vmulul_vvvmvl,                       // llvm.ve.vl.vmulul.vvvmvl
    ve_vl_vmulul_vvvvl,                        // llvm.ve.vl.vmulul.vvvvl
    ve_vl_vmuluw_vsvl,                         // llvm.ve.vl.vmuluw.vsvl
    ve_vl_vmuluw_vsvmvl,                       // llvm.ve.vl.vmuluw.vsvmvl
    ve_vl_vmuluw_vsvvl,                        // llvm.ve.vl.vmuluw.vsvvl
    ve_vl_vmuluw_vvvl,                         // llvm.ve.vl.vmuluw.vvvl
    ve_vl_vmuluw_vvvmvl,                       // llvm.ve.vl.vmuluw.vvvmvl
    ve_vl_vmuluw_vvvvl,                        // llvm.ve.vl.vmuluw.vvvvl
    ve_vl_vmv_vsvl,                            // llvm.ve.vl.vmv.vsvl
    ve_vl_vmv_vsvmvl,                          // llvm.ve.vl.vmv.vsvmvl
    ve_vl_vmv_vsvvl,                           // llvm.ve.vl.vmv.vsvvl
    ve_vl_vor_vsvl,                            // llvm.ve.vl.vor.vsvl
    ve_vl_vor_vsvmvl,                          // llvm.ve.vl.vor.vsvmvl
    ve_vl_vor_vsvvl,                           // llvm.ve.vl.vor.vsvvl
    ve_vl_vor_vvvl,                            // llvm.ve.vl.vor.vvvl
    ve_vl_vor_vvvmvl,                          // llvm.ve.vl.vor.vvvmvl
    ve_vl_vor_vvvvl,                           // llvm.ve.vl.vor.vvvvl
    ve_vl_vseq_vl,                             // llvm.ve.vl.vseq.vl
    ve_vl_vseq_vvl,                            // llvm.ve.vl.vseq.vvl
    ve_vl_vsfa_vvssl,                          // llvm.ve.vl.vsfa.vvssl
    ve_vl_vsfa_vvssmvl,                        // llvm.ve.vl.vsfa.vvssmvl
    ve_vl_vsfa_vvssvl,                         // llvm.ve.vl.vsfa.vvssvl
    ve_vl_vslal_vvsl,                          // llvm.ve.vl.vslal.vvsl
    ve_vl_vslal_vvsmvl,                        // llvm.ve.vl.vslal.vvsmvl
    ve_vl_vslal_vvsvl,                         // llvm.ve.vl.vslal.vvsvl
    ve_vl_vslal_vvvl,                          // llvm.ve.vl.vslal.vvvl
    ve_vl_vslal_vvvmvl,                        // llvm.ve.vl.vslal.vvvmvl
    ve_vl_vslal_vvvvl,                         // llvm.ve.vl.vslal.vvvvl
    ve_vl_vslawsx_vvsl,                        // llvm.ve.vl.vslawsx.vvsl
    ve_vl_vslawsx_vvsmvl,                      // llvm.ve.vl.vslawsx.vvsmvl
    ve_vl_vslawsx_vvsvl,                       // llvm.ve.vl.vslawsx.vvsvl
    ve_vl_vslawsx_vvvl,                        // llvm.ve.vl.vslawsx.vvvl
    ve_vl_vslawsx_vvvmvl,                      // llvm.ve.vl.vslawsx.vvvmvl
    ve_vl_vslawsx_vvvvl,                       // llvm.ve.vl.vslawsx.vvvvl
    ve_vl_vslawzx_vvsl,                        // llvm.ve.vl.vslawzx.vvsl
    ve_vl_vslawzx_vvsmvl,                      // llvm.ve.vl.vslawzx.vvsmvl
    ve_vl_vslawzx_vvsvl,                       // llvm.ve.vl.vslawzx.vvsvl
    ve_vl_vslawzx_vvvl,                        // llvm.ve.vl.vslawzx.vvvl
    ve_vl_vslawzx_vvvmvl,                      // llvm.ve.vl.vslawzx.vvvmvl
    ve_vl_vslawzx_vvvvl,                       // llvm.ve.vl.vslawzx.vvvvl
    ve_vl_vsll_vvsl,                           // llvm.ve.vl.vsll.vvsl
    ve_vl_vsll_vvsmvl,                         // llvm.ve.vl.vsll.vvsmvl
    ve_vl_vsll_vvsvl,                          // llvm.ve.vl.vsll.vvsvl
    ve_vl_vsll_vvvl,                           // llvm.ve.vl.vsll.vvvl
    ve_vl_vsll_vvvmvl,                         // llvm.ve.vl.vsll.vvvmvl
    ve_vl_vsll_vvvvl,                          // llvm.ve.vl.vsll.vvvvl
    ve_vl_vsral_vvsl,                          // llvm.ve.vl.vsral.vvsl
    ve_vl_vsral_vvsmvl,                        // llvm.ve.vl.vsral.vvsmvl
    ve_vl_vsral_vvsvl,                         // llvm.ve.vl.vsral.vvsvl
    ve_vl_vsral_vvvl,                          // llvm.ve.vl.vsral.vvvl
    ve_vl_vsral_vvvmvl,                        // llvm.ve.vl.vsral.vvvmvl
    ve_vl_vsral_vvvvl,                         // llvm.ve.vl.vsral.vvvvl
    ve_vl_vsrawsx_vvsl,                        // llvm.ve.vl.vsrawsx.vvsl
    ve_vl_vsrawsx_vvsmvl,                      // llvm.ve.vl.vsrawsx.vvsmvl
    ve_vl_vsrawsx_vvsvl,                       // llvm.ve.vl.vsrawsx.vvsvl
    ve_vl_vsrawsx_vvvl,                        // llvm.ve.vl.vsrawsx.vvvl
    ve_vl_vsrawsx_vvvmvl,                      // llvm.ve.vl.vsrawsx.vvvmvl
    ve_vl_vsrawsx_vvvvl,                       // llvm.ve.vl.vsrawsx.vvvvl
    ve_vl_vsrawzx_vvsl,                        // llvm.ve.vl.vsrawzx.vvsl
    ve_vl_vsrawzx_vvsmvl,                      // llvm.ve.vl.vsrawzx.vvsmvl
    ve_vl_vsrawzx_vvsvl,                       // llvm.ve.vl.vsrawzx.vvsvl
    ve_vl_vsrawzx_vvvl,                        // llvm.ve.vl.vsrawzx.vvvl
    ve_vl_vsrawzx_vvvmvl,                      // llvm.ve.vl.vsrawzx.vvvmvl
    ve_vl_vsrawzx_vvvvl,                       // llvm.ve.vl.vsrawzx.vvvvl
    ve_vl_vsrl_vvsl,                           // llvm.ve.vl.vsrl.vvsl
    ve_vl_vsrl_vvsmvl,                         // llvm.ve.vl.vsrl.vvsmvl
    ve_vl_vsrl_vvsvl,                          // llvm.ve.vl.vsrl.vvsvl
    ve_vl_vsrl_vvvl,                           // llvm.ve.vl.vsrl.vvvl
    ve_vl_vsrl_vvvmvl,                         // llvm.ve.vl.vsrl.vvvmvl
    ve_vl_vsrl_vvvvl,                          // llvm.ve.vl.vsrl.vvvvl
    ve_vl_vst_vssl,                            // llvm.ve.vl.vst.vssl
    ve_vl_vst_vssml,                           // llvm.ve.vl.vst.vssml
    ve_vl_vst2d_vssl,                          // llvm.ve.vl.vst2d.vssl
    ve_vl_vst2d_vssml,                         // llvm.ve.vl.vst2d.vssml
    ve_vl_vst2dnc_vssl,                        // llvm.ve.vl.vst2dnc.vssl
    ve_vl_vst2dnc_vssml,                       // llvm.ve.vl.vst2dnc.vssml
    ve_vl_vst2dncot_vssl,                      // llvm.ve.vl.vst2dncot.vssl
    ve_vl_vst2dncot_vssml,                     // llvm.ve.vl.vst2dncot.vssml
    ve_vl_vst2dot_vssl,                        // llvm.ve.vl.vst2dot.vssl
    ve_vl_vst2dot_vssml,                       // llvm.ve.vl.vst2dot.vssml
    ve_vl_vstl_vssl,                           // llvm.ve.vl.vstl.vssl
    ve_vl_vstl_vssml,                          // llvm.ve.vl.vstl.vssml
    ve_vl_vstl2d_vssl,                         // llvm.ve.vl.vstl2d.vssl
    ve_vl_vstl2d_vssml,                        // llvm.ve.vl.vstl2d.vssml
    ve_vl_vstl2dnc_vssl,                       // llvm.ve.vl.vstl2dnc.vssl
    ve_vl_vstl2dnc_vssml,                      // llvm.ve.vl.vstl2dnc.vssml
    ve_vl_vstl2dncot_vssl,                     // llvm.ve.vl.vstl2dncot.vssl
    ve_vl_vstl2dncot_vssml,                    // llvm.ve.vl.vstl2dncot.vssml
    ve_vl_vstl2dot_vssl,                       // llvm.ve.vl.vstl2dot.vssl
    ve_vl_vstl2dot_vssml,                      // llvm.ve.vl.vstl2dot.vssml
    ve_vl_vstlnc_vssl,                         // llvm.ve.vl.vstlnc.vssl
    ve_vl_vstlnc_vssml,                        // llvm.ve.vl.vstlnc.vssml
    ve_vl_vstlncot_vssl,                       // llvm.ve.vl.vstlncot.vssl
    ve_vl_vstlncot_vssml,                      // llvm.ve.vl.vstlncot.vssml
    ve_vl_vstlot_vssl,                         // llvm.ve.vl.vstlot.vssl
    ve_vl_vstlot_vssml,                        // llvm.ve.vl.vstlot.vssml
    ve_vl_vstnc_vssl,                          // llvm.ve.vl.vstnc.vssl
    ve_vl_vstnc_vssml,                         // llvm.ve.vl.vstnc.vssml
    ve_vl_vstncot_vssl,                        // llvm.ve.vl.vstncot.vssl
    ve_vl_vstncot_vssml,                       // llvm.ve.vl.vstncot.vssml
    ve_vl_vstot_vssl,                          // llvm.ve.vl.vstot.vssl
    ve_vl_vstot_vssml,                         // llvm.ve.vl.vstot.vssml
    ve_vl_vstu_vssl,                           // llvm.ve.vl.vstu.vssl
    ve_vl_vstu_vssml,                          // llvm.ve.vl.vstu.vssml
    ve_vl_vstu2d_vssl,                         // llvm.ve.vl.vstu2d.vssl
    ve_vl_vstu2d_vssml,                        // llvm.ve.vl.vstu2d.vssml
    ve_vl_vstu2dnc_vssl,                       // llvm.ve.vl.vstu2dnc.vssl
    ve_vl_vstu2dnc_vssml,                      // llvm.ve.vl.vstu2dnc.vssml
    ve_vl_vstu2dncot_vssl,                     // llvm.ve.vl.vstu2dncot.vssl
    ve_vl_vstu2dncot_vssml,                    // llvm.ve.vl.vstu2dncot.vssml
    ve_vl_vstu2dot_vssl,                       // llvm.ve.vl.vstu2dot.vssl
    ve_vl_vstu2dot_vssml,                      // llvm.ve.vl.vstu2dot.vssml
    ve_vl_vstunc_vssl,                         // llvm.ve.vl.vstunc.vssl
    ve_vl_vstunc_vssml,                        // llvm.ve.vl.vstunc.vssml
    ve_vl_vstuncot_vssl,                       // llvm.ve.vl.vstuncot.vssl
    ve_vl_vstuncot_vssml,                      // llvm.ve.vl.vstuncot.vssml
    ve_vl_vstuot_vssl,                         // llvm.ve.vl.vstuot.vssl
    ve_vl_vstuot_vssml,                        // llvm.ve.vl.vstuot.vssml
    ve_vl_vsubsl_vsvl,                         // llvm.ve.vl.vsubsl.vsvl
    ve_vl_vsubsl_vsvmvl,                       // llvm.ve.vl.vsubsl.vsvmvl
    ve_vl_vsubsl_vsvvl,                        // llvm.ve.vl.vsubsl.vsvvl
    ve_vl_vsubsl_vvvl,                         // llvm.ve.vl.vsubsl.vvvl
    ve_vl_vsubsl_vvvmvl,                       // llvm.ve.vl.vsubsl.vvvmvl
    ve_vl_vsubsl_vvvvl,                        // llvm.ve.vl.vsubsl.vvvvl
    ve_vl_vsubswsx_vsvl,                       // llvm.ve.vl.vsubswsx.vsvl
    ve_vl_vsubswsx_vsvmvl,                     // llvm.ve.vl.vsubswsx.vsvmvl
    ve_vl_vsubswsx_vsvvl,                      // llvm.ve.vl.vsubswsx.vsvvl
    ve_vl_vsubswsx_vvvl,                       // llvm.ve.vl.vsubswsx.vvvl
    ve_vl_vsubswsx_vvvmvl,                     // llvm.ve.vl.vsubswsx.vvvmvl
    ve_vl_vsubswsx_vvvvl,                      // llvm.ve.vl.vsubswsx.vvvvl
    ve_vl_vsubswzx_vsvl,                       // llvm.ve.vl.vsubswzx.vsvl
    ve_vl_vsubswzx_vsvmvl,                     // llvm.ve.vl.vsubswzx.vsvmvl
    ve_vl_vsubswzx_vsvvl,                      // llvm.ve.vl.vsubswzx.vsvvl
    ve_vl_vsubswzx_vvvl,                       // llvm.ve.vl.vsubswzx.vvvl
    ve_vl_vsubswzx_vvvmvl,                     // llvm.ve.vl.vsubswzx.vvvmvl
    ve_vl_vsubswzx_vvvvl,                      // llvm.ve.vl.vsubswzx.vvvvl
    ve_vl_vsubul_vsvl,                         // llvm.ve.vl.vsubul.vsvl
    ve_vl_vsubul_vsvmvl,                       // llvm.ve.vl.vsubul.vsvmvl
    ve_vl_vsubul_vsvvl,                        // llvm.ve.vl.vsubul.vsvvl
    ve_vl_vsubul_vvvl,                         // llvm.ve.vl.vsubul.vvvl
    ve_vl_vsubul_vvvmvl,                       // llvm.ve.vl.vsubul.vvvmvl
    ve_vl_vsubul_vvvvl,                        // llvm.ve.vl.vsubul.vvvvl
    ve_vl_vsubuw_vsvl,                         // llvm.ve.vl.vsubuw.vsvl
    ve_vl_vsubuw_vsvmvl,                       // llvm.ve.vl.vsubuw.vsvmvl
    ve_vl_vsubuw_vsvvl,                        // llvm.ve.vl.vsubuw.vsvvl
    ve_vl_vsubuw_vvvl,                         // llvm.ve.vl.vsubuw.vvvl
    ve_vl_vsubuw_vvvmvl,                       // llvm.ve.vl.vsubuw.vvvmvl
    ve_vl_vsubuw_vvvvl,                        // llvm.ve.vl.vsubuw.vvvvl
    ve_vl_vxor_vsvl,                           // llvm.ve.vl.vxor.vsvl
    ve_vl_vxor_vsvmvl,                         // llvm.ve.vl.vxor.vsvmvl
    ve_vl_vxor_vsvvl,                          // llvm.ve.vl.vxor.vsvvl
    ve_vl_vxor_vvvl,                           // llvm.ve.vl.vxor.vvvl
    ve_vl_vxor_vvvmvl,                         // llvm.ve.vl.vxor.vvvmvl
    ve_vl_vxor_vvvvl,                          // llvm.ve.vl.vxor.vvvvl
}; // enum
} // namespace Intrinsic
} // namespace llvm

#endif
