// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: GameScenesManager/<>c__DisplayClass31_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D98BE8
  class GameScenesManager::$$c__DisplayClass31_0 : public ::Il2CppObject {
    public:
    // public GameScenesManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::GameScenesManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> prevScenes
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* prevScenes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> emptyTransitionSceneNameList
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<::Il2CppString*>* emptyTransitionSceneNameList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // public System.Single minDuration
    // Size: 0x4
    // Offset: 0x28
    float minDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: minDuration and: afterMinDurationCallback
    char __padding3[0x4] = {};
    // public System.Action afterMinDurationCallback
    // Size: 0x8
    // Offset: 0x30
    System::Action* afterMinDurationCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> finishCallback
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<Zenject::DiContainer*>* finishCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> <>9__1
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<Zenject::DiContainer*>* $$9__1;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass31_0
    $$c__DisplayClass31_0(GlobalNamespace::GameScenesManager* $$4__this_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* prevScenes_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* emptyTransitionSceneNameList_ = {}, float minDuration_ = {}, System::Action* afterMinDurationCallback_ = {}, System::Action_1<Zenject::DiContainer*>* finishCallback_ = {}, System::Action_1<Zenject::DiContainer*>* $$9__1_ = {}) noexcept : $$4__this{$$4__this_}, prevScenes{prevScenes_}, emptyTransitionSceneNameList{emptyTransitionSceneNameList_}, minDuration{minDuration_}, afterMinDurationCallback{afterMinDurationCallback_}, finishCallback{finishCallback_}, $$9__1{$$9__1_} {}
    // System.Void <PopScenes>b__0(Zenject.DiContainer emptySceneContainer)
    // Offset: 0x10337B8
    void $PopScenes$b__0(Zenject::DiContainer* emptySceneContainer);
    // System.Void <PopScenes>b__1(Zenject.DiContainer container)
    // Offset: 0x10338BC
    void $PopScenes$b__1(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x1032250
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::$$c__DisplayClass31_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::$$c__DisplayClass31_0*, creationType>()));
    }
  }; // GameScenesManager/<>c__DisplayClass31_0
  static check_size<sizeof(GameScenesManager::$$c__DisplayClass31_0), 64 + sizeof(System::Action_1<Zenject::DiContainer*>*)> __GlobalNamespace_GameScenesManager_$$c__DisplayClass31_0SizeCheck;
  static_assert(sizeof(GameScenesManager::$$c__DisplayClass31_0) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0*, "", "GameScenesManager/<>c__DisplayClass31_0");
#pragma pack(pop)
