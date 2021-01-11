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
  // Autogenerated type: Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D88E30
  class IVRSystem::_GetFloatTrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetFloatTrackedDeviceProperty
    _GetFloatTrackedDeviceProperty() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x192B3F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetFloatTrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetFloatTrackedDeviceProperty*, creationType>(object, method)));
    }
    // public System.Single Invoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x192B408
    float Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x192B6B4
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Single EndInvoke(ref Valve.VR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x192B788
    float EndInvoke(Valve::VR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty*, "Valve.VR", "IVRSystem/_GetFloatTrackedDeviceProperty");
