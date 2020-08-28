// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.AudioSpeakerMode
#include "UnityEngine/AudioSpeakerMode.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioConfiguration
  struct AudioConfiguration : public System::ValueType {
    public:
    // public UnityEngine.AudioSpeakerMode speakerMode
    // Offset: 0x0
    UnityEngine::AudioSpeakerMode speakerMode;
    // public System.Int32 dspBufferSize
    // Offset: 0x4
    int dspBufferSize;
    // public System.Int32 sampleRate
    // Offset: 0x8
    int sampleRate;
    // public System.Int32 numRealVoices
    // Offset: 0xC
    int numRealVoices;
    // public System.Int32 numVirtualVoices
    // Offset: 0x10
    int numVirtualVoices;
    // Creating value type constructor for type: AudioConfiguration
    constexpr AudioConfiguration(UnityEngine::AudioSpeakerMode speakerMode_ = {}, int dspBufferSize_ = {}, int sampleRate_ = {}, int numRealVoices_ = {}, int numVirtualVoices_ = {}) : speakerMode{speakerMode_}, dspBufferSize{dspBufferSize_}, sampleRate{sampleRate_}, numRealVoices{numRealVoices_}, numVirtualVoices{numVirtualVoices_} {}
  }; // UnityEngine.AudioConfiguration
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioConfiguration, "UnityEngine", "AudioConfiguration");
#pragma pack(pop)
