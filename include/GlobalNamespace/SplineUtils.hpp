// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SplineUtils
  // [] Offset: FFFFFFFF
  class SplineUtils : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SplineUtils
    SplineUtils() noexcept {}
    // static public UnityEngine.Vector3 Interpolate(UnityEngine.Vector3 t0, UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 t1, System.Single f)
    // Offset: 0xF3DAF0
    static UnityEngine::Vector3 Interpolate(UnityEngine::Vector3 t0, UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 t1, float f);
  }; // SplineUtils
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SplineUtils*, "", "SplineUtils");
