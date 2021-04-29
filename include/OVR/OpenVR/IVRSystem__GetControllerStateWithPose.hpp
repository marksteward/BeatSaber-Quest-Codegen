// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetControllerStateWithPose
  // [UnmanagedFunctionPointerAttribute] Offset: CF2D2C
  class IVRSystem::_GetControllerStateWithPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetControllerStateWithPose
    _GetControllerStateWithPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F1DF58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetControllerStateWithPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetControllerStateWithPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetControllerStateWithPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x1F1DF68
    bool Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F1E264
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VRControllerState_t pControllerState, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x1F1E36C
    bool EndInvoke(OVR::OpenVR::VRControllerState_t& pControllerState, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetControllerStateWithPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*, "OVR.OpenVR", "IVRSystem/_GetControllerStateWithPose");
