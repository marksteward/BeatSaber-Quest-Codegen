// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/_WaitGetPoses
  // [UnmanagedFunctionPointerAttribute] Offset: CF8318
  class IVRCompositor::_WaitGetPoses : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _WaitGetPoses
    _WaitGetPoses() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E61AC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_WaitGetPoses* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_WaitGetPoses::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_WaitGetPoses*, creationType>(object, method)));
    }
    // public Valve.VR.EVRCompositorError Invoke(in Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in Valve.VR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount)
    // Offset: 0x1E61AD4
    Valve::VR::EVRCompositorError Invoke(::Array<Valve::VR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<Valve::VR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount);
    // public System.IAsyncResult BeginInvoke(in Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in Valve.VR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E61D80
    System::IAsyncResult* BeginInvoke(::Array<Valve::VR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<Valve::VR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E61E34
    Valve::VR::EVRCompositorError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_WaitGetPoses
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_WaitGetPoses*, "Valve.VR", "IVRCompositor/_WaitGetPoses");
