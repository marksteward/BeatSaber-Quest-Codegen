// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRBoundary
#include "GlobalNamespace/OVRBoundary.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRBoundary/BoundaryTestResult
  struct OVRBoundary::BoundaryTestResult : public System::ValueType {
    public:
    // public System.Boolean IsTriggering
    // Offset: 0x0
    bool IsTriggering;
    // public System.Single ClosestDistance
    // Offset: 0x4
    float ClosestDistance;
    // public UnityEngine.Vector3 ClosestPoint
    // Offset: 0x8
    UnityEngine::Vector3 ClosestPoint;
    // public UnityEngine.Vector3 ClosestPointNormal
    // Offset: 0x14
    UnityEngine::Vector3 ClosestPointNormal;
    // Creating value type constructor for type: BoundaryTestResult
    constexpr BoundaryTestResult(bool IsTriggering_ = {}, float ClosestDistance_ = {}, UnityEngine::Vector3 ClosestPoint_ = {}, UnityEngine::Vector3 ClosestPointNormal_ = {}) : IsTriggering{IsTriggering_}, ClosestDistance{ClosestDistance_}, ClosestPoint{ClosestPoint_}, ClosestPointNormal{ClosestPointNormal_} {}
  }; // OVRBoundary/BoundaryTestResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBoundary::BoundaryTestResult, "", "OVRBoundary/BoundaryTestResult");
#pragma pack(pop)
