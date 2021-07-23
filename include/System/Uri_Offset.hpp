// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Uri/System.Offset
  // [TokenAttribute] Offset: FFFFFFFF
  struct Uri::Offset/*, public System::ValueType*/ {
    public:
    // public System.UInt16 Scheme
    // Size: 0x2
    // Offset: 0x0
    uint16_t Scheme;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 User
    // Size: 0x2
    // Offset: 0x2
    uint16_t User;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 Host
    // Size: 0x2
    // Offset: 0x4
    uint16_t Host;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 PortValue
    // Size: 0x2
    // Offset: 0x6
    uint16_t PortValue;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 Path
    // Size: 0x2
    // Offset: 0x8
    uint16_t Path;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 Query
    // Size: 0x2
    // Offset: 0xA
    uint16_t Query;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 Fragment
    // Size: 0x2
    // Offset: 0xC
    uint16_t Fragment;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 End
    // Size: 0x2
    // Offset: 0xE
    uint16_t End;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Creating value type constructor for type: Offset
    constexpr Offset(uint16_t Scheme_ = {}, uint16_t User_ = {}, uint16_t Host_ = {}, uint16_t PortValue_ = {}, uint16_t Path_ = {}, uint16_t Query_ = {}, uint16_t Fragment_ = {}, uint16_t End_ = {}) noexcept : Scheme{Scheme_}, User{User_}, Host{Host_}, PortValue{PortValue_}, Path{Path_}, Query{Query_}, Fragment{Fragment_}, End{End_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.UInt16 Scheme
    uint16_t _get_Scheme();
    // Set instance field: public System.UInt16 Scheme
    void _set_Scheme(uint16_t value);
    // Get instance field: public System.UInt16 User
    uint16_t _get_User();
    // Set instance field: public System.UInt16 User
    void _set_User(uint16_t value);
    // Get instance field: public System.UInt16 Host
    uint16_t _get_Host();
    // Set instance field: public System.UInt16 Host
    void _set_Host(uint16_t value);
    // Get instance field: public System.UInt16 PortValue
    uint16_t _get_PortValue();
    // Set instance field: public System.UInt16 PortValue
    void _set_PortValue(uint16_t value);
    // Get instance field: public System.UInt16 Path
    uint16_t _get_Path();
    // Set instance field: public System.UInt16 Path
    void _set_Path(uint16_t value);
    // Get instance field: public System.UInt16 Query
    uint16_t _get_Query();
    // Set instance field: public System.UInt16 Query
    void _set_Query(uint16_t value);
    // Get instance field: public System.UInt16 Fragment
    uint16_t _get_Fragment();
    // Set instance field: public System.UInt16 Fragment
    void _set_Fragment(uint16_t value);
    // Get instance field: public System.UInt16 End
    uint16_t _get_End();
    // Set instance field: public System.UInt16 End
    void _set_End(uint16_t value);
  }; // System.Uri/System.Offset
  #pragma pack(pop)
  static check_size<sizeof(Uri::Offset), 14 + sizeof(uint16_t)> __System_Uri_OffsetSizeCheck;
  static_assert(sizeof(Uri::Offset) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Uri::Offset, "System", "Uri/Offset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
