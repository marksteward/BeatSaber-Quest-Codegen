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
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Gradient
  class Gradient;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: FireworkItemController
  // [TokenAttribute] Offset: FFFFFFFF
  class FireworkItemController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FireworkItemController::FireworkItemParticleSystem
    class FireworkItemParticleSystem;
    // Nested type: GlobalNamespace::FireworkItemController::Pool
    class Pool;
    // Nested type: GlobalNamespace::FireworkItemController::$FireCoroutine$d__29
    class $FireCoroutine$d__29;
    // [HeaderAttribute] Offset: 0xE04658
    // [NullAllowed] Offset: 0xE04658
    // private FireworkItemController/FireworkItemParticleSystem[] _particleSystems
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::FireworkItemController::FireworkItemParticleSystem*>* particleSystems;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::FireworkItemController::FireworkItemParticleSystem*>*) == 0x8);
    // [HeaderAttribute] Offset: 0xE046B4
    // private TubeBloomPrePassLight[] _lights
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* lights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::TubeBloomPrePassLight*>*) == 0x8);
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0xE04710
    // private System.Single _lightFlashDuration
    // Size: 0x4
    // Offset: 0x30
    float lightFlashDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lightFlashDuration and: lightIntensityCurve
    char __padding3[0x4] = {};
    // private UnityEngine.AnimationCurve _lightIntensityCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* lightIntensityCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _lightIntensityMultiplier
    // Size: 0x4
    // Offset: 0x40
    float lightIntensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE04768
    // private System.Boolean _randomizeColor
    // Size: 0x1
    // Offset: 0x44
    bool randomizeColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: randomizeColor and: lightsColor
    char __padding6[0x3] = {};
    // [DrawIfAttribute] Offset: 0xE047B4
    // private UnityEngine.Color _lightsColor
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Color lightsColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [DrawIfAttribute] Offset: 0xE04858
    // private UnityEngine.Gradient _lightsColorGradient
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Gradient* lightsColorGradient;
    // Field size check
    static_assert(sizeof(UnityEngine::Gradient*) == 0x8);
    // [SpaceAttribute] Offset: 0xE04900
    // private System.Boolean _randomizeSpeed
    // Size: 0x1
    // Offset: 0x60
    bool randomizeSpeed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: randomizeSpeed and: minSpeedMultiplier
    char __padding9[0x3] = {};
    // [DrawIfAttribute] Offset: 0xE04938
    // private System.Single _minSpeedMultiplier
    // Size: 0x4
    // Offset: 0x64
    float minSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0xE049E0
    // private System.Single _maxSpeedMultiplier
    // Size: 0x4
    // Offset: 0x68
    float maxSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxSpeedMultiplier and: explosionClips
    char __padding11[0x4] = {};
    // private UnityEngine.AudioClip[] _explosionClips
    // Size: 0x8
    // Offset: 0x70
    ::Array<UnityEngine::AudioClip*>* explosionClips;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AudioClip*>*) == 0x8);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomAudioPicker
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomAudioPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*) == 0x8);
    // private DirectionalLight _directionalLight
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::DirectionalLight* directionalLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DirectionalLight*) == 0x8);
    // private System.Single _directionalLightIntensity
    // Size: 0x4
    // Offset: 0x88
    float directionalLightIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x8C
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: didFinishEvent
    char __padding16[0x3] = {};
    // private System.Action`1<FireworkItemController> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<GlobalNamespace::FireworkItemController*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::FireworkItemController*>*) == 0x8);
    // Creating value type constructor for type: FireworkItemController
    FireworkItemController(::Array<GlobalNamespace::FireworkItemController::FireworkItemParticleSystem*>* particleSystems_ = {}, ::Array<GlobalNamespace::TubeBloomPrePassLight*>* lights_ = {}, UnityEngine::AudioSource* audioSource_ = {}, float lightFlashDuration_ = {}, UnityEngine::AnimationCurve* lightIntensityCurve_ = {}, float lightIntensityMultiplier_ = {}, bool randomizeColor_ = {}, UnityEngine::Color lightsColor_ = {}, UnityEngine::Gradient* lightsColorGradient_ = {}, bool randomizeSpeed_ = {}, float minSpeedMultiplier_ = {}, float maxSpeedMultiplier_ = {}, ::Array<UnityEngine::AudioClip*>* explosionClips_ = {}, GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomAudioPicker_ = {}, GlobalNamespace::DirectionalLight* directionalLight_ = {}, float directionalLightIntensity_ = {}, bool initialized_ = {}, System::Action_1<GlobalNamespace::FireworkItemController*>* didFinishEvent_ = {}) noexcept : particleSystems{particleSystems_}, lights{lights_}, audioSource{audioSource_}, lightFlashDuration{lightFlashDuration_}, lightIntensityCurve{lightIntensityCurve_}, lightIntensityMultiplier{lightIntensityMultiplier_}, randomizeColor{randomizeColor_}, lightsColor{lightsColor_}, lightsColorGradient{lightsColorGradient_}, randomizeSpeed{randomizeSpeed_}, minSpeedMultiplier{minSpeedMultiplier_}, maxSpeedMultiplier{maxSpeedMultiplier_}, explosionClips{explosionClips_}, randomAudioPicker{randomAudioPicker_}, directionalLight{directionalLight_}, directionalLightIntensity{directionalLightIntensity_}, initialized{initialized_}, didFinishEvent{didFinishEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_directionalLight(DirectionalLight value)
    // Offset: 0x1027B68
    void set_directionalLight(GlobalNamespace::DirectionalLight* value);
    // public System.Void set_directionalLightIntensity(System.Single value)
    // Offset: 0x1027B70
    void set_directionalLightIntensity(float value);
    // public System.Void add_didFinishEvent(System.Action`1<FireworkItemController> value)
    // Offset: 0x1027B78
    void add_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<FireworkItemController> value)
    // Offset: 0x1027C1C
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController*>* value);
    // protected System.Void Awake()
    // Offset: 0x1027CC0
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x1027D40
    void OnDisable();
    // public System.Void Fire()
    // Offset: 0x1027F00
    void Fire();
    // private System.Collections.IEnumerator FireCoroutine()
    // Offset: 0x1027F2C
    System::Collections::IEnumerator* FireCoroutine();
    // private System.Void SetLightsColor(System.Single intensity)
    // Offset: 0x1027DCC
    void SetLightsColor(float intensity);
    // private System.Void PlayExplosionSound()
    // Offset: 0x1027FC8
    void PlayExplosionSound();
    // private System.Void InitializeParticleSystem()
    // Offset: 0x10280B4
    void InitializeParticleSystem();
    // public System.Void .ctor()
    // Offset: 0x10283C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworkItemController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FireworkItemController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworkItemController*, creationType>()));
    }
  }; // FireworkItemController
  #pragma pack(pop)
  static check_size<sizeof(FireworkItemController), 144 + sizeof(System::Action_1<GlobalNamespace::FireworkItemController*>*)> __GlobalNamespace_FireworkItemControllerSizeCheck;
  static_assert(sizeof(FireworkItemController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworkItemController*, "", "FireworkItemController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::set_directionalLight
// Il2CppName: set_directionalLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(GlobalNamespace::DirectionalLight*)>(&GlobalNamespace::FireworkItemController::set_directionalLight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "DirectionalLight")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "set_directionalLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::set_directionalLightIntensity
// Il2CppName: set_directionalLightIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(float)>(&GlobalNamespace::FireworkItemController::set_directionalLightIntensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "set_directionalLightIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(System::Action_1<GlobalNamespace::FireworkItemController*>*)>(&GlobalNamespace::FireworkItemController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "FireworkItemController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(System::Action_1<GlobalNamespace::FireworkItemController*>*)>(&GlobalNamespace::FireworkItemController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "FireworkItemController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::Fire
// Il2CppName: Fire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::Fire)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "Fire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::FireCoroutine
// Il2CppName: FireCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::FireCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "FireCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::SetLightsColor
// Il2CppName: SetLightsColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(float)>(&GlobalNamespace::FireworkItemController::SetLightsColor)> {
  static const MethodInfo* get() {
    static auto* intensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "SetLightsColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intensity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::PlayExplosionSound
// Il2CppName: PlayExplosionSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::PlayExplosionSound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "PlayExplosionSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::InitializeParticleSystem
// Il2CppName: InitializeParticleSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::InitializeParticleSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworkItemController*), "InitializeParticleSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworkItemController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
