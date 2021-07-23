// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: IBeatEffectDidFinishEvent
  class IBeatEffectDidFinishEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BeatEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatEffect::Pool
    class Pool;
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private UnityEngine.Transform _spriteTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* spriteTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // [SpaceAttribute] Offset: 0xE044F8
    // private UnityEngine.AnimationCurve _lightIntensityCurve
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* lightIntensityCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _spriteXScaleCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* spriteXScaleCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _spriteYScaleCurve
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* spriteYScaleCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _transparencyCurve
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationCurve* transparencyCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private readonly LazyCopyHashSet`1<IBeatEffectDidFinishEvent> _didFinishEvent
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>*) == 0x8);
    // private System.Single _animationDuration
    // Size: 0x4
    // Offset: 0x58
    float animationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _elapsedTime
    // Size: 0x4
    // Offset: 0x5C
    float elapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: BeatEffect
    BeatEffect(UnityEngine::SpriteRenderer* spriteRenderer_ = {}, UnityEngine::Transform* spriteTransform_ = {}, GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight_ = {}, UnityEngine::AnimationCurve* lightIntensityCurve_ = {}, UnityEngine::AnimationCurve* spriteXScaleCurve_ = {}, UnityEngine::AnimationCurve* spriteYScaleCurve_ = {}, UnityEngine::AnimationCurve* transparencyCurve_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* didFinishEvent_ = {}, float animationDuration_ = {}, float elapsedTime_ = {}, UnityEngine::Color color_ = {}) noexcept : spriteRenderer{spriteRenderer_}, spriteTransform{spriteTransform_}, tubeBloomPrePassLight{tubeBloomPrePassLight_}, lightIntensityCurve{lightIntensityCurve_}, spriteXScaleCurve{spriteXScaleCurve_}, spriteYScaleCurve{spriteYScaleCurve_}, transparencyCurve{transparencyCurve_}, didFinishEvent{didFinishEvent_}, animationDuration{animationDuration_}, elapsedTime{elapsedTime_}, color{color_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.SpriteRenderer _spriteRenderer
    UnityEngine::SpriteRenderer* _get__spriteRenderer();
    // Set instance field: private UnityEngine.SpriteRenderer _spriteRenderer
    void _set__spriteRenderer(UnityEngine::SpriteRenderer* value);
    // Get instance field: private UnityEngine.Transform _spriteTransform
    UnityEngine::Transform* _get__spriteTransform();
    // Set instance field: private UnityEngine.Transform _spriteTransform
    void _set__spriteTransform(UnityEngine::Transform* value);
    // Get instance field: private TubeBloomPrePassLight _tubeBloomPrePassLight
    GlobalNamespace::TubeBloomPrePassLight* _get__tubeBloomPrePassLight();
    // Set instance field: private TubeBloomPrePassLight _tubeBloomPrePassLight
    void _set__tubeBloomPrePassLight(GlobalNamespace::TubeBloomPrePassLight* value);
    // Get instance field: private UnityEngine.AnimationCurve _lightIntensityCurve
    UnityEngine::AnimationCurve* _get__lightIntensityCurve();
    // Set instance field: private UnityEngine.AnimationCurve _lightIntensityCurve
    void _set__lightIntensityCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: private UnityEngine.AnimationCurve _spriteXScaleCurve
    UnityEngine::AnimationCurve* _get__spriteXScaleCurve();
    // Set instance field: private UnityEngine.AnimationCurve _spriteXScaleCurve
    void _set__spriteXScaleCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: private UnityEngine.AnimationCurve _spriteYScaleCurve
    UnityEngine::AnimationCurve* _get__spriteYScaleCurve();
    // Set instance field: private UnityEngine.AnimationCurve _spriteYScaleCurve
    void _set__spriteYScaleCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: private UnityEngine.AnimationCurve _transparencyCurve
    UnityEngine::AnimationCurve* _get__transparencyCurve();
    // Set instance field: private UnityEngine.AnimationCurve _transparencyCurve
    void _set__transparencyCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: private readonly LazyCopyHashSet`1<IBeatEffectDidFinishEvent> _didFinishEvent
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* _get__didFinishEvent();
    // Set instance field: private readonly LazyCopyHashSet`1<IBeatEffectDidFinishEvent> _didFinishEvent
    void _set__didFinishEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* value);
    // Get instance field: private System.Single _animationDuration
    float _get__animationDuration();
    // Set instance field: private System.Single _animationDuration
    void _set__animationDuration(float value);
    // Get instance field: private System.Single _elapsedTime
    float _get__elapsedTime();
    // Set instance field: private System.Single _elapsedTime
    void _set__elapsedTime(float value);
    // Get instance field: private UnityEngine.Color _color
    UnityEngine::Color _get__color();
    // Set instance field: private UnityEngine.Color _color
    void _set__color(UnityEngine::Color value);
    // public ILazyCopyHashSet`1<IBeatEffectDidFinishEvent> get_didFinishEvent()
    // Offset: 0x1186DD4
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* get_didFinishEvent();
    // public System.Void Init(UnityEngine.Color color, System.Single animationDuration, UnityEngine.Quaternion rotation)
    // Offset: 0x1186DDC
    void Init(UnityEngine::Color color, float animationDuration, UnityEngine::Quaternion rotation);
    // public System.Void ManualUpdate(System.Single deltaTime)
    // Offset: 0x1186ED4
    void ManualUpdate(float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x11871AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatEffect*, creationType>()));
    }
  }; // BeatEffect
  #pragma pack(pop)
  static check_size<sizeof(BeatEffect), 96 + sizeof(UnityEngine::Color)> __GlobalNamespace_BeatEffectSizeCheck;
  static_assert(sizeof(BeatEffect) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatEffect*, "", "BeatEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatEffect::get_didFinishEvent
// Il2CppName: get_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* (GlobalNamespace::BeatEffect::*)()>(&GlobalNamespace::BeatEffect::get_didFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffect*), "get_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffect::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffect::*)(UnityEngine::Color, float, UnityEngine::Quaternion)>(&GlobalNamespace::BeatEffect::Init)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* animationDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffect*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, animationDuration, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffect::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffect::*)(float)>(&GlobalNamespace::BeatEffect::ManualUpdate)> {
  static const MethodInfo* get() {
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffect*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
