// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockPlayerGamePoseGenerator
#include "GlobalNamespace/MockPlayerGamePoseGenerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMockPlayerScoreCalculator
  class IMockPlayerScoreCalculator;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: NoteCutDirection
  struct NoteCutDirection;
  // Forward declaring type: MockNoteData
  class MockNoteData;
  // Forward declaring type: MockObstacleData
  class MockObstacleData;
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Pose
  struct Pose;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerGamePoseGeneratorAI
  class MockPlayerGamePoseGeneratorAI : public GlobalNamespace::MockPlayerGamePoseGenerator {
    public:
    // Nested type: GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3
    struct $SendPoses$d__3;
    // private readonly IMockPlayerScoreCalculator _scoreCalculator
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMockPlayerScoreCalculator*) == 0x8);
    // private System.Int32 _lastKnowScore
    // Size: 0x4
    // Offset: 0x40
    int lastKnowScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MockPlayerGamePoseGeneratorAI
    MockPlayerGamePoseGeneratorAI(GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator_ = {}, int lastKnowScore_ = {}) noexcept : scoreCalculator{scoreCalculator_}, lastKnowScore{lastKnowScore_} {}
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, IMockPlayerScoreCalculator scoreCalculator, System.Boolean leftHanded)
    // Offset: 0x23B5810
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerGamePoseGeneratorAI* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator, bool leftHanded) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayerGamePoseGeneratorAI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerGamePoseGeneratorAI*, creationType>(multiplayerSessionManager, gameplayRpcManager, scoreCalculator, leftHanded)));
    }
    // static private UnityEngine.Vector3 GetCutDirection(NoteCutDirection cutDirection)
    // Offset: 0x23B5928
    static UnityEngine::Vector3 GetCutDirection(GlobalNamespace::NoteCutDirection cutDirection);
    // static private UnityEngine.Vector3 GetNotePosition(System.Int32 lineCount, MockNoteData noteData)
    // Offset: 0x23B5B34
    static UnityEngine::Vector3 GetNotePosition(int lineCount, GlobalNamespace::MockNoteData* noteData);
    // static private UnityEngine.Vector3 Blerp(UnityEngine.Vector3 prevStart, UnityEngine.Vector3 prevEnd, UnityEngine.Vector3 currStart, UnityEngine.Vector3 currEnd, System.Single t)
    // Offset: 0x23B5BC4
    static UnityEngine::Vector3 Blerp(UnityEngine::Vector3 prevStart, UnityEngine::Vector3 prevEnd, UnityEngine::Vector3 currStart, UnityEngine::Vector3 currEnd, float t);
    // private UnityEngine.Pose ProcessNotes(MockNoteData[] notes, UnityEngine.Vector3 handDirection, ref System.Int32 noteIndex, ref System.Int32 prevHitScore, ref System.Int32 nextHitScore, MockNoteData[] bombs, ref System.Int32 bombIndex, System.Int32 lineCount, System.Single songTime, out System.Boolean wasHitOrMiss)
    // Offset: 0x23B5D9C
    UnityEngine::Pose ProcessNotes(::Array<GlobalNamespace::MockNoteData*>* notes, UnityEngine::Vector3 handDirection, int& noteIndex, int& prevHitScore, int& nextHitScore, ::Array<GlobalNamespace::MockNoteData*>* bombs, int& bombIndex, int lineCount, float songTime, bool& wasHitOrMiss);
    // private UnityEngine.Pose ProcessObstacles(MockObstacleData[] obstacles, ref System.Int32 obstacleIndex, System.Int32 lineCount, UnityEngine.Pose prevHeadPose, UnityEngine.Pose leftHandPose, UnityEngine.Pose rightHandPose, System.Single songTime)
    // Offset: 0x23B7080
    UnityEngine::Pose ProcessObstacles(::Array<GlobalNamespace::MockObstacleData*>* obstacles, int& obstacleIndex, int lineCount, UnityEngine::Pose prevHeadPose, UnityEngine::Pose leftHandPose, UnityEngine::Pose rightHandPose, float songTime);
    // private System.Void UpdateScore(ref System.Int32 currentScore, ref System.Int32 currentCombo, ref System.Int32 currentMultiplier, System.Int32 hitScore, System.Int32 lineCount, UnityEngine.Pose lastPose, UnityEngine.Pose currentPose, System.Single lastSongTime, System.Single songTime, MockNoteData noteData, MockNoteData nextNoteData)
    // Offset: 0x23B7430
    void UpdateScore(int& currentScore, int& currentCombo, int& currentMultiplier, int hitScore, int lineCount, UnityEngine::Pose lastPose, UnityEngine::Pose currentPose, float lastSongTime, float songTime, GlobalNamespace::MockNoteData* noteData, GlobalNamespace::MockNoteData* nextNoteData);
    // public override System.Void SendPoses(System.Single introStartTime, MockBeatmapData beatmapData, GameplayModifiers gameplayModifiers, System.Threading.CancellationToken cancellationToken, System.Action onSongFinished)
    // Offset: 0x23B583C
    // Implemented from: MockPlayerGamePoseGenerator
    // Base method: System.Void MockPlayerGamePoseGenerator::SendPoses(System.Single introStartTime, MockBeatmapData beatmapData, GameplayModifiers gameplayModifiers, System.Threading.CancellationToken cancellationToken, System.Action onSongFinished)
    void SendPoses(float introStartTime, GlobalNamespace::MockBeatmapData* beatmapData, GlobalNamespace::GameplayModifiers* gameplayModifiers, System::Threading::CancellationToken cancellationToken, System::Action* onSongFinished);
    // public override System.Void SimulateFail()
    // Offset: 0x23B7B7C
    // Implemented from: MockPlayerGamePoseGenerator
    // Base method: System.Void MockPlayerGamePoseGenerator::SimulateFail()
    void SimulateFail();
  }; // MockPlayerGamePoseGeneratorAI
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerGamePoseGeneratorAI), 64 + sizeof(int)> __GlobalNamespace_MockPlayerGamePoseGeneratorAISizeCheck;
  static_assert(sizeof(MockPlayerGamePoseGeneratorAI) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerGamePoseGeneratorAI*, "", "MockPlayerGamePoseGeneratorAI");
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetCutDirection
// Il2CppName: GetCutDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetCutDirection)> {
  const MethodInfo* get() {
    static auto* cutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI*), "GetCutDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutDirection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetNotePosition
// Il2CppName: GetNotePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(int, GlobalNamespace::MockNoteData*)>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetNotePosition)> {
  const MethodInfo* get() {
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "MockNoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI*), "GetNotePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineCount, noteData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::Blerp
// Il2CppName: Blerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::Blerp)> {
  const MethodInfo* get() {
    static auto* prevStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* prevEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* currStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* currEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI*), "Blerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prevStart, prevEnd, currStart, currEnd, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessNotes
// Il2CppName: ProcessNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Pose (GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(::Array<GlobalNamespace::MockNoteData*>*, UnityEngine::Vector3, int&, int&, int&, ::Array<GlobalNamespace::MockNoteData*>*, int&, int, float, bool&)>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessNotes)> {
  const MethodInfo* get() {
    static auto* notes = &classof(::Array<::Array<GlobalNamespace::MockNoteData*>*>*)->byval_arg;
    static auto* handDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* noteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* prevHitScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* nextHitScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bombs = &classof(::Array<::Array<GlobalNamespace::MockNoteData*>*>*)->byval_arg;
    static auto* bombIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* wasHitOrMiss = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI*), "ProcessNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notes, handDirection, noteIndex, prevHitScore, nextHitScore, bombs, bombIndex, lineCount, songTime, wasHitOrMiss});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessObstacles
// Il2CppName: ProcessObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Pose (GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(::Array<GlobalNamespace::MockObstacleData*>*, int&, int, UnityEngine::Pose, UnityEngine::Pose, UnityEngine::Pose, float)>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessObstacles)> {
  const MethodInfo* get() {
    static auto* obstacles = &classof(::Array<::Array<GlobalNamespace::MockObstacleData*>*>*)->byval_arg;
    static auto* obstacleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* prevHeadPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    static auto* leftHandPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    static auto* rightHandPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI*), "ProcessObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacles, obstacleIndex, lineCount, prevHeadPose, leftHandPose, rightHandPose, songTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::UpdateScore
// Il2CppName: UpdateScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(int&, int&, int&, int, int, UnityEngine::Pose, UnityEngine::Pose, float, float, GlobalNamespace::MockNoteData*, GlobalNamespace::MockNoteData*)>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::UpdateScore)> {
  const MethodInfo* get() {
    static auto* currentScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* currentCombo = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* currentMultiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* hitScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lastPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    static auto* currentPose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    static auto* lastSongTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "MockNoteData")->byval_arg;
    static auto* nextNoteData = &::il2cpp_utils::GetClassFromName("", "MockNoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI*), "UpdateScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentScore, currentCombo, currentMultiplier, hitScore, lineCount, lastPose, currentPose, lastSongTime, songTime, noteData, nextNoteData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::SendPoses
// Il2CppName: SendPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(float, GlobalNamespace::MockBeatmapData*, GlobalNamespace::GameplayModifiers*, System::Threading::CancellationToken, System::Action*)>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::SendPoses)> {
  const MethodInfo* get() {
    static auto* introStartTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "MockBeatmapData")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    static auto* onSongFinished = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI*), "SendPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{introStartTime, beatmapData, gameplayModifiers, cancellationToken, onSongFinished});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::SimulateFail
// Il2CppName: SimulateFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::SimulateFail)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI*), "SimulateFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
