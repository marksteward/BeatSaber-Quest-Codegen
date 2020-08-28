// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
  // Forward declaring type: MaterialReference
  struct MaterialReference;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_SubMesh
  class TMP_SubMesh : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TMP_FontAsset m_fontAsset
    // Offset: 0x18
    TMPro::TMP_FontAsset* m_fontAsset;
    // private TMPro.TMP_SpriteAsset m_spriteAsset
    // Offset: 0x20
    TMPro::TMP_SpriteAsset* m_spriteAsset;
    // private UnityEngine.Material m_material
    // Offset: 0x28
    UnityEngine::Material* m_material;
    // private UnityEngine.Material m_sharedMaterial
    // Offset: 0x30
    UnityEngine::Material* m_sharedMaterial;
    // private UnityEngine.Material m_fallbackMaterial
    // Offset: 0x38
    UnityEngine::Material* m_fallbackMaterial;
    // private UnityEngine.Material m_fallbackSourceMaterial
    // Offset: 0x40
    UnityEngine::Material* m_fallbackSourceMaterial;
    // private System.Boolean m_isDefaultMaterial
    // Offset: 0x48
    bool m_isDefaultMaterial;
    // private System.Single m_padding
    // Offset: 0x4C
    float m_padding;
    // private UnityEngine.Renderer m_renderer
    // Offset: 0x50
    UnityEngine::Renderer* m_renderer;
    // private UnityEngine.MeshFilter m_meshFilter
    // Offset: 0x58
    UnityEngine::MeshFilter* m_meshFilter;
    // private UnityEngine.Mesh m_mesh
    // Offset: 0x60
    UnityEngine::Mesh* m_mesh;
    // private TMPro.TextMeshPro m_TextComponent
    // Offset: 0x68
    TMPro::TextMeshPro* m_TextComponent;
    // private System.Boolean m_isRegisteredForEvents
    // Offset: 0x70
    bool m_isRegisteredForEvents;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public TMPro.TMP_FontAsset get_fontAsset()
    // Offset: 0xBB65A0
    TMPro::TMP_FontAsset* get_fontAsset();
    // public System.Void set_fontAsset(TMPro.TMP_FontAsset value)
    // Offset: 0xBB65A8
    void set_fontAsset(TMPro::TMP_FontAsset* value);
    // public TMPro.TMP_SpriteAsset get_spriteAsset()
    // Offset: 0xBB65B0
    TMPro::TMP_SpriteAsset* get_spriteAsset();
    // public System.Void set_spriteAsset(TMPro.TMP_SpriteAsset value)
    // Offset: 0xBB65B8
    void set_spriteAsset(TMPro::TMP_SpriteAsset* value);
    // public UnityEngine.Material get_material()
    // Offset: 0xBB65C0
    UnityEngine::Material* get_material();
    // public System.Void set_material(UnityEngine.Material value)
    // Offset: 0xBB6728
    void set_material(UnityEngine::Material* value);
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0xBB6940
    UnityEngine::Material* get_sharedMaterial();
    // public System.Void set_sharedMaterial(UnityEngine.Material value)
    // Offset: 0xBB6948
    void set_sharedMaterial(UnityEngine::Material* value);
    // public UnityEngine.Material get_fallbackMaterial()
    // Offset: 0xBB6980
    UnityEngine::Material* get_fallbackMaterial();
    // public System.Void set_fallbackMaterial(UnityEngine.Material value)
    // Offset: 0xBB6988
    void set_fallbackMaterial(UnityEngine::Material* value);
    // public UnityEngine.Material get_fallbackSourceMaterial()
    // Offset: 0xBB6AFC
    UnityEngine::Material* get_fallbackSourceMaterial();
    // public System.Void set_fallbackSourceMaterial(UnityEngine.Material value)
    // Offset: 0xBB6B04
    void set_fallbackSourceMaterial(UnityEngine::Material* value);
    // public System.Boolean get_isDefaultMaterial()
    // Offset: 0xBB6B0C
    bool get_isDefaultMaterial();
    // public System.Void set_isDefaultMaterial(System.Boolean value)
    // Offset: 0xBB6B14
    void set_isDefaultMaterial(bool value);
    // public System.Single get_padding()
    // Offset: 0xBB6B20
    float get_padding();
    // public System.Void set_padding(System.Single value)
    // Offset: 0xBB6B28
    void set_padding(float value);
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0xBB6B30
    UnityEngine::Renderer* get_renderer();
    // public UnityEngine.MeshFilter get_meshFilter()
    // Offset: 0xBB6BDC
    UnityEngine::MeshFilter* get_meshFilter();
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0xBB6C88
    UnityEngine::Mesh* get_mesh();
    // public System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0xBB6D6C
    void set_mesh(UnityEngine::Mesh* value);
    // private System.Void OnEnable()
    // Offset: 0xBB6D74
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xBB6EA4
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0xBB6F78
    void OnDestroy();
    // static public TMPro.TMP_SubMesh AddSubTextObject(TMPro.TextMeshPro textComponent, TMPro.MaterialReference materialReference)
    // Offset: 0xBB7094
    static TMPro::TMP_SubMesh* AddSubTextObject(TMPro::TextMeshPro* textComponent, TMPro::MaterialReference materialReference);
    // public System.Void DestroySelf()
    // Offset: 0xBB7418
    void DestroySelf();
    // private UnityEngine.Material GetMaterial(UnityEngine.Material mat)
    // Offset: 0xBB65C8
    UnityEngine::Material* GetMaterial(UnityEngine::Material* mat);
    // private UnityEngine.Material CreateMaterialInstance(UnityEngine.Material source)
    // Offset: 0xBB7498
    UnityEngine::Material* CreateMaterialInstance(UnityEngine::Material* source);
    // private UnityEngine.Material GetSharedMaterial()
    // Offset: 0xBB7554
    UnityEngine::Material* GetSharedMaterial();
    // private System.Void SetSharedMaterial(UnityEngine.Material mat)
    // Offset: 0xBB694C
    void SetSharedMaterial(UnityEngine::Material* mat);
    // public System.Single GetPaddingForMaterial()
    // Offset: 0xBB67CC
    float GetPaddingForMaterial();
    // public System.Void UpdateMeshPadding(System.Boolean isExtraPadding, System.Boolean isUsingBold)
    // Offset: 0xBB760C
    void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);
    // public System.Void SetVerticesDirty()
    // Offset: 0xBB6864
    void SetVerticesDirty();
    // public System.Void SetMaterialDirty()
    // Offset: 0xBB693C
    void SetMaterialDirty();
    // protected System.Void UpdateMaterial()
    // Offset: 0xBB76D0
    void UpdateMaterial();
    // public System.Void .ctor()
    // Offset: 0xBB7780
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_SubMesh* New_ctor();
  }; // TMPro.TMP_SubMesh
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SubMesh*, "TMPro", "TMP_SubMesh");
#pragma pack(pop)
