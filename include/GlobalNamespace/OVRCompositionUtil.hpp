// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRManager
#include "GlobalNamespace/OVRManager.hpp"
// Including type: OVRBoundary
#include "GlobalNamespace/OVRBoundary.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRCompositionUtil
  // [] Offset: FFFFFFFF
  class OVRCompositionUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRCompositionUtil
    OVRCompositionUtil() noexcept {}
    // static public System.Void SafeDestroy(UnityEngine.GameObject obj)
    // Offset: 0x106C6C4
    static void SafeDestroy(UnityEngine::GameObject* obj);
    // static public System.Void SafeDestroy(ref UnityEngine.GameObject obj)
    // Offset: 0x106C764
    static void SafeDestroy(UnityEngine::GameObject*& obj);
    // static public OVRPlugin/CameraDevice ConvertCameraDevice(OVRManager/CameraDevice cameraDevice)
    // Offset: 0x106C7FC
    static GlobalNamespace::OVRPlugin::CameraDevice ConvertCameraDevice(GlobalNamespace::OVRManager::CameraDevice cameraDevice);
    // static public OVRBoundary/BoundaryType ToBoundaryType(OVRManager/VirtualGreenScreenType type)
    // Offset: 0x106C828
    static GlobalNamespace::OVRBoundary::BoundaryType ToBoundaryType(GlobalNamespace::OVRManager::VirtualGreenScreenType type);
    // static public UnityEngine.Vector3 GetWorldPosition(UnityEngine.Vector3 trackingSpacePosition)
    // Offset: 0x106C8BC
    static UnityEngine::Vector3 GetWorldPosition(UnityEngine::Vector3 trackingSpacePosition);
    // static public System.Single GetMaximumBoundaryDistance(UnityEngine.Camera camera, OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x106C968
    static float GetMaximumBoundaryDistance(UnityEngine::Camera* camera, GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // static public UnityEngine.Mesh BuildBoundaryMesh(OVRBoundary/BoundaryType boundaryType, System.Single topY, System.Single bottomY)
    // Offset: 0x106CBA8
    static UnityEngine::Mesh* BuildBoundaryMesh(GlobalNamespace::OVRBoundary::BoundaryType boundaryType, float topY, float bottomY);
    // public System.Void .ctor()
    // Offset: 0x106D050
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCompositionUtil* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRCompositionUtil::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCompositionUtil*, creationType>()));
    }
  }; // OVRCompositionUtil
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCompositionUtil*, "", "OVRCompositionUtil");
