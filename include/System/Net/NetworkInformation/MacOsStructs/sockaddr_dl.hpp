// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Net.NetworkInformation.MacOsStructs
namespace System::Net::NetworkInformation::MacOsStructs {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
  // [TokenAttribute] Offset: FFFFFFFF
  struct sockaddr_dl/*, public System::ValueType*/ {
    public:
    // public System.Byte sdl_len
    // Size: 0x1
    // Offset: 0x0
    uint8_t sdl_len;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte sdl_family
    // Size: 0x1
    // Offset: 0x1
    uint8_t sdl_family;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.UInt16 sdl_index
    // Size: 0x2
    // Offset: 0x2
    uint16_t sdl_index;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.Byte sdl_type
    // Size: 0x1
    // Offset: 0x4
    uint8_t sdl_type;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte sdl_nlen
    // Size: 0x1
    // Offset: 0x5
    uint8_t sdl_nlen;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte sdl_alen
    // Size: 0x1
    // Offset: 0x6
    uint8_t sdl_alen;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte sdl_slen
    // Size: 0x1
    // Offset: 0x7
    uint8_t sdl_slen;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte[] sdl_data
    // Size: 0x8
    // Offset: 0x8
    ::Array<uint8_t>* sdl_data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: sockaddr_dl
    constexpr sockaddr_dl(uint8_t sdl_len_ = {}, uint8_t sdl_family_ = {}, uint16_t sdl_index_ = {}, uint8_t sdl_type_ = {}, uint8_t sdl_nlen_ = {}, uint8_t sdl_alen_ = {}, uint8_t sdl_slen_ = {}, ::Array<uint8_t>* sdl_data_ = {}) noexcept : sdl_len{sdl_len_}, sdl_family{sdl_family_}, sdl_index{sdl_index_}, sdl_type{sdl_type_}, sdl_nlen{sdl_nlen_}, sdl_alen{sdl_alen_}, sdl_slen{sdl_slen_}, sdl_data{sdl_data_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // System.Void Read(System.IntPtr ptr)
    // Offset: 0xED909C
    void Read(System::IntPtr ptr);
  }; // System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
  #pragma pack(pop)
  static check_size<sizeof(sockaddr_dl), 8 + sizeof(::Array<uint8_t>*)> __System_Net_NetworkInformation_MacOsStructs_sockaddr_dlSizeCheck;
  static_assert(sizeof(sockaddr_dl) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsStructs::sockaddr_dl, "System.Net.NetworkInformation.MacOsStructs", "sockaddr_dl");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::*)(System::IntPtr)>(&System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::Read)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::MacOsStructs::sockaddr_dl), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
