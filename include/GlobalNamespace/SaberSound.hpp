// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: SaberSound
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberSound : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _saberTop
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* saberTop;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AnimationCurve _pitchBySpeedCurve
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationCurve* pitchBySpeedCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _gainBySpeedCurve
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* gainBySpeedCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _speedMultiplier
    // Size: 0x4
    // Offset: 0x38
    float speedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _upSmooth
    // Size: 0x4
    // Offset: 0x3C
    float upSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _downSmooth
    // Size: 0x4
    // Offset: 0x40
    float downSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEB64F0
    // private System.Single _noSoundTopThresholdSqr
    // Size: 0x4
    // Offset: 0x44
    float noSoundTopThresholdSqr;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _prevPos
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 prevPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _speed
    // Size: 0x4
    // Offset: 0x54
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: SaberSound
    SaberSound(UnityEngine::Transform* saberTop_ = {}, UnityEngine::AudioSource* audioSource_ = {}, UnityEngine::AnimationCurve* pitchBySpeedCurve_ = {}, UnityEngine::AnimationCurve* gainBySpeedCurve_ = {}, float speedMultiplier_ = {}, float upSmooth_ = {}, float downSmooth_ = {}, float noSoundTopThresholdSqr_ = {}, UnityEngine::Vector3 prevPos_ = {}, float speed_ = {}) noexcept : saberTop{saberTop_}, audioSource{audioSource_}, pitchBySpeedCurve{pitchBySpeedCurve_}, gainBySpeedCurve{gainBySpeedCurve_}, speedMultiplier{speedMultiplier_}, upSmooth{upSmooth_}, downSmooth{downSmooth_}, noSoundTopThresholdSqr{noSoundTopThresholdSqr_}, prevPos{prevPos_}, speed{speed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Transform _saberTop
    UnityEngine::Transform* _get__saberTop();
    // Set instance field: private UnityEngine.Transform _saberTop
    void _set__saberTop(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.AudioSource _audioSource
    UnityEngine::AudioSource* _get__audioSource();
    // Set instance field: private UnityEngine.AudioSource _audioSource
    void _set__audioSource(UnityEngine::AudioSource* value);
    // Get instance field: private UnityEngine.AnimationCurve _pitchBySpeedCurve
    UnityEngine::AnimationCurve* _get__pitchBySpeedCurve();
    // Set instance field: private UnityEngine.AnimationCurve _pitchBySpeedCurve
    void _set__pitchBySpeedCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: private UnityEngine.AnimationCurve _gainBySpeedCurve
    UnityEngine::AnimationCurve* _get__gainBySpeedCurve();
    // Set instance field: private UnityEngine.AnimationCurve _gainBySpeedCurve
    void _set__gainBySpeedCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: private System.Single _speedMultiplier
    float _get__speedMultiplier();
    // Set instance field: private System.Single _speedMultiplier
    void _set__speedMultiplier(float value);
    // Get instance field: private System.Single _upSmooth
    float _get__upSmooth();
    // Set instance field: private System.Single _upSmooth
    void _set__upSmooth(float value);
    // Get instance field: private System.Single _downSmooth
    float _get__downSmooth();
    // Set instance field: private System.Single _downSmooth
    void _set__downSmooth(float value);
    // Get instance field: private System.Single _noSoundTopThresholdSqr
    float _get__noSoundTopThresholdSqr();
    // Set instance field: private System.Single _noSoundTopThresholdSqr
    void _set__noSoundTopThresholdSqr(float value);
    // Get instance field: private UnityEngine.Vector3 _prevPos
    UnityEngine::Vector3 _get__prevPos();
    // Set instance field: private UnityEngine.Vector3 _prevPos
    void _set__prevPos(UnityEngine::Vector3 value);
    // Get instance field: private System.Single _speed
    float _get__speed();
    // Set instance field: private System.Single _speed
    void _set__speed(float value);
    // protected System.Void Start()
    // Offset: 0x1F7D084
    void Start();
    // protected System.Void Update()
    // Offset: 0x1F7D0BC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1F7D2E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberSound* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberSound::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberSound*, creationType>()));
    }
  }; // SaberSound
  #pragma pack(pop)
  static check_size<sizeof(SaberSound), 84 + sizeof(float)> __GlobalNamespace_SaberSoundSizeCheck;
  static_assert(sizeof(SaberSound) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSound*, "", "SaberSound");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberSound::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSound::*)()>(&GlobalNamespace::SaberSound::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSound*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSound::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSound::*)()>(&GlobalNamespace::SaberSound::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSound*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSound::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
