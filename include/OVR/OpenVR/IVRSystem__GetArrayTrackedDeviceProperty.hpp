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
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetArrayTrackedDeviceProperty
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBA848
  class IVRSystem::_GetArrayTrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetArrayTrackedDeviceProperty
    _GetArrayTrackedDeviceProperty() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2099E5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetArrayTrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetArrayTrackedDeviceProperty*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, System.UInt32 propType, System.IntPtr pBuffer, System.UInt32 unBufferSize, ref OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0x2099E6C
    uint Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, System.UInt32 propType, System.IntPtr pBuffer, System.UInt32 unBufferSize, ref OVR.OpenVR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x209A168
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, OVR::OpenVR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x209A288
    uint EndInvoke(OVR::OpenVR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetArrayTrackedDeviceProperty
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetArrayTrackedDeviceProperty");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::*)(uint, OVR::OpenVR::ETrackedDeviceProperty, uint, System::IntPtr, uint, OVR::OpenVR::ETrackedPropertyError&)>(&OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedDeviceProperty")->byval_arg;
    static auto* propType = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedPropertyError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::*)(uint, OVR::OpenVR::ETrackedDeviceProperty, uint, System::IntPtr, uint, OVR::OpenVR::ETrackedPropertyError&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedDeviceProperty")->byval_arg;
    static auto* propType = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedPropertyError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::*)(OVR::OpenVR::ETrackedPropertyError&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedPropertyError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
