// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Rect
  struct Rect;
  // Skipping declaration: Vector4 because it is already included!
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Skipping declaration: Type because it is already included!
  // Skipping declaration: FillMethod because it is already included!
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Forward declaring namespace: UnityEngine::U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteAtlas
  class SpriteAtlas;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0xF8
  // Autogenerated type: UnityEngine.UI.Image
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: D7CC48
  class Image : public UnityEngine::UI::MaskableGraphic/*, public UnityEngine::ISerializationCallbackReceiver, public UnityEngine::UI::ILayoutElement, public UnityEngine::ICanvasRaycastFilter*/ {
    public:
    // Nested type: UnityEngine::UI::Image::Type
    struct Type;
    // Nested type: UnityEngine::UI::Image::FillMethod
    struct FillMethod;
    // Nested type: UnityEngine::UI::Image::OriginHorizontal
    struct OriginHorizontal;
    // Nested type: UnityEngine::UI::Image::OriginVertical
    struct OriginVertical;
    // Nested type: UnityEngine::UI::Image::Origin90
    struct Origin90;
    // Nested type: UnityEngine::UI::Image::Origin180
    struct Origin180;
    // Nested type: UnityEngine::UI::Image::Origin360
    struct Origin360;
    // Size: 0x4
    // Autogenerated type: UnityEngine.UI.Image/Type
    // [] Offset: FFFFFFFF
    struct Type/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.Image/Type Simple
      static constexpr const int Simple = 0;
      // Get static field: static public UnityEngine.UI.Image/Type Simple
      static UnityEngine::UI::Image::Type _get_Simple();
      // Set static field: static public UnityEngine.UI.Image/Type Simple
      static void _set_Simple(UnityEngine::UI::Image::Type value);
      // static field const value: static public UnityEngine.UI.Image/Type Sliced
      static constexpr const int Sliced = 1;
      // Get static field: static public UnityEngine.UI.Image/Type Sliced
      static UnityEngine::UI::Image::Type _get_Sliced();
      // Set static field: static public UnityEngine.UI.Image/Type Sliced
      static void _set_Sliced(UnityEngine::UI::Image::Type value);
      // static field const value: static public UnityEngine.UI.Image/Type Tiled
      static constexpr const int Tiled = 2;
      // Get static field: static public UnityEngine.UI.Image/Type Tiled
      static UnityEngine::UI::Image::Type _get_Tiled();
      // Set static field: static public UnityEngine.UI.Image/Type Tiled
      static void _set_Tiled(UnityEngine::UI::Image::Type value);
      // static field const value: static public UnityEngine.UI.Image/Type Filled
      static constexpr const int Filled = 3;
      // Get static field: static public UnityEngine.UI.Image/Type Filled
      static UnityEngine::UI::Image::Type _get_Filled();
      // Set static field: static public UnityEngine.UI.Image/Type Filled
      static void _set_Filled(UnityEngine::UI::Image::Type value);
    }; // UnityEngine.UI.Image/Type
    static check_size<sizeof(Image::Type), 0 + sizeof(int)> __UnityEngine_UI_Image_TypeSizeCheck;
    static_assert(sizeof(Image::Type) == 0x4);
    // Size: 0x4
    // Autogenerated type: UnityEngine.UI.Image/FillMethod
    // [] Offset: FFFFFFFF
    struct FillMethod/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: FillMethod
      constexpr FillMethod(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.Image/FillMethod Horizontal
      static constexpr const int Horizontal = 0;
      // Get static field: static public UnityEngine.UI.Image/FillMethod Horizontal
      static UnityEngine::UI::Image::FillMethod _get_Horizontal();
      // Set static field: static public UnityEngine.UI.Image/FillMethod Horizontal
      static void _set_Horizontal(UnityEngine::UI::Image::FillMethod value);
      // static field const value: static public UnityEngine.UI.Image/FillMethod Vertical
      static constexpr const int Vertical = 1;
      // Get static field: static public UnityEngine.UI.Image/FillMethod Vertical
      static UnityEngine::UI::Image::FillMethod _get_Vertical();
      // Set static field: static public UnityEngine.UI.Image/FillMethod Vertical
      static void _set_Vertical(UnityEngine::UI::Image::FillMethod value);
      // static field const value: static public UnityEngine.UI.Image/FillMethod Radial90
      static constexpr const int Radial90 = 2;
      // Get static field: static public UnityEngine.UI.Image/FillMethod Radial90
      static UnityEngine::UI::Image::FillMethod _get_Radial90();
      // Set static field: static public UnityEngine.UI.Image/FillMethod Radial90
      static void _set_Radial90(UnityEngine::UI::Image::FillMethod value);
      // static field const value: static public UnityEngine.UI.Image/FillMethod Radial180
      static constexpr const int Radial180 = 3;
      // Get static field: static public UnityEngine.UI.Image/FillMethod Radial180
      static UnityEngine::UI::Image::FillMethod _get_Radial180();
      // Set static field: static public UnityEngine.UI.Image/FillMethod Radial180
      static void _set_Radial180(UnityEngine::UI::Image::FillMethod value);
      // static field const value: static public UnityEngine.UI.Image/FillMethod Radial360
      static constexpr const int Radial360 = 4;
      // Get static field: static public UnityEngine.UI.Image/FillMethod Radial360
      static UnityEngine::UI::Image::FillMethod _get_Radial360();
      // Set static field: static public UnityEngine.UI.Image/FillMethod Radial360
      static void _set_Radial360(UnityEngine::UI::Image::FillMethod value);
    }; // UnityEngine.UI.Image/FillMethod
    static check_size<sizeof(Image::FillMethod), 0 + sizeof(int)> __UnityEngine_UI_Image_FillMethodSizeCheck;
    static_assert(sizeof(Image::FillMethod) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xD7E2FC
    // private UnityEngine.Sprite m_Sprite
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::Sprite* m_Sprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite m_OverrideSprite
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::Sprite* m_OverrideSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.UI.Image/Type m_Type
    // Size: 0x4
    // Offset: 0xD0
    UnityEngine::UI::Image::Type m_Type;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image::Type) == 0x4);
    // private System.Boolean m_PreserveAspect
    // Size: 0x1
    // Offset: 0xD4
    bool m_PreserveAspect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_FillCenter
    // Size: 0x1
    // Offset: 0xD5
    bool m_FillCenter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_FillCenter and: m_FillMethod
    char __padding4[0x2] = {};
    // private UnityEngine.UI.Image/FillMethod m_FillMethod
    // Size: 0x4
    // Offset: 0xD8
    UnityEngine::UI::Image::FillMethod m_FillMethod;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image::FillMethod) == 0x4);
    // [RangeAttribute] Offset: 0xD7E388
    // private System.Single m_FillAmount
    // Size: 0x4
    // Offset: 0xDC
    float m_FillAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_FillClockwise
    // Size: 0x1
    // Offset: 0xE0
    bool m_FillClockwise;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_FillClockwise and: m_FillOrigin
    char __padding7[0x3] = {};
    // private System.Int32 m_FillOrigin
    // Size: 0x4
    // Offset: 0xE4
    int m_FillOrigin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_AlphaHitTestMinimumThreshold
    // Size: 0x4
    // Offset: 0xE8
    float m_AlphaHitTestMinimumThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_Tracked
    // Size: 0x1
    // Offset: 0xEC
    bool m_Tracked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_UseSpriteMesh
    // Size: 0x1
    // Offset: 0xED
    bool m_UseSpriteMesh;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UseSpriteMesh and: m_PixelsPerUnitMultiplier
    char __padding11[0x2] = {};
    // private System.Single m_PixelsPerUnitMultiplier
    // Size: 0x4
    // Offset: 0xF0
    float m_PixelsPerUnitMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_CachedReferencePixelsPerUnit
    // Size: 0x4
    // Offset: 0xF4
    float m_CachedReferencePixelsPerUnit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Image
    Image(UnityEngine::Sprite* m_Sprite_ = {}, UnityEngine::Sprite* m_OverrideSprite_ = {}, UnityEngine::UI::Image::Type m_Type_ = {}, bool m_PreserveAspect_ = {}, bool m_FillCenter_ = {}, UnityEngine::UI::Image::FillMethod m_FillMethod_ = {}, float m_FillAmount_ = {}, bool m_FillClockwise_ = {}, int m_FillOrigin_ = {}, float m_AlphaHitTestMinimumThreshold_ = {}, bool m_Tracked_ = {}, bool m_UseSpriteMesh_ = {}, float m_PixelsPerUnitMultiplier_ = {}, float m_CachedReferencePixelsPerUnit_ = {}) noexcept : m_Sprite{m_Sprite_}, m_OverrideSprite{m_OverrideSprite_}, m_Type{m_Type_}, m_PreserveAspect{m_PreserveAspect_}, m_FillCenter{m_FillCenter_}, m_FillMethod{m_FillMethod_}, m_FillAmount{m_FillAmount_}, m_FillClockwise{m_FillClockwise_}, m_FillOrigin{m_FillOrigin_}, m_AlphaHitTestMinimumThreshold{m_AlphaHitTestMinimumThreshold_}, m_Tracked{m_Tracked_}, m_UseSpriteMesh{m_UseSpriteMesh_}, m_PixelsPerUnitMultiplier{m_PixelsPerUnitMultiplier_}, m_CachedReferencePixelsPerUnit{m_CachedReferencePixelsPerUnit_} {}
    // Creating interface conversion operator: operator UnityEngine::ISerializationCallbackReceiver
    operator UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::ILayoutElement
    operator UnityEngine::UI::ILayoutElement() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ILayoutElement*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::ICanvasRaycastFilter
    operator UnityEngine::ICanvasRaycastFilter() noexcept {
      return *reinterpret_cast<UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // Get static field: static protected UnityEngine.Material s_ETC1DefaultUI
    static UnityEngine::Material* _get_s_ETC1DefaultUI();
    // Set static field: static protected UnityEngine.Material s_ETC1DefaultUI
    static void _set_s_ETC1DefaultUI(UnityEngine::Material* value);
    // Get static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static ::Array<UnityEngine::Vector2>* _get_s_VertScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static void _set_s_VertScratch(::Array<UnityEngine::Vector2>* value);
    // Get static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static ::Array<UnityEngine::Vector2>* _get_s_UVScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static void _set_s_UVScratch(::Array<UnityEngine::Vector2>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] s_Xy
    static ::Array<UnityEngine::Vector3>* _get_s_Xy();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Xy
    static void _set_s_Xy(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] s_Uv
    static ::Array<UnityEngine::Vector3>* _get_s_Uv();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Uv
    static void _set_s_Uv(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.UI.Image> m_TrackedTexturelessImages
    static System::Collections::Generic::List_1<UnityEngine::UI::Image*>* _get_m_TrackedTexturelessImages();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.UI.Image> m_TrackedTexturelessImages
    static void _set_m_TrackedTexturelessImages(System::Collections::Generic::List_1<UnityEngine::UI::Image*>* value);
    // Get static field: static private System.Boolean s_Initialized
    static bool _get_s_Initialized();
    // Set static field: static private System.Boolean s_Initialized
    static void _set_s_Initialized(bool value);
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0x14CD6C0
    UnityEngine::Sprite* get_sprite();
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x14CD6C8
    void set_sprite(UnityEngine::Sprite* value);
    // public System.Void DisableSpriteOptimizations()
    // Offset: 0x14CDAF0
    void DisableSpriteOptimizations();
    // public UnityEngine.Sprite get_overrideSprite()
    // Offset: 0x14CDAF8
    UnityEngine::Sprite* get_overrideSprite();
    // public System.Void set_overrideSprite(UnityEngine.Sprite value)
    // Offset: 0x14CDB84
    void set_overrideSprite(UnityEngine::Sprite* value);
    // private UnityEngine.Sprite get_activeSprite()
    // Offset: 0x14CDAFC
    UnityEngine::Sprite* get_activeSprite();
    // public UnityEngine.UI.Image/Type get_type()
    // Offset: 0x14CDC14
    UnityEngine::UI::Image::Type get_type();
    // public System.Void set_type(UnityEngine.UI.Image/Type value)
    // Offset: 0x14CDC1C
    void set_type(UnityEngine::UI::Image::Type value);
    // public System.Boolean get_preserveAspect()
    // Offset: 0x14CDCA4
    bool get_preserveAspect();
    // public System.Void set_preserveAspect(System.Boolean value)
    // Offset: 0x14CDCAC
    void set_preserveAspect(bool value);
    // public System.Boolean get_fillCenter()
    // Offset: 0x14CDD34
    bool get_fillCenter();
    // public System.Void set_fillCenter(System.Boolean value)
    // Offset: 0x14CDD3C
    void set_fillCenter(bool value);
    // public UnityEngine.UI.Image/FillMethod get_fillMethod()
    // Offset: 0x14CDDC4
    UnityEngine::UI::Image::FillMethod get_fillMethod();
    // public System.Void set_fillMethod(UnityEngine.UI.Image/FillMethod value)
    // Offset: 0x14CDDCC
    void set_fillMethod(UnityEngine::UI::Image::FillMethod value);
    // public System.Single get_fillAmount()
    // Offset: 0x14CDE4C
    float get_fillAmount();
    // public System.Void set_fillAmount(System.Single value)
    // Offset: 0x14CDE54
    void set_fillAmount(float value);
    // public System.Boolean get_fillClockwise()
    // Offset: 0x14CDF08
    bool get_fillClockwise();
    // public System.Void set_fillClockwise(System.Boolean value)
    // Offset: 0x14CDF10
    void set_fillClockwise(bool value);
    // public System.Int32 get_fillOrigin()
    // Offset: 0x14CDF98
    int get_fillOrigin();
    // public System.Void set_fillOrigin(System.Int32 value)
    // Offset: 0x14CDFA0
    void set_fillOrigin(int value);
    // public System.Single get_eventAlphaThreshold()
    // Offset: 0x14CE028
    float get_eventAlphaThreshold();
    // public System.Void set_eventAlphaThreshold(System.Single value)
    // Offset: 0x14CE038
    void set_eventAlphaThreshold(float value);
    // public System.Single get_alphaHitTestMinimumThreshold()
    // Offset: 0x14CE048
    float get_alphaHitTestMinimumThreshold();
    // public System.Void set_alphaHitTestMinimumThreshold(System.Single value)
    // Offset: 0x14CE050
    void set_alphaHitTestMinimumThreshold(float value);
    // public System.Boolean get_useSpriteMesh()
    // Offset: 0x14CE058
    bool get_useSpriteMesh();
    // public System.Void set_useSpriteMesh(System.Boolean value)
    // Offset: 0x14CE060
    void set_useSpriteMesh(bool value);
    // static public UnityEngine.Material get_defaultETC1GraphicMaterial()
    // Offset: 0x14CE134
    static UnityEngine::Material* get_defaultETC1GraphicMaterial();
    // public System.Boolean get_hasBorder()
    // Offset: 0x14CE3D0
    bool get_hasBorder();
    // public System.Single get_pixelsPerUnitMultiplier()
    // Offset: 0x14CE49C
    float get_pixelsPerUnitMultiplier();
    // public System.Void set_pixelsPerUnitMultiplier(System.Single value)
    // Offset: 0x14CE4A4
    void set_pixelsPerUnitMultiplier(float value);
    // public System.Single get_pixelsPerUnit()
    // Offset: 0x14CE528
    float get_pixelsPerUnit();
    // protected System.Single get_multipliedPixelsPerUnit()
    // Offset: 0x14CE63C
    float get_multipliedPixelsPerUnit();
    // private System.Void PreserveSpriteAspectRatio(ref UnityEngine.Rect rect, UnityEngine.Vector2 spriteSize)
    // Offset: 0x14CE878
    void PreserveSpriteAspectRatio(UnityEngine::Rect& rect, UnityEngine::Vector2 spriteSize);
    // private UnityEngine.Vector4 GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    // Offset: 0x14CE9D4
    UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);
    // private System.Void TrackSprite()
    // Offset: 0x14CD9E8
    void TrackSprite();
    // private System.Void GenerateSimpleSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect)
    // Offset: 0x14CF02C
    void GenerateSimpleSprite(UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);
    // private System.Void GenerateSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect)
    // Offset: 0x14CF374
    void GenerateSprite(UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);
    // private System.Void GenerateSlicedSprite(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x14CF7B0
    void GenerateSlicedSprite(UnityEngine::UI::VertexHelper* toFill);
    // private System.Void GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x14CFF04
    void GenerateTiledSprite(UnityEngine::UI::VertexHelper* toFill);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    // Offset: 0x14D2A6C
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, ::Array<UnityEngine::Vector3>* quadPositions, UnityEngine::Color32 color, ::Array<UnityEngine::Vector3>* quadUVs);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)
    // Offset: 0x14D2860
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax);
    // private UnityEngine.Vector4 GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect adjustedRect)
    // Offset: 0x14D2664
    UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect adjustedRect);
    // private System.Void GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect)
    // Offset: 0x14D1398
    void GenerateFilledSprite(UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);
    // static private System.Boolean RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    // Offset: 0x14D2BF4
    static bool RadialCut(::Array<UnityEngine::Vector3>* xy, ::Array<UnityEngine::Vector3>* uv, float fill, bool invert, int corner);
    // static private System.Void RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    // Offset: 0x14D2D60
    static void RadialCut(::Array<UnityEngine::Vector3>* xy, float cos, float sin, bool invert, int corner);
    // private UnityEngine.Vector2 MapCoordinate(UnityEngine.Vector2 local, UnityEngine.Rect rect)
    // Offset: 0x14D3888
    UnityEngine::Vector2 MapCoordinate(UnityEngine::Vector2 local, UnityEngine::Rect rect);
    // static private System.Void RebuildImage(UnityEngine.U2D.SpriteAtlas spriteAtlas)
    // Offset: 0x14D3D78
    static void RebuildImage(UnityEngine::U2D::SpriteAtlas* spriteAtlas);
    // static private System.Void TrackImage(UnityEngine.UI.Image g)
    // Offset: 0x14D21CC
    static void TrackImage(UnityEngine::UI::Image* g);
    // static private System.Void UnTrackImage(UnityEngine.UI.Image g)
    // Offset: 0x14D23B0
    static void UnTrackImage(UnityEngine::UI::Image* g);
    // protected System.Void .ctor()
    // Offset: 0x14CE0E8
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
    static Image* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Image::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Image*, creationType>()));
    }
    // public override UnityEngine.Texture get_mainTexture()
    // Offset: 0x14CE234
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Texture Graphic::get_mainTexture()
    UnityEngine::Texture* get_mainTexture();
    // public override UnityEngine.Material get_material()
    // Offset: 0x14CE664
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Material Graphic::get_material()
    UnityEngine::Material* get_material();
    // public override System.Void set_material(UnityEngine.Material value)
    // Offset: 0x14CE7BC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::set_material(UnityEngine.Material value)
    void set_material(UnityEngine::Material* value);
    // public System.Void OnBeforeSerialize()
    // Offset: 0x14CE7C0
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void OnBeforeSerialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
    // Maps to method: OnBeforeSerialize
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x14CE7C4
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void OnAfterDeserialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
    // Maps to method: OnAfterDeserialize
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public override System.Void SetNativeSize()
    // Offset: 0x14CED44
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetNativeSize()
    void SetNativeSize();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x14CEEDC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* toFill);
    // protected override System.Void OnEnable()
    // Offset: 0x14D2304
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x14D232C
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnDisable()
    void OnDisable();
    // protected override System.Void UpdateMaterial()
    // Offset: 0x14D2434
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::UpdateMaterial()
    void UpdateMaterial();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x14D254C
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x14D32D8
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0x14D32DC
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public System.Single get_minWidth()
    // Offset: 0x14D32E0
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minWidth()
    float get_minWidth();
    // public System.Single get_preferredWidth()
    // Offset: 0x14D32E8
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredWidth()
    float get_preferredWidth();
    // public System.Single get_flexibleWidth()
    // Offset: 0x14D33DC
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleWidth()
    float get_flexibleWidth();
    // public System.Single get_minHeight()
    // Offset: 0x14D33E4
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minHeight()
    float get_minHeight();
    // public System.Single get_preferredHeight()
    // Offset: 0x14D33EC
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredHeight()
    float get_preferredHeight();
    // public System.Single get_flexibleHeight()
    // Offset: 0x14D34E0
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleHeight()
    float get_flexibleHeight();
    // public System.Int32 get_layoutPriority()
    // Offset: 0x14D34E8
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Int32 ILayoutElement::get_layoutPriority()
    int get_layoutPriority();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 screenPoint, UnityEngine.Camera eventCamera)
    // Offset: 0x14D34F0
    // Implemented from: UnityEngine.ICanvasRaycastFilter
    // Base method: System.Boolean ICanvasRaycastFilter::IsRaycastLocationValid(UnityEngine.Vector2 screenPoint, UnityEngine.Camera eventCamera)
    bool IsRaycastLocationValid(UnityEngine::Vector2 screenPoint, UnityEngine::Camera* eventCamera);
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x14D3ED8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // static private System.Void .cctor()
    // Offset: 0x14D3F14
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.UI.Image
  static check_size<sizeof(Image), 244 + sizeof(float)> __UnityEngine_UI_ImageSizeCheck;
  static_assert(sizeof(Image) == 0xF8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Image*, "UnityEngine.UI", "Image");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Image::Type, "UnityEngine.UI", "Image/Type");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Image::FillMethod, "UnityEngine.UI", "Image/FillMethod");
#pragma pack(pop)
