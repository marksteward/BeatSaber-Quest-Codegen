// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ParametricBoxFakeGlowController
  class ParametricBoxFakeGlowController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single width
    // Offset: 0x18
    float width;
    // public System.Single height
    // Offset: 0x1C
    float height;
    // public System.Single length
    // Offset: 0x20
    float length;
    // public System.Single edgeSize
    // Offset: 0x24
    float edgeSize;
    // public System.Single edgeSizeMultiplier
    // Offset: 0x28
    float edgeSizeMultiplier;
    // public UnityEngine.Color color
    // Offset: 0x2C
    UnityEngine::Color color;
    // private UnityEngine.MeshRenderer _meshRenderer
    // Offset: 0x40
    UnityEngine::MeshRenderer* meshRenderer;
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Offset: 0x48
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // Get static field: static private readonly System.Int32 _sizeParamsID
    static int _get__sizeParamsID();
    // Set static field: static private readonly System.Int32 _sizeParamsID
    static void _set__sizeParamsID(int value);
    // public System.Void set_localPosition(UnityEngine.Vector3 value)
    // Offset: 0x182E8E4
    void set_localPosition(UnityEngine::Vector3 value);
    // protected System.Void Awake()
    // Offset: 0x182E930
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x182E950
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x182EB04
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x182E984
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x182EB24
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ParametricBoxFakeGlowController* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x182EB40
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ParametricBoxFakeGlowController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxFakeGlowController*, "", "ParametricBoxFakeGlowController");
#pragma pack(pop)
