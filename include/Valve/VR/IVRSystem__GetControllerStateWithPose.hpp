// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
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
  // Autogenerated type: Valve.VR.IVRSystem/_GetControllerStateWithPose
  // [UnmanagedFunctionPointerAttribute] Offset: CF7C38
  class IVRSystem::_GetControllerStateWithPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetControllerStateWithPose
    _GetControllerStateWithPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AD59EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetControllerStateWithPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetControllerStateWithPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetControllerStateWithPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x1AD59FC
    bool Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AD5CF8
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t pControllerState, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x1AD5E00
    bool EndInvoke(Valve::VR::VRControllerState_t& pControllerState, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetControllerStateWithPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetControllerStateWithPose*, "Valve.VR", "IVRSystem/_GetControllerStateWithPose");
