// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  // Autogenerated type: AudioFading
  // [] Offset: FFFFFFFF
  class AudioFading : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x20
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _fadeInOnStart
    // Size: 0x1
    // Offset: 0x24
    bool fadeInOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fadeInOnStart and: targetVolume
    char __padding2[0x3] = {};
    // private System.Single _targetVolume
    // Size: 0x4
    // Offset: 0x28
    float targetVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AudioFading
    AudioFading(UnityEngine::AudioSource* audioSource_ = {}, float smooth_ = {}, bool fadeInOnStart_ = {}, float targetVolume_ = {}) noexcept : audioSource{audioSource_}, smooth{smooth_}, fadeInOnStart{fadeInOnStart_}, targetVolume{targetVolume_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A41364
    void Start();
    // protected System.Void Update()
    // Offset: 0x1A41400
    void Update();
    // public System.Void FadeOut()
    // Offset: 0x1A41540
    void FadeOut();
    // public System.Void FadeIn()
    // Offset: 0x1A413D0
    void FadeIn();
    // public System.Void .ctor()
    // Offset: 0x1A4156C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioFading* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioFading::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioFading*, creationType>()));
    }
  }; // AudioFading
  static check_size<sizeof(AudioFading), 40 + sizeof(float)> __GlobalNamespace_AudioFadingSizeCheck;
  static_assert(sizeof(AudioFading) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioFading*, "", "AudioFading");
#pragma pack(pop)
