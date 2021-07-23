// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/UnityEngine.MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: ParticleSystemLightWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class ParticleSystemLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private System.Boolean setOnlyOnce
    // Size: 0x1
    // Offset: 0x38
    bool setOnlyOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _setColorOnly
    // Size: 0x1
    // Offset: 0x39
    bool setColorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: setColorOnly and: intensity
    char __padding2[0x2] = {};
    // [DrawIfAttribute] Offset: 0xDE15B0
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x3C
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0xDE1654
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x40
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: minAlpha and: mainModule
    char __padding4[0x4] = {};
    // private UnityEngine.ParticleSystem/UnityEngine.MainModule _mainModule
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::ParticleSystem::MainModule mainModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::MainModule) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.Particle[] _particles
    // Size: 0x8
    // Offset: 0x50
    ::Array<UnityEngine::ParticleSystem::Particle>* particles;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem::Particle>*) == 0x8);
    // Creating value type constructor for type: ParticleSystemLightWithId
    ParticleSystemLightWithId(UnityEngine::ParticleSystem* particleSystem_ = {}, bool setOnlyOnce_ = {}, bool setColorOnly_ = {}, float intensity_ = {}, float minAlpha_ = {}, UnityEngine::ParticleSystem::MainModule mainModule_ = {}, ::Array<UnityEngine::ParticleSystem::Particle>* particles_ = {}) noexcept : particleSystem{particleSystem_}, setOnlyOnce{setOnlyOnce_}, setColorOnly{setColorOnly_}, intensity{intensity_}, minAlpha{minAlpha_}, mainModule{mainModule_}, particles{particles_} {}
    // Get instance field: private UnityEngine.ParticleSystem _particleSystem
    UnityEngine::ParticleSystem* _get__particleSystem();
    // Set instance field: private UnityEngine.ParticleSystem _particleSystem
    void _set__particleSystem(UnityEngine::ParticleSystem* value);
    // Get instance field: private System.Boolean setOnlyOnce
    bool _get_setOnlyOnce();
    // Set instance field: private System.Boolean setOnlyOnce
    void _set_setOnlyOnce(bool value);
    // Get instance field: private System.Boolean _setColorOnly
    bool _get__setColorOnly();
    // Set instance field: private System.Boolean _setColorOnly
    void _set__setColorOnly(bool value);
    // Get instance field: private System.Single _intensity
    float _get__intensity();
    // Set instance field: private System.Single _intensity
    void _set__intensity(float value);
    // Get instance field: private System.Single _minAlpha
    float _get__minAlpha();
    // Set instance field: private System.Single _minAlpha
    void _set__minAlpha(float value);
    // Get instance field: private UnityEngine.ParticleSystem/UnityEngine.MainModule _mainModule
    UnityEngine::ParticleSystem::MainModule _get__mainModule();
    // Set instance field: private UnityEngine.ParticleSystem/UnityEngine.MainModule _mainModule
    void _set__mainModule(UnityEngine::ParticleSystem::MainModule value);
    // Get instance field: private UnityEngine.ParticleSystem/UnityEngine.Particle[] _particles
    ::Array<UnityEngine::ParticleSystem::Particle>* _get__particles();
    // Set instance field: private UnityEngine.ParticleSystem/UnityEngine.Particle[] _particles
    void _set__particles(::Array<UnityEngine::ParticleSystem::Particle>* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x1DF7E30
    UnityEngine::Color get_color();
    // protected System.Void Awake()
    // Offset: 0x1DF7E90
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1DF8154
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleSystemLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ParticleSystemLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleSystemLightWithId*, creationType>()));
    }
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1DF7F10
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
  }; // ParticleSystemLightWithId
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemLightWithId), 80 + sizeof(::Array<UnityEngine::ParticleSystem::Particle>*)> __GlobalNamespace_ParticleSystemLightWithIdSizeCheck;
  static_assert(sizeof(ParticleSystemLightWithId) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemLightWithId*, "", "ParticleSystemLightWithId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemLightWithId::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ParticleSystemLightWithId::*)()>(&GlobalNamespace::ParticleSystemLightWithId::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemLightWithId*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemLightWithId::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemLightWithId::*)()>(&GlobalNamespace::ParticleSystemLightWithId::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemLightWithId*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemLightWithId::*)(UnityEngine::Color)>(&GlobalNamespace::ParticleSystemLightWithId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
