// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.CookieVariant
#include "System/Net/CookieVariant.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.HeaderVariantInfo
  struct HeaderVariantInfo/*, public System::ValueType*/ {
    public:
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Net.CookieVariant m_variant
    // Size: 0x4
    // Offset: 0x8
    System::Net::CookieVariant m_variant;
    // Field size check
    static_assert(sizeof(System::Net::CookieVariant) == 0x4);
    // Creating value type constructor for type: HeaderVariantInfo
    constexpr HeaderVariantInfo(::Il2CppString* m_name_ = {}, System::Net::CookieVariant m_variant_ = {}) noexcept : m_name{m_name_}, m_variant{m_variant_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // System.Void .ctor(System.String name, System.Net.CookieVariant variant)
    // Offset: 0xEF9538
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  HeaderVariantInfo(::Il2CppString* name, System::Net::CookieVariant variant)
    // System.String get_Name()
    // Offset: 0xEF9544
    ::Il2CppString* get_Name();
    // System.Net.CookieVariant get_Variant()
    // Offset: 0xEF954C
    System::Net::CookieVariant get_Variant();
  }; // System.Net.HeaderVariantInfo
  #pragma pack(pop)
  static check_size<sizeof(HeaderVariantInfo), 8 + sizeof(System::Net::CookieVariant)> __System_Net_HeaderVariantInfoSizeCheck;
  static_assert(sizeof(HeaderVariantInfo) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HeaderVariantInfo, "System.Net", "HeaderVariantInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HeaderVariantInfo::HeaderVariantInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HeaderVariantInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::HeaderVariantInfo::*)()>(&System::Net::HeaderVariantInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HeaderVariantInfo), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HeaderVariantInfo::get_Variant
// Il2CppName: get_Variant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieVariant (System::Net::HeaderVariantInfo::*)()>(&System::Net::HeaderVariantInfo::get_Variant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HeaderVariantInfo), "get_Variant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
