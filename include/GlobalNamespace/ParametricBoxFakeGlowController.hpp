// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ParametricBoxFakeGlowController
  // [RequireComponent] Offset: D14364
  // [RequireComponent] Offset: D14364
  // [ExecuteInEditMode] Offset: D14364
  class ParametricBoxFakeGlowController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single width
    // Size: 0x4
    // Offset: 0x18
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single height
    // Size: 0x4
    // Offset: 0x1C
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x20
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single edgeSize
    // Size: 0x4
    // Offset: 0x24
    float edgeSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single edgeSizeMultiplier
    // Size: 0x4
    // Offset: 0x28
    float edgeSizeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: color and: meshRenderer
    char __padding5[0x4] = {};
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // Creating value type constructor for type: ParametricBoxFakeGlowController
    ParametricBoxFakeGlowController(float width_ = {}, float height_ = {}, float length_ = {}, float edgeSize_ = {}, float edgeSizeMultiplier_ = {}, UnityEngine::Color color_ = {}, UnityEngine::MeshRenderer* meshRenderer_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}) noexcept : width{width_}, height{height_}, length{length_}, edgeSize{edgeSize_}, edgeSizeMultiplier{edgeSizeMultiplier_}, color{color_}, meshRenderer{meshRenderer_}, materialPropertyBlockController{materialPropertyBlockController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD14C90
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD14CA0
    // Get static field: static private readonly System.Int32 _sizeParamsID
    static int _get__sizeParamsID();
    // Set static field: static private readonly System.Int32 _sizeParamsID
    static void _set__sizeParamsID(int value);
    // public System.Void set_localPosition(UnityEngine.Vector3 value)
    // Offset: 0x1D16F88
    void set_localPosition(UnityEngine::Vector3 value);
    // protected System.Void Awake()
    // Offset: 0x1D16FD4
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1D16FF4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1D171A8
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x1D17028
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1D171C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametricBoxFakeGlowController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ParametricBoxFakeGlowController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametricBoxFakeGlowController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D171E4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ParametricBoxFakeGlowController
  #pragma pack(pop)
  static check_size<sizeof(ParametricBoxFakeGlowController), 72 + sizeof(GlobalNamespace::MaterialPropertyBlockController*)> __GlobalNamespace_ParametricBoxFakeGlowControllerSizeCheck;
  static_assert(sizeof(ParametricBoxFakeGlowController) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxFakeGlowController*, "", "ParametricBoxFakeGlowController");
