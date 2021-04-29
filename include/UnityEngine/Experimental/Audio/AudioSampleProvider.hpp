// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Audio
namespace UnityEngine::Experimental::Audio {
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Audio
namespace UnityEngine::Experimental::Audio {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Audio.AudioSampleProvider
  // [NativeTypeAttribute] Offset: CE2C40
  // [StaticAccessorAttribute] Offset: CE2C40
  class AudioSampleProvider : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler
    class SampleFramesHandler;
    // [DebuggerBrowsableAttribute] Offset: 0xCE2E0C
    // [CompilerGeneratedAttribute] Offset: 0xCE2E0C
    // private UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler sampleFramesAvailable
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesAvailable;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xCE2E48
    // [CompilerGeneratedAttribute] Offset: 0xCE2E48
    // private UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler sampleFramesOverflow
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesOverflow;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*) == 0x8);
    // Creating value type constructor for type: AudioSampleProvider
    AudioSampleProvider(UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesAvailable_ = {}, UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesOverflow_ = {}) noexcept : sampleFramesAvailable{sampleFramesAvailable_}, sampleFramesOverflow{sampleFramesOverflow_} {}
    // private System.Void InvokeSampleFramesAvailable(System.Int32 sampleFrameCount)
    // Offset: 0x219924C
    void InvokeSampleFramesAvailable(int sampleFrameCount);
    // private System.Void InvokeSampleFramesOverflow(System.Int32 droppedSampleFrameCount)
    // Offset: 0x2199674
    void InvokeSampleFramesOverflow(int droppedSampleFrameCount);
  }; // UnityEngine.Experimental.Audio.AudioSampleProvider
  #pragma pack(pop)
  static check_size<sizeof(AudioSampleProvider), 24 + sizeof(UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*)> __UnityEngine_Experimental_Audio_AudioSampleProviderSizeCheck;
  static_assert(sizeof(AudioSampleProvider) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Audio::AudioSampleProvider*, "UnityEngine.Experimental.Audio", "AudioSampleProvider");
