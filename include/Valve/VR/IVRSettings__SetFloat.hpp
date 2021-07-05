// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSettings/_SetFloat
  // [UnmanagedFunctionPointerAttribute] Offset: DD4720
  class IVRSettings::_SetFloat : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetFloat
    _SetFloat() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C92B6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_SetFloat* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSettings::_SetFloat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_SetFloat*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String pchSection, System.String pchSettingsKey, System.Single flValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x1C92B7C
    void Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, Valve::VR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, System.Single flValue, ref Valve.VR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C92FB8
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, Valve::VR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x1C93080
    void EndInvoke(Valve::VR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/_SetFloat
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSettings::_SetFloat*, "Valve.VR", "IVRSettings/_SetFloat");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_SetFloat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_SetFloat::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSettings::_SetFloat::*)(::Il2CppString*, ::Il2CppString*, float, Valve::VR::EVRSettingsError&)>(&Valve::VR::IVRSettings::_SetFloat::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* flValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_SetFloat*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, flValue, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_SetFloat::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSettings::_SetFloat::*)(::Il2CppString*, ::Il2CppString*, float, Valve::VR::EVRSettingsError&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSettings::_SetFloat::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* flValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_SetFloat*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, flValue, peError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_SetFloat::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSettings::_SetFloat::*)(Valve::VR::EVRSettingsError&, System::IAsyncResult*)>(&Valve::VR::IVRSettings::_SetFloat::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_SetFloat*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, result});
  }
};
