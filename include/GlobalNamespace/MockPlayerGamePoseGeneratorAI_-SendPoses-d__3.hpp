// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockPlayerGamePoseGeneratorAI
#include "GlobalNamespace/MockPlayerGamePoseGeneratorAI.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: MockNoteData
  class MockNoteData;
  // Forward declaring type: MockObstacleData
  class MockObstacleData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x118
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerGamePoseGeneratorAI/<SendPoses>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct MockPlayerGamePoseGeneratorAI::$SendPoses$d__3/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public MockPlayerGamePoseGeneratorAI <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MockPlayerGamePoseGeneratorAI* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayerGamePoseGeneratorAI*) == 0x8);
    // public MockBeatmapData beatmapData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MockBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockBeatmapData*) == 0x8);
    // public System.Single introStartTime
    // Size: 0x4
    // Offset: 0x38
    float introStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: introStartTime and: gameplayModifiers
    char __padding4[0x4] = {};
    // public GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x48
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public System.Action onSongFinished
    // Size: 0x8
    // Offset: 0x50
    System::Action* onSongFinished;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Single <startTime>5__2
    // Size: 0x4
    // Offset: 0x58
    float $startTime$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <lastEventTime>5__3
    // Size: 0x4
    // Offset: 0x5C
    float $lastEventTime$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Pose <lastHeadPose>5__4
    // Size: 0x1C
    // Offset: 0x60
    UnityEngine::Pose $lastHeadPose$5__4;
    // Field size check
    static_assert(sizeof(UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose <lastLeftHandPose>5__5
    // Size: 0x1C
    // Offset: 0x7C
    UnityEngine::Pose $lastLeftHandPose$5__5;
    // Field size check
    static_assert(sizeof(UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose <lastRightHandPose>5__6
    // Size: 0x1C
    // Offset: 0x98
    UnityEngine::Pose $lastRightHandPose$5__6;
    // Field size check
    static_assert(sizeof(UnityEngine::Pose) == 0x1C);
    // private System.Single <timeScale>5__7
    // Size: 0x4
    // Offset: 0xB4
    float $timeScale$5__7;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <lastSongTime>5__8
    // Size: 0x4
    // Offset: 0xB8
    float $lastSongTime$5__8;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <lineCount>5__9
    // Size: 0x4
    // Offset: 0xBC
    int $lineCount$5__9;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private MockNoteData[] <leftNotes>5__10
    // Size: 0x8
    // Offset: 0xC0
    ::Array<GlobalNamespace::MockNoteData*>* $leftNotes$5__10;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MockNoteData*>*) == 0x8);
    // private MockNoteData[] <rightNotes>5__11
    // Size: 0x8
    // Offset: 0xC8
    ::Array<GlobalNamespace::MockNoteData*>* $rightNotes$5__11;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MockNoteData*>*) == 0x8);
    // private MockNoteData[] <bombNotes>5__12
    // Size: 0x8
    // Offset: 0xD0
    ::Array<GlobalNamespace::MockNoteData*>* $bombNotes$5__12;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MockNoteData*>*) == 0x8);
    // private MockObstacleData[] <obstacles>5__13
    // Size: 0x8
    // Offset: 0xD8
    ::Array<GlobalNamespace::MockObstacleData*>* $obstacles$5__13;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MockObstacleData*>*) == 0x8);
    // private System.Int32 <leftNoteIndex>5__14
    // Size: 0x4
    // Offset: 0xE0
    int $leftNoteIndex$5__14;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <rightNoteIndex>5__15
    // Size: 0x4
    // Offset: 0xE4
    int $rightNoteIndex$5__15;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <bombNoteIndex>5__16
    // Size: 0x4
    // Offset: 0xE8
    int $bombNoteIndex$5__16;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <obstacleIndex>5__17
    // Size: 0x4
    // Offset: 0xEC
    int $obstacleIndex$5__17;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <prevLeftScore>5__18
    // Size: 0x4
    // Offset: 0xF0
    int $prevLeftScore$5__18;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <prevRightScore>5__19
    // Size: 0x4
    // Offset: 0xF4
    int $prevRightScore$5__19;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <nextLeftHitScore>5__20
    // Size: 0x4
    // Offset: 0xF8
    int $nextLeftHitScore$5__20;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <nextRightHitScore>5__21
    // Size: 0x4
    // Offset: 0xFC
    int $nextRightHitScore$5__21;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <score>5__22
    // Size: 0x4
    // Offset: 0x100
    int $score$5__22;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <combo>5__23
    // Size: 0x4
    // Offset: 0x104
    int $combo$5__23;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <multiplier>5__24
    // Size: 0x4
    // Offset: 0x108
    int $multiplier$5__24;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <fullCombo>5__25
    // Size: 0x1
    // Offset: 0x10C
    bool $fullCombo$5__25;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <hasFinishedLevel>5__26
    // Size: 0x1
    // Offset: 0x10D
    bool $hasFinishedLevel$5__26;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $hasFinishedLevel$5__26 and: $$u__1
    char __padding32[0x2] = {};
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x110
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $SendPoses$d__3
    constexpr $SendPoses$d__3(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::MockPlayerGamePoseGeneratorAI* $$4__this_ = {}, GlobalNamespace::MockBeatmapData* beatmapData_ = {}, float introStartTime_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Action* onSongFinished_ = {}, float $startTime$5__2_ = {}, float $lastEventTime$5__3_ = {}, UnityEngine::Pose $lastHeadPose$5__4_ = {}, UnityEngine::Pose $lastLeftHandPose$5__5_ = {}, UnityEngine::Pose $lastRightHandPose$5__6_ = {}, float $timeScale$5__7_ = {}, float $lastSongTime$5__8_ = {}, int $lineCount$5__9_ = {}, ::Array<GlobalNamespace::MockNoteData*>* $leftNotes$5__10_ = {}, ::Array<GlobalNamespace::MockNoteData*>* $rightNotes$5__11_ = {}, ::Array<GlobalNamespace::MockNoteData*>* $bombNotes$5__12_ = {}, ::Array<GlobalNamespace::MockObstacleData*>* $obstacles$5__13_ = {}, int $leftNoteIndex$5__14_ = {}, int $rightNoteIndex$5__15_ = {}, int $bombNoteIndex$5__16_ = {}, int $obstacleIndex$5__17_ = {}, int $prevLeftScore$5__18_ = {}, int $prevRightScore$5__19_ = {}, int $nextLeftHitScore$5__20_ = {}, int $nextRightHitScore$5__21_ = {}, int $score$5__22_ = {}, int $combo$5__23_ = {}, int $multiplier$5__24_ = {}, bool $fullCombo$5__25_ = {}, bool $hasFinishedLevel$5__26_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, beatmapData{beatmapData_}, introStartTime{introStartTime_}, gameplayModifiers{gameplayModifiers_}, cancellationToken{cancellationToken_}, onSongFinished{onSongFinished_}, $startTime$5__2{$startTime$5__2_}, $lastEventTime$5__3{$lastEventTime$5__3_}, $lastHeadPose$5__4{$lastHeadPose$5__4_}, $lastLeftHandPose$5__5{$lastLeftHandPose$5__5_}, $lastRightHandPose$5__6{$lastRightHandPose$5__6_}, $timeScale$5__7{$timeScale$5__7_}, $lastSongTime$5__8{$lastSongTime$5__8_}, $lineCount$5__9{$lineCount$5__9_}, $leftNotes$5__10{$leftNotes$5__10_}, $rightNotes$5__11{$rightNotes$5__11_}, $bombNotes$5__12{$bombNotes$5__12_}, $obstacles$5__13{$obstacles$5__13_}, $leftNoteIndex$5__14{$leftNoteIndex$5__14_}, $rightNoteIndex$5__15{$rightNoteIndex$5__15_}, $bombNoteIndex$5__16{$bombNoteIndex$5__16_}, $obstacleIndex$5__17{$obstacleIndex$5__17_}, $prevLeftScore$5__18{$prevLeftScore$5__18_}, $prevRightScore$5__19{$prevRightScore$5__19_}, $nextLeftHitScore$5__20{$nextLeftHitScore$5__20_}, $nextRightHitScore$5__21{$nextRightHitScore$5__21_}, $score$5__22{$score$5__22_}, $combo$5__23{$combo$5__23_}, $multiplier$5__24{$multiplier$5__24_}, $fullCombo$5__25{$fullCombo$5__25_}, $hasFinishedLevel$5__26{$hasFinishedLevel$5__26_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value);
    // Get instance field: public MockPlayerGamePoseGeneratorAI <>4__this
    GlobalNamespace::MockPlayerGamePoseGeneratorAI* _get_$$4__this();
    // Set instance field: public MockPlayerGamePoseGeneratorAI <>4__this
    void _set_$$4__this(GlobalNamespace::MockPlayerGamePoseGeneratorAI* value);
    // Get instance field: public MockBeatmapData beatmapData
    GlobalNamespace::MockBeatmapData* _get_beatmapData();
    // Set instance field: public MockBeatmapData beatmapData
    void _set_beatmapData(GlobalNamespace::MockBeatmapData* value);
    // Get instance field: public System.Single introStartTime
    float _get_introStartTime();
    // Set instance field: public System.Single introStartTime
    void _set_introStartTime(float value);
    // Get instance field: public GameplayModifiers gameplayModifiers
    GlobalNamespace::GameplayModifiers* _get_gameplayModifiers();
    // Set instance field: public GameplayModifiers gameplayModifiers
    void _set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: public System.Action onSongFinished
    System::Action* _get_onSongFinished();
    // Set instance field: public System.Action onSongFinished
    void _set_onSongFinished(System::Action* value);
    // Get instance field: private System.Single <startTime>5__2
    float _get_$startTime$5__2();
    // Set instance field: private System.Single <startTime>5__2
    void _set_$startTime$5__2(float value);
    // Get instance field: private System.Single <lastEventTime>5__3
    float _get_$lastEventTime$5__3();
    // Set instance field: private System.Single <lastEventTime>5__3
    void _set_$lastEventTime$5__3(float value);
    // Get instance field: private UnityEngine.Pose <lastHeadPose>5__4
    UnityEngine::Pose _get_$lastHeadPose$5__4();
    // Set instance field: private UnityEngine.Pose <lastHeadPose>5__4
    void _set_$lastHeadPose$5__4(UnityEngine::Pose value);
    // Get instance field: private UnityEngine.Pose <lastLeftHandPose>5__5
    UnityEngine::Pose _get_$lastLeftHandPose$5__5();
    // Set instance field: private UnityEngine.Pose <lastLeftHandPose>5__5
    void _set_$lastLeftHandPose$5__5(UnityEngine::Pose value);
    // Get instance field: private UnityEngine.Pose <lastRightHandPose>5__6
    UnityEngine::Pose _get_$lastRightHandPose$5__6();
    // Set instance field: private UnityEngine.Pose <lastRightHandPose>5__6
    void _set_$lastRightHandPose$5__6(UnityEngine::Pose value);
    // Get instance field: private System.Single <timeScale>5__7
    float _get_$timeScale$5__7();
    // Set instance field: private System.Single <timeScale>5__7
    void _set_$timeScale$5__7(float value);
    // Get instance field: private System.Single <lastSongTime>5__8
    float _get_$lastSongTime$5__8();
    // Set instance field: private System.Single <lastSongTime>5__8
    void _set_$lastSongTime$5__8(float value);
    // Get instance field: private System.Int32 <lineCount>5__9
    int _get_$lineCount$5__9();
    // Set instance field: private System.Int32 <lineCount>5__9
    void _set_$lineCount$5__9(int value);
    // Get instance field: private MockNoteData[] <leftNotes>5__10
    ::Array<GlobalNamespace::MockNoteData*>* _get_$leftNotes$5__10();
    // Set instance field: private MockNoteData[] <leftNotes>5__10
    void _set_$leftNotes$5__10(::Array<GlobalNamespace::MockNoteData*>* value);
    // Get instance field: private MockNoteData[] <rightNotes>5__11
    ::Array<GlobalNamespace::MockNoteData*>* _get_$rightNotes$5__11();
    // Set instance field: private MockNoteData[] <rightNotes>5__11
    void _set_$rightNotes$5__11(::Array<GlobalNamespace::MockNoteData*>* value);
    // Get instance field: private MockNoteData[] <bombNotes>5__12
    ::Array<GlobalNamespace::MockNoteData*>* _get_$bombNotes$5__12();
    // Set instance field: private MockNoteData[] <bombNotes>5__12
    void _set_$bombNotes$5__12(::Array<GlobalNamespace::MockNoteData*>* value);
    // Get instance field: private MockObstacleData[] <obstacles>5__13
    ::Array<GlobalNamespace::MockObstacleData*>* _get_$obstacles$5__13();
    // Set instance field: private MockObstacleData[] <obstacles>5__13
    void _set_$obstacles$5__13(::Array<GlobalNamespace::MockObstacleData*>* value);
    // Get instance field: private System.Int32 <leftNoteIndex>5__14
    int _get_$leftNoteIndex$5__14();
    // Set instance field: private System.Int32 <leftNoteIndex>5__14
    void _set_$leftNoteIndex$5__14(int value);
    // Get instance field: private System.Int32 <rightNoteIndex>5__15
    int _get_$rightNoteIndex$5__15();
    // Set instance field: private System.Int32 <rightNoteIndex>5__15
    void _set_$rightNoteIndex$5__15(int value);
    // Get instance field: private System.Int32 <bombNoteIndex>5__16
    int _get_$bombNoteIndex$5__16();
    // Set instance field: private System.Int32 <bombNoteIndex>5__16
    void _set_$bombNoteIndex$5__16(int value);
    // Get instance field: private System.Int32 <obstacleIndex>5__17
    int _get_$obstacleIndex$5__17();
    // Set instance field: private System.Int32 <obstacleIndex>5__17
    void _set_$obstacleIndex$5__17(int value);
    // Get instance field: private System.Int32 <prevLeftScore>5__18
    int _get_$prevLeftScore$5__18();
    // Set instance field: private System.Int32 <prevLeftScore>5__18
    void _set_$prevLeftScore$5__18(int value);
    // Get instance field: private System.Int32 <prevRightScore>5__19
    int _get_$prevRightScore$5__19();
    // Set instance field: private System.Int32 <prevRightScore>5__19
    void _set_$prevRightScore$5__19(int value);
    // Get instance field: private System.Int32 <nextLeftHitScore>5__20
    int _get_$nextLeftHitScore$5__20();
    // Set instance field: private System.Int32 <nextLeftHitScore>5__20
    void _set_$nextLeftHitScore$5__20(int value);
    // Get instance field: private System.Int32 <nextRightHitScore>5__21
    int _get_$nextRightHitScore$5__21();
    // Set instance field: private System.Int32 <nextRightHitScore>5__21
    void _set_$nextRightHitScore$5__21(int value);
    // Get instance field: private System.Int32 <score>5__22
    int _get_$score$5__22();
    // Set instance field: private System.Int32 <score>5__22
    void _set_$score$5__22(int value);
    // Get instance field: private System.Int32 <combo>5__23
    int _get_$combo$5__23();
    // Set instance field: private System.Int32 <combo>5__23
    void _set_$combo$5__23(int value);
    // Get instance field: private System.Int32 <multiplier>5__24
    int _get_$multiplier$5__24();
    // Set instance field: private System.Int32 <multiplier>5__24
    void _set_$multiplier$5__24(int value);
    // Get instance field: private System.Boolean <fullCombo>5__25
    bool _get_$fullCombo$5__25();
    // Set instance field: private System.Boolean <fullCombo>5__25
    void _set_$fullCombo$5__25(bool value);
    // Get instance field: private System.Boolean <hasFinishedLevel>5__26
    bool _get_$hasFinishedLevel$5__26();
    // Set instance field: private System.Boolean <hasFinishedLevel>5__26
    void _set_$hasFinishedLevel$5__26(bool value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    System::Runtime::CompilerServices::TaskAwaiter _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter value);
    // private System.Void MoveNext()
    // Offset: 0xF0D6CC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xF0D6D4
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MockPlayerGamePoseGeneratorAI/<SendPoses>d__3
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerGamePoseGeneratorAI::$SendPoses$d__3), 272 + sizeof(System::Runtime::CompilerServices::TaskAwaiter)> __GlobalNamespace_MockPlayerGamePoseGeneratorAI_$SendPoses$d__3SizeCheck;
  static_assert(sizeof(MockPlayerGamePoseGeneratorAI::$SendPoses$d__3) == 0x118);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3, "", "MockPlayerGamePoseGeneratorAI/<SendPoses>d__3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3::*)()>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGeneratorAI::$SendPoses$d__3), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
