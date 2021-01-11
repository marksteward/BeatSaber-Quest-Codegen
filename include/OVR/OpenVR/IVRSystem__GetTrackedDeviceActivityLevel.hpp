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
  // Forward declaring type: EDeviceActivityLevel
  struct EDeviceActivityLevel;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetTrackedDeviceActivityLevel
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D84074
  class IVRSystem::_GetTrackedDeviceActivityLevel : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetTrackedDeviceActivityLevel
    _GetTrackedDeviceActivityLevel() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1915F48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetTrackedDeviceActivityLevel* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetTrackedDeviceActivityLevel*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EDeviceActivityLevel Invoke(System.UInt32 unDeviceId)
    // Offset: 0x1915F5C
    OVR::OpenVR::EDeviceActivityLevel Invoke(uint unDeviceId);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19161D0
    System::IAsyncResult* BeginInvoke(uint unDeviceId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EDeviceActivityLevel EndInvoke(System.IAsyncResult result)
    // Offset: 0x191625C
    OVR::OpenVR::EDeviceActivityLevel EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetTrackedDeviceActivityLevel
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceActivityLevel");
