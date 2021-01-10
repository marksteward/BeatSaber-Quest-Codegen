// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
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
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
  // Forward declaring type: MaterialReference
  struct MaterialReference;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: CanvasRenderer
  class CanvasRenderer;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Rect
  struct Rect;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x118
  // Autogenerated type: TMPro.TMP_SubMeshUI
  // [] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: D8B104
  class TMP_SubMeshUI : public UnityEngine::UI::MaskableGraphic {
    public:
    // private TMPro.TMP_FontAsset m_fontAsset
    // Size: 0x8
    // Offset: 0xC0
    TMPro::TMP_FontAsset* m_fontAsset;
    // Field size check
    static_assert(sizeof(TMPro::TMP_FontAsset*) == 0x8);
    // private TMPro.TMP_SpriteAsset m_spriteAsset
    // Size: 0x8
    // Offset: 0xC8
    TMPro::TMP_SpriteAsset* m_spriteAsset;
    // Field size check
    static_assert(sizeof(TMPro::TMP_SpriteAsset*) == 0x8);
    // private UnityEngine.Material m_material
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::Material* m_material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material m_sharedMaterial
    // Size: 0x8
    // Offset: 0xD8
    UnityEngine::Material* m_sharedMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material m_fallbackMaterial
    // Size: 0x8
    // Offset: 0xE0
    UnityEngine::Material* m_fallbackMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material m_fallbackSourceMaterial
    // Size: 0x8
    // Offset: 0xE8
    UnityEngine::Material* m_fallbackSourceMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private System.Boolean m_isDefaultMaterial
    // Size: 0x1
    // Offset: 0xF0
    bool m_isDefaultMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isDefaultMaterial and: m_padding
    char __padding6[0x3] = {};
    // private System.Single m_padding
    // Size: 0x4
    // Offset: 0xF4
    float m_padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.CanvasRenderer m_canvasRenderer
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::CanvasRenderer* m_canvasRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasRenderer*) == 0x8);
    // private UnityEngine.Mesh m_mesh
    // Size: 0x8
    // Offset: 0x100
    UnityEngine::Mesh* m_mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // private TMPro.TextMeshProUGUI m_TextComponent
    // Size: 0x8
    // Offset: 0x108
    TMPro::TextMeshProUGUI* m_TextComponent;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private System.Boolean m_isRegisteredForEvents
    // Size: 0x1
    // Offset: 0x110
    bool m_isRegisteredForEvents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_materialDirty
    // Size: 0x1
    // Offset: 0x111
    bool m_materialDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_materialDirty and: m_materialReferenceIndex
    char __padding12[0x2] = {};
    // private System.Int32 m_materialReferenceIndex
    // Size: 0x4
    // Offset: 0x114
    int m_materialReferenceIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TMP_SubMeshUI
    TMP_SubMeshUI(TMPro::TMP_FontAsset* m_fontAsset_ = {}, TMPro::TMP_SpriteAsset* m_spriteAsset_ = {}, UnityEngine::Material* m_material_ = {}, UnityEngine::Material* m_sharedMaterial_ = {}, UnityEngine::Material* m_fallbackMaterial_ = {}, UnityEngine::Material* m_fallbackSourceMaterial_ = {}, bool m_isDefaultMaterial_ = {}, float m_padding_ = {}, UnityEngine::CanvasRenderer* m_canvasRenderer_ = {}, UnityEngine::Mesh* m_mesh_ = {}, TMPro::TextMeshProUGUI* m_TextComponent_ = {}, bool m_isRegisteredForEvents_ = {}, bool m_materialDirty_ = {}, int m_materialReferenceIndex_ = {}) noexcept : m_fontAsset{m_fontAsset_}, m_spriteAsset{m_spriteAsset_}, m_material{m_material_}, m_sharedMaterial{m_sharedMaterial_}, m_fallbackMaterial{m_fallbackMaterial_}, m_fallbackSourceMaterial{m_fallbackSourceMaterial_}, m_isDefaultMaterial{m_isDefaultMaterial_}, m_padding{m_padding_}, m_canvasRenderer{m_canvasRenderer_}, m_mesh{m_mesh_}, m_TextComponent{m_TextComponent_}, m_isRegisteredForEvents{m_isRegisteredForEvents_}, m_materialDirty{m_materialDirty_}, m_materialReferenceIndex{m_materialReferenceIndex_} {}
    // public TMPro.TMP_FontAsset get_fontAsset()
    // Offset: 0xF8DE4C
    TMPro::TMP_FontAsset* get_fontAsset();
    // public System.Void set_fontAsset(TMPro.TMP_FontAsset value)
    // Offset: 0xF8DE54
    void set_fontAsset(TMPro::TMP_FontAsset* value);
    // public TMPro.TMP_SpriteAsset get_spriteAsset()
    // Offset: 0xF8DE5C
    TMPro::TMP_SpriteAsset* get_spriteAsset();
    // public System.Void set_spriteAsset(TMPro.TMP_SpriteAsset value)
    // Offset: 0xF8DE64
    void set_spriteAsset(TMPro::TMP_SpriteAsset* value);
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0xF8E204
    UnityEngine::Material* get_sharedMaterial();
    // public System.Void set_sharedMaterial(UnityEngine.Material value)
    // Offset: 0xF8E20C
    void set_sharedMaterial(UnityEngine::Material* value);
    // public UnityEngine.Material get_fallbackMaterial()
    // Offset: 0xF8E268
    UnityEngine::Material* get_fallbackMaterial();
    // public System.Void set_fallbackMaterial(UnityEngine.Material value)
    // Offset: 0xF8E270
    void set_fallbackMaterial(UnityEngine::Material* value);
    // public UnityEngine.Material get_fallbackSourceMaterial()
    // Offset: 0xF8E3E4
    UnityEngine::Material* get_fallbackSourceMaterial();
    // public System.Void set_fallbackSourceMaterial(UnityEngine.Material value)
    // Offset: 0xF8E3EC
    void set_fallbackSourceMaterial(UnityEngine::Material* value);
    // public System.Boolean get_isDefaultMaterial()
    // Offset: 0xF8E460
    bool get_isDefaultMaterial();
    // public System.Void set_isDefaultMaterial(System.Boolean value)
    // Offset: 0xF8E468
    void set_isDefaultMaterial(bool value);
    // public System.Single get_padding()
    // Offset: 0xF8E474
    float get_padding();
    // public System.Void set_padding(System.Single value)
    // Offset: 0xF8E47C
    void set_padding(float value);
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0xF8E530
    UnityEngine::Mesh* get_mesh();
    // public System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0xF8E5F4
    void set_mesh(UnityEngine::Mesh* value);
    // static public TMPro.TMP_SubMeshUI AddSubTextObject(TMPro.TextMeshProUGUI textComponent, TMPro.MaterialReference materialReference)
    // Offset: 0xF8E604
    static TMPro::TMP_SubMeshUI* AddSubTextObject(TMPro::TextMeshProUGUI* textComponent, TMPro::MaterialReference materialReference);
    // public System.Single GetPaddingForMaterial()
    // Offset: 0xF8E16C
    float GetPaddingForMaterial();
    // public System.Single GetPaddingForMaterial(UnityEngine.Material mat)
    // Offset: 0xF8EF18
    float GetPaddingForMaterial(UnityEngine::Material* mat);
    // public System.Void UpdateMeshPadding(System.Boolean isExtraPadding, System.Boolean isUsingBold)
    // Offset: 0xF8EFB0
    void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);
    // public System.Void SetPivotDirty()
    // Offset: 0xF8F16C
    void SetPivotDirty();
    // public System.Void RefreshMaterial()
    // Offset: 0xF8F2BC
    void RefreshMaterial();
    // private UnityEngine.Material GetMaterial()
    // Offset: 0xF8F3F8
    UnityEngine::Material* GetMaterial();
    // private UnityEngine.Material GetMaterial(UnityEngine.Material mat)
    // Offset: 0xF8DF3C
    UnityEngine::Material* GetMaterial(UnityEngine::Material* mat);
    // private UnityEngine.Material CreateMaterialInstance(UnityEngine.Material source)
    // Offset: 0xF8F400
    UnityEngine::Material* CreateMaterialInstance(UnityEngine::Material* source);
    // private UnityEngine.Material GetSharedMaterial()
    // Offset: 0xF8F4BC
    UnityEngine::Material* GetSharedMaterial();
    // private System.Void SetSharedMaterial(UnityEngine.Material mat)
    // Offset: 0xF8E210
    void SetSharedMaterial(UnityEngine::Material* mat);
    // public override UnityEngine.Texture get_mainTexture()
    // Offset: 0xF8DE6C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Texture Graphic::get_mainTexture()
    UnityEngine::Texture* get_mainTexture();
    // public override UnityEngine.Material get_material()
    // Offset: 0xF8DF34
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Material Graphic::get_material()
    UnityEngine::Material* get_material();
    // public override System.Void set_material(UnityEngine.Material value)
    // Offset: 0xF8E054
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::set_material(UnityEngine.Material value)
    void set_material(UnityEngine::Material* value);
    // public override UnityEngine.Material get_materialForRendering()
    // Offset: 0xF8E3F4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Material Graphic::get_materialForRendering()
    UnityEngine::Material* get_materialForRendering();
    // public UnityEngine.CanvasRenderer get_canvasRenderer()
    // Offset: 0xF8E484
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.CanvasRenderer Graphic::get_canvasRenderer()
    UnityEngine::CanvasRenderer* get_canvasRenderer();
    // protected override System.Void OnEnable()
    // Offset: 0xF8EA40
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0xF8EA98
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnDisable()
    void OnDisable();
    // protected override System.Void OnDestroy()
    // Offset: 0xF8EBDC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDestroy()
    void OnDestroy();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0xF8ED64
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnTransformParentChanged()
    void OnTransformParentChanged();
    // public override UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0xF8EDC8
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: UnityEngine.Material MaskableGraphic::GetModifiedMaterial(UnityEngine.Material baseMaterial)
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
    // public override System.Void SetAllDirty()
    // Offset: 0xF8F03C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetAllDirty()
    void SetAllDirty();
    // public override System.Void SetVerticesDirty()
    // Offset: 0xF8F040
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetVerticesDirty()
    void SetVerticesDirty();
    // public override System.Void SetLayoutDirty()
    // Offset: 0xF8F11C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetLayoutDirty()
    void SetLayoutDirty();
    // public override System.Void SetMaterialDirty()
    // Offset: 0xF8F120
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetMaterialDirty()
    void SetMaterialDirty();
    // public override System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0xF8F1E0
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // protected override System.Void UpdateGeometry()
    // Offset: 0xF8F20C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::UpdateGeometry()
    void UpdateGeometry();
    // public override System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)
    // Offset: 0xF8F278
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::Rebuild(UnityEngine.UI.CanvasUpdate update)
    void Rebuild(UnityEngine::UI::CanvasUpdate update);
    // protected override System.Void UpdateMaterial()
    // Offset: 0xF8F2CC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::UpdateMaterial()
    void UpdateMaterial();
    // public override System.Void RecalculateClipping()
    // Offset: 0xF8F3D8
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::RecalculateClipping()
    void RecalculateClipping();
    // public override System.Void RecalculateMasking()
    // Offset: 0xF8F3E0
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::RecalculateMasking()
    void RecalculateMasking();
    // public System.Void .ctor()
    // Offset: 0xF8F574
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SubMeshUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SubMeshUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SubMeshUI*, creationType>()));
    }
  }; // TMPro.TMP_SubMeshUI
  static check_size<sizeof(TMP_SubMeshUI), 276 + sizeof(int)> __TMPro_TMP_SubMeshUISizeCheck;
  static_assert(sizeof(TMP_SubMeshUI) == 0x118);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SubMeshUI*, "TMPro", "TMP_SubMeshUI");
#pragma pack(pop)
