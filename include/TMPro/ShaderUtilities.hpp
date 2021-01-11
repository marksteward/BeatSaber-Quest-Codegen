// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.ShaderUtilities
  // [] Offset: FFFFFFFF
  class ShaderUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ShaderUtilities
    ShaderUtilities() noexcept {}
    // Get static field: static public System.Int32 ID_MainTex
    static int _get_ID_MainTex();
    // Set static field: static public System.Int32 ID_MainTex
    static void _set_ID_MainTex(int value);
    // Get static field: static public System.Int32 ID_FaceTex
    static int _get_ID_FaceTex();
    // Set static field: static public System.Int32 ID_FaceTex
    static void _set_ID_FaceTex(int value);
    // Get static field: static public System.Int32 ID_FaceColor
    static int _get_ID_FaceColor();
    // Set static field: static public System.Int32 ID_FaceColor
    static void _set_ID_FaceColor(int value);
    // Get static field: static public System.Int32 ID_FaceDilate
    static int _get_ID_FaceDilate();
    // Set static field: static public System.Int32 ID_FaceDilate
    static void _set_ID_FaceDilate(int value);
    // Get static field: static public System.Int32 ID_Shininess
    static int _get_ID_Shininess();
    // Set static field: static public System.Int32 ID_Shininess
    static void _set_ID_Shininess(int value);
    // Get static field: static public System.Int32 ID_UnderlayColor
    static int _get_ID_UnderlayColor();
    // Set static field: static public System.Int32 ID_UnderlayColor
    static void _set_ID_UnderlayColor(int value);
    // Get static field: static public System.Int32 ID_UnderlayOffsetX
    static int _get_ID_UnderlayOffsetX();
    // Set static field: static public System.Int32 ID_UnderlayOffsetX
    static void _set_ID_UnderlayOffsetX(int value);
    // Get static field: static public System.Int32 ID_UnderlayOffsetY
    static int _get_ID_UnderlayOffsetY();
    // Set static field: static public System.Int32 ID_UnderlayOffsetY
    static void _set_ID_UnderlayOffsetY(int value);
    // Get static field: static public System.Int32 ID_UnderlayDilate
    static int _get_ID_UnderlayDilate();
    // Set static field: static public System.Int32 ID_UnderlayDilate
    static void _set_ID_UnderlayDilate(int value);
    // Get static field: static public System.Int32 ID_UnderlaySoftness
    static int _get_ID_UnderlaySoftness();
    // Set static field: static public System.Int32 ID_UnderlaySoftness
    static void _set_ID_UnderlaySoftness(int value);
    // Get static field: static public System.Int32 ID_WeightNormal
    static int _get_ID_WeightNormal();
    // Set static field: static public System.Int32 ID_WeightNormal
    static void _set_ID_WeightNormal(int value);
    // Get static field: static public System.Int32 ID_WeightBold
    static int _get_ID_WeightBold();
    // Set static field: static public System.Int32 ID_WeightBold
    static void _set_ID_WeightBold(int value);
    // Get static field: static public System.Int32 ID_OutlineTex
    static int _get_ID_OutlineTex();
    // Set static field: static public System.Int32 ID_OutlineTex
    static void _set_ID_OutlineTex(int value);
    // Get static field: static public System.Int32 ID_OutlineWidth
    static int _get_ID_OutlineWidth();
    // Set static field: static public System.Int32 ID_OutlineWidth
    static void _set_ID_OutlineWidth(int value);
    // Get static field: static public System.Int32 ID_OutlineSoftness
    static int _get_ID_OutlineSoftness();
    // Set static field: static public System.Int32 ID_OutlineSoftness
    static void _set_ID_OutlineSoftness(int value);
    // Get static field: static public System.Int32 ID_OutlineColor
    static int _get_ID_OutlineColor();
    // Set static field: static public System.Int32 ID_OutlineColor
    static void _set_ID_OutlineColor(int value);
    // Get static field: static public System.Int32 ID_Padding
    static int _get_ID_Padding();
    // Set static field: static public System.Int32 ID_Padding
    static void _set_ID_Padding(int value);
    // Get static field: static public System.Int32 ID_GradientScale
    static int _get_ID_GradientScale();
    // Set static field: static public System.Int32 ID_GradientScale
    static void _set_ID_GradientScale(int value);
    // Get static field: static public System.Int32 ID_ScaleX
    static int _get_ID_ScaleX();
    // Set static field: static public System.Int32 ID_ScaleX
    static void _set_ID_ScaleX(int value);
    // Get static field: static public System.Int32 ID_ScaleY
    static int _get_ID_ScaleY();
    // Set static field: static public System.Int32 ID_ScaleY
    static void _set_ID_ScaleY(int value);
    // Get static field: static public System.Int32 ID_PerspectiveFilter
    static int _get_ID_PerspectiveFilter();
    // Set static field: static public System.Int32 ID_PerspectiveFilter
    static void _set_ID_PerspectiveFilter(int value);
    // Get static field: static public System.Int32 ID_Sharpness
    static int _get_ID_Sharpness();
    // Set static field: static public System.Int32 ID_Sharpness
    static void _set_ID_Sharpness(int value);
    // Get static field: static public System.Int32 ID_TextureWidth
    static int _get_ID_TextureWidth();
    // Set static field: static public System.Int32 ID_TextureWidth
    static void _set_ID_TextureWidth(int value);
    // Get static field: static public System.Int32 ID_TextureHeight
    static int _get_ID_TextureHeight();
    // Set static field: static public System.Int32 ID_TextureHeight
    static void _set_ID_TextureHeight(int value);
    // Get static field: static public System.Int32 ID_BevelAmount
    static int _get_ID_BevelAmount();
    // Set static field: static public System.Int32 ID_BevelAmount
    static void _set_ID_BevelAmount(int value);
    // Get static field: static public System.Int32 ID_GlowColor
    static int _get_ID_GlowColor();
    // Set static field: static public System.Int32 ID_GlowColor
    static void _set_ID_GlowColor(int value);
    // Get static field: static public System.Int32 ID_GlowOffset
    static int _get_ID_GlowOffset();
    // Set static field: static public System.Int32 ID_GlowOffset
    static void _set_ID_GlowOffset(int value);
    // Get static field: static public System.Int32 ID_GlowPower
    static int _get_ID_GlowPower();
    // Set static field: static public System.Int32 ID_GlowPower
    static void _set_ID_GlowPower(int value);
    // Get static field: static public System.Int32 ID_GlowOuter
    static int _get_ID_GlowOuter();
    // Set static field: static public System.Int32 ID_GlowOuter
    static void _set_ID_GlowOuter(int value);
    // Get static field: static public System.Int32 ID_LightAngle
    static int _get_ID_LightAngle();
    // Set static field: static public System.Int32 ID_LightAngle
    static void _set_ID_LightAngle(int value);
    // Get static field: static public System.Int32 ID_EnvMap
    static int _get_ID_EnvMap();
    // Set static field: static public System.Int32 ID_EnvMap
    static void _set_ID_EnvMap(int value);
    // Get static field: static public System.Int32 ID_EnvMatrix
    static int _get_ID_EnvMatrix();
    // Set static field: static public System.Int32 ID_EnvMatrix
    static void _set_ID_EnvMatrix(int value);
    // Get static field: static public System.Int32 ID_EnvMatrixRotation
    static int _get_ID_EnvMatrixRotation();
    // Set static field: static public System.Int32 ID_EnvMatrixRotation
    static void _set_ID_EnvMatrixRotation(int value);
    // Get static field: static public System.Int32 ID_MaskCoord
    static int _get_ID_MaskCoord();
    // Set static field: static public System.Int32 ID_MaskCoord
    static void _set_ID_MaskCoord(int value);
    // Get static field: static public System.Int32 ID_ClipRect
    static int _get_ID_ClipRect();
    // Set static field: static public System.Int32 ID_ClipRect
    static void _set_ID_ClipRect(int value);
    // Get static field: static public System.Int32 ID_MaskSoftnessX
    static int _get_ID_MaskSoftnessX();
    // Set static field: static public System.Int32 ID_MaskSoftnessX
    static void _set_ID_MaskSoftnessX(int value);
    // Get static field: static public System.Int32 ID_MaskSoftnessY
    static int _get_ID_MaskSoftnessY();
    // Set static field: static public System.Int32 ID_MaskSoftnessY
    static void _set_ID_MaskSoftnessY(int value);
    // Get static field: static public System.Int32 ID_VertexOffsetX
    static int _get_ID_VertexOffsetX();
    // Set static field: static public System.Int32 ID_VertexOffsetX
    static void _set_ID_VertexOffsetX(int value);
    // Get static field: static public System.Int32 ID_VertexOffsetY
    static int _get_ID_VertexOffsetY();
    // Set static field: static public System.Int32 ID_VertexOffsetY
    static void _set_ID_VertexOffsetY(int value);
    // Get static field: static public System.Int32 ID_UseClipRect
    static int _get_ID_UseClipRect();
    // Set static field: static public System.Int32 ID_UseClipRect
    static void _set_ID_UseClipRect(int value);
    // Get static field: static public System.Int32 ID_StencilID
    static int _get_ID_StencilID();
    // Set static field: static public System.Int32 ID_StencilID
    static void _set_ID_StencilID(int value);
    // Get static field: static public System.Int32 ID_StencilOp
    static int _get_ID_StencilOp();
    // Set static field: static public System.Int32 ID_StencilOp
    static void _set_ID_StencilOp(int value);
    // Get static field: static public System.Int32 ID_StencilComp
    static int _get_ID_StencilComp();
    // Set static field: static public System.Int32 ID_StencilComp
    static void _set_ID_StencilComp(int value);
    // Get static field: static public System.Int32 ID_StencilReadMask
    static int _get_ID_StencilReadMask();
    // Set static field: static public System.Int32 ID_StencilReadMask
    static void _set_ID_StencilReadMask(int value);
    // Get static field: static public System.Int32 ID_StencilWriteMask
    static int _get_ID_StencilWriteMask();
    // Set static field: static public System.Int32 ID_StencilWriteMask
    static void _set_ID_StencilWriteMask(int value);
    // Get static field: static public System.Int32 ID_ShaderFlags
    static int _get_ID_ShaderFlags();
    // Set static field: static public System.Int32 ID_ShaderFlags
    static void _set_ID_ShaderFlags(int value);
    // Get static field: static public System.Int32 ID_ScaleRatio_A
    static int _get_ID_ScaleRatio_A();
    // Set static field: static public System.Int32 ID_ScaleRatio_A
    static void _set_ID_ScaleRatio_A(int value);
    // Get static field: static public System.Int32 ID_ScaleRatio_B
    static int _get_ID_ScaleRatio_B();
    // Set static field: static public System.Int32 ID_ScaleRatio_B
    static void _set_ID_ScaleRatio_B(int value);
    // Get static field: static public System.Int32 ID_ScaleRatio_C
    static int _get_ID_ScaleRatio_C();
    // Set static field: static public System.Int32 ID_ScaleRatio_C
    static void _set_ID_ScaleRatio_C(int value);
    // Get static field: static public System.String Keyword_Bevel
    static ::Il2CppString* _get_Keyword_Bevel();
    // Set static field: static public System.String Keyword_Bevel
    static void _set_Keyword_Bevel(::Il2CppString* value);
    // Get static field: static public System.String Keyword_Glow
    static ::Il2CppString* _get_Keyword_Glow();
    // Set static field: static public System.String Keyword_Glow
    static void _set_Keyword_Glow(::Il2CppString* value);
    // Get static field: static public System.String Keyword_Underlay
    static ::Il2CppString* _get_Keyword_Underlay();
    // Set static field: static public System.String Keyword_Underlay
    static void _set_Keyword_Underlay(::Il2CppString* value);
    // Get static field: static public System.String Keyword_Ratios
    static ::Il2CppString* _get_Keyword_Ratios();
    // Set static field: static public System.String Keyword_Ratios
    static void _set_Keyword_Ratios(::Il2CppString* value);
    // Get static field: static public System.String Keyword_MASK_SOFT
    static ::Il2CppString* _get_Keyword_MASK_SOFT();
    // Set static field: static public System.String Keyword_MASK_SOFT
    static void _set_Keyword_MASK_SOFT(::Il2CppString* value);
    // Get static field: static public System.String Keyword_MASK_HARD
    static ::Il2CppString* _get_Keyword_MASK_HARD();
    // Set static field: static public System.String Keyword_MASK_HARD
    static void _set_Keyword_MASK_HARD(::Il2CppString* value);
    // Get static field: static public System.String Keyword_MASK_TEX
    static ::Il2CppString* _get_Keyword_MASK_TEX();
    // Set static field: static public System.String Keyword_MASK_TEX
    static void _set_Keyword_MASK_TEX(::Il2CppString* value);
    // Get static field: static public System.String Keyword_Outline
    static ::Il2CppString* _get_Keyword_Outline();
    // Set static field: static public System.String Keyword_Outline
    static void _set_Keyword_Outline(::Il2CppString* value);
    // Get static field: static public System.String ShaderTag_ZTestMode
    static ::Il2CppString* _get_ShaderTag_ZTestMode();
    // Set static field: static public System.String ShaderTag_ZTestMode
    static void _set_ShaderTag_ZTestMode(::Il2CppString* value);
    // Get static field: static public System.String ShaderTag_CullMode
    static ::Il2CppString* _get_ShaderTag_CullMode();
    // Set static field: static public System.String ShaderTag_CullMode
    static void _set_ShaderTag_CullMode(::Il2CppString* value);
    // Get static field: static private System.Single m_clamp
    static float _get_m_clamp();
    // Set static field: static private System.Single m_clamp
    static void _set_m_clamp(float value);
    // Get static field: static public System.Boolean isInitialized
    static bool _get_isInitialized();
    // Set static field: static public System.Boolean isInitialized
    static void _set_isInitialized(bool value);
    // Get static field: static private UnityEngine.Shader k_ShaderRef_MobileSDF
    static UnityEngine::Shader* _get_k_ShaderRef_MobileSDF();
    // Set static field: static private UnityEngine.Shader k_ShaderRef_MobileSDF
    static void _set_k_ShaderRef_MobileSDF(UnityEngine::Shader* value);
    // Get static field: static private UnityEngine.Shader k_ShaderRef_MobileBitmap
    static UnityEngine::Shader* _get_k_ShaderRef_MobileBitmap();
    // Set static field: static private UnityEngine.Shader k_ShaderRef_MobileBitmap
    static void _set_k_ShaderRef_MobileBitmap(UnityEngine::Shader* value);
    // static UnityEngine.Shader get_ShaderRef_MobileSDF()
    // Offset: 0xF4FDCC
    static UnityEngine::Shader* get_ShaderRef_MobileSDF();
    // static UnityEngine.Shader get_ShaderRef_MobileBitmap()
    // Offset: 0xF4FEDC
    static UnityEngine::Shader* get_ShaderRef_MobileBitmap();
    // static private System.Void .cctor()
    // Offset: 0xF4FFEC
    static void _cctor();
    // static public System.Void GetShaderPropertyIDs()
    // Offset: 0xF5016C
    static void GetShaderPropertyIDs();
    // static public System.Void UpdateShaderRatios(UnityEngine.Material mat)
    // Offset: 0xF50960
    static void UpdateShaderRatios(UnityEngine::Material* mat);
    // static public UnityEngine.Vector4 GetFontExtent(UnityEngine.Material material)
    // Offset: 0xF50E94
    static UnityEngine::Vector4 GetFontExtent(UnityEngine::Material* material);
    // static public System.Boolean IsMaskingEnabled(UnityEngine.Material material)
    // Offset: 0xF50EF4
    static bool IsMaskingEnabled(UnityEngine::Material* material);
    // static public System.Single GetPadding(UnityEngine.Material material, System.Boolean enableExtraPadding, System.Boolean isBold)
    // Offset: 0xF510A8
    static float GetPadding(UnityEngine::Material* material, bool enableExtraPadding, bool isBold);
    // static public System.Single GetPadding(UnityEngine.Material[] materials, System.Boolean enableExtraPadding, System.Boolean isBold)
    // Offset: 0xF5195C
    static float GetPadding(::Array<UnityEngine::Material*>* materials, bool enableExtraPadding, bool isBold);
  }; // TMPro.ShaderUtilities
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::ShaderUtilities*, "TMPro", "ShaderUtilities");
