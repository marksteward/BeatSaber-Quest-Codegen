// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SelectLevelCategoryViewController
#include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SelectLevelCategoryViewController/LevelCategoryInfo
  // [] Offset: FFFFFFFF
  class SelectLevelCategoryViewController::LevelCategoryInfo : public ::Il2CppObject {
    public:
    // public SelectLevelCategoryViewController/LevelCategory levelCategory
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::SelectLevelCategoryViewController::LevelCategory levelCategory;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory) == 0x4);
    // Padding between fields: levelCategory and: localizedKey
    char __padding0[0x4] = {};
    // public System.String localizedKey
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* localizedKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public UnityEngine.Sprite categoryIcon
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Sprite* categoryIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: LevelCategoryInfo
    LevelCategoryInfo(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory levelCategory_ = {}, ::Il2CppString* localizedKey_ = {}, UnityEngine::Sprite* categoryIcon_ = {}) noexcept : levelCategory{levelCategory_}, localizedKey{localizedKey_}, categoryIcon{categoryIcon_} {}
    // public System.Void .ctor()
    // Offset: 0xFCA558
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectLevelCategoryViewController::LevelCategoryInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectLevelCategoryViewController::LevelCategoryInfo*, creationType>()));
    }
  }; // SelectLevelCategoryViewController/LevelCategoryInfo
  static check_size<sizeof(SelectLevelCategoryViewController::LevelCategoryInfo), 32 + sizeof(UnityEngine::Sprite*)> __GlobalNamespace_SelectLevelCategoryViewController_LevelCategoryInfoSizeCheck;
  static_assert(sizeof(SelectLevelCategoryViewController::LevelCategoryInfo) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*, "", "SelectLevelCategoryViewController/LevelCategoryInfo");
