// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationPropertyString
  // [UnmanagedFunctionPointerAttribute] Offset: DD37F8
  class IVRApplications::_GetApplicationPropertyString : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetApplicationPropertyString
    _GetApplicationPropertyString() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D8294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationPropertyString* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_GetApplicationPropertyString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationPropertyString*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0x16CD444
    uint Invoke(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, Valve::VR::EVRApplicationError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, ref Valve.VR.EVRApplicationError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D82A4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, Valve::VR::EVRApplicationError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref Valve.VR.EVRApplicationError peError, System.IAsyncResult result)
    // Offset: 0x16D838C
    uint EndInvoke(Valve::VR::EVRApplicationError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationPropertyString
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationPropertyString*, "Valve.VR", "IVRApplications/_GetApplicationPropertyString");
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationPropertyString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationPropertyString::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRApplications::_GetApplicationPropertyString::*)(::Il2CppString*, Valve::VR::EVRApplicationProperty, System::Text::StringBuilder*, uint, Valve::VR::EVRApplicationError&)>(&Valve::VR::IVRApplications::_GetApplicationPropertyString::Invoke)> {
  const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eProperty = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationProperty")->byval_arg;
    static auto* pchPropertyValueBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unPropertyValueBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationPropertyString*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationPropertyString::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRApplications::_GetApplicationPropertyString::*)(::Il2CppString*, Valve::VR::EVRApplicationProperty, System::Text::StringBuilder*, uint, Valve::VR::EVRApplicationError&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRApplications::_GetApplicationPropertyString::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eProperty = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationProperty")->byval_arg;
    static auto* pchPropertyValueBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unPropertyValueBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationPropertyString*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationPropertyString::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRApplications::_GetApplicationPropertyString::*)(Valve::VR::EVRApplicationError&, System::IAsyncResult*)>(&Valve::VR::IVRApplications::_GetApplicationPropertyString::EndInvoke)> {
  const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationPropertyString*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, result});
  }
};
