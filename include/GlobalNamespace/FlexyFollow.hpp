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
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FlexyFollow
  class FlexyFollow : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.GameObject _followObject
    // Offset: 0x18
    UnityEngine::GameObject* followObject;
    // public System.Single _followSpeed
    // Offset: 0x20
    float followSpeed;
    // public UnityEngine.Vector3 _offset
    // Offset: 0x24
    UnityEngine::Vector3 offset;
    // public System.Boolean _fixedXOffset
    // Offset: 0x30
    bool fixedXOffset;
    // public System.Boolean _fixedYOffset
    // Offset: 0x31
    bool fixedYOffset;
    // public System.Boolean _fixedZOffset
    // Offset: 0x32
    bool fixedZOffset;
    // public System.Boolean _useLocalPosition
    // Offset: 0x33
    bool useLocalPosition;
    // private UnityEngine.Transform _followTransform
    // Offset: 0x38
    UnityEngine::Transform* followTransform;
    // private UnityEngine.Transform _transform
    // Offset: 0x40
    UnityEngine::Transform* transform;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void Start()
    // Offset: 0xCB1F1C
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0xCB2094
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xCB2228
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlexyFollow* New_ctor();
  }; // FlexyFollow
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlexyFollow*, "", "FlexyFollow");
#pragma pack(pop)
