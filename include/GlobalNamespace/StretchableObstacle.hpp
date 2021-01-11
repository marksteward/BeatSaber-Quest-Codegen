// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: StretchableObstacle
  // [] Offset: FFFFFFFF
  class StretchableObstacle : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _edgeSize
    // Size: 0x4
    // Offset: 0x18
    float edgeSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _coreOffset
    // Size: 0x4
    // Offset: 0x1C
    float coreOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _addColorMultiplier
    // Size: 0x4
    // Offset: 0x20
    float addColorMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _obstacleCoreLerpToWhiteFactor
    // Size: 0x4
    // Offset: 0x24
    float obstacleCoreLerpToWhiteFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDC6138
    // private UnityEngine.Transform _obstacleCore
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* obstacleCore;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::MaterialPropertyBlockController*>* materialPropertyBlockControllers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MaterialPropertyBlockController*>*) == 0x8);
    // private ParametricBoxFrameController _obstacleFrame
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ParametricBoxFrameController* obstacleFrame;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ParametricBoxFrameController*) == 0x8);
    // private ParametricBoxFakeGlowController _obstacleFakeGlow
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ParametricBoxFakeGlowController* obstacleFakeGlow;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ParametricBoxFakeGlowController*) == 0x8);
    // private UnityEngine.Bounds _bounds
    // Size: 0x18
    // Offset: 0x48
    UnityEngine::Bounds bounds;
    // Field size check
    static_assert(sizeof(UnityEngine::Bounds) == 0x18);
    // Creating value type constructor for type: StretchableObstacle
    StretchableObstacle(float edgeSize_ = {}, float coreOffset_ = {}, float addColorMultiplier_ = {}, float obstacleCoreLerpToWhiteFactor_ = {}, UnityEngine::Transform* obstacleCore_ = {}, ::Array<GlobalNamespace::MaterialPropertyBlockController*>* materialPropertyBlockControllers_ = {}, GlobalNamespace::ParametricBoxFrameController* obstacleFrame_ = {}, GlobalNamespace::ParametricBoxFakeGlowController* obstacleFakeGlow_ = {}, UnityEngine::Bounds bounds_ = {}) noexcept : edgeSize{edgeSize_}, coreOffset{coreOffset_}, addColorMultiplier{addColorMultiplier_}, obstacleCoreLerpToWhiteFactor{obstacleCoreLerpToWhiteFactor_}, obstacleCore{obstacleCore_}, materialPropertyBlockControllers{materialPropertyBlockControllers_}, obstacleFrame{obstacleFrame_}, obstacleFakeGlow{obstacleFakeGlow_}, bounds{bounds_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDC61A0
    // Get static field: static private readonly System.Int32 _uvScaleID
    static int _get__uvScaleID();
    // Set static field: static private readonly System.Int32 _uvScaleID
    static void _set__uvScaleID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDC61B0
    // Get static field: static private readonly System.Int32 _tintColorID
    static int _get__tintColorID();
    // Set static field: static private readonly System.Int32 _tintColorID
    static void _set__tintColorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDC61C0
    // Get static field: static private readonly System.Int32 _addColorID
    static int _get__addColorID();
    // Set static field: static private readonly System.Int32 _addColorID
    static void _set__addColorID(int value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0xF48B44
    UnityEngine::Bounds get_bounds();
    // public System.Void SetSizeAndColor(System.Single width, System.Single height, System.Single length, UnityEngine.Color color)
    // Offset: 0xF48B58
    void SetSizeAndColor(float width, float height, float length, UnityEngine::Color color);
    // protected System.Void OnValidate()
    // Offset: 0xF48FEC
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0xF49074
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StretchableObstacle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StretchableObstacle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StretchableObstacle*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xF49088
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // StretchableObstacle
  static check_size<sizeof(StretchableObstacle), 72 + sizeof(UnityEngine::Bounds)> __GlobalNamespace_StretchableObstacleSizeCheck;
  static_assert(sizeof(StretchableObstacle) == 0x60);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StretchableObstacle*, "", "StretchableObstacle");
