// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPose
#include "GlobalNamespace/OVRPose.hpp"
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
  // Forward declaring type: OVRMixedRealityCaptureConfiguration
  class OVRMixedRealityCaptureConfiguration;
  // Forward declaring type: CompositionMethod
  struct OVRManager_CompositionMethod;
  // Forward declaring type: TrackingOrigin
  struct OVRManager_TrackingOrigin;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OVRComposition
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
    // protected System.Void .ctor(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera, OVRMixedRealityCaptureConfiguration configuration)
    // Offset: 0x127E19C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRComposition* New_ctor(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRComposition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRComposition*, creationType>(parentObject, mainCamera, configuration)));
    }
    // public OVRManager/CompositionMethod CompositionMethod()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRManager_CompositionMethod CompositionMethod();
    // public System.Void Update(UnityEngine.GameObject gameObject, UnityEngine.Camera mainCamera, OVRMixedRealityCaptureConfiguration configuration, OVRManager/TrackingOrigin trackingOrigin)
    // Offset: 0xFFFFFFFF
    void Update(UnityEngine::GameObject* gameObject, UnityEngine::Camera* mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration, GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin);
    // public System.Void Cleanup()
    // Offset: 0xFFFFFFFF
    void Cleanup();
    // public System.Void RecenterPose()
    // Offset: 0x127E388
    void RecenterPose();
    // public System.Void RefreshCameraRig(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera)
    // Offset: 0x127E1DC
    void RefreshCameraRig(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera);
    // public OVRPose ComputeCameraWorldSpacePose(OVRPlugin/CameraExtrinsics extrinsics)
    // Offset: 0x127E38C
    GlobalNamespace::OVRPose ComputeCameraWorldSpacePose(GlobalNamespace::OVRPlugin::CameraExtrinsics extrinsics);
    // public OVRPose ComputeCameraTrackingSpacePose(OVRPlugin/CameraExtrinsics extrinsics)
    // Offset: 0x127E3E0
    GlobalNamespace::OVRPose ComputeCameraTrackingSpacePose(GlobalNamespace::OVRPlugin::CameraExtrinsics extrinsics);
  }; // OVRComposition
  #pragma pack(pop)
  static check_size<sizeof(OVRComposition), 36 + sizeof(GlobalNamespace::OVRPose)> __GlobalNamespace_OVRCompositionSizeCheck;
  static_assert(sizeof(OVRComposition) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRComposition*, "", "OVRComposition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRComposition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRComposition::CompositionMethod
// Il2CppName: CompositionMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRManager_CompositionMethod (GlobalNamespace::OVRComposition::*)()>(&GlobalNamespace::OVRComposition::CompositionMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRComposition*), "CompositionMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRComposition::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRComposition::*)(UnityEngine::GameObject*, UnityEngine::Camera*, GlobalNamespace::OVRMixedRealityCaptureConfiguration*, GlobalNamespace::OVRManager_TrackingOrigin)>(&GlobalNamespace::OVRComposition::Update)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* mainCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "OVRMixedRealityCaptureConfiguration")->byval_arg;
    static auto* trackingOrigin = &::il2cpp_utils::GetClassFromName("", "OVRManager/TrackingOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRComposition*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject, mainCamera, configuration, trackingOrigin});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRComposition::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRComposition::*)()>(&GlobalNamespace::OVRComposition::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRComposition*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRComposition::RecenterPose
// Il2CppName: RecenterPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRComposition::*)()>(&GlobalNamespace::OVRComposition::RecenterPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRComposition*), "RecenterPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRComposition::RefreshCameraRig
// Il2CppName: RefreshCameraRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRComposition::*)(UnityEngine::GameObject*, UnityEngine::Camera*)>(&GlobalNamespace::OVRComposition::RefreshCameraRig)> {
  static const MethodInfo* get() {
    static auto* parentObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* mainCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRComposition*), "RefreshCameraRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentObject, mainCamera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRComposition::ComputeCameraWorldSpacePose
// Il2CppName: ComputeCameraWorldSpacePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (GlobalNamespace::OVRComposition::*)(GlobalNamespace::OVRPlugin::CameraExtrinsics)>(&GlobalNamespace::OVRComposition::ComputeCameraWorldSpacePose)> {
  static const MethodInfo* get() {
    static auto* extrinsics = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraExtrinsics")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRComposition*), "ComputeCameraWorldSpacePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extrinsics});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRComposition::ComputeCameraTrackingSpacePose
// Il2CppName: ComputeCameraTrackingSpacePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (GlobalNamespace::OVRComposition::*)(GlobalNamespace::OVRPlugin::CameraExtrinsics)>(&GlobalNamespace::OVRComposition::ComputeCameraTrackingSpacePose)> {
  static const MethodInfo* get() {
    static auto* extrinsics = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraExtrinsics")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRComposition*), "ComputeCameraTrackingSpacePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extrinsics});
  }
};
