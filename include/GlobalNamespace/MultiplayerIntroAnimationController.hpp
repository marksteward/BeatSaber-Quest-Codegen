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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerScoreRingManager
  class MultiplayerScoreRingManager;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerTimelineMock
  class MultiplayerTimelineMock;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8D
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerIntroAnimationController
  class MultiplayerIntroAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // [HeaderAttribute] Offset: 0xE1DFA4
    // private UnityEngine.Playables.PlayableDirector _introPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* introPlayableDirector;
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
    // [HideInInspector] Offset: 0xE1E010
    // private UnityEngine.PropertyName[] _playerTimelinePropertyNames
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::PropertyName>* playerTimelinePropertyNames;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::PropertyName>*) == 0x8);
    // [HeaderAttribute] Offset: 0xE1E048
    // private System.String _localPlayerTrackName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* localPlayerTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _localPlayerRingTrackName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* localPlayerRingTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [HideInInspector] Offset: 0xE1E0A4
    // private UnityEngine.PropertyName _localPlayerTimelinePropertyName
    // Size: 0x4
    // Offset: 0x48
    UnityEngine::PropertyName localPlayerTimelinePropertyName;
    // Field size check
    static_assert(sizeof(UnityEngine::PropertyName) == 0x4);
    // [HeaderAttribute] Offset: 0xE1E0DC
    // private System.Single _firstConnectedPlayerStart
    // Size: 0x4
    // Offset: 0x4C
    float firstConnectedPlayerStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _spawnDuration
    // Size: 0x4
    // Offset: 0x50
    float spawnDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: spawnDuration and: endMarkerName
    char __padding8[0x4] = {};
    // private System.String _endMarkerName
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* endMarkerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1E148
    // private MultiplayerScoreRingManager _scoreRingManager
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MultiplayerScoreRingManager* scoreRingManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreRingManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E180
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E190
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E1A0
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // private System.Action _onCompleted
    // Size: 0x8
    // Offset: 0x80
    System::Action* onCompleted;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Single _introDuration
    // Size: 0x4
    // Offset: 0x88
    float introDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _bindingFinished
    // Size: 0x1
    // Offset: 0x8C
    bool bindingFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerIntroAnimationController
    MultiplayerIntroAnimationController(UnityEngine::Playables::PlayableDirector* introPlayableDirector_ = {}, ::Array<::Il2CppString*>* playerTimelineTrackNames_ = {}, ::Array<::Il2CppString*>* ringTimelineTrackNames_ = {}, ::Array<UnityEngine::PropertyName>* playerTimelinePropertyNames_ = {}, ::Il2CppString* localPlayerTrackName_ = {}, ::Il2CppString* localPlayerRingTrackName_ = {}, UnityEngine::PropertyName localPlayerTimelinePropertyName_ = {}, float firstConnectedPlayerStart_ = {}, float spawnDuration_ = {}, ::Il2CppString* endMarkerName_ = {}, GlobalNamespace::MultiplayerScoreRingManager* scoreRingManager_ = {}, GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::MultiplayerLayoutProvider* layoutProvider_ = {}, System::Action* onCompleted_ = {}, float introDuration_ = {}, bool bindingFinished_ = {}) noexcept : introPlayableDirector{introPlayableDirector_}, playerTimelineTrackNames{playerTimelineTrackNames_}, ringTimelineTrackNames{ringTimelineTrackNames_}, playerTimelinePropertyNames{playerTimelinePropertyNames_}, localPlayerTrackName{localPlayerTrackName_}, localPlayerRingTrackName{localPlayerRingTrackName_}, localPlayerTimelinePropertyName{localPlayerTimelinePropertyName_}, firstConnectedPlayerStart{firstConnectedPlayerStart_}, spawnDuration{spawnDuration_}, endMarkerName{endMarkerName_}, scoreRingManager{scoreRingManager_}, multiplayerPlayersManager{multiplayerPlayersManager_}, multiplayerSessionManager{multiplayerSessionManager_}, layoutProvider{layoutProvider_}, onCompleted{onCompleted_}, introDuration{introDuration_}, bindingFinished{bindingFinished_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnValidate()
    // Offset: 0x101C7D8
    void OnValidate();
    // public System.Void SetBeforeIntroValue()
    // Offset: 0x101CCAC
    void SetBeforeIntroValue();
    // public System.Void PlayIntroAnimation(System.Single maxDesiredIntroAnimationDuration, System.Action onCompleted)
    // Offset: 0x101D0D4
    void PlayIntroAnimation(float maxDesiredIntroAnimationDuration, System::Action* onCompleted);
    // public System.Single GetFullIntroAnimationTime()
    // Offset: 0x101D980
    float GetFullIntroAnimationTime();
    // private System.Void BindTimeline()
    // Offset: 0x101D1D4
    void BindTimeline();
    // private System.Void BindRingsAndSetTiming(System.Int32 connectedPlayersCount, UnityEngine.GameObject[] connectedRings, UnityEngine.GameObject localRing)
    // Offset: 0x101E158
    void BindRingsAndSetTiming(int connectedPlayersCount, ::Array<UnityEngine::GameObject*>* connectedRings, UnityEngine::GameObject* localRing);
    // public System.Void TransitionToAfterIntroAnimationState()
    // Offset: 0x101E924
    void TransitionToAfterIntroAnimationState();
    // private System.Collections.Generic.Queue`1<System.Int32> CalculatePlayerIndexSequence(System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> allActivePlayer)
    // Offset: 0x101DCB0
    System::Collections::Generic::Queue_1<int>* CalculatePlayerIndexSequence(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* allActivePlayer);
    // public System.Void SetTimelineMock(MultiplayerTimelineMock multiplayerIntroTimelineMock, System.Boolean isDuel)
    // Offset: 0x101EA50
    void SetTimelineMock(GlobalNamespace::MultiplayerTimelineMock* multiplayerIntroTimelineMock, bool isDuel);
    // public System.Void Completed()
    // Offset: 0x101EB88
    void Completed();
    // public System.Void .ctor()
    // Offset: 0x101EBC4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerIntroAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerIntroAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerIntroAnimationController*, creationType>()));
    }
  }; // MultiplayerIntroAnimationController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerIntroAnimationController), 140 + sizeof(bool)> __GlobalNamespace_MultiplayerIntroAnimationControllerSizeCheck;
  static_assert(sizeof(MultiplayerIntroAnimationController) == 0x8D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroAnimationController*, "", "MultiplayerIntroAnimationController");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::OnValidate
// Il2CppName: OnValidate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::SetBeforeIntroValue
// Il2CppName: SetBeforeIntroValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::PlayIntroAnimation
// Il2CppName: PlayIntroAnimation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::GetFullIntroAnimationTime
// Il2CppName: GetFullIntroAnimationTime
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::BindTimeline
// Il2CppName: BindTimeline
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::BindRingsAndSetTiming
// Il2CppName: BindRingsAndSetTiming
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::TransitionToAfterIntroAnimationState
// Il2CppName: TransitionToAfterIntroAnimationState
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::CalculatePlayerIndexSequence
// Il2CppName: CalculatePlayerIndexSequence
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::SetTimelineMock
// Il2CppName: SetTimelineMock
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::Completed
// Il2CppName: Completed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
