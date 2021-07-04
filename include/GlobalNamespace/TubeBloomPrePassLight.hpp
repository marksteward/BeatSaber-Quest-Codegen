// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassLight
#include "GlobalNamespace/BloomPrePassLight.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: ParametricBoxController
  class ParametricBoxController;
  // Forward declaring type: Parametric3SliceSpriteController
  class Parametric3SliceSpriteController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: TubeBloomPrePassLight
  // [SelectionBaseAttribute] Offset: DF58D0
  class TubeBloomPrePassLight : public GlobalNamespace::BloomPrePassLight {
    public:
    // Writing base type padding for base size: 0x2A to desired offset: 0x30
    char ___base_padding[0x6] = {};
    // private BoolSO _mainEffectPostProcessEnabled
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BoolSO* mainEffectPostProcessEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x38
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x3C
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDF6138
    // private System.Single _center
    // Size: 0x4
    // Offset: 0x40
    float center;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x44
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _colorAlphaMultiplier
    // Size: 0x4
    // Offset: 0x54
    float colorAlphaMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bloomFogIntensityMultiplier
    // Size: 0x4
    // Offset: 0x58
    float bloomFogIntensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _boostToWhite
    // Size: 0x4
    // Offset: 0x5C
    float boostToWhite;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0xDF61B8
    // private System.Single _lightWidthMultiplier
    // Size: 0x4
    // Offset: 0x60
    float lightWidthMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _addWidthToLength
    // Size: 0x1
    // Offset: 0x64
    bool addWidthToLength;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: addWidthToLength and: bakedGlowWidthScale
    char __padding9[0x3] = {};
    // [SpaceAttribute] Offset: 0xDF6204
    // private System.Single _bakedGlowWidthScale
    // Size: 0x4
    // Offset: 0x68
    float bakedGlowWidthScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _forceUseBakedGlow
    // Size: 0x1
    // Offset: 0x6C
    bool forceUseBakedGlow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [SpaceAttribute] Offset: 0xDF624C
    // [TooltipAttribute] Offset: 0xDF624C
    // private System.Boolean _updateAlways
    // Size: 0x1
    // Offset: 0x6D
    bool updateAlways;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [SpaceAttribute] Offset: 0xDF62A8
    // private System.Boolean _limitAlpha
    // Size: 0x1
    // Offset: 0x6E
    bool limitAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: limitAlpha and: minAlpha
    char __padding13[0x1] = {};
    // [DrawIfAttribute] Offset: 0xDF62E0
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x70
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0xDF6388
    // private System.Single _maxAlpha
    // Size: 0x4
    // Offset: 0x74
    float maxAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDF6430
    // private System.Single _startAlpha
    // Size: 0x4
    // Offset: 0x78
    float startAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _endAlpha
    // Size: 0x4
    // Offset: 0x7C
    float endAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDF6478
    // [NullAllowed] Offset: 0xDF6478
    // private ParametricBoxController _parametricBoxController
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::ParametricBoxController* parametricBoxController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ParametricBoxController*) == 0x8);
    // [NullAllowed] Offset: 0xDF64C0
    // private Parametric3SliceSpriteController _dynamic3SliceSprite
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::Parametric3SliceSpriteController* dynamic3SliceSprite;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Parametric3SliceSpriteController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF64F8
    // private System.Action didRefreshEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* didRefreshEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _isDirty
    // Size: 0x1
    // Offset: 0x98
    bool isDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDirty and: transform
    char __padding21[0x7] = {};
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: TubeBloomPrePassLight
    TubeBloomPrePassLight(GlobalNamespace::BoolSO* mainEffectPostProcessEnabled_ = {}, float width_ = {}, float length_ = {}, float center_ = {}, UnityEngine::Color color_ = {}, float colorAlphaMultiplier_ = {}, float bloomFogIntensityMultiplier_ = {}, float boostToWhite_ = {}, float lightWidthMultiplier_ = {}, bool addWidthToLength_ = {}, float bakedGlowWidthScale_ = {}, bool forceUseBakedGlow_ = {}, bool updateAlways_ = {}, bool limitAlpha_ = {}, float minAlpha_ = {}, float maxAlpha_ = {}, float startAlpha_ = {}, float endAlpha_ = {}, GlobalNamespace::ParametricBoxController* parametricBoxController_ = {}, GlobalNamespace::Parametric3SliceSpriteController* dynamic3SliceSprite_ = {}, System::Action* didRefreshEvent_ = {}, bool isDirty_ = {}, UnityEngine::Transform* transform_ = {}) noexcept : mainEffectPostProcessEnabled{mainEffectPostProcessEnabled_}, width{width_}, length{length_}, center{center_}, color{color_}, colorAlphaMultiplier{colorAlphaMultiplier_}, bloomFogIntensityMultiplier{bloomFogIntensityMultiplier_}, boostToWhite{boostToWhite_}, lightWidthMultiplier{lightWidthMultiplier_}, addWidthToLength{addWidthToLength_}, bakedGlowWidthScale{bakedGlowWidthScale_}, forceUseBakedGlow{forceUseBakedGlow_}, updateAlways{updateAlways_}, limitAlpha{limitAlpha_}, minAlpha{minAlpha_}, maxAlpha{maxAlpha_}, startAlpha{startAlpha_}, endAlpha{endAlpha_}, parametricBoxController{parametricBoxController_}, dynamic3SliceSprite{dynamic3SliceSprite_}, didRefreshEvent{didRefreshEvent_}, isDirty{isDirty_}, transform{transform_} {}
    // public System.Void add_didRefreshEvent(System.Action value)
    // Offset: 0x1D926D4
    void add_didRefreshEvent(System::Action* value);
    // public System.Void remove_didRefreshEvent(System.Action value)
    // Offset: 0x1D92778
    void remove_didRefreshEvent(System::Action* value);
    // public System.Single get_colorAlphaMultiplier()
    // Offset: 0x1D9281C
    float get_colorAlphaMultiplier();
    // public System.Single get_center()
    // Offset: 0x1D92824
    float get_center();
    // private System.Void MarkDirty()
    // Offset: 0x1D9284C
    void MarkDirty();
    // public System.Single get_length()
    // Offset: 0x1D92858
    float get_length();
    // public System.Void set_length(System.Single value)
    // Offset: 0x1D92860
    void set_length(float value);
    // public System.Single get_width()
    // Offset: 0x1D92870
    float get_width();
    // public System.Void set_width(System.Single value)
    // Offset: 0x1D92878
    void set_width(float value);
    // public System.Single get_lightWidthMultiplier()
    // Offset: 0x1D92888
    float get_lightWidthMultiplier();
    // public System.Void set_lightWidthMultiplier(System.Single value)
    // Offset: 0x1D92890
    void set_lightWidthMultiplier(float value);
    // public System.Single get_bloomFogIntensityMultiplier()
    // Offset: 0x1D92898
    float get_bloomFogIntensityMultiplier();
    // public System.Void set_bloomFogIntensityMultiplier(System.Single value)
    // Offset: 0x1D928A0
    void set_bloomFogIntensityMultiplier(float value);
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1D928A8
    void set_color(UnityEngine::Color value);
    // public UnityEngine.Color get_color()
    // Offset: 0x1D929D4
    UnityEngine::Color get_color();
    // private System.Void ClipPoints(ref UnityEngine.Vector4 fromPointClipPos, ref UnityEngine.Vector4 toPointClipPos, ref UnityEngine.Vector3 fromPointViewPos, ref UnityEngine.Vector3 toPointViewPos, System.Boolean fromPointInside, System.Single t)
    // Offset: 0x1D93AA8
    void ClipPoints(UnityEngine::Vector4& fromPointClipPos, UnityEngine::Vector4& toPointClipPos, UnityEngine::Vector3& fromPointViewPos, UnityEngine::Vector3& toPointViewPos, bool fromPointInside, float t);
    // protected System.Void OnDrawGizmos()
    // Offset: 0x1D93D24
    void OnDrawGizmos();
    // public override System.Boolean get_isDirty()
    // Offset: 0x1D9282C
    // Implemented from: BloomPrePassLight
    // Base method: System.Boolean BloomPrePassLight::get_isDirty()
    bool get_isDirty();
    // protected override System.Void OnEnable()
    // Offset: 0x1D929E0
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::OnEnable()
    void OnEnable();
    // protected override System.Void DidRegisterLight()
    // Offset: 0x1D92A0C
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::DidRegisterLight()
    void DidRegisterLight();
    // public override System.Void Refresh()
    // Offset: 0x1D92A34
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::Refresh()
    void Refresh();
    // public override System.Void FillMeshData(System.Int32 lightNum, UnityEngine.Vector3[] vertices, UnityEngine.Color[] colors, UnityEngine.Vector4[] viewPos, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    // Offset: 0x1D92D38
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::FillMeshData(System.Int32 lightNum, UnityEngine.Vector3[] vertices, UnityEngine.Color[] colors, UnityEngine.Vector4[] viewPos, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    void FillMeshData(int lightNum, ::Array<UnityEngine::Vector3>* vertices, ::Array<UnityEngine::Color>* colors, ::Array<UnityEngine::Vector4>* viewPos, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float lineWidth);
    // public System.Void .ctor()
    // Offset: 0x1D93EF8
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TubeBloomPrePassLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TubeBloomPrePassLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TubeBloomPrePassLight*, creationType>()));
    }
  }; // TubeBloomPrePassLight
  #pragma pack(pop)
  static check_size<sizeof(TubeBloomPrePassLight), 160 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_TubeBloomPrePassLightSizeCheck;
  static_assert(sizeof(TubeBloomPrePassLight) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeBloomPrePassLight*, "", "TubeBloomPrePassLight");
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::add_didRefreshEvent
// Il2CppName: add_didRefreshEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::remove_didRefreshEvent
// Il2CppName: remove_didRefreshEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_colorAlphaMultiplier
// Il2CppName: get_colorAlphaMultiplier
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_center
// Il2CppName: get_center
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::MarkDirty
// Il2CppName: MarkDirty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_length
// Il2CppName: get_length
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_length
// Il2CppName: set_length
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_width
// Il2CppName: get_width
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_width
// Il2CppName: set_width
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_lightWidthMultiplier
// Il2CppName: get_lightWidthMultiplier
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_lightWidthMultiplier
// Il2CppName: set_lightWidthMultiplier
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_bloomFogIntensityMultiplier
// Il2CppName: get_bloomFogIntensityMultiplier
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_bloomFogIntensityMultiplier
// Il2CppName: set_bloomFogIntensityMultiplier
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_color
// Il2CppName: set_color
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_color
// Il2CppName: get_color
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::ClipPoints
// Il2CppName: ClipPoints
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::OnDrawGizmos
// Il2CppName: OnDrawGizmos
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_isDirty
// Il2CppName: get_isDirty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::DidRegisterLight
// Il2CppName: DidRegisterLight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::Refresh
// Il2CppName: Refresh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::FillMeshData
// Il2CppName: FillMeshData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
