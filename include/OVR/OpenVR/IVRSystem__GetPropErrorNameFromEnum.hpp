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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum
  // [UnmanagedFunctionPointerAttribute] Offset: DCD350
  class IVRSystem::_GetPropErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetPropErrorNameFromEnum
    _GetPropErrorNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20B26B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetPropErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetPropErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(OVR.OpenVR.ETrackedPropertyError error)
    // Offset: 0x20B26C8
    System::IntPtr Invoke(OVR::OpenVR::ETrackedPropertyError error);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackedPropertyError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20B2940
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackedPropertyError error, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x20B29CC
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetPropErrorNameFromEnum");
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
