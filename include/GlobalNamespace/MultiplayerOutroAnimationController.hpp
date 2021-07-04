// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerScoreRingManager
  class MultiplayerScoreRingManager;
  // Forward declaring type: MultiplayerResultsPyramidView
  class MultiplayerResultsPyramidView;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
  // Forward declaring type: MultiplayerTimelineMock
  class MultiplayerTimelineMock;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerOutroAnimationController
  class MultiplayerOutroAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // [HeaderAttribute] Offset: 0xE1E448
    // private UnityEngine.Playables.PlayableDirector _outroPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* outroPlayableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private System.String[] _playerTimelineTrackNames
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* playerTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String[] _ringTimelineTrackNames
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* ringTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String[] _resultsTimelineTrackNames
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* resultsTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // [HideInInspector] Offset: 0xE1E4C4
    // private UnityEngine.PropertyName[] _playerTimelinePropertyNames
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::PropertyName>* playerTimelinePropertyNames;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::PropertyName>*) == 0x8);
    // [HideInInspector] Offset: 0xE1E4FC
    // private UnityEngine.PropertyName[] _resultsTimelinePropertyNames
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::PropertyName>* resultsTimelinePropertyNames;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::PropertyName>*) == 0x8);
    // [HeaderAttribute] Offset: 0xE1E534
    // private System.String _localPlayerTrackName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* localPlayerTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [HideInInspector] Offset: 0xE1E580
    // private UnityEngine.PropertyName _localPlayerTimelinePropertyName
    // Size: 0x4
    // Offset: 0x50
    UnityEngine::PropertyName localPlayerTimelinePropertyName;
    // Field size check
    static_assert(sizeof(UnityEngine::PropertyName) == 0x4);
    // Padding between fields: localPlayerTimelinePropertyName and: badgeTimelineTrackNames
    char __padding7[0x4] = {};
    // [HeaderAttribute] Offset: 0xE1E5B8
    // private System.String[] _badgeTimelineTrackNames
    // Size: 0x8
    // Offset: 0x58
    ::Array<::Il2CppString*>* badgeTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // [HideInInspector] Offset: 0xE1E604
    // private UnityEngine.PropertyName[] _badgeTimelinePropertyNames
    // Size: 0x8
    // Offset: 0x60
    ::Array<UnityEngine::PropertyName>* badgeTimelinePropertyNames;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::PropertyName>*) == 0x8);
    // private UnityEngine.Transform _badgeStartTransform
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* badgeStartTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _badgeMidTransform
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* badgeMidTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [HeaderAttribute] Offset: 0xE1E65C
    // private System.String _songPreviewTrackName
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* songPreviewTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _resultsMocksActivationTrack
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* resultsMocksActivationTrack;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1E6B8
    // private MultiplayerScoreRingManager _multiplayerScoreRingManager
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::MultiplayerScoreRingManager* multiplayerScoreRingManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreRingManager*) == 0x8);
    // private MultiplayerResultsPyramidView _multiplayerResultsPyramidView
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::MultiplayerResultsPyramidView* multiplayerResultsPyramidView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsPyramidView*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E700
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E710
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E720
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // private System.Action _onCompleted
    // Size: 0x8
    // Offset: 0xB0
    System::Action* onCompleted;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: MultiplayerOutroAnimationController
    MultiplayerOutroAnimationController(UnityEngine::Playables::PlayableDirector* outroPlayableDirector_ = {}, ::Array<::Il2CppString*>* playerTimelineTrackNames_ = {}, ::Array<::Il2CppString*>* ringTimelineTrackNames_ = {}, ::Array<::Il2CppString*>* resultsTimelineTrackNames_ = {}, ::Array<UnityEngine::PropertyName>* playerTimelinePropertyNames_ = {}, ::Array<UnityEngine::PropertyName>* resultsTimelinePropertyNames_ = {}, ::Il2CppString* localPlayerTrackName_ = {}, UnityEngine::PropertyName localPlayerTimelinePropertyName_ = {}, ::Array<::Il2CppString*>* badgeTimelineTrackNames_ = {}, ::Array<UnityEngine::PropertyName>* badgeTimelinePropertyNames_ = {}, UnityEngine::Transform* badgeStartTransform_ = {}, UnityEngine::Transform* badgeMidTransform_ = {}, ::Il2CppString* songPreviewTrackName_ = {}, ::Il2CppString* resultsMocksActivationTrack_ = {}, GlobalNamespace::MultiplayerScoreRingManager* multiplayerScoreRingManager_ = {}, GlobalNamespace::MultiplayerResultsPyramidView* multiplayerResultsPyramidView_ = {}, GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData_ = {}, System::Action* onCompleted_ = {}) noexcept : outroPlayableDirector{outroPlayableDirector_}, playerTimelineTrackNames{playerTimelineTrackNames_}, ringTimelineTrackNames{ringTimelineTrackNames_}, resultsTimelineTrackNames{resultsTimelineTrackNames_}, playerTimelinePropertyNames{playerTimelinePropertyNames_}, resultsTimelinePropertyNames{resultsTimelinePropertyNames_}, localPlayerTrackName{localPlayerTrackName_}, localPlayerTimelinePropertyName{localPlayerTimelinePropertyName_}, badgeTimelineTrackNames{badgeTimelineTrackNames_}, badgeTimelinePropertyNames{badgeTimelinePropertyNames_}, badgeStartTransform{badgeStartTransform_}, badgeMidTransform{badgeMidTransform_}, songPreviewTrackName{songPreviewTrackName_}, resultsMocksActivationTrack{resultsMocksActivationTrack_}, multiplayerScoreRingManager{multiplayerScoreRingManager_}, multiplayerResultsPyramidView{multiplayerResultsPyramidView_}, multiplayerPlayersManager{multiplayerPlayersManager_}, multiplayerSessionManager{multiplayerSessionManager_}, sceneSetupData{sceneSetupData_}, onCompleted{onCompleted_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1007404
    void Start();
    // protected System.Void OnValidate()
    // Offset: 0x1007574
    void OnValidate();
    // protected System.Void OnDestroy()
    // Offset: 0x1007C90
    void OnDestroy();
    // public System.Void AnimateOutro(MultiplayerResultsData multiplayerResultsData, System.Action onCompleted)
    // Offset: 0x1007E04
    void AnimateOutro(GlobalNamespace::MultiplayerResultsData* multiplayerResultsData, System::Action* onCompleted);
    // private System.Void BindOutroTimeline()
    // Offset: 0x1007FB4
    void BindOutroTimeline();
    // private System.Void BindRingsAndAudio(UnityEngine.GameObject[] rings, System.Boolean isMock, System.Boolean isDuel, MultiplayerTimelineMock timelineMock)
    // Offset: 0x1008770
    void BindRingsAndAudio(::Array<UnityEngine::GameObject*>* rings, bool isMock, bool isDuel, GlobalNamespace::MultiplayerTimelineMock* timelineMock);
    // public System.Void SetTimelineMock(MultiplayerTimelineMock multiplayerIntroTimelineMock, System.Boolean isDuel)
    // Offset: 0x10096D4
    void SetTimelineMock(GlobalNamespace::MultiplayerTimelineMock* multiplayerIntroTimelineMock, bool isDuel);
    // public System.Void Completed()
    // Offset: 0x1009E54
    void Completed();
    // private System.Void HandlePlayerSpawningDidFinish()
    // Offset: 0x10074A8
    void HandlePlayerSpawningDidFinish();
    // public System.Void .ctor()
    // Offset: 0x100A1E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerOutroAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerOutroAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerOutroAnimationController*, creationType>()));
    }
  }; // MultiplayerOutroAnimationController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerOutroAnimationController), 176 + sizeof(System::Action*)> __GlobalNamespace_MultiplayerOutroAnimationControllerSizeCheck;
  static_assert(sizeof(MultiplayerOutroAnimationController) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerOutroAnimationController*, "", "MultiplayerOutroAnimationController");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::OnValidate
// Il2CppName: OnValidate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::AnimateOutro
// Il2CppName: AnimateOutro
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::BindOutroTimeline
// Il2CppName: BindOutroTimeline
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::BindRingsAndAudio
// Il2CppName: BindRingsAndAudio
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::SetTimelineMock
// Il2CppName: SetTimelineMock
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::Completed
// Il2CppName: Completed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::HandlePlayerSpawningDidFinish
// Il2CppName: HandlePlayerSpawningDidFinish
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOutroAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
