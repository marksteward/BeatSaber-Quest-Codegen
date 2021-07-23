// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.CustomStyleAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DC3DB0
  class CustomStyleAttribute : public System::Attribute {
    public:
    // public readonly System.String ussStyle
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* ussStyle;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CustomStyleAttribute
    CustomStyleAttribute(::Il2CppString* ussStyle_ = {}) noexcept : ussStyle{ussStyle_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return ussStyle;
    }
    // Get instance field: public readonly System.String ussStyle
    ::Il2CppString* _get_ussStyle();
    // Set instance field: public readonly System.String ussStyle
    void _set_ussStyle(::Il2CppString* value);
    // public System.Void .ctor(System.String ussStyle)
    // Offset: 0x17E5B0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomStyleAttribute* New_ctor(::Il2CppString* ussStyle) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::CustomStyleAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomStyleAttribute*, creationType>(ussStyle)));
    }
  }; // UnityEngine.Timeline.CustomStyleAttribute
  #pragma pack(pop)
  static check_size<sizeof(CustomStyleAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_Timeline_CustomStyleAttributeSizeCheck;
  static_assert(sizeof(CustomStyleAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::CustomStyleAttribute*, "UnityEngine.Timeline", "CustomStyleAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::CustomStyleAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
