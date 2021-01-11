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
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetBoolTrackedDeviceProperty
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D840EC
  class IVRSystem::_GetBoolTrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetBoolTrackedDeviceProperty
    _GetBoolTrackedDeviceProperty() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x191072C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetBoolTrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetBoolTrackedDeviceProperty*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, ref OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0x1910740
    bool Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, ref OVR.OpenVR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19109F0
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x1910AC4
    bool EndInvoke(OVR::OpenVR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetBoolTrackedDeviceProperty
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetBoolTrackedDeviceProperty");
