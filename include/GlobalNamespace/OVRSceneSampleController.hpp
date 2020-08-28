// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPlayerController
  class OVRPlayerController;
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
  // Forward declaring type: OVRGridCube
  class OVRGridCube;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRSceneSampleController
  class OVRSceneSampleController : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.KeyCode quitKey
    // Offset: 0x18
    UnityEngine::KeyCode quitKey;
    // public UnityEngine.Texture fadeInTexture
    // Offset: 0x20
    UnityEngine::Texture* fadeInTexture;
    // public System.Single speedRotationIncrement
    // Offset: 0x28
    float speedRotationIncrement;
    // private OVRPlayerController playerController
    // Offset: 0x30
    GlobalNamespace::OVRPlayerController* playerController;
    // private OVRCameraRig cameraController
    // Offset: 0x38
    GlobalNamespace::OVRCameraRig* cameraController;
    // public System.String layerName
    // Offset: 0x40
    ::Il2CppString* layerName;
    // private System.Boolean visionMode
    // Offset: 0x48
    bool visionMode;
    // private OVRGridCube gridCube
    // Offset: 0x50
    GlobalNamespace::OVRGridCube* gridCube;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // private System.Void Awake()
    // Offset: 0xF4FBBC
    void Awake();
    // private System.Void Start()
    // Offset: 0xF4FD64
    void Start();
    // private System.Void Update()
    // Offset: 0xF4FE60
    void Update();
    // private System.Void UpdateVisionMode()
    // Offset: 0xF50010
    void UpdateVisionMode();
    // private System.Void UpdateSpeedAndRotationScaleMultiplier()
    // Offset: 0xF500F4
    void UpdateSpeedAndRotationScaleMultiplier();
    // private System.Void UpdateRecenterPose()
    // Offset: 0xF4FF44
    void UpdateRecenterPose();
    // public System.Void .ctor()
    // Offset: 0xF501E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRSceneSampleController* New_ctor();
  }; // OVRSceneSampleController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneSampleController*, "", "OVRSceneSampleController");
#pragma pack(pop)
