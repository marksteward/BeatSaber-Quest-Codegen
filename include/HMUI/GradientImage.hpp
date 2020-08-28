// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.UI.ILayoutElement
#include "UnityEngine/UI/ILayoutElement.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Sprite
  class Sprite;
  // Skipping declaration: Vector4 because it is already included!
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: Type because it is already included!
  // Skipping declaration: FillMethod because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.GradientImage
  class GradientImage : public UnityEngine::UI::MaskableGraphic, public UnityEngine::ISerializationCallbackReceiver, public UnityEngine::UI::ILayoutElement, public UnityEngine::ICanvasRaycastFilter {
    public:
    // Nested type: HMUI::GradientImage::Type
    struct Type;
    // Nested type: HMUI::GradientImage::FillMethod
    struct FillMethod;
    // Nested type: HMUI::GradientImage::OriginHorizontal
    struct OriginHorizontal;
    // Nested type: HMUI::GradientImage::OriginVertical
    struct OriginVertical;
    // Nested type: HMUI::GradientImage::Origin90
    struct Origin90;
    // Nested type: HMUI::GradientImage::Origin180
    struct Origin180;
    // Nested type: HMUI::GradientImage::Origin360
    struct Origin360;
    // Autogenerated type: HMUI.GradientImage/Type
    struct Type : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const {
        return value;
      }
      // static field const value: static public HMUI.GradientImage/Type Simple
      static constexpr const int Simple = 0;
      // Get static field: static public HMUI.GradientImage/Type Simple
      static HMUI::GradientImage::Type _get_Simple();
      // Set static field: static public HMUI.GradientImage/Type Simple
      static void _set_Simple(HMUI::GradientImage::Type value);
      // static field const value: static public HMUI.GradientImage/Type Sliced
      static constexpr const int Sliced = 1;
      // Get static field: static public HMUI.GradientImage/Type Sliced
      static HMUI::GradientImage::Type _get_Sliced();
      // Set static field: static public HMUI.GradientImage/Type Sliced
      static void _set_Sliced(HMUI::GradientImage::Type value);
      // static field const value: static public HMUI.GradientImage/Type Tiled
      static constexpr const int Tiled = 2;
      // Get static field: static public HMUI.GradientImage/Type Tiled
      static HMUI::GradientImage::Type _get_Tiled();
      // Set static field: static public HMUI.GradientImage/Type Tiled
      static void _set_Tiled(HMUI::GradientImage::Type value);
      // static field const value: static public HMUI.GradientImage/Type Filled
      static constexpr const int Filled = 3;
      // Get static field: static public HMUI.GradientImage/Type Filled
      static HMUI::GradientImage::Type _get_Filled();
      // Set static field: static public HMUI.GradientImage/Type Filled
      static void _set_Filled(HMUI::GradientImage::Type value);
    }; // HMUI.GradientImage/Type
    // Autogenerated type: HMUI.GradientImage/FillMethod
    struct FillMethod : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: FillMethod
      constexpr FillMethod(int value_ = {}) : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const {
        return value;
      }
      // static field const value: static public HMUI.GradientImage/FillMethod Horizontal
      static constexpr const int Horizontal = 0;
      // Get static field: static public HMUI.GradientImage/FillMethod Horizontal
      static HMUI::GradientImage::FillMethod _get_Horizontal();
      // Set static field: static public HMUI.GradientImage/FillMethod Horizontal
      static void _set_Horizontal(HMUI::GradientImage::FillMethod value);
      // static field const value: static public HMUI.GradientImage/FillMethod Vertical
      static constexpr const int Vertical = 1;
      // Get static field: static public HMUI.GradientImage/FillMethod Vertical
      static HMUI::GradientImage::FillMethod _get_Vertical();
      // Set static field: static public HMUI.GradientImage/FillMethod Vertical
      static void _set_Vertical(HMUI::GradientImage::FillMethod value);
      // static field const value: static public HMUI.GradientImage/FillMethod Radial90
      static constexpr const int Radial90 = 2;
      // Get static field: static public HMUI.GradientImage/FillMethod Radial90
      static HMUI::GradientImage::FillMethod _get_Radial90();
      // Set static field: static public HMUI.GradientImage/FillMethod Radial90
      static void _set_Radial90(HMUI::GradientImage::FillMethod value);
      // static field const value: static public HMUI.GradientImage/FillMethod Radial180
      static constexpr const int Radial180 = 3;
      // Get static field: static public HMUI.GradientImage/FillMethod Radial180
      static HMUI::GradientImage::FillMethod _get_Radial180();
      // Set static field: static public HMUI.GradientImage/FillMethod Radial180
      static void _set_Radial180(HMUI::GradientImage::FillMethod value);
      // static field const value: static public HMUI.GradientImage/FillMethod Radial360
      static constexpr const int Radial360 = 4;
      // Get static field: static public HMUI.GradientImage/FillMethod Radial360
      static HMUI::GradientImage::FillMethod _get_Radial360();
      // Set static field: static public HMUI.GradientImage/FillMethod Radial360
      static void _set_Radial360(HMUI::GradientImage::FillMethod value);
    }; // HMUI.GradientImage/FillMethod
    // private UnityEngine.Sprite m_Sprite
    // Offset: 0xC0
    UnityEngine::Sprite* m_Sprite;
    // private UnityEngine.Color m_Color0
    // Offset: 0xC8
    UnityEngine::Color m_Color0;
    // private UnityEngine.Color m_Color1
    // Offset: 0xD8
    UnityEngine::Color m_Color1;
    // private UnityEngine.Sprite m_OverrideSprite
    // Offset: 0xE8
    UnityEngine::Sprite* m_OverrideSprite;
    // private HMUI.GradientImage/Type m_Type
    // Offset: 0xF0
    HMUI::GradientImage::Type m_Type;
    // private System.Boolean m_PreserveAspect
    // Offset: 0xF4
    bool m_PreserveAspect;
    // private System.Boolean m_FillCenter
    // Offset: 0xF5
    bool m_FillCenter;
    // private HMUI.GradientImage/FillMethod m_FillMethod
    // Offset: 0xF8
    HMUI::GradientImage::FillMethod m_FillMethod;
    // private System.Single m_FillAmount
    // Offset: 0xFC
    float m_FillAmount;
    // private System.Boolean m_FillClockwise
    // Offset: 0x100
    bool m_FillClockwise;
    // private System.Int32 m_FillOrigin
    // Offset: 0x104
    int m_FillOrigin;
    // private System.Single m_EventAlphaThreshold
    // Offset: 0x108
    float m_EventAlphaThreshold;
    // Get static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static ::Array<UnityEngine::Vector2>* _get_s_VertScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static void _set_s_VertScratch(::Array<UnityEngine::Vector2>* value);
    // Get static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static ::Array<UnityEngine::Vector2>* _get_s_UVScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static void _set_s_UVScratch(::Array<UnityEngine::Vector2>* value);
    // Get static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static ::Array<UnityEngine::Color>* _get_s_ColorScratch();
    // Set static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static void _set_s_ColorScratch(::Array<UnityEngine::Color>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] s_Xy
    static ::Array<UnityEngine::Vector3>* _get_s_Xy();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Xy
    static void _set_s_Xy(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] s_Uv
    static ::Array<UnityEngine::Vector3>* _get_s_Uv();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Uv
    static void _set_s_Uv(::Array<UnityEngine::Vector3>* value);
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0xEDCC50
    UnityEngine::Sprite* get_sprite();
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0xEDCC58
    void set_sprite(UnityEngine::Sprite* value);
    // public UnityEngine.Color get_color0()
    // Offset: 0xEDCCE0
    UnityEngine::Color get_color0();
    // public System.Void set_color0(UnityEngine.Color value)
    // Offset: 0xED8808
    void set_color0(UnityEngine::Color value);
    // public UnityEngine.Color get_color1()
    // Offset: 0xEDCCEC
    UnityEngine::Color get_color1();
    // public System.Void set_color1(UnityEngine.Color value)
    // Offset: 0xED8850
    void set_color1(UnityEngine::Color value);
    // public UnityEngine.Sprite get_overrideSprite()
    // Offset: 0xEDCCF8
    UnityEngine::Sprite* get_overrideSprite();
    // public System.Void set_overrideSprite(UnityEngine.Sprite value)
    // Offset: 0xEDCD80
    void set_overrideSprite(UnityEngine::Sprite* value);
    // public HMUI.GradientImage/Type get_type()
    // Offset: 0xEDCE08
    HMUI::GradientImage::Type get_type();
    // public System.Void set_type(HMUI.GradientImage/Type value)
    // Offset: 0xEDCE10
    void set_type(HMUI::GradientImage::Type value);
    // public System.Boolean get_preserveAspect()
    // Offset: 0xEDCE98
    bool get_preserveAspect();
    // public System.Void set_preserveAspect(System.Boolean value)
    // Offset: 0xEDCEA0
    void set_preserveAspect(bool value);
    // public System.Boolean get_fillCenter()
    // Offset: 0xEDCF28
    bool get_fillCenter();
    // public System.Void set_fillCenter(System.Boolean value)
    // Offset: 0xEDCF30
    void set_fillCenter(bool value);
    // public HMUI.GradientImage/FillMethod get_fillMethod()
    // Offset: 0xEDCFB8
    HMUI::GradientImage::FillMethod get_fillMethod();
    // public System.Void set_fillMethod(HMUI.GradientImage/FillMethod value)
    // Offset: 0xEDCFC0
    void set_fillMethod(HMUI::GradientImage::FillMethod value);
    // public System.Single get_fillAmount()
    // Offset: 0xEDD040
    float get_fillAmount();
    // public System.Void set_fillAmount(System.Single value)
    // Offset: 0xEDD048
    void set_fillAmount(float value);
    // public System.Boolean get_fillClockwise()
    // Offset: 0xEDD0FC
    bool get_fillClockwise();
    // public System.Void set_fillClockwise(System.Boolean value)
    // Offset: 0xEDD104
    void set_fillClockwise(bool value);
    // public System.Int32 get_fillOrigin()
    // Offset: 0xEDD18C
    int get_fillOrigin();
    // public System.Void set_fillOrigin(System.Int32 value)
    // Offset: 0xEDD194
    void set_fillOrigin(int value);
    // public System.Single get_eventAlphaThreshold()
    // Offset: 0xEDD21C
    float get_eventAlphaThreshold();
    // public System.Void set_eventAlphaThreshold(System.Single value)
    // Offset: 0xEDD224
    void set_eventAlphaThreshold(float value);
    // public System.Boolean get_hasBorder()
    // Offset: 0xEDD410
    bool get_hasBorder();
    // public System.Single get_pixelsPerUnit()
    // Offset: 0xEDD4DC
    float get_pixelsPerUnit();
    // private UnityEngine.Vector4 GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    // Offset: 0xEDD69C
    UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);
    // private System.Void GenerateSimpleSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect)
    // Offset: 0xEDDE04
    void GenerateSimpleSprite(UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);
    // private System.Void GenerateSlicedSprite(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0xEDE198
    void GenerateSlicedSprite(UnityEngine::UI::VertexHelper* toFill);
    // private System.Void GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0xEDEB40
    void GenerateTiledSprite(UnityEngine::UI::VertexHelper* toFill);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    // Offset: 0xEE0E24
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, ::Array<UnityEngine::Vector3>* quadPositions, UnityEngine::Color32 color, ::Array<UnityEngine::Vector3>* quadUVs);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)
    // Offset: 0xEE0C18
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color0, UnityEngine.Color32 color1, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)
    // Offset: 0xEE0A04
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax);
    // private UnityEngine.Vector4 GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    // Offset: 0xEE08E8
    UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect rect);
    // private System.Void GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect)
    // Offset: 0xEDFAB4
    void GenerateFilledSprite(UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);
    // static private System.Boolean RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    // Offset: 0xEE0FAC
    static bool RadialCut(::Array<UnityEngine::Vector3>* xy, ::Array<UnityEngine::Vector3>* uv, float fill, bool invert, int corner);
    // static private System.Void RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    // Offset: 0xEE1118
    static void RadialCut(::Array<UnityEngine::Vector3>* xy, float cos, float sin, bool invert, int corner);
    // private UnityEngine.Vector2 MapCoordinate(UnityEngine.Vector2 local, UnityEngine.Rect rect)
    // Offset: 0xEE1CB8
    UnityEngine::Vector2 MapCoordinate(UnityEngine::Vector2 local, UnityEngine::Rect rect);
    // protected System.Void .ctor()
    // Offset: 0xEDD22C
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GradientImage* New_ctor();
    // public override UnityEngine.Texture get_mainTexture()
    // Offset: 0xEDD274
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Texture Graphic::get_mainTexture()
    UnityEngine::Texture* get_mainTexture();
    // public System.Void OnBeforeSerialize()
    // Offset: 0xEDD5E4
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void OnBeforeSerialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
    // Maps to method: OnBeforeSerialize
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0xEDD5E8
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void OnAfterDeserialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
    // Maps to method: OnAfterDeserialize
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public override System.Void SetNativeSize()
    // Offset: 0xEDDB2C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetNativeSize()
    void SetNativeSize();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0xEDDCD0
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* toFill);
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0xEE1690
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0xEE1694
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public System.Single get_minWidth()
    // Offset: 0xEE1698
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minWidth()
    float get_minWidth();
    // public System.Single get_preferredWidth()
    // Offset: 0xEE16A0
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredWidth()
    float get_preferredWidth();
    // public System.Single get_flexibleWidth()
    // Offset: 0xEE1794
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleWidth()
    float get_flexibleWidth();
    // public System.Single get_minHeight()
    // Offset: 0xEE179C
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minHeight()
    float get_minHeight();
    // public System.Single get_preferredHeight()
    // Offset: 0xEE17A4
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredHeight()
    float get_preferredHeight();
    // public System.Single get_flexibleHeight()
    // Offset: 0xEE1898
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleHeight()
    float get_flexibleHeight();
    // public System.Int32 get_layoutPriority()
    // Offset: 0xEE18A0
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Int32 ILayoutElement::get_layoutPriority()
    int get_layoutPriority();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 screenPoint, UnityEngine.Camera eventCamera)
    // Offset: 0xEE18A8
    // Implemented from: UnityEngine.ICanvasRaycastFilter
    // Base method: System.Boolean ICanvasRaycastFilter::IsRaycastLocationValid(UnityEngine.Vector2 screenPoint, UnityEngine.Camera eventCamera)
    bool IsRaycastLocationValid(UnityEngine::Vector2 screenPoint, UnityEngine::Camera* eventCamera);
    // static private System.Void .cctor()
    // Offset: 0xEE219C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // HMUI.GradientImage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage*, "HMUI", "GradientImage");
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage::Type, "HMUI", "GradientImage/Type");
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage::FillMethod, "HMUI", "GradientImage/FillMethod");
#pragma pack(pop)
