// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BombCutSoundEffect
  class BombCutSoundEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BombCutSoundEffect::Pool
    class Pool;
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE14E28
    // private System.Action`1<BombCutSoundEffect> didFinishEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<GlobalNamespace::BombCutSoundEffect*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::BombCutSoundEffect*>*) == 0x8);
    // private Saber _saber
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::Saber* saber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // Creating value type constructor for type: BombCutSoundEffect
    BombCutSoundEffect(UnityEngine::AudioSource* audioSource_ = {}, System::Action_1<GlobalNamespace::BombCutSoundEffect*>* didFinishEvent_ = {}, GlobalNamespace::Saber* saber_ = {}) noexcept : audioSource{audioSource_}, didFinishEvent{didFinishEvent_}, saber{saber_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didFinishEvent(System.Action`1<BombCutSoundEffect> value)
    // Offset: 0x111118C
    void add_didFinishEvent(System::Action_1<GlobalNamespace::BombCutSoundEffect*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<BombCutSoundEffect> value)
    // Offset: 0x1111230
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::BombCutSoundEffect*>* value);
    // public System.Void Init(UnityEngine.AudioClip audioClip, Saber saber, System.Single volume)
    // Offset: 0x11112D4
    void Init(UnityEngine::AudioClip* audioClip, GlobalNamespace::Saber* saber, float volume);
    // protected System.Void LateUpdate()
    // Offset: 0x1111354
    void LateUpdate();
    // private System.Void StopPlayingAndFinish()
    // Offset: 0x11113E8
    void StopPlayingAndFinish();
    // public System.Void .ctor()
    // Offset: 0x1111470
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BombCutSoundEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BombCutSoundEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BombCutSoundEffect*, creationType>()));
    }
  }; // BombCutSoundEffect
  #pragma pack(pop)
  static check_size<sizeof(BombCutSoundEffect), 40 + sizeof(GlobalNamespace::Saber*)> __GlobalNamespace_BombCutSoundEffectSizeCheck;
  static_assert(sizeof(BombCutSoundEffect) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombCutSoundEffect*, "", "BombCutSoundEffect");
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::add_didFinishEvent
// Il2CppName: add_didFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::LateUpdate
// Il2CppName: LateUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::StopPlayingAndFinish
// Il2CppName: StopPlayingAndFinish
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
