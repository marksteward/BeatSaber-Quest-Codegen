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
  // [] Offset: FFFFFFFF
  class Dns : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Dns
    Dns() noexcept {}
    // static private System.Boolean GetHostByName_internal(System.String host, out System.String h_name, out System.String[] h_aliases, out System.String[] h_addr_list, System.Int32 hint)
    // Offset: 0x13176EC
    static bool GetHostByName_internal(::Il2CppString* host, ::Il2CppString*& h_name, ::Array<::Il2CppString*>*& h_aliases, ::Array<::Il2CppString*>*& h_addr_list, int hint);
    // static private System.Boolean GetHostByAddr_internal(System.String addr, out System.String h_name, out System.String[] h_aliases, out System.String[] h_addr_list, System.Int32 hint)
    // Offset: 0x13176F0
    static bool GetHostByAddr_internal(::Il2CppString* addr, ::Il2CppString*& h_name, ::Array<::Il2CppString*>*& h_aliases, ::Array<::Il2CppString*>*& h_addr_list, int hint);
    // static private System.Boolean GetHostName_internal(out System.String h_name)
    // Offset: 0x13176F4
    static bool GetHostName_internal(::Il2CppString*& h_name);
    // static private System.Void Error_11001(System.String hostName)
    // Offset: 0x13176F8
    static void Error_11001(::Il2CppString* hostName);
    // static private System.Net.IPHostEntry hostent_to_IPHostEntry(System.String originalHostName, System.String h_name, System.String[] h_aliases, System.String[] h_addrlist)
    // Offset: 0x1317784
    static System::Net::IPHostEntry* hostent_to_IPHostEntry(::Il2CppString* originalHostName, ::Il2CppString* h_name, ::Array<::Il2CppString*>* h_aliases, ::Array<::Il2CppString*>* h_addrlist);
    // static private System.Net.IPHostEntry GetHostByAddressFromString(System.String address, System.Boolean parse)
    // Offset: 0x1317A98
    static System::Net::IPHostEntry* GetHostByAddressFromString(::Il2CppString* address, bool parse);
    // static public System.Net.IPHostEntry GetHostEntry(System.String hostNameOrAddress)
    // Offset: 0x1317BB8
    static System::Net::IPHostEntry* GetHostEntry(::Il2CppString* hostNameOrAddress);
    // static public System.Net.IPHostEntry GetHostEntry(System.Net.IPAddress address)
    // Offset: 0x1317D08
    static System::Net::IPHostEntry* GetHostEntry(System::Net::IPAddress* address);
    // static public System.Net.IPAddress[] GetHostAddresses(System.String hostNameOrAddress)
    // Offset: 0x1317E88
    static ::Array<System::Net::IPAddress*>* GetHostAddresses(::Il2CppString* hostNameOrAddress);
    // static public System.Net.IPHostEntry GetHostByName(System.String hostName)
    // Offset: 0x1317D9C
    static System::Net::IPHostEntry* GetHostByName(::Il2CppString* hostName);
    // static public System.String GetHostName()
    // Offset: 0x1318048
    static ::Il2CppString* GetHostName();
  }; // System.Net.Dns
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Dns*, "System.Net", "Dns");
