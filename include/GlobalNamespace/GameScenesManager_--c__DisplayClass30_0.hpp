// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: System
namespace System {
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
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GameScenesManager/<>c__DisplayClass30_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D98BD8
  class GameScenesManager::$$c__DisplayClass30_0 : public ::Il2CppObject {
    public:
    // public GameScenesManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::GameScenesManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> newSceneNames
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* newSceneNames;
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
    // Padding between fields: minDuration and: scenesStackData
    char __padding3[0x4] = {};
    // public GameScenesManager/ScenesStackData scenesStackData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::GameScenesManager::ScenesStackData* scenesStackData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager::ScenesStackData*) == 0x8);
    // public ScenesTransitionSetupDataSO scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> finishCallback
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<Zenject::DiContainer*>* finishCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> <>9__1
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<Zenject::DiContainer*>* $$9__1;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> <>9__2
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<Zenject::DiContainer*>* $$9__2;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass30_0
    $$c__DisplayClass30_0(GlobalNamespace::GameScenesManager* $$4__this_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* newSceneNames_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* emptyTransitionSceneNameList_ = {}, float minDuration_ = {}, GlobalNamespace::GameScenesManager::ScenesStackData* scenesStackData_ = {}, GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData_ = {}, System::Action_1<Zenject::DiContainer*>* finishCallback_ = {}, System::Action_1<Zenject::DiContainer*>* $$9__1_ = {}, System::Action_1<Zenject::DiContainer*>* $$9__2_ = {}) noexcept : $$4__this{$$4__this_}, newSceneNames{newSceneNames_}, emptyTransitionSceneNameList{emptyTransitionSceneNameList_}, minDuration{minDuration_}, scenesStackData{scenesStackData_}, scenesTransitionSetupData{scenesTransitionSetupData_}, finishCallback{finishCallback_}, $$9__1{$$9__1_}, $$9__2{$$9__2_} {}
    // System.Void <PushScenes>b__0(Zenject.DiContainer emptySceneContainer)
    // Offset: 0x10333BC
    void $PushScenes$b__0(Zenject::DiContainer* emptySceneContainer);
    // System.Void <PushScenes>b__1(Zenject.DiContainer container)
    // Offset: 0x103350C
    void $PushScenes$b__1(Zenject::DiContainer* container);
    // System.Void <PushScenes>b__2(Zenject.DiContainer container)
    // Offset: 0x1033704
    void $PushScenes$b__2(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x1031DAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::$$c__DisplayClass30_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameScenesManager::$$c__DisplayClass30_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::$$c__DisplayClass30_0*, creationType>()));
    }
  }; // GameScenesManager/<>c__DisplayClass30_0
  static check_size<sizeof(GameScenesManager::$$c__DisplayClass30_0), 80 + sizeof(System::Action_1<Zenject::DiContainer*>*)> __GlobalNamespace_GameScenesManager_$$c__DisplayClass30_0SizeCheck;
  static_assert(sizeof(GameScenesManager::$$c__DisplayClass30_0) == 0x58);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::$$c__DisplayClass30_0*, "", "GameScenesManager/<>c__DisplayClass30_0");
