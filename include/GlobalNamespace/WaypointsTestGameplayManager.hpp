// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterSpawnController
  class BTSCharacterSpawnController;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: StandardGameplaySceneSetupData
  class StandardGameplaySceneSetupData;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: WaypointsTestGameplayManager
  // [TokenAttribute] Offset: FFFFFFFF
  class WaypointsTestGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Vector3 _outerCapsuleStart
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 outerCapsuleStart;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _outerCapsuleEnd
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 outerCapsuleEnd;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _outerCapsuleRadius
    // Size: 0x4
    // Offset: 0x30
    float outerCapsuleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xEB2FF4
    // private UnityEngine.Vector3 _innerSphereOffset
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 innerSphereOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _innerSphereRadius
    // Size: 0x4
    // Offset: 0x40
    float innerSphereRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xEB303C
    // private UnityEngine.LayerMask _layersToColliderWith
    // Size: 0x4
    // Offset: 0x44
    UnityEngine::LayerMask layersToColliderWith;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // [InjectAttribute] Offset: 0xEB3074
    // private readonly BTSCharacterSpawnController _characterSpawnController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BTSCharacterSpawnController* characterSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacterSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xEB3084
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0xEB3094
    // private readonly StandardGameplaySceneSetupData _standardSceneSetupData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::StandardGameplaySceneSetupData* standardSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardGameplaySceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0xEB30A4
    // private readonly GameplayCoreSceneSetupData _levelSceneSetupData
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::GameplayCoreSceneSetupData* levelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // private UnityEngine.Transform _target
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Boolean _firstPosSaved
    // Size: 0x1
    // Offset: 0x70
    bool firstPosSaved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _speedSaved
    // Size: 0x1
    // Offset: 0x71
    bool speedSaved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: speedSaved and: lastFramePos
    char __padding12[0x2] = {};
    // private UnityEngine.Vector3 _lastFramePos
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 lastFramePos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _lastFrameSpeed
    // Size: 0x4
    // Offset: 0x80
    float lastFrameSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestFrameSpeed
    // Size: 0x4
    // Offset: 0x84
    float biggestFrameSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestFrameSpeedSongTime
    // Size: 0x4
    // Offset: 0x88
    float biggestFrameSpeedSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestAcceleration
    // Size: 0x4
    // Offset: 0x8C
    float biggestAcceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestAccelerationSongTime
    // Size: 0x4
    // Offset: 0x90
    float biggestAccelerationSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: WaypointsTestGameplayManager
    WaypointsTestGameplayManager(UnityEngine::Vector3 outerCapsuleStart_ = {}, UnityEngine::Vector3 outerCapsuleEnd_ = {}, float outerCapsuleRadius_ = {}, UnityEngine::Vector3 innerSphereOffset_ = {}, float innerSphereRadius_ = {}, UnityEngine::LayerMask layersToColliderWith_ = {}, GlobalNamespace::BTSCharacterSpawnController* characterSpawnController_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSource_ = {}, GlobalNamespace::StandardGameplaySceneSetupData* standardSceneSetupData_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* levelSceneSetupData_ = {}, UnityEngine::Transform* target_ = {}, bool firstPosSaved_ = {}, bool speedSaved_ = {}, UnityEngine::Vector3 lastFramePos_ = {}, float lastFrameSpeed_ = {}, float biggestFrameSpeed_ = {}, float biggestFrameSpeedSongTime_ = {}, float biggestAcceleration_ = {}, float biggestAccelerationSongTime_ = {}) noexcept : outerCapsuleStart{outerCapsuleStart_}, outerCapsuleEnd{outerCapsuleEnd_}, outerCapsuleRadius{outerCapsuleRadius_}, innerSphereOffset{innerSphereOffset_}, innerSphereRadius{innerSphereRadius_}, layersToColliderWith{layersToColliderWith_}, characterSpawnController{characterSpawnController_}, audioTimeSource{audioTimeSource_}, standardSceneSetupData{standardSceneSetupData_}, levelSceneSetupData{levelSceneSetupData_}, target{target_}, firstPosSaved{firstPosSaved_}, speedSaved{speedSaved_}, lastFramePos{lastFramePos_}, lastFrameSpeed{lastFrameSpeed_}, biggestFrameSpeed{biggestFrameSpeed_}, biggestFrameSpeedSongTime{biggestFrameSpeedSongTime_}, biggestAcceleration{biggestAcceleration_}, biggestAccelerationSongTime{biggestAccelerationSongTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Vector3 _outerCapsuleStart
    UnityEngine::Vector3 _get__outerCapsuleStart();
    // Set instance field: private UnityEngine.Vector3 _outerCapsuleStart
    void _set__outerCapsuleStart(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 _outerCapsuleEnd
    UnityEngine::Vector3 _get__outerCapsuleEnd();
    // Set instance field: private UnityEngine.Vector3 _outerCapsuleEnd
    void _set__outerCapsuleEnd(UnityEngine::Vector3 value);
    // Get instance field: private System.Single _outerCapsuleRadius
    float _get__outerCapsuleRadius();
    // Set instance field: private System.Single _outerCapsuleRadius
    void _set__outerCapsuleRadius(float value);
    // Get instance field: private UnityEngine.Vector3 _innerSphereOffset
    UnityEngine::Vector3 _get__innerSphereOffset();
    // Set instance field: private UnityEngine.Vector3 _innerSphereOffset
    void _set__innerSphereOffset(UnityEngine::Vector3 value);
    // Get instance field: private System.Single _innerSphereRadius
    float _get__innerSphereRadius();
    // Set instance field: private System.Single _innerSphereRadius
    void _set__innerSphereRadius(float value);
    // Get instance field: private UnityEngine.LayerMask _layersToColliderWith
    UnityEngine::LayerMask _get__layersToColliderWith();
    // Set instance field: private UnityEngine.LayerMask _layersToColliderWith
    void _set__layersToColliderWith(UnityEngine::LayerMask value);
    // Get instance field: private readonly BTSCharacterSpawnController _characterSpawnController
    GlobalNamespace::BTSCharacterSpawnController* _get__characterSpawnController();
    // Set instance field: private readonly BTSCharacterSpawnController _characterSpawnController
    void _set__characterSpawnController(GlobalNamespace::BTSCharacterSpawnController* value);
    // Get instance field: private readonly IAudioTimeSource _audioTimeSource
    GlobalNamespace::IAudioTimeSource* _get__audioTimeSource();
    // Set instance field: private readonly IAudioTimeSource _audioTimeSource
    void _set__audioTimeSource(GlobalNamespace::IAudioTimeSource* value);
    // Get instance field: private readonly StandardGameplaySceneSetupData _standardSceneSetupData
    GlobalNamespace::StandardGameplaySceneSetupData* _get__standardSceneSetupData();
    // Set instance field: private readonly StandardGameplaySceneSetupData _standardSceneSetupData
    void _set__standardSceneSetupData(GlobalNamespace::StandardGameplaySceneSetupData* value);
    // Get instance field: private readonly GameplayCoreSceneSetupData _levelSceneSetupData
    GlobalNamespace::GameplayCoreSceneSetupData* _get__levelSceneSetupData();
    // Set instance field: private readonly GameplayCoreSceneSetupData _levelSceneSetupData
    void _set__levelSceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData* value);
    // Get instance field: private UnityEngine.Transform _target
    UnityEngine::Transform* _get__target();
    // Set instance field: private UnityEngine.Transform _target
    void _set__target(UnityEngine::Transform* value);
    // Get instance field: private System.Boolean _firstPosSaved
    bool _get__firstPosSaved();
    // Set instance field: private System.Boolean _firstPosSaved
    void _set__firstPosSaved(bool value);
    // Get instance field: private System.Boolean _speedSaved
    bool _get__speedSaved();
    // Set instance field: private System.Boolean _speedSaved
    void _set__speedSaved(bool value);
    // Get instance field: private UnityEngine.Vector3 _lastFramePos
    UnityEngine::Vector3 _get__lastFramePos();
    // Set instance field: private UnityEngine.Vector3 _lastFramePos
    void _set__lastFramePos(UnityEngine::Vector3 value);
    // Get instance field: private System.Single _lastFrameSpeed
    float _get__lastFrameSpeed();
    // Set instance field: private System.Single _lastFrameSpeed
    void _set__lastFrameSpeed(float value);
    // Get instance field: private System.Single _biggestFrameSpeed
    float _get__biggestFrameSpeed();
    // Set instance field: private System.Single _biggestFrameSpeed
    void _set__biggestFrameSpeed(float value);
    // Get instance field: private System.Single _biggestFrameSpeedSongTime
    float _get__biggestFrameSpeedSongTime();
    // Set instance field: private System.Single _biggestFrameSpeedSongTime
    void _set__biggestFrameSpeedSongTime(float value);
    // Get instance field: private System.Single _biggestAcceleration
    float _get__biggestAcceleration();
    // Set instance field: private System.Single _biggestAcceleration
    void _set__biggestAcceleration(float value);
    // Get instance field: private System.Single _biggestAccelerationSongTime
    float _get__biggestAccelerationSongTime();
    // Set instance field: private System.Single _biggestAccelerationSongTime
    void _set__biggestAccelerationSongTime(float value);
    // protected System.Void Start()
    // Offset: 0x2071378
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0x20713B8
    void LateUpdate();
    // protected System.Void OnDestroy()
    // Offset: 0x207290C
    void OnDestroy();
    // private System.String GetBar(System.Single songTime)
    // Offset: 0x2072708
    ::Il2CppString* GetBar(float songTime);
    // protected System.Void OnDrawGizmos()
    // Offset: 0x2072E50
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0x207313C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaypointsTestGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::WaypointsTestGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaypointsTestGameplayManager*, creationType>()));
    }
  }; // WaypointsTestGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(WaypointsTestGameplayManager), 144 + sizeof(float)> __GlobalNamespace_WaypointsTestGameplayManagerSizeCheck;
  static_assert(sizeof(WaypointsTestGameplayManager) == 0x94);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WaypointsTestGameplayManager*, "", "WaypointsTestGameplayManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestGameplayManager::*)()>(&GlobalNamespace::WaypointsTestGameplayManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestGameplayManager::*)()>(&GlobalNamespace::WaypointsTestGameplayManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestGameplayManager::*)()>(&GlobalNamespace::WaypointsTestGameplayManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::GetBar
// Il2CppName: GetBar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::WaypointsTestGameplayManager::*)(float)>(&GlobalNamespace::WaypointsTestGameplayManager::GetBar)> {
  static const MethodInfo* get() {
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "GetBar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestGameplayManager::*)()>(&GlobalNamespace::WaypointsTestGameplayManager::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
