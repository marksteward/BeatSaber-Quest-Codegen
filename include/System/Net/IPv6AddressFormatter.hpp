// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.IPv6AddressFormatter
  struct IPv6AddressFormatter/*, public System::ValueType*/ {
    public:
    // private System.UInt16[] address
    // Size: 0x8
    // Offset: 0x0
    ::Array<uint16_t>* address;
    // Field size check
    static_assert(sizeof(::Array<uint16_t>*) == 0x8);
    // private System.Int64 scopeId
    // Size: 0x8
    // Offset: 0x8
    int64_t scopeId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: IPv6AddressFormatter
    constexpr IPv6AddressFormatter(::Array<uint16_t>* address_ = {}, int64_t scopeId_ = {}) noexcept : address{address_}, scopeId{scopeId_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.UInt16[] addr, System.Int64 scopeId)
    // Offset: 0xEF96D8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  IPv6AddressFormatter(::Array<uint16_t>* addr, int64_t scopeId)
    // static private System.UInt16 SwapUShort(System.UInt16 number)
    // Offset: 0x1659DB8
    static uint16_t SwapUShort(uint16_t number);
    // private System.UInt32 AsIPv4Int()
    // Offset: 0xEF96E0
    uint AsIPv4Int();
    // private System.Boolean IsIPv4Compatible()
    // Offset: 0xEF96E8
    bool IsIPv4Compatible();
    // private System.Boolean IsIPv4Mapped()
    // Offset: 0xEF96F0
    bool IsIPv4Mapped();
    // public override System.String ToString()
    // Offset: 0xEF96F8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.IPv6AddressFormatter
  #pragma pack(pop)
  static check_size<sizeof(IPv6AddressFormatter), 8 + sizeof(int64_t)> __System_Net_IPv6AddressFormatterSizeCheck;
  static_assert(sizeof(IPv6AddressFormatter) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::IPv6AddressFormatter, "System.Net", "IPv6AddressFormatter");
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::IPv6AddressFormatter
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::SwapUShort
// Il2CppName: SwapUShort
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::AsIPv4Int
// Il2CppName: AsIPv4Int
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::IsIPv4Compatible
// Il2CppName: IsIPv4Compatible
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::IsIPv4Mapped
// Il2CppName: IsIPv4Mapped
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::IPv6AddressFormatter::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
