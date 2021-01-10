// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x38
  // Autogenerated type: TMPro.MaterialReference
  // [] Offset: FFFFFFFF
  struct MaterialReference/*, public System::ValueType*/ {
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: index and: fontAsset
    char __padding0[0x4] = {};
    // public TMPro.TMP_FontAsset fontAsset
    // Size: 0x8
    // Offset: 0x8
    TMPro::TMP_FontAsset* fontAsset;
    // Field size check
    static_assert(sizeof(TMPro::TMP_FontAsset*) == 0x8);
    // public TMPro.TMP_SpriteAsset spriteAsset
    // Size: 0x8
    // Offset: 0x10
    TMPro::TMP_SpriteAsset* spriteAsset;
    // Field size check
    static_assert(sizeof(TMPro::TMP_SpriteAsset*) == 0x8);
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // public System.Boolean isDefaultMaterial
    // Size: 0x1
    // Offset: 0x20
    bool isDefaultMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isFallbackMaterial
    // Size: 0x1
    // Offset: 0x21
    bool isFallbackMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isFallbackMaterial and: fallbackMaterial
    char __padding5[0x6] = {};
    // public UnityEngine.Material fallbackMaterial
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Material* fallbackMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // public System.Single padding
    // Size: 0x4
    // Offset: 0x30
    float padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 referenceCount
    // Size: 0x4
    // Offset: 0x34
    int referenceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MaterialReference
    constexpr MaterialReference(int index_ = {}, TMPro::TMP_FontAsset* fontAsset_ = {}, TMPro::TMP_SpriteAsset* spriteAsset_ = {}, UnityEngine::Material* material_ = {}, bool isDefaultMaterial_ = {}, bool isFallbackMaterial_ = {}, UnityEngine::Material* fallbackMaterial_ = {}, float padding_ = {}, int referenceCount_ = {}) noexcept : index{index_}, fontAsset{fontAsset_}, spriteAsset{spriteAsset_}, material{material_}, isDefaultMaterial{isDefaultMaterial_}, isFallbackMaterial{isFallbackMaterial_}, fallbackMaterial{fallbackMaterial_}, padding{padding_}, referenceCount{referenceCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Int32 index, TMPro.TMP_FontAsset fontAsset, TMPro.TMP_SpriteAsset spriteAsset, UnityEngine.Material material, System.Single padding)
    // Offset: 0xC92A64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    MaterialReference(int index, TMPro::TMP_FontAsset* fontAsset, TMPro::TMP_SpriteAsset* spriteAsset, UnityEngine::Material* material, float padding) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::MaterialReference::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, fontAsset, spriteAsset, material, padding)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, index, fontAsset, spriteAsset, material, padding);
    }
    // static public System.Boolean Contains(TMPro.MaterialReference[] materialReferences, TMPro.TMP_FontAsset fontAsset)
    // Offset: 0xF4EC58
    static bool Contains(::Array<TMPro::MaterialReference>* materialReferences, TMPro::TMP_FontAsset* fontAsset);
    // static public System.Int32 AddMaterialReference(UnityEngine.Material material, TMPro.TMP_FontAsset fontAsset, TMPro.MaterialReference[] materialReferences, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> materialReferenceIndexLookup)
    // Offset: 0xF4ED74
    static int AddMaterialReference(UnityEngine::Material* material, TMPro::TMP_FontAsset* fontAsset, ::Array<TMPro::MaterialReference>* materialReferences, System::Collections::Generic::Dictionary_2<int, int>* materialReferenceIndexLookup);
    // static public System.Int32 AddMaterialReference(UnityEngine.Material material, TMPro.TMP_SpriteAsset spriteAsset, TMPro.MaterialReference[] materialReferences, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> materialReferenceIndexLookup)
    // Offset: 0xF4EF3C
    static int AddMaterialReference(UnityEngine::Material* material, TMPro::TMP_SpriteAsset* spriteAsset, ::Array<TMPro::MaterialReference>* materialReferences, System::Collections::Generic::Dictionary_2<int, int>* materialReferenceIndexLookup);
  }; // TMPro.MaterialReference
  static check_size<sizeof(MaterialReference), 52 + sizeof(int)> __TMPro_MaterialReferenceSizeCheck;
  static_assert(sizeof(MaterialReference) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::MaterialReference, "TMPro", "MaterialReference");
#pragma pack(pop)
