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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: FloatTween
  class FloatTween;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: MultiplayerLocalPlayerOutroAudio
  // [] Offset: FFFFFFFF
  class MultiplayerLocalPlayerOutroAudio : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalPlayerOutroAudio::InitData
    class InitData;
    // Nested type: GlobalNamespace::MultiplayerLocalPlayerOutroAudio::$PlayOutroMusicSampleCoroutine$d__9
    class $PlayOutroMusicSampleCoroutine$d__9;
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // [InjectAttribute] Offset: 0xDC96F8
    // private readonly MultiplayerLocalPlayerOutroAudio/InitData _initData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLocalPlayerOutroAudio::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalPlayerOutroAudio::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xDC9708
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.FloatTween _audioVolumeTween
    // Size: 0x8
    // Offset: 0x30
    Tweening::FloatTween* audioVolumeTween;
    // Field size check
    static_assert(sizeof(Tweening::FloatTween*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalPlayerOutroAudio
    MultiplayerLocalPlayerOutroAudio(UnityEngine::AudioSource* audioSource_ = {}, GlobalNamespace::MultiplayerLocalPlayerOutroAudio::InitData* initData_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::FloatTween* audioVolumeTween_ = {}) noexcept : audioSource{audioSource_}, initData{initData_}, tweeningManager{tweeningManager_}, audioVolumeTween{audioVolumeTween_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kFadeInDuration
    static constexpr const float kFadeInDuration = 1;
    // Get static field: static public System.Single kFadeInDuration
    static float _get_kFadeInDuration();
    // Set static field: static public System.Single kFadeInDuration
    static void _set_kFadeInDuration(float value);
    // static field const value: static public System.Single kFadeOutDuration
    static constexpr const float kFadeOutDuration = 1;
    // Get static field: static public System.Single kFadeOutDuration
    static float _get_kFadeOutDuration();
    // Set static field: static public System.Single kFadeOutDuration
    static void _set_kFadeOutDuration(float value);
    // protected System.Void OnDestroy()
    // Offset: 0xF735C4
    void OnDestroy();
    // public System.Void PlayOutroMusicSample(System.Single maxDuration, System.Single volume)
    // Offset: 0xF70EF0
    void PlayOutroMusicSample(float maxDuration, float volume);
    // private System.Collections.IEnumerator PlayOutroMusicSampleCoroutine(System.Single maxDuration, System.Single volume)
    // Offset: 0xF7365C
    System::Collections::IEnumerator* PlayOutroMusicSampleCoroutine(float maxDuration, float volume);
    // private System.Void <PlayOutroMusicSampleCoroutine>b__9_0(System.Single val)
    // Offset: 0xF73720
    void $PlayOutroMusicSampleCoroutine$b__9_0(float val);
    // private System.Void <PlayOutroMusicSampleCoroutine>b__9_1()
    // Offset: 0xF7373C
    void $PlayOutroMusicSampleCoroutine$b__9_1();
    // public System.Void .ctor()
    // Offset: 0xF73718
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalPlayerOutroAudio* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalPlayerOutroAudio::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalPlayerOutroAudio*, creationType>()));
    }
  }; // MultiplayerLocalPlayerOutroAudio
  static check_size<sizeof(MultiplayerLocalPlayerOutroAudio), 48 + sizeof(Tweening::FloatTween*)> __GlobalNamespace_MultiplayerLocalPlayerOutroAudioSizeCheck;
  static_assert(sizeof(MultiplayerLocalPlayerOutroAudio) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalPlayerOutroAudio*, "", "MultiplayerLocalPlayerOutroAudio");
#pragma pack(pop)
