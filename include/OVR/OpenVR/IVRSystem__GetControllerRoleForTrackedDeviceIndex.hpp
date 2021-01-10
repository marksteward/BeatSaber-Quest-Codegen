// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: ETrackedControllerRole
  struct ETrackedControllerRole;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D840B0
  class IVRSystem::_GetControllerRoleForTrackedDeviceIndex : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetControllerRoleForTrackedDeviceIndex
    _GetControllerRoleForTrackedDeviceIndex() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x191117C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetControllerRoleForTrackedDeviceIndex* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetControllerRoleForTrackedDeviceIndex*, creationType>(object, method)));
    }
    // public OVR.OpenVR.ETrackedControllerRole Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x1911190
    OVR::OpenVR::ETrackedControllerRole Invoke(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1911404
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.ETrackedControllerRole EndInvoke(System.IAsyncResult result)
    // Offset: 0x1911490
    OVR::OpenVR::ETrackedControllerRole EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*, "OVR.OpenVR", "IVRSystem/_GetControllerRoleForTrackedDeviceIndex");
#pragma pack(pop)
