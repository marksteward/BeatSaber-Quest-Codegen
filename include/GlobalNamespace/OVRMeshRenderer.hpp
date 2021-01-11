// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRMesh
  class OVRMesh;
  // Forward declaring type: OVRSkeleton
  class OVRSkeleton;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: OVRMeshRenderer
  // [] Offset: FFFFFFFF
  class OVRMeshRenderer : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider
    class IOVRMeshRendererDataProvider;
    // Nested type: GlobalNamespace::OVRMeshRenderer::MeshRendererData
    struct MeshRendererData;
    // Nested type: GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior
    struct ConfidenceBehavior;
    // Nested type: GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior
    struct SystemGestureBehavior;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRMeshRenderer/ConfidenceBehavior
    // [] Offset: FFFFFFFF
    struct ConfidenceBehavior/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ConfidenceBehavior
      constexpr ConfidenceBehavior(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRMeshRenderer/ConfidenceBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRMeshRenderer/ConfidenceBehavior None
      static GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior _get_None();
      // Set static field: static public OVRMeshRenderer/ConfidenceBehavior None
      static void _set_None(GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior value);
      // static field const value: static public OVRMeshRenderer/ConfidenceBehavior ToggleRenderer
      static constexpr const int ToggleRenderer = 1;
      // Get static field: static public OVRMeshRenderer/ConfidenceBehavior ToggleRenderer
      static GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior _get_ToggleRenderer();
      // Set static field: static public OVRMeshRenderer/ConfidenceBehavior ToggleRenderer
      static void _set_ToggleRenderer(GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior value);
    }; // OVRMeshRenderer/ConfidenceBehavior
    static check_size<sizeof(OVRMeshRenderer::ConfidenceBehavior), 0 + sizeof(int)> __GlobalNamespace_OVRMeshRenderer_ConfidenceBehaviorSizeCheck;
    static_assert(sizeof(OVRMeshRenderer::ConfidenceBehavior) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRMeshRenderer/SystemGestureBehavior
    // [] Offset: FFFFFFFF
    struct SystemGestureBehavior/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: SystemGestureBehavior
      constexpr SystemGestureBehavior(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRMeshRenderer/SystemGestureBehavior None
      static constexpr const int None = 0;
      // Get static field: static public OVRMeshRenderer/SystemGestureBehavior None
      static GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior _get_None();
      // Set static field: static public OVRMeshRenderer/SystemGestureBehavior None
      static void _set_None(GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior value);
      // static field const value: static public OVRMeshRenderer/SystemGestureBehavior SwapMaterial
      static constexpr const int SwapMaterial = 1;
      // Get static field: static public OVRMeshRenderer/SystemGestureBehavior SwapMaterial
      static GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior _get_SwapMaterial();
      // Set static field: static public OVRMeshRenderer/SystemGestureBehavior SwapMaterial
      static void _set_SwapMaterial(GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior value);
    }; // OVRMeshRenderer/SystemGestureBehavior
    static check_size<sizeof(OVRMeshRenderer::SystemGestureBehavior), 0 + sizeof(int)> __GlobalNamespace_OVRMeshRenderer_SystemGestureBehaviorSizeCheck;
    static_assert(sizeof(OVRMeshRenderer::SystemGestureBehavior) == 0x4);
    // private OVRMeshRenderer/IOVRMeshRendererDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider*) == 0x8);
    // private OVRMesh _ovrMesh
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OVRMesh* ovrMesh;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMesh*) == 0x8);
    // private OVRSkeleton _ovrSkeleton
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::OVRSkeleton* ovrSkeleton;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRSkeleton*) == 0x8);
    // private OVRMeshRenderer/ConfidenceBehavior _confidenceBehavior
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior confidenceBehavior;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior) == 0x4);
    // private OVRMeshRenderer/SystemGestureBehavior _systemGestureBehavior
    // Size: 0x4
    // Offset: 0x34
    GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior systemGestureBehavior;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior) == 0x4);
    // private UnityEngine.Material _systemGestureMaterial
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Material* systemGestureMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _originalMaterial
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Material* originalMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.SkinnedMeshRenderer _skinnedMeshRenderer
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD86C94
    // private System.Boolean <IsInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool IsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xD86CA4
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x51
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xD86CB4
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x52
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xD86CC4
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Size: 0x1
    // Offset: 0x53
    bool ShouldUseSystemGestureMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRMeshRenderer
    OVRMeshRenderer(GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider* dataProvider_ = {}, GlobalNamespace::OVRMesh* ovrMesh_ = {}, GlobalNamespace::OVRSkeleton* ovrSkeleton_ = {}, GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior confidenceBehavior_ = {}, GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior systemGestureBehavior_ = {}, UnityEngine::Material* systemGestureMaterial_ = {}, UnityEngine::Material* originalMaterial_ = {}, UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer_ = {}, bool IsInitialized_ = {}, bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, bool ShouldUseSystemGestureMaterial_ = {}) noexcept : dataProvider{dataProvider_}, ovrMesh{ovrMesh_}, ovrSkeleton{ovrSkeleton_}, confidenceBehavior{confidenceBehavior_}, systemGestureBehavior{systemGestureBehavior_}, systemGestureMaterial{systemGestureMaterial_}, originalMaterial{originalMaterial_}, skinnedMeshRenderer{skinnedMeshRenderer_}, IsInitialized{IsInitialized_}, IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, ShouldUseSystemGestureMaterial{ShouldUseSystemGestureMaterial_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_IsInitialized()
    // Offset: 0x122EA7C
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0x122EA84
    void set_IsInitialized(bool value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x122EA90
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x122EA98
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x122EAA4
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x122EAAC
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0x122EAB8
    bool get_ShouldUseSystemGestureMaterial();
    // private System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0x122EAC0
    void set_ShouldUseSystemGestureMaterial(bool value);
    // private System.Void Awake()
    // Offset: 0x122EACC
    void Awake();
    // private System.Void Start()
    // Offset: 0x122EC08
    void Start();
    // private System.Void Initialize()
    // Offset: 0x122EC9C
    void Initialize();
    // private System.Void Update()
    // Offset: 0x122F168
    void Update();
    // public System.Void .ctor()
    // Offset: 0x122F444
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMeshRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRMeshRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMeshRenderer*, creationType>()));
    }
  }; // OVRMeshRenderer
  static check_size<sizeof(OVRMeshRenderer), 83 + sizeof(bool)> __GlobalNamespace_OVRMeshRendererSizeCheck;
  static_assert(sizeof(OVRMeshRenderer) == 0x54);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer*, "", "OVRMeshRenderer");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer::ConfidenceBehavior, "", "OVRMeshRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer::SystemGestureBehavior, "", "OVRMeshRenderer/SystemGestureBehavior");
