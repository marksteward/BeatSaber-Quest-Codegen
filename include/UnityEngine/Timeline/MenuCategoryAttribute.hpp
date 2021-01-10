// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: UnityEngine.Timeline.MenuCategoryAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D8D2C8
  class MenuCategoryAttribute : public System::Attribute {
    public:
    // public readonly System.String category
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* category;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MenuCategoryAttribute
    MenuCategoryAttribute(::Il2CppString* category_ = {}) noexcept : category{category_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return category;
    }
    // public System.Void .ctor(System.String category)
    // Offset: 0x141E104
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuCategoryAttribute* New_ctor(::Il2CppString* category) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::MenuCategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuCategoryAttribute*, creationType>(category)));
    }
  }; // UnityEngine.Timeline.MenuCategoryAttribute
  static check_size<sizeof(MenuCategoryAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_Timeline_MenuCategoryAttributeSizeCheck;
  static_assert(sizeof(MenuCategoryAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::MenuCategoryAttribute*, "UnityEngine.Timeline", "MenuCategoryAttribute");
#pragma pack(pop)
