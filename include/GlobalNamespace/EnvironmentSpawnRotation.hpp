// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: SpawnRotationProcessor
  class SpawnRotationProcessor;
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
  // Size: 0x44
  // Autogenerated type: EnvironmentSpawnRotation
  // [] Offset: FFFFFFFF
  class EnvironmentSpawnRotation : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _aheadTime
    // Size: 0x4
    // Offset: 0x18
    float aheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x1C
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xDC71A4
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC71C4
    // private System.Action`1<UnityEngine.Quaternion> didRotateEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<UnityEngine::Quaternion>* didRotateEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Quaternion>*) == 0x8);
    // private SpawnRotationProcessor _spawnRotationProcessor
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SpawnRotationProcessor* spawnRotationProcessor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SpawnRotationProcessor*) == 0x8);
    // private BeatmapObjectCallbackController/BeatmapEventCallbackData _eventCallbackData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData* eventCallbackData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData*) == 0x8);
    // private System.Single _currentRotation
    // Size: 0x4
    // Offset: 0x40
    float currentRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: EnvironmentSpawnRotation
    EnvironmentSpawnRotation(float aheadTime_ = {}, float smooth_ = {}, GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, System::Action_1<UnityEngine::Quaternion>* didRotateEvent_ = {}, GlobalNamespace::SpawnRotationProcessor* spawnRotationProcessor_ = {}, GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData* eventCallbackData_ = {}, float currentRotation_ = {}) noexcept : aheadTime{aheadTime_}, smooth{smooth_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, didRotateEvent{didRotateEvent_}, spawnRotationProcessor{spawnRotationProcessor_}, eventCallbackData{eventCallbackData_}, currentRotation{currentRotation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDC71B4
    // Get static field: static private readonly System.Int32 _spawnRotationID
    static int _get__spawnRotationID();
    // Set static field: static private readonly System.Int32 _spawnRotationID
    static void _set__spawnRotationID(int value);
    // public System.Void add_didRotateEvent(System.Action`1<UnityEngine.Quaternion> value)
    // Offset: 0x1A0E670
    void add_didRotateEvent(System::Action_1<UnityEngine::Quaternion>* value);
    // public System.Void remove_didRotateEvent(System.Action`1<UnityEngine.Quaternion> value)
    // Offset: 0x1A0E714
    void remove_didRotateEvent(System::Action_1<UnityEngine::Quaternion>* value);
    // public System.Single get_targetRotation()
    // Offset: 0x1A0E7B8
    float get_targetRotation();
    // public System.Single get_currentRotation()
    // Offset: 0x1A0E7D4
    float get_currentRotation();
    // protected System.Void Awake()
    // Offset: 0x1A0E7DC
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1A0E7FC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A0E940
    void OnDestroy();
    // private System.Void BeatmapEventAtNoteSpawnCallback(BeatmapEventData beatmapEventData)
    // Offset: 0x1A0E964
    void BeatmapEventAtNoteSpawnCallback(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // protected System.Void Update()
    // Offset: 0x1A0EA5C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1A0EC40
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentSpawnRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentSpawnRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentSpawnRotation*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1A0ECB4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // EnvironmentSpawnRotation
  static check_size<sizeof(EnvironmentSpawnRotation), 64 + sizeof(float)> __GlobalNamespace_EnvironmentSpawnRotationSizeCheck;
  static_assert(sizeof(EnvironmentSpawnRotation) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSpawnRotation*, "", "EnvironmentSpawnRotation");
#pragma pack(pop)
