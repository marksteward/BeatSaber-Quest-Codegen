// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleSaberSparkleEffectManager
  class ObstacleSaberSparkleEffectManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleSaberSoundEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleSaberSoundEffect : public UnityEngine::MonoBehaviour {
    public:
    // private ObstacleSaberSparkleEffectManager _obstacleSaberSparkleEffectManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ObstacleSaberSparkleEffectManager* obstacleSaberSparkleEffectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleSaberSparkleEffectManager*) == 0x8);
    // private SaberType _saberType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::SaberType saberType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberType) == 0x4);
    // Padding between fields: saberType and: audioSource
    char __padding1[0x4] = {};
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single _volume
    // Size: 0x4
    // Offset: 0x30
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetVolume
    // Size: 0x4
    // Offset: 0x34
    float targetVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ObstacleSaberSoundEffect
    ObstacleSaberSoundEffect(GlobalNamespace::ObstacleSaberSparkleEffectManager* obstacleSaberSparkleEffectManager_ = {}, GlobalNamespace::SaberType saberType_ = {}, UnityEngine::AudioSource* audioSource_ = {}, float volume_ = {}, float targetVolume_ = {}) noexcept : obstacleSaberSparkleEffectManager{obstacleSaberSparkleEffectManager_}, saberType{saberType_}, audioSource{audioSource_}, volume{volume_}, targetVolume{targetVolume_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSmooth
    static constexpr const float kSmooth = 8;
    // Get static field: static private System.Single kSmooth
    static float _get_kSmooth();
    // Set static field: static private System.Single kSmooth
    static void _set_kSmooth(float value);
    // Get instance field: private ObstacleSaberSparkleEffectManager _obstacleSaberSparkleEffectManager
    GlobalNamespace::ObstacleSaberSparkleEffectManager* _get__obstacleSaberSparkleEffectManager();
    // Set instance field: private ObstacleSaberSparkleEffectManager _obstacleSaberSparkleEffectManager
    void _set__obstacleSaberSparkleEffectManager(GlobalNamespace::ObstacleSaberSparkleEffectManager* value);
    // Get instance field: private SaberType _saberType
    GlobalNamespace::SaberType _get__saberType();
    // Set instance field: private SaberType _saberType
    void _set__saberType(GlobalNamespace::SaberType value);
    // Get instance field: private UnityEngine.AudioSource _audioSource
    UnityEngine::AudioSource* _get__audioSource();
    // Set instance field: private UnityEngine.AudioSource _audioSource
    void _set__audioSource(UnityEngine::AudioSource* value);
    // Get instance field: private System.Single _volume
    float _get__volume();
    // Set instance field: private System.Single _volume
    void _set__volume(float value);
    // Get instance field: private System.Single _targetVolume
    float _get__targetVolume();
    // Set instance field: private System.Single _targetVolume
    void _set__targetVolume(float value);
    // protected System.Void Awake()
    // Offset: 0x11EA460
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11EA69C
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x11EA900
    void LateUpdate();
    // private System.Void HandleSparkleEffectDidStart(SaberType saberType)
    // Offset: 0x11EAADC
    void HandleSparkleEffectDidStart(GlobalNamespace::SaberType saberType);
    // private System.Void HandleSparkleEffecDidEnd(SaberType saberType)
    // Offset: 0x11EAC14
    void HandleSparkleEffecDidEnd(GlobalNamespace::SaberType saberType);
    // public System.Void .ctor()
    // Offset: 0x11EAC28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleSaberSoundEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleSaberSoundEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleSaberSoundEffect*, creationType>()));
    }
  }; // ObstacleSaberSoundEffect
  #pragma pack(pop)
  static check_size<sizeof(ObstacleSaberSoundEffect), 52 + sizeof(float)> __GlobalNamespace_ObstacleSaberSoundEffectSizeCheck;
  static_assert(sizeof(ObstacleSaberSoundEffect) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleSaberSoundEffect*, "", "ObstacleSaberSoundEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)()>(&GlobalNamespace::ObstacleSaberSoundEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)()>(&GlobalNamespace::ObstacleSaberSoundEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)()>(&GlobalNamespace::ObstacleSaberSoundEffect::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffectDidStart
// Il2CppName: HandleSparkleEffectDidStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)(GlobalNamespace::SaberType)>(&GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffectDidStart)> {
  static const MethodInfo* get() {
    static auto* saberType = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "HandleSparkleEffectDidStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffecDidEnd
// Il2CppName: HandleSparkleEffecDidEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)(GlobalNamespace::SaberType)>(&GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffecDidEnd)> {
  static const MethodInfo* get() {
    static auto* saberType = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "HandleSparkleEffecDidEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
