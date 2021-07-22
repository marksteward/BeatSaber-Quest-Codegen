// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: TrackLaneRingsRotationEffect
  class TrackLaneRingsRotationEffect;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRingsRotationEffectSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackLaneRingsRotationEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType
    struct RotationStepType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: TrackLaneRingsRotationEffectSpawner/RotationStepType
    // [TokenAttribute] Offset: FFFFFFFF
    struct RotationStepType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: RotationStepType
      constexpr RotationStepType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range0ToMax
      static constexpr const int Range0ToMax = 0;
      // Get static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range0ToMax
      static GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType _get_Range0ToMax();
      // Set static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range0ToMax
      static void _set_Range0ToMax(GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType value);
      // static field const value: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range
      static constexpr const int Range = 1;
      // Get static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range
      static GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType _get_Range();
      // Set static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range
      static void _set_Range(GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType value);
      // static field const value: static public TrackLaneRingsRotationEffectSpawner/RotationStepType MaxOr0
      static constexpr const int MaxOr0 = 2;
      // Get static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType MaxOr0
      static GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType _get_MaxOr0();
      // Set static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType MaxOr0
      static void _set_MaxOr0(GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType value);
    }; // TrackLaneRingsRotationEffectSpawner/RotationStepType
    #pragma pack(pop)
    static check_size<sizeof(TrackLaneRingsRotationEffectSpawner::RotationStepType), 0 + sizeof(int)> __GlobalNamespace_TrackLaneRingsRotationEffectSpawner_RotationStepTypeSizeCheck;
    static_assert(sizeof(TrackLaneRingsRotationEffectSpawner::RotationStepType) == 0x4);
    // private TrackLaneRingsRotationEffect _trackLaneRingsRotationEffect
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TrackLaneRingsRotationEffect* trackLaneRingsRotationEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TrackLaneRingsRotationEffect*) == 0x8);
    // [SpaceAttribute] Offset: 0xE05C50
    // private BeatmapEventType _beatmapEventType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType beatmapEventType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0xE05C88
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x24
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationStep
    // Size: 0x4
    // Offset: 0x28
    float rotationStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private TrackLaneRingsRotationEffectSpawner/RotationStepType _rotationStepType
    // Size: 0x4
    // Offset: 0x2C
    GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType rotationStepType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType) == 0x4);
    // private System.Int32 _rotationPropagationSpeed
    // Size: 0x4
    // Offset: 0x30
    int rotationPropagationSpeed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _rotationFlexySpeed
    // Size: 0x4
    // Offset: 0x34
    float rotationFlexySpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xE05D00
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // Creating value type constructor for type: TrackLaneRingsRotationEffectSpawner
    TrackLaneRingsRotationEffectSpawner(GlobalNamespace::TrackLaneRingsRotationEffect* trackLaneRingsRotationEffect_ = {}, GlobalNamespace::BeatmapEventType beatmapEventType_ = {}, float rotation_ = {}, float rotationStep_ = {}, GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType rotationStepType_ = {}, int rotationPropagationSpeed_ = {}, float rotationFlexySpeed_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}) noexcept : trackLaneRingsRotationEffect{trackLaneRingsRotationEffect_}, beatmapEventType{beatmapEventType_}, rotation{rotation_}, rotationStep{rotationStep_}, rotationStepType{rotationStepType_}, rotationPropagationSpeed{rotationPropagationSpeed_}, rotationFlexySpeed{rotationFlexySpeed_}, beatmapObjectCallbackController{beatmapObjectCallbackController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1070638
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1070728
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x1070828
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x1070924
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRingsRotationEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrackLaneRingsRotationEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRingsRotationEffectSpawner*, creationType>()));
    }
  }; // TrackLaneRingsRotationEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(TrackLaneRingsRotationEffectSpawner), 56 + sizeof(GlobalNamespace::IBeatmapObjectCallbackController*)> __GlobalNamespace_TrackLaneRingsRotationEffectSpawnerSizeCheck;
  static_assert(sizeof(TrackLaneRingsRotationEffectSpawner) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsRotationEffectSpawner*, "", "TrackLaneRingsRotationEffectSpawner");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType, "", "TrackLaneRingsRotationEffectSpawner/RotationStepType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffectSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffectSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffectSpawner*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
