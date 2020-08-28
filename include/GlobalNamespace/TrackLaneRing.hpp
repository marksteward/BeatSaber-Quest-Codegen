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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TrackLaneRing
  class TrackLaneRing : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _prevRotZ
    // Offset: 0x18
    float prevRotZ;
    // private System.Single _rotZ
    // Offset: 0x1C
    float rotZ;
    // private System.Single _destRotZ
    // Offset: 0x20
    float destRotZ;
    // private System.Single _rotationSpeed
    // Offset: 0x24
    float rotationSpeed;
    // private System.Single _prevPosZ
    // Offset: 0x28
    float prevPosZ;
    // private System.Single _posZ
    // Offset: 0x2C
    float posZ;
    // private System.Single _destPosZ
    // Offset: 0x30
    float destPosZ;
    // private System.Single _moveSpeed
    // Offset: 0x34
    float moveSpeed;
    // private UnityEngine.Vector3 _positionOffset
    // Offset: 0x38
    UnityEngine::Vector3 positionOffset;
    // private UnityEngine.Transform _transform
    // Offset: 0x48
    UnityEngine::Transform* transform;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Single get_destRotZ()
    // Offset: 0xC46614
    float get_destRotZ();
    // public System.Void Init(UnityEngine.Vector3 position, UnityEngine.Vector3 positionOffset)
    // Offset: 0xC4661C
    void Init(UnityEngine::Vector3 position, UnityEngine::Vector3 positionOffset);
    // public System.Void FixedUpdateRing(System.Single fixedDeltaTime)
    // Offset: 0xC46710
    void FixedUpdateRing(float fixedDeltaTime);
    // public System.Void LateUpdateRing(System.Single interpolationFactor)
    // Offset: 0xC467D0
    void LateUpdateRing(float interpolationFactor);
    // public System.Void SetDestRotation(System.Single destRotZ, System.Single rotateSpeed)
    // Offset: 0xC46890
    void SetDestRotation(float destRotZ, float rotateSpeed);
    // public System.Single GetRotation()
    // Offset: 0xC46898
    float GetRotation();
    // public System.Single GetDestinationRotation()
    // Offset: 0xC468A0
    float GetDestinationRotation();
    // public System.Void SetPosition(System.Single destPosZ, System.Single moveSpeed)
    // Offset: 0xC468A8
    void SetPosition(float destPosZ, float moveSpeed);
    // public System.Void .ctor()
    // Offset: 0xC468B0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TrackLaneRing* New_ctor();
  }; // TrackLaneRing
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRing*, "", "TrackLaneRing");
#pragma pack(pop)
