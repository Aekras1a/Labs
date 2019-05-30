/*SDV_HARNESS_METAFILE=sdv_flat_simple_harness.h*/
#ifndef SDV_PRE_RUN
#include "..\..\sdv-pre-results.h"
#if (startioroutine_SDV_RESULT == SDV_FAILED || dispatchroutine_SDV_RESULT == SDV_FAILED)
  #define SDV_HARNESS SDV_FLAT_SIMPLE_HARNESS
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_CLEANUP
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_CREATE
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_DEVICE_CONTROL
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_FLUSH_BUFFERS
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_FLUSH_BUFFER
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_INTERNAL_DEVICE_CONTROL
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_LOCK_CONTROL
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_QUERY_INFORMATION
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_READ
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_SET_INFORMATION
  #define SDV_FLAT_HARNESS_MODIFIER_NO_IRP_MJ_WRITE
#else
  #pragma message("SDV_NA")  
#endif
#else
#pragma message("startioroutine")
#pragma message("dispatchroutine")
#endif