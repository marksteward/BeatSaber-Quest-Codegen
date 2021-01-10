// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPose
#include "GlobalNamespace/OVRPose.hpp"
// Including type: OVRManager
#include "GlobalNamespace/OVRManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: OVRComposition
  // [] Offset: FFFFFFFF
  class OVRComposition : public ::Il2CppObject {
    public:
    // public System.Boolean cameraInTrackingSpace
    // Size: 0x1
    // Offset: 0x10
    bool cameraInTrackingSpace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cameraInTrackingSpace and: cameraRig
    char __padding0[0x7] = {};
    // public OVRCameraRig cameraRig
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OVRCameraRig* cameraRig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRCameraRig*) == 0x8);
    // protected System.Boolean usingLastAttachedNodePose
    // Size: 0x1
    // Offset: 0x20
    bool usingLastAttachedNodePose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usingLastAttachedNodePose and: lastAttachedNodePose
    char __padding2[0x3] = {};
    // protected OVRPose lastAttachedNodePose
    // Size: 0x1C
    // Offset: 0x24
    GlobalNamespace::OVRPose lastAttachedNodePose;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPose) == 0x1C);
    // Creating value type constructor for type: OVRComposition
    OVRComposition(bool cameraInTrackingSpace_ = {}, GlobalNamespace::OVRCameraRig* cameraRig_ = {}, bool usingLastAttachedNodePose_ = {}, GlobalNamespace::OVRPose lastAttachedNodePose_ = {}) noexcept : cameraInTrackingSpace{cameraInTrackingSpace_}, cameraRig{cameraRig_}, usingLastAttachedNodePose{usingLastAttachedNodePose_}, lastAttachedNodePose{lastAttachedNodePose_} {}
    // protected System.Void .ctor(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera)
    // Offset: 0x106BE80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRComposition* New_ctor(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRComposition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRComposition*, creationType>(parentObject, mainCamera)));
    }
    // public OVRManager/CompositionMethod CompositionMethod()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRManager::CompositionMethod CompositionMethod();
    // public System.Void Update(UnityEngine.GameObject gameObject, UnityEngine.Camera mainCamera, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject, System.Func`2<UnityEngine.Camera,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject)
    // Offset: 0xFFFFFFFF
    void Update(UnityEngine::GameObject* gameObject, UnityEngine::Camera* mainCamera, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject);
    // public System.Void Cleanup()
    // Offset: 0xFFFFFFFF
    void Cleanup();
    // public System.Void RecenterPose()
    // Offset: 0x106C078
    void RecenterPose();
    // public System.Void RefreshCameraRig(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera)
    // Offset: 0x106BEC0
    void RefreshCameraRig(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera);
    // public OVRPose ComputeCameraWorldSpacePose(OVRPlugin/CameraExtrinsics extrinsics, OVRPlugin/Posef calibrationRawPose)
    // Offset: 0x106C07C
    GlobalNamespace::OVRPose ComputeCameraWorldSpacePose(GlobalNamespace::OVRPlugin::CameraExtrinsics extrinsics, GlobalNamespace::OVRPlugin::Posef calibrationRawPose);
    // public OVRPose ComputeCameraTrackingSpacePose(OVRPlugin/CameraExtrinsics extrinsics, OVRPlugin/Posef calibrationRawPose)
    // Offset: 0x106C0E4
    GlobalNamespace::OVRPose ComputeCameraTrackingSpacePose(GlobalNamespace::OVRPlugin::CameraExtrinsics extrinsics, GlobalNamespace::OVRPlugin::Posef calibrationRawPose);
  }; // OVRComposition
  static check_size<sizeof(OVRComposition), 36 + sizeof(GlobalNamespace::OVRPose)> __GlobalNamespace_OVRCompositionSizeCheck;
  static_assert(sizeof(OVRComposition) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRComposition*, "", "OVRComposition");
#pragma pack(pop)
