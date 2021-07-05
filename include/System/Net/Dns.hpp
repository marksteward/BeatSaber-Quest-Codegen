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
  // Forward declaring type: IPHostEntry
  class IPHostEntry;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Dns
  class Dns : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Dns
    Dns() noexcept {}
    // static private System.Boolean GetHostByName_internal(System.String host, out System.String h_name, out System.String[] h_aliases, out System.String[] h_addr_list, System.Int32 hint)
    // Offset: 0x16B68DC
    static bool GetHostByName_internal(::Il2CppString* host, ::Il2CppString*& h_name, ::Array<::Il2CppString*>*& h_aliases, ::Array<::Il2CppString*>*& h_addr_list, int hint);
    // static private System.Boolean GetHostByAddr_internal(System.String addr, out System.String h_name, out System.String[] h_aliases, out System.String[] h_addr_list, System.Int32 hint)
    // Offset: 0x16B68E0
    static bool GetHostByAddr_internal(::Il2CppString* addr, ::Il2CppString*& h_name, ::Array<::Il2CppString*>*& h_aliases, ::Array<::Il2CppString*>*& h_addr_list, int hint);
    // static private System.Boolean GetHostName_internal(out System.String h_name)
    // Offset: 0x16B68E4
    static bool GetHostName_internal(::Il2CppString*& h_name);
    // static private System.Void Error_11001(System.String hostName)
    // Offset: 0x16B68E8
    static void Error_11001(::Il2CppString* hostName);
    // static private System.Net.IPHostEntry hostent_to_IPHostEntry(System.String originalHostName, System.String h_name, System.String[] h_aliases, System.String[] h_addrlist)
    // Offset: 0x16B6974
    static System::Net::IPHostEntry* hostent_to_IPHostEntry(::Il2CppString* originalHostName, ::Il2CppString* h_name, ::Array<::Il2CppString*>* h_aliases, ::Array<::Il2CppString*>* h_addrlist);
    // static private System.Net.IPHostEntry GetHostByAddressFromString(System.String address, System.Boolean parse)
    // Offset: 0x16B6C60
    static System::Net::IPHostEntry* GetHostByAddressFromString(::Il2CppString* address, bool parse);
    // static public System.Net.IPHostEntry GetHostEntry(System.String hostNameOrAddress)
    // Offset: 0x16B6D80
    static System::Net::IPHostEntry* GetHostEntry(::Il2CppString* hostNameOrAddress);
    // static public System.Net.IPHostEntry GetHostEntry(System.Net.IPAddress address)
    // Offset: 0x16B6ED0
    static System::Net::IPHostEntry* GetHostEntry(System::Net::IPAddress* address);
    // static public System.Net.IPAddress[] GetHostAddresses(System.String hostNameOrAddress)
    // Offset: 0x16B7050
    static ::Array<System::Net::IPAddress*>* GetHostAddresses(::Il2CppString* hostNameOrAddress);
    // static public System.Net.IPHostEntry GetHostByName(System.String hostName)
    // Offset: 0x16B6F64
    static System::Net::IPHostEntry* GetHostByName(::Il2CppString* hostName);
    // static public System.String GetHostName()
    // Offset: 0x16B7204
    static ::Il2CppString* GetHostName();
  }; // System.Net.Dns
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Dns*, "System.Net", "Dns");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Dns::GetHostByName_internal
// Il2CppName: GetHostByName_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Il2CppString*&, ::Array<::Il2CppString*>*&, ::Array<::Il2CppString*>*&, int)>(&System::Net::Dns::GetHostByName_internal)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* h_name = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* h_aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* h_addr_list = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* hint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostByName_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, h_name, h_aliases, h_addr_list, hint});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostByAddr_internal
// Il2CppName: GetHostByAddr_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Il2CppString*&, ::Array<::Il2CppString*>*&, ::Array<::Il2CppString*>*&, int)>(&System::Net::Dns::GetHostByAddr_internal)> {
  static const MethodInfo* get() {
    static auto* addr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* h_name = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* h_aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* h_addr_list = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* hint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostByAddr_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addr, h_name, h_aliases, h_addr_list, hint});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostName_internal
// Il2CppName: GetHostName_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*&)>(&System::Net::Dns::GetHostName_internal)> {
  static const MethodInfo* get() {
    static auto* h_name = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostName_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h_name});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::Error_11001
// Il2CppName: Error_11001
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::Net::Dns::Error_11001)> {
  static const MethodInfo* get() {
    static auto* hostName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "Error_11001", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostName});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::hostent_to_IPHostEntry
// Il2CppName: hostent_to_IPHostEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPHostEntry* (*)(::Il2CppString*, ::Il2CppString*, ::Array<::Il2CppString*>*, ::Array<::Il2CppString*>*)>(&System::Net::Dns::hostent_to_IPHostEntry)> {
  static const MethodInfo* get() {
    static auto* originalHostName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* h_name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* h_aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* h_addrlist = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "hostent_to_IPHostEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{originalHostName, h_name, h_aliases, h_addrlist});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostByAddressFromString
// Il2CppName: GetHostByAddressFromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPHostEntry* (*)(::Il2CppString*, bool)>(&System::Net::Dns::GetHostByAddressFromString)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostByAddressFromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, parse});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostEntry
// Il2CppName: GetHostEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPHostEntry* (*)(::Il2CppString*)>(&System::Net::Dns::GetHostEntry)> {
  static const MethodInfo* get() {
    static auto* hostNameOrAddress = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostNameOrAddress});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostEntry
// Il2CppName: GetHostEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPHostEntry* (*)(System::Net::IPAddress*)>(&System::Net::Dns::GetHostEntry)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostAddresses
// Il2CppName: GetHostAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Net::IPAddress*>* (*)(::Il2CppString*)>(&System::Net::Dns::GetHostAddresses)> {
  static const MethodInfo* get() {
    static auto* hostNameOrAddress = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostNameOrAddress});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostByName
// Il2CppName: GetHostByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPHostEntry* (*)(::Il2CppString*)>(&System::Net::Dns::GetHostByName)> {
  static const MethodInfo* get() {
    static auto* hostName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostName});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostName
// Il2CppName: GetHostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&System::Net::Dns::GetHostName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
