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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D88DA4
  class IVRSystem::_GetTrackedDeviceActivityLevel : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetTrackedDeviceActivityLevel
    _GetTrackedDeviceActivityLevel() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x192E64C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetTrackedDeviceActivityLevel* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetTrackedDeviceActivityLevel*, creationType>(object, method)));
    }
    // public Valve.VR.EDeviceActivityLevel Invoke(System.UInt32 unDeviceId)
    // Offset: 0x192E660
    Valve::VR::EDeviceActivityLevel Invoke(uint unDeviceId);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x192E8D4
    System::IAsyncResult* BeginInvoke(uint unDeviceId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EDeviceActivityLevel EndInvoke(System.IAsyncResult result)
    // Offset: 0x192E960
    Valve::VR::EDeviceActivityLevel EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetTrackedDeviceActivityLevel*, "Valve.VR", "IVRSystem/_GetTrackedDeviceActivityLevel");
