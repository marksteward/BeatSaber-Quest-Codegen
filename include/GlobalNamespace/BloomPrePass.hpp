// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BloomPrePassRenderDataSO
#include "GlobalNamespace/BloomPrePassRenderDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassRendererSO
  class BloomPrePassRendererSO;
  // Forward declaring type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO;
  // Skipping declaration: Mode because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePass
  // [ExecuteAlways] Offset: DF5508
  // [RequireComponent] Offset: DF5508
  class BloomPrePass : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BloomPrePass::Mode
    struct Mode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BloomPrePass/Mode
    struct Mode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BloomPrePass/Mode RenderAndSetData
      static constexpr const int RenderAndSetData = 0;
      // Get static field: static public BloomPrePass/Mode RenderAndSetData
      static GlobalNamespace::BloomPrePass::Mode _get_RenderAndSetData();
      // Set static field: static public BloomPrePass/Mode RenderAndSetData
      static void _set_RenderAndSetData(GlobalNamespace::BloomPrePass::Mode value);
      // static field const value: static public BloomPrePass/Mode SetDataOnly
      static constexpr const int SetDataOnly = 1;
      // Get static field: static public BloomPrePass/Mode SetDataOnly
      static GlobalNamespace::BloomPrePass::Mode _get_SetDataOnly();
      // Set static field: static public BloomPrePass/Mode SetDataOnly
      static void _set_SetDataOnly(GlobalNamespace::BloomPrePass::Mode value);
    }; // BloomPrePass/Mode
    #pragma pack(pop)
    static check_size<sizeof(BloomPrePass::Mode), 0 + sizeof(int)> __GlobalNamespace_BloomPrePass_ModeSizeCheck;
    static_assert(sizeof(BloomPrePass::Mode) == 0x4);
    // private BloomPrePassRendererSO _bloomPrepassRenderer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomPrePassRendererSO* bloomPrepassRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassRendererSO*) == 0x8);
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassEffectContainerSO*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF5C0C
    // [NullAllowed] Offset: 0xDF5C0C
    // private BloomPrePassRenderDataSO _bloomPrePassRenderData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BloomPrePassRenderDataSO* bloomPrePassRenderData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassRenderDataSO*) == 0x8);
    // private BloomPrePass/Mode _mode
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::BloomPrePass::Mode mode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePass::Mode) == 0x4);
    // Padding between fields: mode and: renderData
    char __padding3[0x4] = {};
    // private BloomPrePassRenderDataSO/Data _renderData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BloomPrePassRenderDataSO::Data* renderData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassRenderDataSO::Data*) == 0x8);
    // Creating value type constructor for type: BloomPrePass
    BloomPrePass(GlobalNamespace::BloomPrePassRendererSO* bloomPrepassRenderer_ = {}, GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer_ = {}, GlobalNamespace::BloomPrePassRenderDataSO* bloomPrePassRenderData_ = {}, GlobalNamespace::BloomPrePass::Mode mode_ = {}, GlobalNamespace::BloomPrePassRenderDataSO::Data* renderData_ = {}) noexcept : bloomPrepassRenderer{bloomPrepassRenderer_}, bloomPrePassEffectContainer{bloomPrePassEffectContainer_}, bloomPrePassRenderData{bloomPrePassRenderData_}, mode{mode_}, renderData{renderData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1D842D4
    void Awake();
    // private System.Void LazyInit()
    // Offset: 0x1D842D8
    void LazyInit();
    // protected System.Void OnDestroy()
    // Offset: 0x1D844E4
    void OnDestroy();
    // protected System.Void OnPreRender()
    // Offset: 0x1D845A0
    void OnPreRender();
    // protected System.Void OnPostRender()
    // Offset: 0x1D856F4
    void OnPostRender();
    // public System.Void SetMode(BloomPrePass/Mode mode)
    // Offset: 0x1D857B4
    void SetMode(GlobalNamespace::BloomPrePass::Mode mode);
    // public System.Void .ctor()
    // Offset: 0x1D857BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePass*, creationType>()));
    }
  }; // BloomPrePass
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePass), 56 + sizeof(GlobalNamespace::BloomPrePassRenderDataSO::Data*)> __GlobalNamespace_BloomPrePassSizeCheck;
  static_assert(sizeof(BloomPrePass) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePass*, "", "BloomPrePass");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePass::Mode, "", "BloomPrePass/Mode");
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::LazyInit
// Il2CppName: LazyInit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::OnPreRender
// Il2CppName: OnPreRender
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::OnPostRender
// Il2CppName: OnPostRender
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::SetMode
// Il2CppName: SetMode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
