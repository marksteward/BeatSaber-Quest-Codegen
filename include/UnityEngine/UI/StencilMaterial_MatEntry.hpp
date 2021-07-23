// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.StencilMaterial
#include "UnityEngine/UI/StencilMaterial.hpp"
// Including type: UnityEngine.Rendering.StencilOp
#include "UnityEngine/Rendering/StencilOp.hpp"
// Including type: UnityEngine.Rendering.CompareFunction
#include "UnityEngine/Rendering/CompareFunction.hpp"
// Including type: UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine/Rendering/ColorWriteMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.StencilMaterial/UnityEngine.UI.MatEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class StencilMaterial::MatEntry : public ::Il2CppObject {
    public:
    // public UnityEngine.Material baseMat
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Material* baseMat;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material customMat
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Material* customMat;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x20
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 stencilId
    // Size: 0x4
    // Offset: 0x24
    int stencilId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Rendering.StencilOp operation
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::Rendering::StencilOp operation;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::StencilOp) == 0x4);
    // public UnityEngine.Rendering.CompareFunction compareFunction
    // Size: 0x4
    // Offset: 0x2C
    UnityEngine::Rendering::CompareFunction compareFunction;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::CompareFunction) == 0x4);
    // public System.Int32 readMask
    // Size: 0x4
    // Offset: 0x30
    int readMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 writeMask
    // Size: 0x4
    // Offset: 0x34
    int writeMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean useAlphaClip
    // Size: 0x1
    // Offset: 0x38
    bool useAlphaClip;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAlphaClip and: colorMask
    char __padding8[0x3] = {};
    // public UnityEngine.Rendering.ColorWriteMask colorMask
    // Size: 0x4
    // Offset: 0x3C
    UnityEngine::Rendering::ColorWriteMask colorMask;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::ColorWriteMask) == 0x4);
    // Creating value type constructor for type: MatEntry
    MatEntry(UnityEngine::Material* baseMat_ = {}, UnityEngine::Material* customMat_ = {}, int count_ = {}, int stencilId_ = {}, UnityEngine::Rendering::StencilOp operation_ = {}, UnityEngine::Rendering::CompareFunction compareFunction_ = {}, int readMask_ = {}, int writeMask_ = {}, bool useAlphaClip_ = {}, UnityEngine::Rendering::ColorWriteMask colorMask_ = {}) noexcept : baseMat{baseMat_}, customMat{customMat_}, count{count_}, stencilId{stencilId_}, operation{operation_}, compareFunction{compareFunction_}, readMask{readMask_}, writeMask{writeMask_}, useAlphaClip{useAlphaClip_}, colorMask{colorMask_} {}
    // Get instance field: public UnityEngine.Material baseMat
    UnityEngine::Material* _get_baseMat();
    // Set instance field: public UnityEngine.Material baseMat
    void _set_baseMat(UnityEngine::Material* value);
    // Get instance field: public UnityEngine.Material customMat
    UnityEngine::Material* _get_customMat();
    // Set instance field: public UnityEngine.Material customMat
    void _set_customMat(UnityEngine::Material* value);
    // Get instance field: public System.Int32 count
    int _get_count();
    // Set instance field: public System.Int32 count
    void _set_count(int value);
    // Get instance field: public System.Int32 stencilId
    int _get_stencilId();
    // Set instance field: public System.Int32 stencilId
    void _set_stencilId(int value);
    // Get instance field: public UnityEngine.Rendering.StencilOp operation
    UnityEngine::Rendering::StencilOp _get_operation();
    // Set instance field: public UnityEngine.Rendering.StencilOp operation
    void _set_operation(UnityEngine::Rendering::StencilOp value);
    // Get instance field: public UnityEngine.Rendering.CompareFunction compareFunction
    UnityEngine::Rendering::CompareFunction _get_compareFunction();
    // Set instance field: public UnityEngine.Rendering.CompareFunction compareFunction
    void _set_compareFunction(UnityEngine::Rendering::CompareFunction value);
    // Get instance field: public System.Int32 readMask
    int _get_readMask();
    // Set instance field: public System.Int32 readMask
    void _set_readMask(int value);
    // Get instance field: public System.Int32 writeMask
    int _get_writeMask();
    // Set instance field: public System.Int32 writeMask
    void _set_writeMask(int value);
    // Get instance field: public System.Boolean useAlphaClip
    bool _get_useAlphaClip();
    // Set instance field: public System.Boolean useAlphaClip
    void _set_useAlphaClip(bool value);
    // Get instance field: public UnityEngine.Rendering.ColorWriteMask colorMask
    UnityEngine::Rendering::ColorWriteMask _get_colorMask();
    // Set instance field: public UnityEngine.Rendering.ColorWriteMask colorMask
    void _set_colorMask(UnityEngine::Rendering::ColorWriteMask value);
    // public System.Void .ctor()
    // Offset: 0x2370F18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StencilMaterial::MatEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::StencilMaterial::MatEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StencilMaterial::MatEntry*, creationType>()));
    }
  }; // UnityEngine.UI.StencilMaterial/UnityEngine.UI.MatEntry
  #pragma pack(pop)
  static check_size<sizeof(StencilMaterial::MatEntry), 60 + sizeof(UnityEngine::Rendering::ColorWriteMask)> __UnityEngine_UI_StencilMaterial_MatEntrySizeCheck;
  static_assert(sizeof(StencilMaterial::MatEntry) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::StencilMaterial::MatEntry*, "UnityEngine.UI", "StencilMaterial/MatEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::StencilMaterial::MatEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
