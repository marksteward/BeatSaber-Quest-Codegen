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
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
  // [UnmanagedFunctionPointerAttribute] Offset: DD3370
  class IVRSystem::_GetTrackedDeviceIndexForControllerRole : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetTrackedDeviceIndexForControllerRole
    _GetTrackedDeviceIndexForControllerRole() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9B16C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetTrackedDeviceIndexForControllerRole* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetTrackedDeviceIndexForControllerRole*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(Valve.VR.ETrackedControllerRole unDeviceType)
    // Offset: 0x1C9B17C
    uint Invoke(Valve::VR::ETrackedControllerRole unDeviceType);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackedControllerRole unDeviceType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9B3F4
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackedControllerRole unDeviceType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C9B480
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole*, "Valve.VR", "IVRSystem/_GetTrackedDeviceIndexForControllerRole");
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTrackedDeviceIndexForControllerRole::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
