// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
  // Autogenerated type: TMPro.MaterialReference
  struct MaterialReference : public System::ValueType {
    public:
    // public System.Int32 index
    // Offset: 0x0
    int index;
    // public TMPro.TMP_FontAsset fontAsset
    // Offset: 0x8
    TMPro::TMP_FontAsset* fontAsset;
    // public TMPro.TMP_SpriteAsset spriteAsset
    // Offset: 0x10
    TMPro::TMP_SpriteAsset* spriteAsset;
    // public UnityEngine.Material material
    // Offset: 0x18
    UnityEngine::Material* material;
    // public System.Boolean isDefaultMaterial
    // Offset: 0x20
    bool isDefaultMaterial;
    // public System.Boolean isFallbackMaterial
    // Offset: 0x21
    bool isFallbackMaterial;
    // public UnityEngine.Material fallbackMaterial
    // Offset: 0x28
    UnityEngine::Material* fallbackMaterial;
    // public System.Single padding
    // Offset: 0x30
    float padding;
    // public System.Int32 referenceCount
    // Offset: 0x34
    int referenceCount;
    // Creating value type constructor for type: MaterialReference
    constexpr MaterialReference(int index_ = {}, TMPro::TMP_FontAsset* fontAsset_ = {}, TMPro::TMP_SpriteAsset* spriteAsset_ = {}, UnityEngine::Material* material_ = {}, bool isDefaultMaterial_ = {}, bool isFallbackMaterial_ = {}, UnityEngine::Material* fallbackMaterial_ = {}, float padding_ = {}, int referenceCount_ = {}) : index{index_}, fontAsset{fontAsset_}, spriteAsset{spriteAsset_}, material{material_}, isDefaultMaterial{isDefaultMaterial_}, isFallbackMaterial{isFallbackMaterial_}, fallbackMaterial{fallbackMaterial_}, padding{padding_}, referenceCount{referenceCount_} {}
    // public System.Void .ctor(System.Int32 index, TMPro.TMP_FontAsset fontAsset, TMPro.TMP_SpriteAsset spriteAsset, UnityEngine.Material material, System.Single padding)
    // Offset: 0xA2B824
    static MaterialReference* New_ctor(int index, TMPro::TMP_FontAsset* fontAsset, TMPro::TMP_SpriteAsset* spriteAsset, UnityEngine::Material* material, float padding);
    // static public System.Boolean Contains(TMPro.MaterialReference[] materialReferences, TMPro.TMP_FontAsset fontAsset)
    // Offset: 0xB51744
    static bool Contains(::Array<TMPro::MaterialReference>* materialReferences, TMPro::TMP_FontAsset* fontAsset);
    // static public System.Int32 AddMaterialReference(UnityEngine.Material material, TMPro.TMP_FontAsset fontAsset, TMPro.MaterialReference[] materialReferences, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> materialReferenceIndexLookup)
    // Offset: 0xB51860
    static int AddMaterialReference(UnityEngine::Material* material, TMPro::TMP_FontAsset* fontAsset, ::Array<TMPro::MaterialReference>* materialReferences, System::Collections::Generic::Dictionary_2<int, int>* materialReferenceIndexLookup);
    // static public System.Int32 AddMaterialReference(UnityEngine.Material material, TMPro.TMP_SpriteAsset spriteAsset, TMPro.MaterialReference[] materialReferences, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> materialReferenceIndexLookup)
    // Offset: 0xB51A28
    static int AddMaterialReference(UnityEngine::Material* material, TMPro::TMP_SpriteAsset* spriteAsset, ::Array<TMPro::MaterialReference>* materialReferences, System::Collections::Generic::Dictionary_2<int, int>* materialReferenceIndexLookup);
  }; // TMPro.MaterialReference
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::MaterialReference, "TMPro", "MaterialReference");
#pragma pack(pop)
