// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  // Autogenerated type: Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D88DCC
  class IVRSystem::_GetTrackedDeviceIndexForControllerRole : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetTrackedDeviceIndexForControllerRole
    _GetTrackedDeviceIndexForControllerRole() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x192ECCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetTrackedDeviceIndexForControllerRole* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetTrackedDeviceIndexForControllerRole*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(Valve.VR.ETrackedControllerRole unDeviceType)
    // Offset: 0x192ECE0
    uint Invoke(Valve::VR::ETrackedControllerRole unDeviceType);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackedControllerRole unDeviceType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x192EF54
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackedControllerRole unDeviceType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x192EFE0
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole*, "Valve.VR", "IVRSystem/_GetTrackedDeviceIndexForControllerRole");
#pragma pack(pop)
