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
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: IPHostEntry
  class IPHostEntry;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NclUtilities
  // [] Offset: FFFFFFFF
  class NclUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NclUtilities
    NclUtilities() noexcept {}
    // Get static field: static private System.Net.IPAddress[] _LocalAddresses
    static ::Array<System::Net::IPAddress*>* _get__LocalAddresses();
    // Set static field: static private System.Net.IPAddress[] _LocalAddresses
    static void _set__LocalAddresses(::Array<System::Net::IPAddress*>* value);
    // Get static field: static private System.Object _LocalAddressesLock
    static ::Il2CppObject* _get__LocalAddressesLock();
    // Set static field: static private System.Object _LocalAddressesLock
    static void _set__LocalAddressesLock(::Il2CppObject* value);
    // Get static field: static System.String _LocalDomainName
    static ::Il2CppString* _get__LocalDomainName();
    // Set static field: static System.String _LocalDomainName
    static void _set__LocalDomainName(::Il2CppString* value);
    // static System.Boolean IsAddressLocal(System.Net.IPAddress ipAddress)
    // Offset: 0x12C01E0
    static bool IsAddressLocal(System::Net::IPAddress* ipAddress);
    // static private System.Net.IPHostEntry GetLocalHost()
    // Offset: 0x12C0704
    static System::Net::IPHostEntry* GetLocalHost();
    // static System.Net.IPAddress[] get_LocalAddresses()
    // Offset: 0x12C0274
    static ::Array<System::Net::IPAddress*>* get_LocalAddresses();
    // static private System.Object get_LocalAddressesLock()
    // Offset: 0x12C0720
    static ::Il2CppObject* get_LocalAddressesLock();
  }; // System.Net.NclUtilities
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NclUtilities*, "System.Net", "NclUtilities");
