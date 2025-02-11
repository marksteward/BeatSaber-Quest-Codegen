// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TooltipAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E29F68
  class TooltipAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.String tooltip
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* tooltip;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TooltipAttribute
    TooltipAttribute(::Il2CppString* tooltip_ = {}) noexcept : tooltip{tooltip_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return tooltip;
    }
    // Get instance field: public readonly System.String tooltip
    ::Il2CppString* _get_tooltip();
    // Set instance field: public readonly System.String tooltip
    void _set_tooltip(::Il2CppString* value);
    // public System.Void .ctor(System.String tooltip)
    // Offset: 0x1D99FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TooltipAttribute* New_ctor(::Il2CppString* tooltip) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TooltipAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TooltipAttribute*, creationType>(tooltip)));
    }
  }; // UnityEngine.TooltipAttribute
  #pragma pack(pop)
  static check_size<sizeof(TooltipAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_TooltipAttributeSizeCheck;
  static_assert(sizeof(TooltipAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TooltipAttribute*, "UnityEngine", "TooltipAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TooltipAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
