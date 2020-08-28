// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BlueNoiseDithering
  class BlueNoiseDithering;
  // Forward declaring type: RandomValueToShader
  class RandomValueToShader;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BlueNoiseDitheringUpdater
  class BlueNoiseDitheringUpdater : public UnityEngine::MonoBehaviour {
    public:
    // private BlueNoiseDithering _blueNoiseDithering
    // Offset: 0x18
    GlobalNamespace::BlueNoiseDithering* blueNoiseDithering;
    // private RandomValueToShader _randomValueToShader
    // Offset: 0x20
    GlobalNamespace::RandomValueToShader* randomValueToShader;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void OnEnable()
    // Offset: 0x1827FAC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x18280E8
    void OnDisable();
    // public System.Void HandleCameraPreRender(UnityEngine.Camera camera)
    // Offset: 0x18281BC
    void HandleCameraPreRender(UnityEngine::Camera* camera);
    // public System.Void .ctor()
    // Offset: 0x18282CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BlueNoiseDitheringUpdater* New_ctor();
  }; // BlueNoiseDitheringUpdater
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlueNoiseDitheringUpdater*, "", "BlueNoiseDitheringUpdater");
#pragma pack(pop)
