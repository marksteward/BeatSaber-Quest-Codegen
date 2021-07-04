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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ContextMenu
  // [AttributeUsageAttribute] Offset: D8FF54
  // [RequiredByNativeCodeAttribute] Offset: D8FF54
  class ContextMenu : public System::Attribute {
    public:
    // public readonly System.String menuItem
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* menuItem;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Boolean validate
    // Size: 0x1
    // Offset: 0x18
    bool validate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: validate and: priority
    char __padding1[0x3] = {};
    // public readonly System.Int32 priority
    // Size: 0x4
    // Offset: 0x1C
    int priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ContextMenu
    ContextMenu(::Il2CppString* menuItem_ = {}, bool validate_ = {}, int priority_ = {}) noexcept : menuItem{menuItem_}, validate{validate_}, priority{priority_} {}
    // public System.Void .ctor(System.String itemName)
    // Offset: 0x1B91F80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextMenu* New_ctor(::Il2CppString* itemName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ContextMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextMenu*, creationType>(itemName)));
    }
    // public System.Void .ctor(System.String itemName, System.Boolean isValidateFunction)
    // Offset: 0x1B91FBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextMenu* New_ctor(::Il2CppString* itemName, bool isValidateFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ContextMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextMenu*, creationType>(itemName, isValidateFunction)));
    }
    // public System.Void .ctor(System.String itemName, System.Boolean isValidateFunction, System.Int32 priority)
    // Offset: 0x1B92008
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextMenu* New_ctor(::Il2CppString* itemName, bool isValidateFunction, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ContextMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextMenu*, creationType>(itemName, isValidateFunction, priority)));
    }
  }; // UnityEngine.ContextMenu
  #pragma pack(pop)
  static check_size<sizeof(ContextMenu), 28 + sizeof(int)> __UnityEngine_ContextMenuSizeCheck;
  static_assert(sizeof(ContextMenu) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContextMenu*, "UnityEngine", "ContextMenu");
// Writing MetadataGetter for method: UnityEngine::ContextMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ContextMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ContextMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
