// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Sockets.AddressFamily
#include "System/Net/Sockets/AddressFamily.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IPAddress
  // [TokenAttribute] Offset: FFFFFFFF
  class IPAddress : public ::Il2CppObject {
    public:
    // System.Int64 m_Address
    // Size: 0x8
    // Offset: 0x10
    int64_t m_Address;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.String m_ToString
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_ToString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Net.Sockets.AddressFamily m_Family
    // Size: 0x4
    // Offset: 0x20
    System::Net::Sockets::AddressFamily m_Family;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::AddressFamily) == 0x4);
    // Padding between fields: m_Family and: m_Numbers
    char __padding2[0x4] = {};
    // private System.UInt16[] m_Numbers
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint16_t>* m_Numbers;
    // Field size check
    static_assert(sizeof(::Array<uint16_t>*) == 0x8);
    // private System.Int64 m_ScopeId
    // Size: 0x8
    // Offset: 0x30
    int64_t m_ScopeId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int32 m_HashCode
    // Size: 0x4
    // Offset: 0x38
    int m_HashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: IPAddress
    IPAddress(int64_t m_Address_ = {}, ::Il2CppString* m_ToString_ = {}, System::Net::Sockets::AddressFamily m_Family_ = {}, ::Array<uint16_t>* m_Numbers_ = {}, int64_t m_ScopeId_ = {}, int m_HashCode_ = {}) noexcept : m_Address{m_Address_}, m_ToString{m_ToString_}, m_Family{m_Family_}, m_Numbers{m_Numbers_}, m_ScopeId{m_ScopeId_}, m_HashCode{m_HashCode_} {}
    // Get static field: static public readonly System.Net.IPAddress Any
    static System::Net::IPAddress* _get_Any();
    // Set static field: static public readonly System.Net.IPAddress Any
    static void _set_Any(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress Loopback
    static System::Net::IPAddress* _get_Loopback();
    // Set static field: static public readonly System.Net.IPAddress Loopback
    static void _set_Loopback(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress Broadcast
    static System::Net::IPAddress* _get_Broadcast();
    // Set static field: static public readonly System.Net.IPAddress Broadcast
    static void _set_Broadcast(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress None
    static System::Net::IPAddress* _get_None();
    // Set static field: static public readonly System.Net.IPAddress None
    static void _set_None(System::Net::IPAddress* value);
    // static field const value: static System.Int64 LoopbackMask
    static constexpr const int64_t LoopbackMask = 255;
    // Get static field: static System.Int64 LoopbackMask
    static int64_t _get_LoopbackMask();
    // Set static field: static System.Int64 LoopbackMask
    static void _set_LoopbackMask(int64_t value);
    // Get static field: static public readonly System.Net.IPAddress IPv6Any
    static System::Net::IPAddress* _get_IPv6Any();
    // Set static field: static public readonly System.Net.IPAddress IPv6Any
    static void _set_IPv6Any(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress IPv6Loopback
    static System::Net::IPAddress* _get_IPv6Loopback();
    // Set static field: static public readonly System.Net.IPAddress IPv6Loopback
    static void _set_IPv6Loopback(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress IPv6None
    static System::Net::IPAddress* _get_IPv6None();
    // Set static field: static public readonly System.Net.IPAddress IPv6None
    static void _set_IPv6None(System::Net::IPAddress* value);
    // static field const value: static System.Int32 IPv4AddressBytes
    static constexpr const int IPv4AddressBytes = 4;
    // Get static field: static System.Int32 IPv4AddressBytes
    static int _get_IPv4AddressBytes();
    // Set static field: static System.Int32 IPv4AddressBytes
    static void _set_IPv4AddressBytes(int value);
    // static field const value: static System.Int32 IPv6AddressBytes
    static constexpr const int IPv6AddressBytes = 16;
    // Get static field: static System.Int32 IPv6AddressBytes
    static int _get_IPv6AddressBytes();
    // Set static field: static System.Int32 IPv6AddressBytes
    static void _set_IPv6AddressBytes(int value);
    // static field const value: static System.Int32 NumberOfLabels
    static constexpr const int NumberOfLabels = 8;
    // Get static field: static System.Int32 NumberOfLabels
    static int _get_NumberOfLabels();
    // Set static field: static System.Int32 NumberOfLabels
    static void _set_NumberOfLabels(int value);
    // public System.Net.Sockets.AddressFamily get_AddressFamily()
    // Offset: 0x163FF50
    System::Net::Sockets::AddressFamily get_AddressFamily();
    // public System.Int64 get_ScopeId()
    // Offset: 0x163FF58
    int64_t get_ScopeId();
    // public System.Boolean get_IsIPv6Multicast()
    // Offset: 0x164059C
    bool get_IsIPv6Multicast();
    // public System.Void .ctor(System.Int64 newAddress)
    // Offset: 0x163F4C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPAddress* New_ctor(int64_t newAddress) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::IPAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPAddress*, creationType>(newAddress)));
    }
    // public System.Void .ctor(System.Byte[] address, System.Int64 scopeid)
    // Offset: 0x163F588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPAddress* New_ctor(::Array<uint8_t>* address, int64_t scopeid) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::IPAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPAddress*, creationType>(address, scopeid)));
    }
    // private System.Void .ctor(System.UInt16[] address, System.UInt32 scopeid)
    // Offset: 0x163F760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPAddress* New_ctor(::Array<uint16_t>* address, uint scopeid) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::IPAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPAddress*, creationType>(address, scopeid)));
    }
    // public System.Void .ctor(System.Byte[] address)
    // Offset: 0x163F7EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPAddress* New_ctor(::Array<uint8_t>* address) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::IPAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPAddress*, creationType>(address)));
    }
    // System.Void .ctor(System.Int32 newAddress)
    // Offset: 0x163F9CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPAddress* New_ctor(int newAddress) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::IPAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPAddress*, creationType>(newAddress)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1640914
    static void _cctor();
    // static public System.Boolean TryParse(System.String ipString, out System.Net.IPAddress address)
    // Offset: 0x1639EAC
    static bool TryParse(::Il2CppString* ipString, System::Net::IPAddress*& address);
    // static public System.Net.IPAddress Parse(System.String ipString)
    // Offset: 0x163FDA0
    static System::Net::IPAddress* Parse(::Il2CppString* ipString);
    // static private System.Net.IPAddress InternalParse(System.String ipString, System.Boolean tryParse)
    // Offset: 0x163FA4C
    static System::Net::IPAddress* InternalParse(::Il2CppString* ipString, bool tryParse);
    // public System.Byte[] GetAddressBytes()
    // Offset: 0x163FE08
    ::Array<uint8_t>* GetAddressBytes();
    // static public System.Boolean IsLoopback(System.Net.IPAddress address)
    // Offset: 0x164048C
    static bool IsLoopback(System::Net::IPAddress* address);
    // System.Boolean Equals(System.Object comparandObj, System.Boolean compareScopeId)
    // Offset: 0x16405EC
    bool Equals(::Il2CppObject* comparandObj, bool compareScopeId);
    // public System.Net.IPAddress MapToIPv6()
    // Offset: 0x1640830
    System::Net::IPAddress* MapToIPv6();
    // public override System.String ToString()
    // Offset: 0x163FFDC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x164072C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1640734
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Net.IPAddress
  #pragma pack(pop)
  static check_size<sizeof(IPAddress), 56 + sizeof(int)> __System_Net_IPAddressSizeCheck;
  static_assert(sizeof(IPAddress) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::IPAddress*, "System.Net", "IPAddress");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IPAddress::get_AddressFamily
// Il2CppName: get_AddressFamily
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::AddressFamily (System::Net::IPAddress::*)()>(&System::Net::IPAddress::get_AddressFamily)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "get_AddressFamily", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::get_ScopeId
// Il2CppName: get_ScopeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::IPAddress::*)()>(&System::Net::IPAddress::get_ScopeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "get_ScopeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::get_IsIPv6Multicast
// Il2CppName: get_IsIPv6Multicast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IPAddress::*)()>(&System::Net::IPAddress::get_IsIPv6Multicast)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "get_IsIPv6Multicast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::IPAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::IPAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::IPAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::IPAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::IPAddress::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::IPAddress::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::Net::IPAddress*&)>(&System::Net::IPAddress::TryParse)> {
  static const MethodInfo* get() {
    static auto* ipString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ipString, address});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress* (*)(::Il2CppString*)>(&System::Net::IPAddress::Parse)> {
  static const MethodInfo* get() {
    static auto* ipString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ipString});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::InternalParse
// Il2CppName: InternalParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress* (*)(::Il2CppString*, bool)>(&System::Net::IPAddress::InternalParse)> {
  static const MethodInfo* get() {
    static auto* ipString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tryParse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "InternalParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ipString, tryParse});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::GetAddressBytes
// Il2CppName: GetAddressBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Net::IPAddress::*)()>(&System::Net::IPAddress::GetAddressBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "GetAddressBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::IsLoopback
// Il2CppName: IsLoopback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::IPAddress*)>(&System::Net::IPAddress::IsLoopback)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "IsLoopback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IPAddress::*)(::Il2CppObject*, bool)>(&System::Net::IPAddress::Equals)> {
  static const MethodInfo* get() {
    static auto* comparandObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* compareScopeId = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparandObj, compareScopeId});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::MapToIPv6
// Il2CppName: MapToIPv6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress* (System::Net::IPAddress::*)()>(&System::Net::IPAddress::MapToIPv6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "MapToIPv6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::IPAddress::*)()>(&System::Net::IPAddress::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IPAddress::*)(::Il2CppObject*)>(&System::Net::IPAddress::Equals)> {
  static const MethodInfo* get() {
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparand});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddress::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::IPAddress::*)()>(&System::Net::IPAddress::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddress*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
