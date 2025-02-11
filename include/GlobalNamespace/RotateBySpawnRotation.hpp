// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: SpawnRotationProcessor
  class SpawnRotationProcessor;
  // Forward declaring type: BeatmapEventCallbackData
  class BeatmapEventCallbackData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RotateBySpawnRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class RotateBySpawnRotation : public UnityEngine::MonoBehaviour {
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
    // [InjectAttribute] Offset: 0xEB25A0
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private readonly SpawnRotationProcessor _spawnRotationProcessor
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SpawnRotationProcessor* spawnRotationProcessor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SpawnRotationProcessor*) == 0x8);
    // private BeatmapEventCallbackData _eventCallbackData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapEventCallbackData* eventCallbackData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventCallbackData*) == 0x8);
    // private System.Single _currentRotation
    // Size: 0x4
    // Offset: 0x38
    float currentRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevRotation
    // Size: 0x4
    // Offset: 0x3C
    float prevRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: RotateBySpawnRotation
    RotateBySpawnRotation(float aheadTime_ = {}, float smooth_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, GlobalNamespace::SpawnRotationProcessor* spawnRotationProcessor_ = {}, GlobalNamespace::BeatmapEventCallbackData* eventCallbackData_ = {}, float currentRotation_ = {}, float prevRotation_ = {}) noexcept : aheadTime{aheadTime_}, smooth{smooth_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, spawnRotationProcessor{spawnRotationProcessor_}, eventCallbackData{eventCallbackData_}, currentRotation{currentRotation_}, prevRotation{prevRotation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Single _aheadTime
    float _get__aheadTime();
    // Set instance field: private System.Single _aheadTime
    void _set__aheadTime(float value);
    // Get instance field: private System.Single _smooth
    float _get__smooth();
    // Set instance field: private System.Single _smooth
    void _set__smooth(float value);
    // Get instance field: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController* _get__beatmapObjectCallbackController();
    // Set instance field: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    void _set__beatmapObjectCallbackController(GlobalNamespace::IBeatmapObjectCallbackController* value);
    // Get instance field: private readonly SpawnRotationProcessor _spawnRotationProcessor
    GlobalNamespace::SpawnRotationProcessor* _get__spawnRotationProcessor();
    // Set instance field: private readonly SpawnRotationProcessor _spawnRotationProcessor
    void _set__spawnRotationProcessor(GlobalNamespace::SpawnRotationProcessor* value);
    // Get instance field: private BeatmapEventCallbackData _eventCallbackData
    GlobalNamespace::BeatmapEventCallbackData* _get__eventCallbackData();
    // Set instance field: private BeatmapEventCallbackData _eventCallbackData
    void _set__eventCallbackData(GlobalNamespace::BeatmapEventCallbackData* value);
    // Get instance field: private System.Single _currentRotation
    float _get__currentRotation();
    // Set instance field: private System.Single _currentRotation
    void _set__currentRotation(float value);
    // Get instance field: private System.Single _prevRotation
    float _get__prevRotation();
    // Set instance field: private System.Single _prevRotation
    void _set__prevRotation(float value);
    // protected System.Void Awake()
    // Offset: 0x1F76F48
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1F76F68
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1F770E4
    void OnDestroy();
    // private System.Void BeatmapEventAtNoteSpawnCallback(BeatmapEventData beatmapEventData)
    // Offset: 0x1F771A0
    void BeatmapEventAtNoteSpawnCallback(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // protected System.Void FixedUpdate()
    // Offset: 0x1F772B0
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x1F7738C
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x1F774BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotateBySpawnRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RotateBySpawnRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotateBySpawnRotation*, creationType>()));
    }
  }; // RotateBySpawnRotation
  #pragma pack(pop)
  static check_size<sizeof(RotateBySpawnRotation), 60 + sizeof(float)> __GlobalNamespace_RotateBySpawnRotationSizeCheck;
  static_assert(sizeof(RotateBySpawnRotation) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RotateBySpawnRotation*, "", "RotateBySpawnRotation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)()>(&GlobalNamespace::RotateBySpawnRotation::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)()>(&GlobalNamespace::RotateBySpawnRotation::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)()>(&GlobalNamespace::RotateBySpawnRotation::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::BeatmapEventAtNoteSpawnCallback
// Il2CppName: BeatmapEventAtNoteSpawnCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::RotateBySpawnRotation::BeatmapEventAtNoteSpawnCallback)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "BeatmapEventAtNoteSpawnCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)()>(&GlobalNamespace::RotateBySpawnRotation::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)()>(&GlobalNamespace::RotateBySpawnRotation::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
