// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplaySetupViewController
#include "GlobalNamespace/GameplaySetupViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRefreshable
  class IRefreshable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: GameplaySetupViewController/Panel
  // [] Offset: FFFFFFFF
  class GameplaySetupViewController::Panel : public ::Il2CppObject {
    public:
    // public readonly System.String title
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* title;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly IRefreshable refreshable
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IRefreshable* refreshable;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IRefreshable*) == 0x8);
    // public readonly UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: Panel
    Panel(::Il2CppString* title_ = {}, GlobalNamespace::IRefreshable* refreshable_ = {}, UnityEngine::GameObject* gameObject_ = {}) noexcept : title{title_}, refreshable{refreshable_}, gameObject{gameObject_} {}
    // public System.Void .ctor(System.String title, IRefreshable refreshable, UnityEngine.GameObject gameObject)
    // Offset: 0xF10B88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplaySetupViewController::Panel* New_ctor(::Il2CppString* title, GlobalNamespace::IRefreshable* refreshable, UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplaySetupViewController::Panel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplaySetupViewController::Panel*, creationType>(title, refreshable, gameObject)));
    }
  }; // GameplaySetupViewController/Panel
  static check_size<sizeof(GameplaySetupViewController::Panel), 32 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_GameplaySetupViewController_PanelSizeCheck;
  static_assert(sizeof(GameplaySetupViewController::Panel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplaySetupViewController::Panel*, "", "GameplaySetupViewController/Panel");
#pragma pack(pop)
