// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
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
  // Autogenerated type: OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchApplication
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBAB7C
  class IVRApplications::_LaunchApplication : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LaunchApplication
    _LaunchApplication() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15874A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_LaunchApplication* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_LaunchApplication::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_LaunchApplication*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchAppKey)
    // Offset: 0x1577074
    OVR::OpenVR::EVRApplicationError Invoke(::Il2CppString* pchAppKey);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15874B0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x15874D4
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchApplication
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_LaunchApplication*, "OVR.OpenVR", "IVRApplications/_LaunchApplication");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchApplication::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchApplication::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_LaunchApplication::*)(::Il2CppString*)>(&OVR::OpenVR::IVRApplications::_LaunchApplication::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchApplication*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchApplication::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRApplications::_LaunchApplication::*)(::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_LaunchApplication::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchApplication*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchApplication::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_LaunchApplication::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_LaunchApplication::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchApplication*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
