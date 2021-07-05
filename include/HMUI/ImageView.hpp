// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x130
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ImageView
  // [DisallowMultipleComponent] Offset: DF79B0
  // [ExecuteAlways] Offset: DF79B0
  class ImageView : public UnityEngine::UI::Image {
    public:
    // Nested type: HMUI::ImageView::GradientDirection
    struct GradientDirection;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.ImageView/GradientDirection
    struct GradientDirection/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: GradientDirection
      constexpr GradientDirection(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.ImageView/GradientDirection Horizontal
      static constexpr const int Horizontal = 0;
      // Get static field: static public HMUI.ImageView/GradientDirection Horizontal
      static HMUI::ImageView::GradientDirection _get_Horizontal();
      // Set static field: static public HMUI.ImageView/GradientDirection Horizontal
      static void _set_Horizontal(HMUI::ImageView::GradientDirection value);
      // static field const value: static public HMUI.ImageView/GradientDirection Vertical
      static constexpr const int Vertical = 1;
      // Get static field: static public HMUI.ImageView/GradientDirection Vertical
      static HMUI::ImageView::GradientDirection _get_Vertical();
      // Set static field: static public HMUI.ImageView/GradientDirection Vertical
      static void _set_Vertical(HMUI::ImageView::GradientDirection value);
    }; // HMUI.ImageView/GradientDirection
    #pragma pack(pop)
    static check_size<sizeof(ImageView::GradientDirection), 0 + sizeof(int)> __HMUI_ImageView_GradientDirectionSizeCheck;
    static_assert(sizeof(ImageView::GradientDirection) == 0x4);
    // private System.Single _skew
    // Size: 0x4
    // Offset: 0xF8
    float skew;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _gradient
    // Size: 0x1
    // Offset: 0xFC
    bool gradient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: gradient and: color0
    char __padding1[0x3] = {};
    // private UnityEngine.Color _color0
    // Size: 0x10
    // Offset: 0x100
    UnityEngine::Color color0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _color1
    // Size: 0x10
    // Offset: 0x110
    UnityEngine::Color color1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private HMUI.ImageView/GradientDirection _gradientDirection
    // Size: 0x4
    // Offset: 0x120
    HMUI::ImageView::GradientDirection gradientDirection;
    // Field size check
    static_assert(sizeof(HMUI::ImageView::GradientDirection) == 0x4);
    // private System.Boolean _flipGradientColors
    // Size: 0x1
    // Offset: 0x124
    bool flipGradientColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: flipGradientColors and: curvedCanvasSettingsHelper
    char __padding5[0x3] = {};
    // private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    // Size: 0x8
    // Offset: 0x128
    HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper;
    // Field size check
    static_assert(sizeof(HMUI::CurvedCanvasSettingsHelper*) == 0x8);
    // Creating value type constructor for type: ImageView
    ImageView(float skew_ = {}, bool gradient_ = {}, UnityEngine::Color color0_ = {}, UnityEngine::Color color1_ = {}, HMUI::ImageView::GradientDirection gradientDirection_ = {}, bool flipGradientColors_ = {}, HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper_ = {}) noexcept : skew{skew_}, gradient{gradient_}, color0{color0_}, color1{color1_}, gradientDirection{gradientDirection_}, flipGradientColors{flipGradientColors_}, curvedCanvasSettingsHelper{curvedCanvasSettingsHelper_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF90E8
    // Get static field: static private readonly UnityEngine.Vector2 kVec2Zero
    static UnityEngine::Vector2 _get_kVec2Zero();
    // Set static field: static private readonly UnityEngine.Vector2 kVec2Zero
    static void _set_kVec2Zero(UnityEngine::Vector2 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF90F8
    // Get static field: static private readonly UnityEngine.Vector3 kVec3Zero
    static UnityEngine::Vector3 _get_kVec3Zero();
    // Set static field: static private readonly UnityEngine.Vector3 kVec3Zero
    static void _set_kVec3Zero(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF9108
    // Get static field: static private readonly UnityEngine.Vector4 kVec4Zero
    static UnityEngine::Vector4 _get_kVec4Zero();
    // Set static field: static private readonly UnityEngine.Vector4 kVec4Zero
    static void _set_kVec4Zero(UnityEngine::Vector4 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF9118
    // Get static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static ::Array<UnityEngine::Vector2>* _get_s_VertScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static void _set_s_VertScratch(::Array<UnityEngine::Vector2>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF9128
    // Get static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static ::Array<UnityEngine::Vector2>* _get_s_UVScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static void _set_s_UVScratch(::Array<UnityEngine::Vector2>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF9138
    // Get static field: static private readonly UnityEngine.Vector2[] s_UV1Scratch
    static ::Array<UnityEngine::Vector2>* _get_s_UV1Scratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_UV1Scratch
    static void _set_s_UV1Scratch(::Array<UnityEngine::Vector2>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF9148
    // Get static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static ::Array<UnityEngine::Color>* _get_s_ColorScratch();
    // Set static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static void _set_s_ColorScratch(::Array<UnityEngine::Color>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF9158
    // Get static field: static private readonly UnityEngine.Vector3[] s_Xy
    static ::Array<UnityEngine::Vector3>* _get_s_Xy();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Xy
    static void _set_s_Xy(::Array<UnityEngine::Vector3>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF9168
    // Get static field: static private readonly UnityEngine.Vector3[] s_Uv
    static ::Array<UnityEngine::Vector3>* _get_s_Uv();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Uv
    static void _set_s_Uv(::Array<UnityEngine::Vector3>* value);
    // public System.Boolean get_gradient()
    // Offset: 0x1319CBC
    bool get_gradient();
    // public System.Single get_skew()
    // Offset: 0x1319CC4
    float get_skew();
    // public UnityEngine.Color get_color0()
    // Offset: 0x1319CCC
    UnityEngine::Color get_color0();
    // public System.Void set_color0(UnityEngine.Color value)
    // Offset: 0x130B004
    void set_color0(UnityEngine::Color value);
    // public UnityEngine.Color get_color1()
    // Offset: 0x1319CE0
    UnityEngine::Color get_color1();
    // public System.Void set_color1(UnityEngine.Color value)
    // Offset: 0x130B024
    void set_color1(UnityEngine::Color value);
    // private System.Void GenerateSimpleSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect, System.Single curvedUIRadius)
    // Offset: 0x1319EBC
    void GenerateSimpleSprite(UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect, float curvedUIRadius);
    // private System.Void GenerateSlicedSprite(UnityEngine.UI.VertexHelper toFill, System.Single curvedUIRadius)
    // Offset: 0x131A668
    void GenerateSlicedSprite(UnityEngine::UI::VertexHelper* toFill, float curvedUIRadius);
    // private System.Void GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill, System.Single curvedUIRadius)
    // Offset: 0x131B944
    void GenerateTiledSprite(UnityEngine::UI::VertexHelper* toFill, float curvedUIRadius);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax, System.Single elementWidthScale, System.Single curvedUIRadius)
    // Offset: 0x131EB74
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax, float elementWidthScale, float curvedUIRadius);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uv0Min, UnityEngine.Vector2 uv0Max, UnityEngine.Vector2 uv1Min, UnityEngine.Vector2 uv1Max, System.Single elementWidthScale, System.Single curvedUIRadius, System.Single skewFactor, System.Single skewOffset)
    // Offset: 0x131E7D0
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float elementWidthScale, float curvedUIRadius, float skewFactor, float skewOffset);
    // static private System.Void AddQuadWithHorizontalGradient(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color0, UnityEngine.Color32 color1, UnityEngine.Vector2 uv0Min, UnityEngine.Vector2 uv0Max, UnityEngine.Vector2 uv1Min, UnityEngine.Vector2 uv1Max, System.Single elementWidthScale, System.Single curvedUIRadius, System.Single skewFactor, System.Single skewOffset)
    // Offset: 0x131DFCC
    static void AddQuadWithHorizontalGradient(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float elementWidthScale, float curvedUIRadius, float skewFactor, float skewOffset);
    // static private System.Void AddQuadWithVerticalGradient(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color0, UnityEngine.Color32 color1, UnityEngine.Vector2 uv0Min, UnityEngine.Vector2 uv0Max, UnityEngine.Vector2 uv1Min, UnityEngine.Vector2 uv1Max, System.Single elementWidthScale, System.Single curvedUIRadius, System.Single skewFactor, System.Single skewOffset)
    // Offset: 0x131E424
    static void AddQuadWithVerticalGradient(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float elementWidthScale, float curvedUIRadius, float skewFactor, float skewOffset);
    // private System.Void GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect, System.Single curvedUIRadius)
    // Offset: 0x131C9B0
    void GenerateFilledSprite(UnityEngine::UI::VertexHelper* toFill, bool preserveAspect, float curvedUIRadius);
    // static private System.Int32 GetNumberOfElements(System.Single curvedUIRadius, System.Single width)
    // Offset: 0x131DE10
    static int GetNumberOfElements(float curvedUIRadius, float width);
    // protected override System.Void OnEnable()
    // Offset: 0x1319CF4
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::OnEnable()
    void OnEnable();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x1319D34
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* toFill);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    // Offset: 0x131EE98
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, ::Array<UnityEngine::Vector3>* quadPositions, UnityEngine::Color32 color, ::Array<UnityEngine::Vector3>* quadUVs);
    // static private UnityEngine.Vector4 GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    // Offset: 0x131DEB0
    // Implemented from: UnityEngine.UI.Image
    // Base method: UnityEngine.Vector4 Image::GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    static UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect rect);
    // static private System.Boolean RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    // Offset: 0x131F020
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Boolean Image::RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    static bool RadialCut(::Array<UnityEngine::Vector3>* xy, ::Array<UnityEngine::Vector3>* uv, float fill, bool invert, int corner);
    // static private System.Void RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    // Offset: 0x131F18C
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    static void RadialCut(::Array<UnityEngine::Vector3>* xy, float cos, float sin, bool invert, int corner);
    // private UnityEngine.Vector4 GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    // Offset: 0x131D96C
    // Implemented from: UnityEngine.UI.Image
    // Base method: UnityEngine.Vector4 Image::GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);
    // public System.Void .ctor()
    // Offset: 0x131F704
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ImageView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageView*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x131F78C
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::.cctor()
    // Base method: System.Void Graphic::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // HMUI.ImageView
  #pragma pack(pop)
  static check_size<sizeof(ImageView), 296 + sizeof(HMUI::CurvedCanvasSettingsHelper*)> __HMUI_ImageViewSizeCheck;
  static_assert(sizeof(ImageView) == 0x130);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ImageView*, "HMUI", "ImageView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::ImageView::GradientDirection, "HMUI", "ImageView/GradientDirection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ImageView::get_gradient
// Il2CppName: get_gradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ImageView::*)()>(&HMUI::ImageView::get_gradient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "get_gradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::get_skew
// Il2CppName: get_skew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::ImageView::*)()>(&HMUI::ImageView::get_skew)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "get_skew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::get_color0
// Il2CppName: get_color0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::ImageView::*)()>(&HMUI::ImageView::get_color0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "get_color0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::set_color0
// Il2CppName: set_color0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::Color)>(&HMUI::ImageView::set_color0)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "set_color0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::get_color1
// Il2CppName: get_color1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::ImageView::*)()>(&HMUI::ImageView::get_color1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "get_color1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::set_color1
// Il2CppName: set_color1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::Color)>(&HMUI::ImageView::set_color1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "set_color1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::GenerateSimpleSprite
// Il2CppName: GenerateSimpleSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper*, bool, float)>(&HMUI::ImageView::GenerateSimpleSprite)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* lPreserveAspect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "GenerateSimpleSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh, lPreserveAspect, curvedUIRadius});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::GenerateSlicedSprite
// Il2CppName: GenerateSlicedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper*, float)>(&HMUI::ImageView::GenerateSlicedSprite)> {
  static const MethodInfo* get() {
    static auto* toFill = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "GenerateSlicedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toFill, curvedUIRadius});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::GenerateTiledSprite
// Il2CppName: GenerateTiledSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper*, float)>(&HMUI::ImageView::GenerateTiledSprite)> {
  static const MethodInfo* get() {
    static auto* toFill = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "GenerateTiledSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toFill, curvedUIRadius});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::AddQuad
// Il2CppName: AddQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper*, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, float, float)>(&HMUI::ImageView::AddQuad)> {
  static const MethodInfo* get() {
    static auto* vertexHelper = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* posMin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* posMax = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uvMin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uvMax = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* elementWidthScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "AddQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertexHelper, posMin, posMax, color, uvMin, uvMax, elementWidthScale, curvedUIRadius});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::AddQuad
// Il2CppName: AddQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper*, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, float, float, float, float)>(&HMUI::ImageView::AddQuad)> {
  static const MethodInfo* get() {
    static auto* vertexHelper = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* posMin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* posMax = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uv0Min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv0Max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv1Min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv1Max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* elementWidthScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* skewFactor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* skewOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "AddQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertexHelper, posMin, posMax, color, uv0Min, uv0Max, uv1Min, uv1Max, elementWidthScale, curvedUIRadius, skewFactor, skewOffset});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::AddQuadWithHorizontalGradient
// Il2CppName: AddQuadWithHorizontalGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper*, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, float, float, float, float)>(&HMUI::ImageView::AddQuadWithHorizontalGradient)> {
  static const MethodInfo* get() {
    static auto* vertexHelper = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* posMin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* posMax = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* color0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* color1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uv0Min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv0Max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv1Min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv1Max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* elementWidthScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* skewFactor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* skewOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "AddQuadWithHorizontalGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertexHelper, posMin, posMax, color0, color1, uv0Min, uv0Max, uv1Min, uv1Max, elementWidthScale, curvedUIRadius, skewFactor, skewOffset});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::AddQuadWithVerticalGradient
// Il2CppName: AddQuadWithVerticalGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper*, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, float, float, float, float)>(&HMUI::ImageView::AddQuadWithVerticalGradient)> {
  static const MethodInfo* get() {
    static auto* vertexHelper = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* posMin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* posMax = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* color0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* color1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uv0Min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv0Max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv1Min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv1Max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* elementWidthScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* skewFactor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* skewOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "AddQuadWithVerticalGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertexHelper, posMin, posMax, color0, color1, uv0Min, uv0Max, uv1Min, uv1Max, elementWidthScale, curvedUIRadius, skewFactor, skewOffset});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::GenerateFilledSprite
// Il2CppName: GenerateFilledSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper*, bool, float)>(&HMUI::ImageView::GenerateFilledSprite)> {
  static const MethodInfo* get() {
    static auto* toFill = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* preserveAspect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "GenerateFilledSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toFill, preserveAspect, curvedUIRadius});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::GetNumberOfElements
// Il2CppName: GetNumberOfElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float, float)>(&HMUI::ImageView::GetNumberOfElements)> {
  static const MethodInfo* get() {
    static auto* curvedUIRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "GetNumberOfElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curvedUIRadius, width});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)()>(&HMUI::ImageView::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::OnPopulateMesh
// Il2CppName: OnPopulateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper*)>(&HMUI::ImageView::OnPopulateMesh)> {
  static const MethodInfo* get() {
    static auto* toFill = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "OnPopulateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toFill});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::AddQuad
// Il2CppName: AddQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper*, ::Array<UnityEngine::Vector3>*, UnityEngine::Color32, ::Array<UnityEngine::Vector3>*)>(&HMUI::ImageView::AddQuad)> {
  static const MethodInfo* get() {
    static auto* vertexHelper = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* quadPositions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* quadUVs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "AddQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertexHelper, quadPositions, color, quadUVs});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::GetAdjustedBorders
// Il2CppName: GetAdjustedBorders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)(UnityEngine::Vector4, UnityEngine::Rect)>(&HMUI::ImageView::GetAdjustedBorders)> {
  static const MethodInfo* get() {
    static auto* border = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "GetAdjustedBorders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{border, rect});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::RadialCut
// Il2CppName: RadialCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Vector3>*, float, bool, int)>(&HMUI::ImageView::RadialCut)> {
  static const MethodInfo* get() {
    static auto* xy = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* uv = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* fill = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* invert = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* corner = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "RadialCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xy, uv, fill, invert, corner});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::RadialCut
// Il2CppName: RadialCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<UnityEngine::Vector3>*, float, float, bool, int)>(&HMUI::ImageView::RadialCut)> {
  static const MethodInfo* get() {
    static auto* xy = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* cos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* invert = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* corner = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "RadialCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xy, cos, sin, invert, corner});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::GetDrawingDimensions
// Il2CppName: GetDrawingDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (HMUI::ImageView::*)(bool)>(&HMUI::ImageView::GetDrawingDimensions)> {
  static const MethodInfo* get() {
    static auto* shouldPreserveAspect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), "GetDrawingDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldPreserveAspect});
  }
};
// Writing MetadataGetter for method: HMUI::ImageView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ImageView::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HMUI::ImageView::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageView*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
