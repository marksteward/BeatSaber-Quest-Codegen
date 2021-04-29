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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty
  // [UnmanagedFunctionPointerAttribute] Offset: CF7B98
  class IVRSystem::_GetArrayTrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetArrayTrackedDeviceProperty
    _GetArrayTrackedDeviceProperty() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AD4460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetArrayTrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetArrayTrackedDeviceProperty*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, System.UInt32 propType, System.IntPtr pBuffer, System.UInt32 unBufferSize, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1AD4470
    uint Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, System.UInt32 propType, System.IntPtr pBuffer, System.UInt32 unBufferSize, ref Valve.VR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AD476C
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref Valve.VR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x1AD488C
    uint EndInvoke(Valve::VR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty*, "Valve.VR", "IVRSystem/_GetArrayTrackedDeviceProperty");
