// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectSceneLoader
  class ZenjectSceneLoader;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  // Autogenerated type: GameScenesManager
  // [] Offset: FFFFFFFF
  class GameScenesManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::GameScenesManager::ScenesStackData
    class ScenesStackData;
    // Nested type: GlobalNamespace::GameScenesManager::ScenePresentType
    struct ScenePresentType;
    // Nested type: GlobalNamespace::GameScenesManager::SceneDismissType
    struct SceneDismissType;
    // Nested type: GlobalNamespace::GameScenesManager::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    // Nested type: GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0
    class $$c__DisplayClass31_0;
    // Nested type: GlobalNamespace::GameScenesManager::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0
    class $$c__DisplayClass33_0;
    // Nested type: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__36
    class $ScenesTransitionCoroutine$d__36;
    // private SceneInfo _emptyTransitionSceneInfo
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SceneInfo* emptyTransitionSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // [InjectAttribute] Offset: 0xD99228
    // private Zenject.ZenjectSceneLoader _zenjectSceneLoader
    // Size: 0x8
    // Offset: 0x20
    Zenject::ZenjectSceneLoader* zenjectSceneLoader;
    // Field size check
    static_assert(sizeof(Zenject::ZenjectSceneLoader*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99238
    // private System.Action`1<System.Single> transitionDidStartEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<float>* transitionDidStartEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99248
    // private System.Action beforeDismissingScenesEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* beforeDismissingScenesEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99258
    // private System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> transitionDidFinishEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* transitionDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99268
    // private System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> installEarlyBindingsEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* installEarlyBindingsEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>*) == 0x8);
    // private System.Boolean _inTransition
    // Size: 0x1
    // Offset: 0x48
    bool inTransition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inTransition and: scenesStack
    char __padding6[0x7] = {};
    // private System.Collections.Generic.List`1<GameScenesManager/ScenesStackData> _scenesStack
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::GameScenesManager::ScenesStackData*>* scenesStack;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::GameScenesManager::ScenesStackData*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> _neverUnloadScenes
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::HashSet_1<::Il2CppString*>* neverUnloadScenes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: GameScenesManager
    GameScenesManager(GlobalNamespace::SceneInfo* emptyTransitionSceneInfo_ = {}, Zenject::ZenjectSceneLoader* zenjectSceneLoader_ = {}, System::Action_1<float>* transitionDidStartEvent_ = {}, System::Action* beforeDismissingScenesEvent_ = {}, System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* transitionDidFinishEvent_ = {}, System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* installEarlyBindingsEvent_ = {}, bool inTransition_ = {}, System::Collections::Generic::List_1<GlobalNamespace::GameScenesManager::ScenesStackData*>* scenesStack_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* neverUnloadScenes_ = {}) noexcept : emptyTransitionSceneInfo{emptyTransitionSceneInfo_}, zenjectSceneLoader{zenjectSceneLoader_}, transitionDidStartEvent{transitionDidStartEvent_}, beforeDismissingScenesEvent{beforeDismissingScenesEvent_}, transitionDidFinishEvent{transitionDidFinishEvent_}, installEarlyBindingsEvent{installEarlyBindingsEvent_}, inTransition{inTransition_}, scenesStack{scenesStack_}, neverUnloadScenes{neverUnloadScenes_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kStandardTransitionLength
    static constexpr const float kStandardTransitionLength = 0.7;
    // Get static field: static public System.Single kStandardTransitionLength
    static float _get_kStandardTransitionLength();
    // Set static field: static public System.Single kStandardTransitionLength
    static void _set_kStandardTransitionLength(float value);
    // static field const value: static public System.Single kShortTransitionLength
    static constexpr const float kShortTransitionLength = 0.35;
    // Get static field: static public System.Single kShortTransitionLength
    static float _get_kShortTransitionLength();
    // Set static field: static public System.Single kShortTransitionLength
    static void _set_kShortTransitionLength(float value);
    // static field const value: static public System.Single kLongTransitionLength
    static constexpr const float kLongTransitionLength = 1.3;
    // Get static field: static public System.Single kLongTransitionLength
    static float _get_kLongTransitionLength();
    // Set static field: static public System.Single kLongTransitionLength
    static void _set_kLongTransitionLength(float value);
    // static field const value: static private System.String kRootContainerGOName
    static constexpr const char* kRootContainerGOName = "RootContainer";
    // Get static field: static private System.String kRootContainerGOName
    static ::Il2CppString* _get_kRootContainerGOName();
    // Set static field: static private System.String kRootContainerGOName
    static void _set_kRootContainerGOName(::Il2CppString* value);
    // public System.Void add_transitionDidStartEvent(System.Action`1<System.Single> value)
    // Offset: 0x1031310
    void add_transitionDidStartEvent(System::Action_1<float>* value);
    // public System.Void remove_transitionDidStartEvent(System.Action`1<System.Single> value)
    // Offset: 0x10313B4
    void remove_transitionDidStartEvent(System::Action_1<float>* value);
    // public System.Void add_beforeDismissingScenesEvent(System.Action value)
    // Offset: 0x1031458
    void add_beforeDismissingScenesEvent(System::Action* value);
    // public System.Void remove_beforeDismissingScenesEvent(System.Action value)
    // Offset: 0x10314FC
    void remove_beforeDismissingScenesEvent(System::Action* value);
    // public System.Void add_transitionDidFinishEvent(System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> value)
    // Offset: 0x10315A0
    void add_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value);
    // public System.Void remove_transitionDidFinishEvent(System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> value)
    // Offset: 0x1031644
    void remove_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value);
    // public System.Void add_installEarlyBindingsEvent(System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> value)
    // Offset: 0x10316E8
    void add_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value);
    // public System.Void remove_installEarlyBindingsEvent(System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> value)
    // Offset: 0x103178C
    void remove_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value);
    // public Zenject.DiContainer get_currentScenesContainer()
    // Offset: 0x1031830
    Zenject::DiContainer* get_currentScenesContainer();
    // public System.Boolean get_isInTransition()
    // Offset: 0x1031890
    bool get_isInTransition();
    // public UnityEngine.WaitUntil get_waitUntilSceneTransitionFinish()
    // Offset: 0x1031898
    UnityEngine::WaitUntil* get_waitUntilSceneTransitionFinish();
    // public System.Void MarkSceneAsPersistent(System.String sceneName)
    // Offset: 0x1031930
    void MarkSceneAsPersistent(::Il2CppString* sceneName);
    // public System.Collections.Generic.List`1<System.String> GetCurrentlyLoadedSceneNames()
    // Offset: 0x1031998
    System::Collections::Generic::List_1<::Il2CppString*>* GetCurrentlyLoadedSceneNames();
    // public System.Void PushScenes(ScenesTransitionSetupDataSO scenesTransitionSetupData, System.Single minDuration, System.Action afterMinDurationCallback, System.Action`1<Zenject.DiContainer> finishCallback)
    // Offset: 0x1031AB0
    void PushScenes(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float minDuration, System::Action* afterMinDurationCallback, System::Action_1<Zenject::DiContainer*>* finishCallback);
    // public System.Void PopScenes(System.Single minDuration, System.Action afterMinDurationCallback, System.Action`1<Zenject.DiContainer> finishCallback)
    // Offset: 0x1031FE8
    void PopScenes(float minDuration, System::Action* afterMinDurationCallback, System::Action_1<Zenject::DiContainer*>* finishCallback);
    // public System.Void ReplaceScenes(ScenesTransitionSetupDataSO scenesTransitionSetupData, System.Single minDuration, System.Action afterMinDurationCallback, System.Action`1<Zenject.DiContainer> finishCallback)
    // Offset: 0x1032258
    void ReplaceScenes(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float minDuration, System::Action* afterMinDurationCallback, System::Action_1<Zenject::DiContainer*>* finishCallback);
    // public System.Void ClearAndOpenScenes(ScenesTransitionSetupDataSO scenesTransitionSetupData, System.Single minDuration, System.Action afterMinDurationCallback, System.Action`1<Zenject.DiContainer> finishCallback, System.Boolean unloadAllScenes)
    // Offset: 0x1032508
    void ClearAndOpenScenes(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float minDuration, System::Action* afterMinDurationCallback, System::Action_1<Zenject::DiContainer*>* finishCallback, bool unloadAllScenes);
    // private System.Collections.IEnumerator ScenesTransitionCoroutine(System.Collections.Generic.List`1<System.String> scenesToPresent, GameScenesManager/ScenePresentType presentType, System.Collections.Generic.List`1<System.String> scenesToDismiss, GameScenesManager/SceneDismissType dismissType, System.Single minDuration, System.Action afterMinDurationCallback, System.Action`1<Zenject.DiContainer> extraBindingsCallback, System.Action`1<Zenject.DiContainer> finishCallback)
    // Offset: 0x1031EC8
    System::Collections::IEnumerator* ScenesTransitionCoroutine(System::Collections::Generic::List_1<::Il2CppString*>* scenesToPresent, GlobalNamespace::GameScenesManager::ScenePresentType presentType, System::Collections::Generic::List_1<::Il2CppString*>* scenesToDismiss, GlobalNamespace::GameScenesManager::SceneDismissType dismissType, float minDuration, System::Action* afterMinDurationCallback, System::Action_1<Zenject::DiContainer*>* extraBindingsCallback, System::Action_1<Zenject::DiContainer*>* finishCallback);
    // private System.Boolean IsAnySceneInStack(System.Collections.Generic.List`1<System.String> sceneNames)
    // Offset: 0x10329A8
    bool IsAnySceneInStack(System::Collections::Generic::List_1<::Il2CppString*>* sceneNames);
    // private System.Boolean IsSceneInStack(System.String searchSceneName)
    // Offset: 0x1032AB0
    bool IsSceneInStack(::Il2CppString* searchSceneName);
    // private System.Collections.Generic.List`1<System.String> SceneNamesFromSceneInfoArray(SceneInfo[] sceneInfos)
    // Offset: 0x1031DB4
    System::Collections::Generic::List_1<::Il2CppString*>* SceneNamesFromSceneInfoArray(::Array<GlobalNamespace::SceneInfo*>* sceneInfos);
    // private System.Void SetActiveRootObjectsInScenes(System.Collections.Generic.List`1<System.String> sceneNames, System.Boolean value)
    // Offset: 0x1032D20
    void SetActiveRootObjectsInScenes(System::Collections::Generic::List_1<::Il2CppString*>* sceneNames, bool value);
    // private System.Void ReparentRootGameObjectsToDisabledGameObject(System.String sceneName)
    // Offset: 0x1032E30
    void ReparentRootGameObjectsToDisabledGameObject(::Il2CppString* sceneName);
    // private System.Void MoveGameObjectsFromContainerToSceneRoot(System.String sceneName)
    // Offset: 0x1033010
    void MoveGameObjectsFromContainerToSceneRoot(::Il2CppString* sceneName);
    // static public System.Void Log(System.String message)
    // Offset: 0x1033294
    static void Log(::Il2CppString* message);
    // private System.Boolean <get_waitUntilSceneTransitionFinish>b__22_0()
    // Offset: 0x10333AC
    bool $get_waitUntilSceneTransitionFinish$b__22_0();
    // public System.Void .ctor()
    // Offset: 0x10332FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameScenesManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager*, creationType>()));
    }
  }; // GameScenesManager
  static check_size<sizeof(GameScenesManager), 88 + sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*)> __GlobalNamespace_GameScenesManagerSizeCheck;
  static_assert(sizeof(GameScenesManager) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager*, "", "GameScenesManager");
#pragma pack(pop)
