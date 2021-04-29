// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.TrackedDevicePose_t
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_WaitGetPoses
  // [UnmanagedFunctionPointerAttribute] Offset: CF340C
  class IVRCompositor::_WaitGetPoses : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _WaitGetPoses
    _WaitGetPoses() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D72654
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_WaitGetPoses* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_WaitGetPoses::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_WaitGetPoses*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRCompositorError Invoke(in OVR.OpenVR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in OVR.OpenVR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount)
    // Offset: 0x1D72664
    OVR::OpenVR::EVRCompositorError Invoke(::Array<OVR::OpenVR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<OVR::OpenVR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in OVR.OpenVR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D72910
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<OVR::OpenVR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D729C4
    OVR::OpenVR::EVRCompositorError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_WaitGetPoses
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_WaitGetPoses*, "OVR.OpenVR", "IVRCompositor/_WaitGetPoses");
