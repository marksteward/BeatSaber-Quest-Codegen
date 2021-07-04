// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: MovementHistoryRecorder
  class MovementHistoryRecorder;
  // Forward declaring type: AveragingValueRecorder
  class AveragingValueRecorder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: SaberActivityCounter
  class SaberActivityCounter : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _averageWindowDuration
    // Size: 0x4
    // Offset: 0x18
    float averageWindowDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _valuesPerSecond
    // Size: 0x4
    // Offset: 0x1C
    float valuesPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _increaseSpeed
    // Size: 0x4
    // Offset: 0x20
    float increaseSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _deceraseSpeed
    // Size: 0x4
    // Offset: 0x24
    float deceraseSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _movementSensitivityThreshold
    // Size: 0x4
    // Offset: 0x28
    float movementSensitivityThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: movementSensitivityThreshold and: saberManager
    char __padding4[0x4] = {};
    // [InjectAttribute] Offset: 0xE1F508
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1F518
    // private System.Action`1<System.Single> totalDistanceDidChangeEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<float>* totalDistanceDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // private Saber _leftSaber
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::Saber* leftSaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // private Saber _rightSaber
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::Saber* rightSaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // private UnityEngine.Vector3 _prevLeftSaberTipPos
    // Size: 0xC
    // Offset: 0x50
    UnityEngine::Vector3 prevLeftSaberTipPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevRightSaberTipPos
    // Size: 0xC
    // Offset: 0x5C
    UnityEngine::Vector3 prevRightSaberTipPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevLeftHandPos
    // Size: 0xC
    // Offset: 0x68
    UnityEngine::Vector3 prevLeftHandPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevRightHandPos
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 prevRightHandPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean _hasPrevPos
    // Size: 0x1
    // Offset: 0x80
    bool hasPrevPos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPrevPos and: leftSaberMovementDistance
    char __padding13[0x3] = {};
    // private System.Single _leftSaberMovementDistance
    // Size: 0x4
    // Offset: 0x84
    float leftSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rightSaberMovementDistance
    // Size: 0x4
    // Offset: 0x88
    float rightSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _leftHandMovementDistance
    // Size: 0x4
    // Offset: 0x8C
    float leftHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rightHandMovementDistance
    // Size: 0x4
    // Offset: 0x90
    float rightHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rightHandMovementDistance and: saberMovementHistoryRecorder
    char __padding17[0x4] = {};
    // private MovementHistoryRecorder _saberMovementHistoryRecorder
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MovementHistoryRecorder* saberMovementHistoryRecorder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MovementHistoryRecorder*) == 0x8);
    // private MovementHistoryRecorder _handMovementHistoryRecorder
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::MovementHistoryRecorder* handMovementHistoryRecorder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MovementHistoryRecorder*) == 0x8);
    // Creating value type constructor for type: SaberActivityCounter
    SaberActivityCounter(float averageWindowDuration_ = {}, float valuesPerSecond_ = {}, float increaseSpeed_ = {}, float deceraseSpeed_ = {}, float movementSensitivityThreshold_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, System::Action_1<float>* totalDistanceDidChangeEvent_ = {}, GlobalNamespace::Saber* leftSaber_ = {}, GlobalNamespace::Saber* rightSaber_ = {}, UnityEngine::Vector3 prevLeftSaberTipPos_ = {}, UnityEngine::Vector3 prevRightSaberTipPos_ = {}, UnityEngine::Vector3 prevLeftHandPos_ = {}, UnityEngine::Vector3 prevRightHandPos_ = {}, bool hasPrevPos_ = {}, float leftSaberMovementDistance_ = {}, float rightSaberMovementDistance_ = {}, float leftHandMovementDistance_ = {}, float rightHandMovementDistance_ = {}, GlobalNamespace::MovementHistoryRecorder* saberMovementHistoryRecorder_ = {}, GlobalNamespace::MovementHistoryRecorder* handMovementHistoryRecorder_ = {}) noexcept : averageWindowDuration{averageWindowDuration_}, valuesPerSecond{valuesPerSecond_}, increaseSpeed{increaseSpeed_}, deceraseSpeed{deceraseSpeed_}, movementSensitivityThreshold{movementSensitivityThreshold_}, saberManager{saberManager_}, totalDistanceDidChangeEvent{totalDistanceDidChangeEvent_}, leftSaber{leftSaber_}, rightSaber{rightSaber_}, prevLeftSaberTipPos{prevLeftSaberTipPos_}, prevRightSaberTipPos{prevRightSaberTipPos_}, prevLeftHandPos{prevLeftHandPos_}, prevRightHandPos{prevRightHandPos_}, hasPrevPos{hasPrevPos_}, leftSaberMovementDistance{leftSaberMovementDistance_}, rightSaberMovementDistance{rightSaberMovementDistance_}, leftHandMovementDistance{leftHandMovementDistance_}, rightHandMovementDistance{rightHandMovementDistance_}, saberMovementHistoryRecorder{saberMovementHistoryRecorder_}, handMovementHistoryRecorder{handMovementHistoryRecorder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_totalDistanceDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x10B4568
    void add_totalDistanceDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_totalDistanceDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x10B460C
    void remove_totalDistanceDidChangeEvent(System::Action_1<float>* value);
    // public System.Single get_leftSaberMovementDistance()
    // Offset: 0x10B46B0
    float get_leftSaberMovementDistance();
    // public System.Single get_rightSaberMovementDistance()
    // Offset: 0x10B46B8
    float get_rightSaberMovementDistance();
    // public System.Single get_leftHandMovementDistance()
    // Offset: 0x10B46C0
    float get_leftHandMovementDistance();
    // public System.Single get_rightHandMovementDistance()
    // Offset: 0x10B46C8
    float get_rightHandMovementDistance();
    // public AveragingValueRecorder get_saberMovementAveragingValueRecorder()
    // Offset: 0x10A6E74
    GlobalNamespace::AveragingValueRecorder* get_saberMovementAveragingValueRecorder();
    // public AveragingValueRecorder get_handMovementAveragingValueRecorder()
    // Offset: 0x10A6E90
    GlobalNamespace::AveragingValueRecorder* get_handMovementAveragingValueRecorder();
    // protected System.Void Awake()
    // Offset: 0x10B46D0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x10B4790
    void Start();
    // protected System.Void Update()
    // Offset: 0x10B47B8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x10B4B68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberActivityCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberActivityCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberActivityCounter*, creationType>()));
    }
  }; // SaberActivityCounter
  #pragma pack(pop)
  static check_size<sizeof(SaberActivityCounter), 160 + sizeof(GlobalNamespace::MovementHistoryRecorder*)> __GlobalNamespace_SaberActivityCounterSizeCheck;
  static_assert(sizeof(SaberActivityCounter) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberActivityCounter*, "", "SaberActivityCounter");
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::add_totalDistanceDidChangeEvent
// Il2CppName: add_totalDistanceDidChangeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::remove_totalDistanceDidChangeEvent
// Il2CppName: remove_totalDistanceDidChangeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_leftSaberMovementDistance
// Il2CppName: get_leftSaberMovementDistance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_rightSaberMovementDistance
// Il2CppName: get_rightSaberMovementDistance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_leftHandMovementDistance
// Il2CppName: get_leftHandMovementDistance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_rightHandMovementDistance
// Il2CppName: get_rightHandMovementDistance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_saberMovementAveragingValueRecorder
// Il2CppName: get_saberMovementAveragingValueRecorder
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_handMovementAveragingValueRecorder
// Il2CppName: get_handMovementAveragingValueRecorder
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
