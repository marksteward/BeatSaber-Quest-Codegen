// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.NetworkInformation.Win32LengthFlagsUnion
#include "System/Net/NetworkInformation/Win32LengthFlagsUnion.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
#include "System/Net/NetworkInformation/Win32_SOCKET_ADDRESS.hpp"
// Including type: System.Net.NetworkInformation.PrefixOrigin
#include "System/Net/NetworkInformation/PrefixOrigin.hpp"
// Including type: System.Net.NetworkInformation.SuffixOrigin
#include "System/Net/NetworkInformation/SuffixOrigin.hpp"
// Including type: System.Net.NetworkInformation.DuplicateAddressDetectionState
#include "System/Net/NetworkInformation/DuplicateAddressDetectionState.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x39
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
  // [TokenAttribute] Offset: FFFFFFFF
  struct Win32_IP_ADAPTER_UNICAST_ADDRESS/*, public System::ValueType*/ {
    public:
    // public System.Net.NetworkInformation.Win32LengthFlagsUnion LengthFlags
    // Size: 0x8
    // Offset: 0x0
    System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32LengthFlagsUnion) == 0x8);
    // public System.IntPtr Next
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr Next;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Net.NetworkInformation.Win32_SOCKET_ADDRESS Address
    // Size: 0xC
    // Offset: 0x10
    System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32_SOCKET_ADDRESS) == 0xC);
    // Padding between fields: Address and: PrefixOrigin
    char __padding2[0x4] = {};
    // public System.Net.NetworkInformation.PrefixOrigin PrefixOrigin
    // Size: 0x4
    // Offset: 0x20
    System::Net::NetworkInformation::PrefixOrigin PrefixOrigin;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::PrefixOrigin) == 0x4);
    // public System.Net.NetworkInformation.SuffixOrigin SuffixOrigin
    // Size: 0x4
    // Offset: 0x24
    System::Net::NetworkInformation::SuffixOrigin SuffixOrigin;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::SuffixOrigin) == 0x4);
    // public System.Net.NetworkInformation.DuplicateAddressDetectionState DadState
    // Size: 0x4
    // Offset: 0x28
    System::Net::NetworkInformation::DuplicateAddressDetectionState DadState;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::DuplicateAddressDetectionState) == 0x4);
    // public System.UInt32 ValidLifetime
    // Size: 0x4
    // Offset: 0x2C
    uint ValidLifetime;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 PreferredLifetime
    // Size: 0x4
    // Offset: 0x30
    uint PreferredLifetime;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 LeaseLifetime
    // Size: 0x4
    // Offset: 0x34
    uint LeaseLifetime;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Byte OnLinkPrefixLength
    // Size: 0x1
    // Offset: 0x38
    uint8_t OnLinkPrefixLength;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: Win32_IP_ADAPTER_UNICAST_ADDRESS
    constexpr Win32_IP_ADAPTER_UNICAST_ADDRESS(System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags_ = {}, System::IntPtr Next_ = {}, System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address_ = {}, System::Net::NetworkInformation::PrefixOrigin PrefixOrigin_ = {}, System::Net::NetworkInformation::SuffixOrigin SuffixOrigin_ = {}, System::Net::NetworkInformation::DuplicateAddressDetectionState DadState_ = {}, uint ValidLifetime_ = {}, uint PreferredLifetime_ = {}, uint LeaseLifetime_ = {}, uint8_t OnLinkPrefixLength_ = {}) noexcept : LengthFlags{LengthFlags_}, Next{Next_}, Address{Address_}, PrefixOrigin{PrefixOrigin_}, SuffixOrigin{SuffixOrigin_}, DadState{DadState_}, ValidLifetime{ValidLifetime_}, PreferredLifetime{PreferredLifetime_}, LeaseLifetime{LeaseLifetime_}, OnLinkPrefixLength{OnLinkPrefixLength_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.Net.NetworkInformation.Win32LengthFlagsUnion LengthFlags
    System::Net::NetworkInformation::Win32LengthFlagsUnion _get_LengthFlags();
    // Set instance field: public System.Net.NetworkInformation.Win32LengthFlagsUnion LengthFlags
    void _set_LengthFlags(System::Net::NetworkInformation::Win32LengthFlagsUnion value);
    // Get instance field: public System.IntPtr Next
    System::IntPtr _get_Next();
    // Set instance field: public System.IntPtr Next
    void _set_Next(System::IntPtr value);
    // Get instance field: public System.Net.NetworkInformation.Win32_SOCKET_ADDRESS Address
    System::Net::NetworkInformation::Win32_SOCKET_ADDRESS _get_Address();
    // Set instance field: public System.Net.NetworkInformation.Win32_SOCKET_ADDRESS Address
    void _set_Address(System::Net::NetworkInformation::Win32_SOCKET_ADDRESS value);
    // Get instance field: public System.Net.NetworkInformation.PrefixOrigin PrefixOrigin
    System::Net::NetworkInformation::PrefixOrigin _get_PrefixOrigin();
    // Set instance field: public System.Net.NetworkInformation.PrefixOrigin PrefixOrigin
    void _set_PrefixOrigin(System::Net::NetworkInformation::PrefixOrigin value);
    // Get instance field: public System.Net.NetworkInformation.SuffixOrigin SuffixOrigin
    System::Net::NetworkInformation::SuffixOrigin _get_SuffixOrigin();
    // Set instance field: public System.Net.NetworkInformation.SuffixOrigin SuffixOrigin
    void _set_SuffixOrigin(System::Net::NetworkInformation::SuffixOrigin value);
    // Get instance field: public System.Net.NetworkInformation.DuplicateAddressDetectionState DadState
    System::Net::NetworkInformation::DuplicateAddressDetectionState _get_DadState();
    // Set instance field: public System.Net.NetworkInformation.DuplicateAddressDetectionState DadState
    void _set_DadState(System::Net::NetworkInformation::DuplicateAddressDetectionState value);
    // Get instance field: public System.UInt32 ValidLifetime
    uint _get_ValidLifetime();
    // Set instance field: public System.UInt32 ValidLifetime
    void _set_ValidLifetime(uint value);
    // Get instance field: public System.UInt32 PreferredLifetime
    uint _get_PreferredLifetime();
    // Set instance field: public System.UInt32 PreferredLifetime
    void _set_PreferredLifetime(uint value);
    // Get instance field: public System.UInt32 LeaseLifetime
    uint _get_LeaseLifetime();
    // Set instance field: public System.UInt32 LeaseLifetime
    void _set_LeaseLifetime(uint value);
    // Get instance field: public System.Byte OnLinkPrefixLength
    uint8_t _get_OnLinkPrefixLength();
    // Set instance field: public System.Byte OnLinkPrefixLength
    void _set_OnLinkPrefixLength(uint8_t value);
  }; // System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
  #pragma pack(pop)
  static check_size<sizeof(Win32_IP_ADAPTER_UNICAST_ADDRESS), 56 + sizeof(uint8_t)> __System_Net_NetworkInformation_Win32_IP_ADAPTER_UNICAST_ADDRESSSizeCheck;
  static_assert(sizeof(Win32_IP_ADAPTER_UNICAST_ADDRESS) == 0x39);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS, "System.Net.NetworkInformation", "Win32_IP_ADAPTER_UNICAST_ADDRESS");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
