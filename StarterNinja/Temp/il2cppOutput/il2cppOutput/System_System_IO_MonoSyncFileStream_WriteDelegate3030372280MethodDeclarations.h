﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.MonoSyncFileStream/WriteDelegate
struct WriteDelegate_t3030372280;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.IO.MonoSyncFileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteDelegate__ctor_m1287902974 (WriteDelegate_t3030372280 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MonoSyncFileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  void WriteDelegate_Invoke_m3183195153 (WriteDelegate_t3030372280 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.MonoSyncFileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WriteDelegate_BeginInvoke_m135252136 (WriteDelegate_t3030372280 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MonoSyncFileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void WriteDelegate_EndInvoke_m36075534 (WriteDelegate_t3030372280 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
