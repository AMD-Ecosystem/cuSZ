// Copyright (c) 2026 Advanced Micro Devices, Inc.
//
// Shim so sources that #include <cuda_fp8.h> resolve against HIP's OCP fp8 types.
#ifndef PSZ_HIP_COMPAT_CUDA_FP8_H
#define PSZ_HIP_COMPAT_CUDA_FP8_H
#include <hip/hip_fp8.h>
typedef __hip_fp8_e4m3 __nv_fp8_e4m3;
typedef __hip_fp8_e5m2 __nv_fp8_e5m2;
#endif
