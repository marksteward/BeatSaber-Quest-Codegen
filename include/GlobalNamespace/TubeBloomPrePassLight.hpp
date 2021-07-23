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
  // [TokenAttribute] Offset: FFFFFFFF
  // [SelectionBaseAttribute] Offset: FFFFFFFF
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
    // [RangeAttribute] Offset: 0xDE0BC8
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
    // [MinAttribute] Offset: 0xDE0C48
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
    // [SpaceAttribute] Offset: 0xDE0C94
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
    // [SpaceAttribute] Offset: 0xDE0CDC
    // [TooltipAttribute] Offset: 0xDE0CDC
    // private System.Boolean _updateAlways
    // Size: 0x1
    // Offset: 0x6D
    bool updateAlways;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [SpaceAttribute] Offset: 0xDE0D38
    // private System.Boolean _limitAlpha
    // Size: 0x1
    // Offset: 0x6E
    bool limitAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: limitAlpha and: minAlpha
    char __padding13[0x1] = {};
    // [DrawIfAttribute] Offset: 0xDE0D70
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x70
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0xDE0E18
    // private System.Single _maxAlpha
    // Size: 0x4
    // Offset: 0x74
    float maxAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDE0EC0
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
    // [SpaceAttribute] Offset: 0xDE0F08
    // [NullAllowed] Offset: 0xDE0F08
    // private ParametricBoxController _parametricBoxController
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::ParametricBoxController* parametricBoxController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ParametricBoxController*) == 0x8);
    // [NullAllowed] Offset: 0xDE0F50
    // private Parametric3SliceSpriteController _dynamic3SliceSprite
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::Parametric3SliceSpriteController* dynamic3SliceSprite;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Parametric3SliceSpriteController*) == 0x8);
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
    // Get instance field: private BoolSO _mainEffectPostProcessEnabled
    GlobalNamespace::BoolSO* _get__mainEffectPostProcessEnabled();
    // Set instance field: private BoolSO _mainEffectPostProcessEnabled
    void _set__mainEffectPostProcessEnabled(GlobalNamespace::BoolSO* value);
    // Get instance field: private System.Single _width
    float _get__width();
    // Set instance field: private System.Single _width
    void _set__width(float value);
    // Get instance field: private System.Single _length
    float _get__length();
    // Set instance field: private System.Single _length
    void _set__length(float value);
    // Get instance field: private System.Single _center
    float _get__center();
    // Set instance field: private System.Single _center
    void _set__center(float value);
    // Get instance field: private UnityEngine.Color _color
    UnityEngine::Color _get__color();
    // Set instance field: private UnityEngine.Color _color
    void _set__color(UnityEngine::Color value);
    // Get instance field: private System.Single _colorAlphaMultiplier
    float _get__colorAlphaMultiplier();
    // Set instance field: private System.Single _colorAlphaMultiplier
    void _set__colorAlphaMultiplier(float value);
    // Get instance field: private System.Single _bloomFogIntensityMultiplier
    float _get__bloomFogIntensityMultiplier();
    // Set instance field: private System.Single _bloomFogIntensityMultiplier
    void _set__bloomFogIntensityMultiplier(float value);
    // Get instance field: private System.Single _boostToWhite
    float _get__boostToWhite();
    // Set instance field: private System.Single _boostToWhite
    void _set__boostToWhite(float value);
    // Get instance field: private System.Single _lightWidthMultiplier
    float _get__lightWidthMultiplier();
    // Set instance field: private System.Single _lightWidthMultiplier
    void _set__lightWidthMultiplier(float value);
    // Get instance field: private System.Boolean _addWidthToLength
    bool _get__addWidthToLength();
    // Set instance field: private System.Boolean _addWidthToLength
    void _set__addWidthToLength(bool value);
    // Get instance field: private System.Single _bakedGlowWidthScale
    float _get__bakedGlowWidthScale();
    // Set instance field: private System.Single _bakedGlowWidthScale
    void _set__bakedGlowWidthScale(float value);
    // Get instance field: private System.Boolean _forceUseBakedGlow
    bool _get__forceUseBakedGlow();
    // Set instance field: private System.Boolean _forceUseBakedGlow
    void _set__forceUseBakedGlow(bool value);
    // Get instance field: private System.Boolean _updateAlways
    bool _get__updateAlways();
    // Set instance field: private System.Boolean _updateAlways
    void _set__updateAlways(bool value);
    // Get instance field: private System.Boolean _limitAlpha
    bool _get__limitAlpha();
    // Set instance field: private System.Boolean _limitAlpha
    void _set__limitAlpha(bool value);
    // Get instance field: private System.Single _minAlpha
    float _get__minAlpha();
    // Set instance field: private System.Single _minAlpha
    void _set__minAlpha(float value);
    // Get instance field: private System.Single _maxAlpha
    float _get__maxAlpha();
    // Set instance field: private System.Single _maxAlpha
    void _set__maxAlpha(float value);
    // Get instance field: private System.Single _startAlpha
    float _get__startAlpha();
    // Set instance field: private System.Single _startAlpha
    void _set__startAlpha(float value);
    // Get instance field: private System.Single _endAlpha
    float _get__endAlpha();
    // Set instance field: private System.Single _endAlpha
    void _set__endAlpha(float value);
    // Get instance field: private ParametricBoxController _parametricBoxController
    GlobalNamespace::ParametricBoxController* _get__parametricBoxController();
    // Set instance field: private ParametricBoxController _parametricBoxController
    void _set__parametricBoxController(GlobalNamespace::ParametricBoxController* value);
    // Get instance field: private Parametric3SliceSpriteController _dynamic3SliceSprite
    GlobalNamespace::Parametric3SliceSpriteController* _get__dynamic3SliceSprite();
    // Set instance field: private Parametric3SliceSpriteController _dynamic3SliceSprite
    void _set__dynamic3SliceSprite(GlobalNamespace::Parametric3SliceSpriteController* value);
    // Get instance field: private System.Action didRefreshEvent
    System::Action* _get_didRefreshEvent();
    // Set instance field: private System.Action didRefreshEvent
    void _set_didRefreshEvent(System::Action* value);
    // Get instance field: private System.Boolean _isDirty
    bool _get__isDirty();
    // Set instance field: private System.Boolean _isDirty
    void _set__isDirty(bool value);
    // Get instance field: private UnityEngine.Transform _transform
    UnityEngine::Transform* _get__transform();
    // Set instance field: private UnityEngine.Transform _transform
    void _set__transform(UnityEngine::Transform* value);
    // public System.Single get_colorAlphaMultiplier()
    // Offset: 0x1DF957C
    float get_colorAlphaMultiplier();
    // public System.Single get_center()
    // Offset: 0x1DF9584
    float get_center();
    // public System.Single get_length()
    // Offset: 0x1DF95B8
    float get_length();
    // public System.Void set_length(System.Single value)
    // Offset: 0x1DF95C0
    void set_length(float value);
    // public System.Single get_width()
    // Offset: 0x1DF95D0
    float get_width();
    // public System.Void set_width(System.Single value)
    // Offset: 0x1DF95D8
    void set_width(float value);
    // public System.Single get_lightWidthMultiplier()
    // Offset: 0x1DF95E8
    float get_lightWidthMultiplier();
    // public System.Void set_lightWidthMultiplier(System.Single value)
    // Offset: 0x1DF95F0
    void set_lightWidthMultiplier(float value);
    // public System.Single get_bloomFogIntensityMultiplier()
    // Offset: 0x1DF95F8
    float get_bloomFogIntensityMultiplier();
    // public System.Void set_bloomFogIntensityMultiplier(System.Single value)
    // Offset: 0x1DF9600
    void set_bloomFogIntensityMultiplier(float value);
    // public UnityEngine.Color get_color()
    // Offset: 0x1DF9734
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1DF9608
    void set_color(UnityEngine::Color value);
    // public System.Void add_didRefreshEvent(System.Action value)
    // Offset: 0x1DF9434
    void add_didRefreshEvent(System::Action* value);
    // public System.Void remove_didRefreshEvent(System.Action value)
    // Offset: 0x1DF94D8
    void remove_didRefreshEvent(System::Action* value);
    // private System.Void MarkDirty()
    // Offset: 0x1DF95AC
    void MarkDirty();
    // private System.Void ClipPoints(ref UnityEngine.Vector4 fromPointClipPos, ref UnityEngine.Vector4 toPointClipPos, ref UnityEngine.Vector3 fromPointViewPos, ref UnityEngine.Vector3 toPointViewPos, System.Boolean fromPointInside, System.Single t)
    // Offset: 0x1DFA808
    void ClipPoints(UnityEngine::Vector4& fromPointClipPos, UnityEngine::Vector4& toPointClipPos, UnityEngine::Vector3& fromPointViewPos, UnityEngine::Vector3& toPointViewPos, bool fromPointInside, float t);
    // protected System.Void OnDrawGizmos()
    // Offset: 0x1DFAA84
    void OnDrawGizmos();
    // public override System.Boolean get_isDirty()
    // Offset: 0x1DF958C
    // Implemented from: BloomPrePassLight
    // Base method: System.Boolean BloomPrePassLight::get_isDirty()
    bool get_isDirty();
    // public System.Void .ctor()
    // Offset: 0x1DFAC58
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
    // protected override System.Void OnEnable()
    // Offset: 0x1DF9740
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::OnEnable()
    void OnEnable();
    // protected override System.Void DidRegisterLight()
    // Offset: 0x1DF976C
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::DidRegisterLight()
    void DidRegisterLight();
    // public override System.Void Refresh()
    // Offset: 0x1DF9794
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::Refresh()
    void Refresh();
    // public override System.Void FillMeshData(System.Int32 lightNum, UnityEngine.Vector3[] vertices, UnityEngine.Color[] colors, UnityEngine.Vector4[] viewPos, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    // Offset: 0x1DF9A98
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::FillMeshData(System.Int32 lightNum, UnityEngine.Vector3[] vertices, UnityEngine.Color[] colors, UnityEngine.Vector4[] viewPos, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    void FillMeshData(int lightNum, ::Array<UnityEngine::Vector3>* vertices, ::Array<UnityEngine::Color>* colors, ::Array<UnityEngine::Vector4>* viewPos, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float lineWidth);
  }; // TubeBloomPrePassLight
  #pragma pack(pop)
  static check_size<sizeof(TubeBloomPrePassLight), 160 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_TubeBloomPrePassLightSizeCheck;
  static_assert(sizeof(TubeBloomPrePassLight) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeBloomPrePassLight*, "", "TubeBloomPrePassLight");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_colorAlphaMultiplier
// Il2CppName: get_colorAlphaMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_colorAlphaMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_colorAlphaMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_length
// Il2CppName: set_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(float)>(&GlobalNamespace::TubeBloomPrePassLight::set_length)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(float)>(&GlobalNamespace::TubeBloomPrePassLight::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_lightWidthMultiplier
// Il2CppName: get_lightWidthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_lightWidthMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_lightWidthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_lightWidthMultiplier
// Il2CppName: set_lightWidthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(float)>(&GlobalNamespace::TubeBloomPrePassLight::set_lightWidthMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_lightWidthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_bloomFogIntensityMultiplier
// Il2CppName: get_bloomFogIntensityMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_bloomFogIntensityMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_bloomFogIntensityMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_bloomFogIntensityMultiplier
// Il2CppName: set_bloomFogIntensityMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(float)>(&GlobalNamespace::TubeBloomPrePassLight::set_bloomFogIntensityMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_bloomFogIntensityMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(UnityEngine::Color)>(&GlobalNamespace::TubeBloomPrePassLight::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::add_didRefreshEvent
// Il2CppName: add_didRefreshEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(System::Action*)>(&GlobalNamespace::TubeBloomPrePassLight::add_didRefreshEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "add_didRefreshEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::remove_didRefreshEvent
// Il2CppName: remove_didRefreshEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(System::Action*)>(&GlobalNamespace::TubeBloomPrePassLight::remove_didRefreshEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "remove_didRefreshEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::MarkDirty
// Il2CppName: MarkDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::MarkDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "MarkDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::ClipPoints
// Il2CppName: ClipPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(UnityEngine::Vector4&, UnityEngine::Vector4&, UnityEngine::Vector3&, UnityEngine::Vector3&, bool, float)>(&GlobalNamespace::TubeBloomPrePassLight::ClipPoints)> {
  static const MethodInfo* get() {
    static auto* fromPointClipPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* toPointClipPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* fromPointViewPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* toPointViewPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* fromPointInside = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "ClipPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromPointClipPos, toPointClipPos, fromPointViewPos, toPointViewPos, fromPointInside, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_isDirty
// Il2CppName: get_isDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_isDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_isDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::DidRegisterLight
// Il2CppName: DidRegisterLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::DidRegisterLight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "DidRegisterLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::FillMeshData
// Il2CppName: FillMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(int, ::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Color>*, ::Array<UnityEngine::Vector4>*, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4, float)>(&GlobalNamespace::TubeBloomPrePassLight::FillMeshData)> {
  static const MethodInfo* get() {
    static auto* lightNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    static auto* viewPos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4"), 1)->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* lineWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "FillMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightNum, vertices, colors, viewPos, viewMatrix, projectionMatrix, lineWidth});
  }
};
