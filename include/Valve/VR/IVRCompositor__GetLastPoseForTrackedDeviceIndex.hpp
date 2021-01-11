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
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
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
  // Autogenerated type: Valve.VR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89628
  class IVRCompositor::_GetLastPoseForTrackedDeviceIndex : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetLastPoseForTrackedDeviceIndex
    _GetLastPoseForTrackedDeviceIndex() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E75B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetLastPoseForTrackedDeviceIndex* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetLastPoseForTrackedDeviceIndex*, creationType>(object, method)));
    }
    // public Valve.VR.EVRCompositorError Invoke(System.UInt32 unDeviceIndex, ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pOutputGamePose)
    // Offset: 0x18E75C4
    Valve::VR::EVRCompositorError Invoke(uint unDeviceIndex, Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pOutputGamePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E7870
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pOutputGamePose, System.IAsyncResult result)
    // Offset: 0x18E793C
    Valve::VR::EVRCompositorError EndInvoke(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*, "Valve.VR", "IVRCompositor/_GetLastPoseForTrackedDeviceIndex");
