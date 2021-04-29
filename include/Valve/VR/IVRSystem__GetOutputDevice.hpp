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
  // Forward declaring type: ETextureType
  struct ETextureType;
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
  // Autogenerated type: Valve.VR.IVRSystem/_GetOutputDevice
  // [UnmanagedFunctionPointerAttribute] Offset: CF7A1C
  class IVRSystem::_GetOutputDevice : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOutputDevice
    _GetOutputDevice() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AD7D84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetOutputDevice* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetOutputDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetOutputDevice*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.UInt64 pnDevice, Valve.VR.ETextureType textureType, System.IntPtr pInstance)
    // Offset: 0x1AD7D94
    void Invoke(uint64_t& pnDevice, Valve::VR::ETextureType textureType, System::IntPtr pInstance);
    // public System.IAsyncResult BeginInvoke(ref System.UInt64 pnDevice, Valve.VR.ETextureType textureType, System.IntPtr pInstance, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AD801C
    System::IAsyncResult* BeginInvoke(uint64_t& pnDevice, Valve::VR::ETextureType textureType, System::IntPtr pInstance, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt64 pnDevice, System.IAsyncResult result)
    // Offset: 0x1AD80EC
    void EndInvoke(uint64_t& pnDevice, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetOutputDevice
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetOutputDevice*, "Valve.VR", "IVRSystem/_GetOutputDevice");
