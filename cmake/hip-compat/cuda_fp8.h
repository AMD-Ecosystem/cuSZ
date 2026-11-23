// Copyright (c) 2026 Advanced Micro Devices, Inc.
//
// Shim so sources that #include <cuda_fp8.h> resolve against HIP's OCP fp8 types.
// hip_fp8.h pulls in the bf16 header, which declares its own __shfl_*_sync
// overloads; hide the c_cu2hip shuffle macros while it is parsed.
#ifndef PSZ_HIP_COMPAT_CUDA_FP8_H
#define PSZ_HIP_COMPAT_CUDA_FP8_H
#pragma push_macro("__shfl_sync")
#pragma push_macro("__shfl_up_sync")
#pragma push_macro("__shfl_down_sync")
#pragma push_macro("__shfl_xor_sync")
#undef __shfl_sync
#undef __shfl_up_sync
#undef __shfl_down_sync
#undef __shfl_xor_sync
#include <hip/hip_fp8.h>
#pragma pop_macro("__shfl_sync")
#pragma pop_macro("__shfl_up_sync")
#pragma pop_macro("__shfl_down_sync")
#pragma pop_macro("__shfl_xor_sync")
typedef __hip_fp8_e4m3 __nv_fp8_e4m3;
typedef __hip_fp8_e5m2 __nv_fp8_e5m2;
#endif
