// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Text
#include "TMPro/TMP_Text.hpp"
// Including type: UnityEngine.UI.ILayoutElement
#include "UnityEngine/UI/ILayoutElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SubMeshUI
  class TMP_SubMeshUI;
  // Forward declaring type: TMP_TextInfo
  class TMP_TextInfo;
  // Forward declaring type: TMP_VertexDataUpdateFlags
  struct TMP_VertexDataUpdateFlags;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasRenderer
  class CanvasRenderer;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Material
  class Material;
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Rect
  struct Rect;
  // Skipping declaration: Color because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // WARNING Size may be invalid!
  // Autogenerated type: TMPro.TextMeshProUGUI
  // [DisallowMultipleComponent] Offset: DD5798
  // [RequireComponent] Offset: DD5798
  // [RequireComponent] Offset: DD5798
  // [AddComponentMenu] Offset: DD5798
  // [ExecuteAlways] Offset: DD5798
  class TextMeshProUGUI : public TMPro::TMP_Text/*, public UnityEngine::UI::ILayoutElement*/ {
    public:
    // private System.Boolean m_hasFontAssetChanged
    // Size: 0x1
    // Offset: 0xB30
    bool m_hasFontAssetChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected TMPro.TMP_SubMeshUI[] m_subTextObjects
    // Size: 0x8
    // Offset: 0xB38
    ::Array<TMPro::TMP_SubMeshUI*>* m_subTextObjects;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_SubMeshUI*>*) == 0x8);
    // private System.Single m_previousLossyScaleY
    // Size: 0x4
    // Offset: 0xB40
    float m_previousLossyScaleY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3[] m_RectTransformCorners
    // Size: 0x8
    // Offset: 0xB48
    ::Array<UnityEngine::Vector3>* m_RectTransformCorners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.CanvasRenderer m_canvasRenderer
    // Size: 0x8
    // Offset: 0xB50
    UnityEngine::CanvasRenderer* m_canvasRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasRenderer*) == 0x8);
    // private UnityEngine.Canvas m_canvas
    // Size: 0x8
    // Offset: 0xB58
    UnityEngine::Canvas* m_canvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // private System.Boolean m_isFirstAllocation
    // Size: 0x1
    // Offset: 0xB60
    bool m_isFirstAllocation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int32 m_max_characters
    // Size: 0x4
    // Offset: 0xB64
    int m_max_characters;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_isMaskingEnabled
    // Size: 0x1
    // Offset: 0xB68
    bool m_isMaskingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.Material m_baseMaterial
    // Size: 0x8
    // Offset: 0xB70
    UnityEngine::Material* m_baseMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private System.Boolean m_isScrollRegionSet
    // Size: 0x1
    // Offset: 0xB78
    bool m_isScrollRegionSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int32 m_stencilID
    // Size: 0x4
    // Offset: 0xB7C
    int m_stencilID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector4 m_maskOffset
    // Size: 0x10
    // Offset: 0xB80
    UnityEngine::Vector4 m_maskOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // private UnityEngine.Matrix4x4 m_EnvMapMatrix
    // Size: 0x40
    // Offset: 0xB90
    UnityEngine::Matrix4x4 m_EnvMapMatrix;
    // Field size check
    static_assert(sizeof(UnityEngine::Matrix4x4) == 0x40);
    // private System.Boolean m_isRegisteredForEvents
    // Size: 0x1
    // Offset: 0xBD0
    bool m_isRegisteredForEvents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int32 m_recursiveCountA
    // Size: 0x4
    // Offset: 0xBD4
    int m_recursiveCountA;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 loopCountA
    // Size: 0x4
    // Offset: 0xBD8
    int loopCountA;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_isRebuildingLayout
    // Size: 0x1
    // Offset: 0xBDC
    bool m_isRebuildingLayout;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TextMeshProUGUI
    TextMeshProUGUI(bool m_hasFontAssetChanged_ = {}, ::Array<TMPro::TMP_SubMeshUI*>* m_subTextObjects_ = {}, float m_previousLossyScaleY_ = {}, ::Array<UnityEngine::Vector3>* m_RectTransformCorners_ = {}, UnityEngine::CanvasRenderer* m_canvasRenderer_ = {}, UnityEngine::Canvas* m_canvas_ = {}, bool m_isFirstAllocation_ = {}, int m_max_characters_ = {}, bool m_isMaskingEnabled_ = {}, UnityEngine::Material* m_baseMaterial_ = {}, bool m_isScrollRegionSet_ = {}, int m_stencilID_ = {}, UnityEngine::Vector4 m_maskOffset_ = {}, UnityEngine::Matrix4x4 m_EnvMapMatrix_ = {}, bool m_isRegisteredForEvents_ = {}, int m_recursiveCountA_ = {}, int loopCountA_ = {}, bool m_isRebuildingLayout_ = {}) noexcept : m_hasFontAssetChanged{m_hasFontAssetChanged_}, m_subTextObjects{m_subTextObjects_}, m_previousLossyScaleY{m_previousLossyScaleY_}, m_RectTransformCorners{m_RectTransformCorners_}, m_canvasRenderer{m_canvasRenderer_}, m_canvas{m_canvas_}, m_isFirstAllocation{m_isFirstAllocation_}, m_max_characters{m_max_characters_}, m_isMaskingEnabled{m_isMaskingEnabled_}, m_baseMaterial{m_baseMaterial_}, m_isScrollRegionSet{m_isScrollRegionSet_}, m_stencilID{m_stencilID_}, m_maskOffset{m_maskOffset_}, m_EnvMapMatrix{m_EnvMapMatrix_}, m_isRegisteredForEvents{m_isRegisteredForEvents_}, m_recursiveCountA{m_recursiveCountA_}, loopCountA{loopCountA_}, m_isRebuildingLayout{m_isRebuildingLayout_} {}
    // Creating interface conversion operator: operator UnityEngine::UI::ILayoutElement
    operator UnityEngine::UI::ILayoutElement() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ILayoutElement*>(this);
    }
    // private UnityEngine.Canvas GetCanvas()
    // Offset: 0x1B78D04
    UnityEngine::Canvas* GetCanvas();
    // private System.Void UpdateEnvMapMatrix()
    // Offset: 0x1B79748
    void UpdateEnvMapMatrix();
    // private System.Void EnableMasking()
    // Offset: 0x1B79A2C
    void EnableMasking();
    // private System.Void DisableMasking()
    // Offset: 0x1B7A0EC
    void DisableMasking();
    // private System.Void UpdateMask()
    // Offset: 0x1B79BFC
    void UpdateMask();
    // private System.Void SetPerspectiveCorrection()
    // Offset: 0x1B7B3E8
    void SetPerspectiveCorrection();
    // private System.Void SetMeshArrays(System.Int32 size)
    // Offset: 0x1B7B634
    void SetMeshArrays(int size);
    // private System.Void OnPreRenderCanvas()
    // Offset: 0x1B7DA74
    void OnPreRenderCanvas();
    // private System.Void UpdateSDFScale(System.Single scaleDelta)
    // Offset: 0x1B7D7F8
    void UpdateSDFScale(float scaleDelta);
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x1B86AA0
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0x1B86B20
    void CalculateLayoutInputVertical();
    // private System.Void UpdateSubObjectPivot()
    // Offset: 0x1B7D62C
    void UpdateSubObjectPivot();
    // public UnityEngine.Vector4 get_maskOffset()
    // Offset: 0x1B87264
    UnityEngine::Vector4 get_maskOffset();
    // public System.Void set_maskOffset(UnityEngine.Vector4 value)
    // Offset: 0x1B87278
    void set_maskOffset(UnityEngine::Vector4 value);
    // public System.Void UpdateFontAsset()
    // Offset: 0x1B87C20
    void UpdateFontAsset();
    // protected override System.Void Awake()
    // Offset: 0x1B7882C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0x1B78BE8
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1B78E58
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnDisable()
    void OnDisable();
    // protected override System.Void OnDestroy()
    // Offset: 0x1B7902C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDestroy()
    void OnDestroy();
    // protected override System.Void LoadFontAsset()
    // Offset: 0x1B7917C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::LoadFontAsset()
    void LoadFontAsset();
    // protected override UnityEngine.Material GetMaterial(UnityEngine.Material mat)
    // Offset: 0x1B7A218
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Material TMP_Text::GetMaterial(UnityEngine.Material mat)
    UnityEngine::Material* GetMaterial(UnityEngine::Material* mat);
    // protected override UnityEngine.Material[] GetMaterials(UnityEngine.Material[] mats)
    // Offset: 0x1B7A368
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Material[] TMP_Text::GetMaterials(UnityEngine.Material[] mats)
    ::Array<UnityEngine::Material*>* GetMaterials(::Array<UnityEngine::Material*>* mats);
    // protected override System.Void SetSharedMaterial(UnityEngine.Material mat)
    // Offset: 0x1B7A520
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetSharedMaterial(UnityEngine.Material mat)
    void SetSharedMaterial(UnityEngine::Material* mat);
    // protected override UnityEngine.Material[] GetSharedMaterials()
    // Offset: 0x1B7A564
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Material[] TMP_Text::GetSharedMaterials()
    ::Array<UnityEngine::Material*>* GetSharedMaterials();
    // protected override System.Void SetSharedMaterials(UnityEngine.Material[] materials)
    // Offset: 0x1B7A6FC
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetSharedMaterials(UnityEngine.Material[] materials)
    void SetSharedMaterials(::Array<UnityEngine::Material*>* materials);
    // protected override System.Void SetOutlineThickness(System.Single thickness)
    // Offset: 0x1B7AB28
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetOutlineThickness(System.Single thickness)
    void SetOutlineThickness(float thickness);
    // protected override System.Void SetFaceColor(UnityEngine.Color32 color)
    // Offset: 0x1B7AD2C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetFaceColor(UnityEngine.Color32 color)
    void SetFaceColor(UnityEngine::Color32 color);
    // protected override System.Void SetOutlineColor(UnityEngine.Color32 color)
    // Offset: 0x1B7AE48
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetOutlineColor(UnityEngine.Color32 color)
    void SetOutlineColor(UnityEngine::Color32 color);
    // protected override System.Void SetShaderDepth()
    // Offset: 0x1B7AF64
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetShaderDepth()
    void SetShaderDepth();
    // protected override System.Void SetCulling()
    // Offset: 0x1B7B0B8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetCulling()
    void SetCulling();
    // protected override System.Single GetPaddingForMaterial(UnityEngine.Material mat)
    // Offset: 0x1B7B494
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Single TMP_Text::GetPaddingForMaterial(UnityEngine.Material mat)
    float GetPaddingForMaterial(UnityEngine::Material* mat);
    // protected override System.Single GetPaddingForMaterial()
    // Offset: 0x1B7B570
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Single TMP_Text::GetPaddingForMaterial()
    float GetPaddingForMaterial();
    // protected override System.Int32 SetArraySizes(TMPro.TMP_Text/UnicodeChar[] chars)
    // Offset: 0x1B7B6AC
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Int32 TMP_Text::SetArraySizes(TMPro.TMP_Text/UnicodeChar[] chars)
    int SetArraySizes(::Array<TMPro::TMP_Text::UnicodeChar>* chars);
    // public override System.Void ComputeMarginSize()
    // Offset: 0x1B7D3C0
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ComputeMarginSize()
    void ComputeMarginSize();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1B7D4E0
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x1B7D524
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x1B7D558
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x1B7D5A8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // override System.Void InternalUpdate()
    // Offset: 0x1B7D720
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::InternalUpdate()
    void InternalUpdate();
    // protected override System.Void GenerateTextMesh()
    // Offset: 0x1B7DC68
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::GenerateTextMesh()
    void GenerateTextMesh();
    // protected override UnityEngine.Vector3[] GetTextContainerLocalCorners()
    // Offset: 0x1B85FD4
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Vector3[] TMP_Text::GetTextContainerLocalCorners()
    ::Array<UnityEngine::Vector3>* GetTextContainerLocalCorners();
    // protected override System.Void SetActiveSubMeshes(System.Boolean state)
    // Offset: 0x1B86080
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetActiveSubMeshes(System.Boolean state)
    void SetActiveSubMeshes(bool state);
    // protected override UnityEngine.Bounds GetCompoundBounds()
    // Offset: 0x1B861A0
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Bounds TMP_Text::GetCompoundBounds()
    UnityEngine::Bounds GetCompoundBounds();
    // protected override System.Void AdjustLineOffset(System.Int32 startIndex, System.Int32 endIndex, System.Single offset)
    // Offset: 0x1B864B8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::AdjustLineOffset(System.Int32 startIndex, System.Int32 endIndex, System.Single offset)
    void AdjustLineOffset(int startIndex, int endIndex, float offset);
    // public override UnityEngine.Material get_materialForRendering()
    // Offset: 0x1B868D0
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Material Graphic::get_materialForRendering()
    UnityEngine::Material* get_materialForRendering();
    // public override System.Boolean get_autoSizeTextContainer()
    // Offset: 0x1B86940
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Boolean TMP_Text::get_autoSizeTextContainer()
    bool get_autoSizeTextContainer();
    // public override System.Void set_autoSizeTextContainer(System.Boolean value)
    // Offset: 0x1B86948
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::set_autoSizeTextContainer(System.Boolean value)
    void set_autoSizeTextContainer(bool value);
    // public override UnityEngine.Mesh get_mesh()
    // Offset: 0x1B86A00
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Mesh TMP_Text::get_mesh()
    UnityEngine::Mesh* get_mesh();
    // public UnityEngine.CanvasRenderer get_canvasRenderer()
    // Offset: 0x1B86A08
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.CanvasRenderer Graphic::get_canvasRenderer()
    UnityEngine::CanvasRenderer* get_canvasRenderer();
    // public override System.Void SetVerticesDirty()
    // Offset: 0x1B86BA4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetVerticesDirty()
    void SetVerticesDirty();
    // public override System.Void SetLayoutDirty()
    // Offset: 0x1B86CA4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetLayoutDirty()
    void SetLayoutDirty();
    // public override System.Void SetMaterialDirty()
    // Offset: 0x1B86DB0
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetMaterialDirty()
    void SetMaterialDirty();
    // public override System.Void SetAllDirty()
    // Offset: 0x1B86EA8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetAllDirty()
    void SetAllDirty();
    // public override System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)
    // Offset: 0x1B86F00
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::Rebuild(UnityEngine.UI.CanvasUpdate update)
    void Rebuild(UnityEngine::UI::CanvasUpdate update);
    // public override UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x1B86FFC
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: UnityEngine.Material MaskableGraphic::GetModifiedMaterial(UnityEngine.Material baseMaterial)
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
    // protected override System.Void UpdateMaterial()
    // Offset: 0x1B8714C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::UpdateMaterial()
    void UpdateMaterial();
    // public override System.Void RecalculateClipping()
    // Offset: 0x1B872B0
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::RecalculateClipping()
    void RecalculateClipping();
    // public override System.Void RecalculateMasking()
    // Offset: 0x1B872B8
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::RecalculateMasking()
    void RecalculateMasking();
    // public override System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0x1B872D0
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // public override System.Void UpdateMeshPadding()
    // Offset: 0x1B872E8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateMeshPadding()
    void UpdateMeshPadding();
    // protected override System.Void InternalCrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha)
    // Offset: 0x1B87400
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::InternalCrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha)
    void InternalCrossFadeColor(UnityEngine::Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha);
    // protected override System.Void InternalCrossFadeAlpha(System.Single alpha, System.Single duration, System.Boolean ignoreTimeScale)
    // Offset: 0x1B874E4
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::InternalCrossFadeAlpha(System.Single alpha, System.Single duration, System.Boolean ignoreTimeScale)
    void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale);
    // public override System.Void ForceMeshUpdate()
    // Offset: 0x1B87590
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ForceMeshUpdate()
    void ForceMeshUpdate();
    // public override System.Void ForceMeshUpdate(System.Boolean ignoreInactive)
    // Offset: 0x1B8759C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ForceMeshUpdate(System.Boolean ignoreInactive)
    void ForceMeshUpdate(bool ignoreInactive);
    // public override TMPro.TMP_TextInfo GetTextInfo(System.String text)
    // Offset: 0x1B875AC
    // Implemented from: TMPro.TMP_Text
    // Base method: TMPro.TMP_TextInfo TMP_Text::GetTextInfo(System.String text)
    TMPro::TMP_TextInfo* GetTextInfo(::Il2CppString* text);
    // public override System.Void ClearMesh()
    // Offset: 0x1B876A4
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ClearMesh()
    void ClearMesh();
    // public override System.Void UpdateGeometry(UnityEngine.Mesh mesh, System.Int32 index)
    // Offset: 0x1B877B4
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateGeometry(UnityEngine.Mesh mesh, System.Int32 index)
    void UpdateGeometry(UnityEngine::Mesh* mesh, int index);
    // public override System.Void UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags flags)
    // Offset: 0x1B87840
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags flags)
    void UpdateVertexData(TMPro::TMP_VertexDataUpdateFlags flags);
    // public override System.Void UpdateVertexData()
    // Offset: 0x1B87A38
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateVertexData()
    void UpdateVertexData();
    // public System.Void .ctor()
    // Offset: 0x1B87C30
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextMeshProUGUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TextMeshProUGUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextMeshProUGUI*, creationType>()));
    }
  }; // TMPro.TextMeshProUGUI
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextMeshProUGUI*, "TMPro", "TextMeshProUGUI");
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetCanvas
// Il2CppName: GetCanvas
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateEnvMapMatrix
// Il2CppName: UpdateEnvMapMatrix
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::EnableMasking
// Il2CppName: EnableMasking
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::DisableMasking
// Il2CppName: DisableMasking
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateMask
// Il2CppName: UpdateMask
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetPerspectiveCorrection
// Il2CppName: SetPerspectiveCorrection
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetMeshArrays
// Il2CppName: SetMeshArrays
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::OnPreRenderCanvas
// Il2CppName: OnPreRenderCanvas
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateSDFScale
// Il2CppName: UpdateSDFScale
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::CalculateLayoutInputHorizontal
// Il2CppName: CalculateLayoutInputHorizontal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::CalculateLayoutInputVertical
// Il2CppName: CalculateLayoutInputVertical
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateSubObjectPivot
// Il2CppName: UpdateSubObjectPivot
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::get_maskOffset
// Il2CppName: get_maskOffset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::set_maskOffset
// Il2CppName: set_maskOffset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateFontAsset
// Il2CppName: UpdateFontAsset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::OnDisable
// Il2CppName: OnDisable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::LoadFontAsset
// Il2CppName: LoadFontAsset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetMaterial
// Il2CppName: GetMaterial
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetMaterials
// Il2CppName: GetMaterials
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetSharedMaterial
// Il2CppName: SetSharedMaterial
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetSharedMaterials
// Il2CppName: GetSharedMaterials
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetSharedMaterials
// Il2CppName: SetSharedMaterials
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetOutlineThickness
// Il2CppName: SetOutlineThickness
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetFaceColor
// Il2CppName: SetFaceColor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetOutlineColor
// Il2CppName: SetOutlineColor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetShaderDepth
// Il2CppName: SetShaderDepth
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetCulling
// Il2CppName: SetCulling
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetPaddingForMaterial
// Il2CppName: GetPaddingForMaterial
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetPaddingForMaterial
// Il2CppName: GetPaddingForMaterial
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetArraySizes
// Il2CppName: SetArraySizes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::ComputeMarginSize
// Il2CppName: ComputeMarginSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::OnDidApplyAnimationProperties
// Il2CppName: OnDidApplyAnimationProperties
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::OnCanvasHierarchyChanged
// Il2CppName: OnCanvasHierarchyChanged
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::OnTransformParentChanged
// Il2CppName: OnTransformParentChanged
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::InternalUpdate
// Il2CppName: InternalUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GenerateTextMesh
// Il2CppName: GenerateTextMesh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetTextContainerLocalCorners
// Il2CppName: GetTextContainerLocalCorners
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetActiveSubMeshes
// Il2CppName: SetActiveSubMeshes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetCompoundBounds
// Il2CppName: GetCompoundBounds
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::AdjustLineOffset
// Il2CppName: AdjustLineOffset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::get_materialForRendering
// Il2CppName: get_materialForRendering
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::get_autoSizeTextContainer
// Il2CppName: get_autoSizeTextContainer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::set_autoSizeTextContainer
// Il2CppName: set_autoSizeTextContainer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::get_mesh
// Il2CppName: get_mesh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::get_canvasRenderer
// Il2CppName: get_canvasRenderer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetVerticesDirty
// Il2CppName: SetVerticesDirty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetLayoutDirty
// Il2CppName: SetLayoutDirty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetMaterialDirty
// Il2CppName: SetMaterialDirty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::SetAllDirty
// Il2CppName: SetAllDirty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::Rebuild
// Il2CppName: Rebuild
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetModifiedMaterial
// Il2CppName: GetModifiedMaterial
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateMaterial
// Il2CppName: UpdateMaterial
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::RecalculateClipping
// Il2CppName: RecalculateClipping
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::RecalculateMasking
// Il2CppName: RecalculateMasking
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::Cull
// Il2CppName: Cull
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateMeshPadding
// Il2CppName: UpdateMeshPadding
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::InternalCrossFadeColor
// Il2CppName: InternalCrossFadeColor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::InternalCrossFadeAlpha
// Il2CppName: InternalCrossFadeAlpha
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::ForceMeshUpdate
// Il2CppName: ForceMeshUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::ForceMeshUpdate
// Il2CppName: ForceMeshUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::GetTextInfo
// Il2CppName: GetTextInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::ClearMesh
// Il2CppName: ClearMesh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateGeometry
// Il2CppName: UpdateGeometry
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateVertexData
// Il2CppName: UpdateVertexData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::UpdateVertexData
// Il2CppName: UpdateVertexData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextMeshProUGUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
