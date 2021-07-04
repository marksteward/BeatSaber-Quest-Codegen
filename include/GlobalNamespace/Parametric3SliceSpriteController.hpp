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
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: Parametric3SliceSpriteController
  // [RequireComponent] Offset: DF55DC
  // [RequireComponent] Offset: DF55DC
  // [ExecuteInEditMode] Offset: DF55DC
  class Parametric3SliceSpriteController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _widthMultiplier
    // Size: 0x4
    // Offset: 0x18
    float widthMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single width
    // Size: 0x4
    // Offset: 0x1C
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x20
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single center
    // Size: 0x4
    // Offset: 0x24
    float center;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Single alphaMultiplier
    // Size: 0x4
    // Offset: 0x38
    float alphaMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minAlpha
    // Size: 0x4
    // Offset: 0x3C
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDF5EC8
    // [RangeAttribute] Offset: 0xDF5EC8
    // public System.Single alphaStart
    // Size: 0x4
    // Offset: 0x40
    float alphaStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDF5F08
    // public System.Single alphaEnd
    // Size: 0x4
    // Offset: 0x44
    float alphaEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x58
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Parametric3SliceSpriteController
    Parametric3SliceSpriteController(float widthMultiplier_ = {}, float width_ = {}, float length_ = {}, float center_ = {}, UnityEngine::Color color_ = {}, float alphaMultiplier_ = {}, float minAlpha_ = {}, float alphaStart_ = {}, float alphaEnd_ = {}, UnityEngine::MeshRenderer* meshRenderer_ = {}, UnityEngine::MeshFilter* meshFilter_ = {}, bool isInitialized_ = {}) noexcept : widthMultiplier{widthMultiplier_}, width{width_}, length{length_}, center{center_}, color{color_}, alphaMultiplier{alphaMultiplier_}, minAlpha{minAlpha_}, alphaStart{alphaStart_}, alphaEnd{alphaEnd_}, meshRenderer{meshRenderer_}, meshFilter{meshFilter_}, isInitialized{isInitialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kMaxWidth
    static constexpr const float kMaxWidth = 10;
    // Get static field: static private System.Single kMaxWidth
    static float _get_kMaxWidth();
    // Set static field: static private System.Single kMaxWidth
    static void _set_kMaxWidth(float value);
    // static field const value: static private System.Single kMaxLength
    static constexpr const float kMaxLength = 1000;
    // Get static field: static private System.Single kMaxLength
    static float _get_kMaxLength();
    // Set static field: static private System.Single kMaxLength
    static void _set_kMaxLength(float value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF5F20
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF5F30
    // Get static field: static private readonly System.Int32 _sizeParamsID
    static int _get__sizeParamsID();
    // Set static field: static private readonly System.Int32 _sizeParamsID
    static void _set__sizeParamsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF5F40
    // Get static field: static private readonly System.Int32 _alphaStartID
    static int _get__alphaStartID();
    // Set static field: static private readonly System.Int32 _alphaStartID
    static void _set__alphaStartID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF5F50
    // Get static field: static private readonly System.Int32 _alphaEndID
    static int _get__alphaEndID();
    // Set static field: static private readonly System.Int32 _alphaEndID
    static void _set__alphaEndID(int value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // Get static field: static private UnityEngine.Mesh _mesh
    static UnityEngine::Mesh* _get__mesh();
    // Set static field: static private UnityEngine.Mesh _mesh
    static void _set__mesh(UnityEngine::Mesh* value);
    // Get static field: static private System.Int32 _instanceCount
    static int _get__instanceCount();
    // Set static field: static private System.Int32 _instanceCount
    static void _set__instanceCount(int value);
    // protected System.Void Awake()
    // Offset: 0x1D8FB08
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1D90228
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1D902A8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1D904F0
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x1D90510
    void OnDestroy();
    // private System.Void Init()
    // Offset: 0x1D8FCA0
    void Init();
    // private UnityEngine.Mesh CreateMesh()
    // Offset: 0x1D8FD20
    UnityEngine::Mesh* CreateMesh();
    // public System.Void Refresh()
    // Offset: 0x1D902E0
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1D90608
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parametric3SliceSpriteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Parametric3SliceSpriteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parametric3SliceSpriteController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D9062C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Parametric3SliceSpriteController
  #pragma pack(pop)
  static check_size<sizeof(Parametric3SliceSpriteController), 88 + sizeof(bool)> __GlobalNamespace_Parametric3SliceSpriteControllerSizeCheck;
  static_assert(sizeof(Parametric3SliceSpriteController) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Parametric3SliceSpriteController*, "", "Parametric3SliceSpriteController");
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::OnDisable
// Il2CppName: OnDisable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::CreateMesh
// Il2CppName: CreateMesh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::Refresh
// Il2CppName: Refresh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
