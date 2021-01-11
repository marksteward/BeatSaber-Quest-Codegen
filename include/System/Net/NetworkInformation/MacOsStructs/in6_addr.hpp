// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Net.NetworkInformation.MacOsStructs
namespace System::Net::NetworkInformation::MacOsStructs {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.MacOsStructs.in6_addr
  // [] Offset: FFFFFFFF
  struct in6_addr/*, public System::ValueType*/ {
    public:
    // public System.Byte[] u6_addr8
    // Size: 0x8
    // Offset: 0x0
    ::Array<uint8_t>* u6_addr8;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: in6_addr
    constexpr in6_addr(::Array<uint8_t>* u6_addr8_ = {}) noexcept : u6_addr8{u6_addr8_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return u6_addr8;
    }
  }; // System.Net.NetworkInformation.MacOsStructs.in6_addr
  static check_size<sizeof(in6_addr), 0 + sizeof(::Array<uint8_t>*)> __System_Net_NetworkInformation_MacOsStructs_in6_addrSizeCheck;
  static_assert(sizeof(in6_addr) == 0x8);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsStructs::in6_addr, "System.Net.NetworkInformation.MacOsStructs", "in6_addr");
