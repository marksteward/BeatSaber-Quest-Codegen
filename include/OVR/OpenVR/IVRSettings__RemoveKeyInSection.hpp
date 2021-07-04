// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSettings
#include "OVR/OpenVR/IVRSettings.hpp"
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
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
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
  // Autogenerated type: OVR.OpenVR.IVRSettings/_RemoveKeyInSection
  // [UnmanagedFunctionPointerAttribute] Offset: DCE6C4
  class IVRSettings::_RemoveKeyInSection : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _RemoveKeyInSection
    _RemoveKeyInSection() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20A9F8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_RemoveKeyInSection* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSettings::_RemoveKeyInSection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_RemoveKeyInSection*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x20A9F9C
    void Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20AA3AC
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x20AA454
    void EndInvoke(OVR::OpenVR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSettings/_RemoveKeyInSection
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSettings::_RemoveKeyInSection*, "OVR.OpenVR", "IVRSettings/_RemoveKeyInSection");
// Writing MetadataGetter for method: OVR::OpenVR::IVRSettings::_RemoveKeyInSection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSettings::_RemoveKeyInSection::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSettings::_RemoveKeyInSection::*)(::Il2CppString*, ::Il2CppString*, OVR::OpenVR::EVRSettingsError&)>(&OVR::OpenVR::IVRSettings::_RemoveKeyInSection::Invoke)> {
  const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSettings::_RemoveKeyInSection*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSettings::_RemoveKeyInSection::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSettings::_RemoveKeyInSection::*)(::Il2CppString*, ::Il2CppString*, OVR::OpenVR::EVRSettingsError&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSettings::_RemoveKeyInSection::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSettings::_RemoveKeyInSection*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSettings::_RemoveKeyInSection::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSettings::_RemoveKeyInSection::*)(OVR::OpenVR::EVRSettingsError&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSettings::_RemoveKeyInSection::EndInvoke)> {
  const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSettings::_RemoveKeyInSection*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, result});
  }
};
