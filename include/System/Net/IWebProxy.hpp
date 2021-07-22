// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IWebProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class IWebProxy : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IWebProxy
    IWebProxy() noexcept {}
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0xFFFFFFFF
    System::Net::ICredentials* get_Credentials();
    // public System.Uri GetProxy(System.Uri destination)
    // Offset: 0xFFFFFFFF
    System::Uri* GetProxy(System::Uri* destination);
    // public System.Boolean IsBypassed(System.Uri host)
    // Offset: 0xFFFFFFFF
    bool IsBypassed(System::Uri* host);
  }; // System.Net.IWebProxy
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::IWebProxy*, "System.Net", "IWebProxy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IWebProxy::get_Credentials
// Il2CppName: get_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICredentials* (System::Net::IWebProxy::*)()>(&System::Net::IWebProxy::get_Credentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebProxy*), "get_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IWebProxy::GetProxy
// Il2CppName: GetProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (System::Net::IWebProxy::*)(System::Uri*)>(&System::Net::IWebProxy::GetProxy)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebProxy*), "GetProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination});
  }
};
// Writing MetadataGetter for method: System::Net::IWebProxy::IsBypassed
// Il2CppName: IsBypassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IWebProxy::*)(System::Uri*)>(&System::Net::IWebProxy::IsBypassed)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebProxy*), "IsBypassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
