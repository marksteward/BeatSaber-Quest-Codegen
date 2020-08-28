// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ParametricBoxFrameController
  class ParametricBoxFrameController;
  // Forward declaring type: ParametricBoxFakeGlowController
  class ParametricBoxFakeGlowController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StretchableObstacle
  class StretchableObstacle : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _edgeSize
    // Offset: 0x18
    float edgeSize;
    // private System.Single _coreOffset
    // Offset: 0x1C
    float coreOffset;
    // private System.Single _addColorMultiplier
    // Offset: 0x20
    float addColorMultiplier;
    // private System.Single _obstacleCoreLerpToWhiteFactor
    // Offset: 0x24
    float obstacleCoreLerpToWhiteFactor;
    // private UnityEngine.Transform _obstacleCore
    // Offset: 0x28
    UnityEngine::Transform* obstacleCore;
    // private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    // Offset: 0x30
    ::Array<GlobalNamespace::MaterialPropertyBlockController*>* materialPropertyBlockControllers;
    // private ParametricBoxFrameController _obstacleFrame
    // Offset: 0x38
    GlobalNamespace::ParametricBoxFrameController* obstacleFrame;
    // private ParametricBoxFakeGlowController _obstacleFakeGlow
    // Offset: 0x40
    GlobalNamespace::ParametricBoxFakeGlowController* obstacleFakeGlow;
    // private UnityEngine.Bounds _bounds
    // Offset: 0x48
    UnityEngine::Bounds bounds;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // Get static field: static private readonly System.Int32 _uvScaleID
    static int _get__uvScaleID();
    // Set static field: static private readonly System.Int32 _uvScaleID
    static void _set__uvScaleID(int value);
    // Get static field: static private readonly System.Int32 _tintColorID
    static int _get__tintColorID();
    // Set static field: static private readonly System.Int32 _tintColorID
    static void _set__tintColorID(int value);
    // Get static field: static private readonly System.Int32 _addColorID
    static int _get__addColorID();
    // Set static field: static private readonly System.Int32 _addColorID
    static void _set__addColorID(int value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0xBA8E3C
    UnityEngine::Bounds get_bounds();
    // public System.Void SetSizeAndColor(System.Single width, System.Single height, System.Single length, UnityEngine.Color color)
    // Offset: 0xBA8E50
    void SetSizeAndColor(float width, float height, float length, UnityEngine::Color color);
    // protected System.Void OnValidate()
    // Offset: 0xBA92E4
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0xBA9350
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StretchableObstacle* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xBA9364
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // StretchableObstacle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StretchableObstacle*, "", "StretchableObstacle");
#pragma pack(pop)
