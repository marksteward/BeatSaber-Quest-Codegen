// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Boolean
#include "System/Boolean.hpp"
// Including type: System.Single
#include "System/Single.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: BufferedAudioStream
  // [] Offset: FFFFFFFF
  class BufferedAudioStream : public ::Il2CppObject {
    public:
    // private UnityEngine.AudioSource audio
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AudioSource* audio;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single[] audioBuffer
    // Size: 0x8
    // Offset: 0x18
    ::Array<float>* audioBuffer;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private System.Int32 writePos
    // Size: 0x4
    // Offset: 0x20
    int writePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single playbackDelayRemaining
    // Size: 0x4
    // Offset: 0x24
    float playbackDelayRemaining;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single remainingBufferTime
    // Size: 0x4
    // Offset: 0x28
    float remainingBufferTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BufferedAudioStream
    BufferedAudioStream(UnityEngine::AudioSource* audio_ = {}, ::Array<float>* audioBuffer_ = {}, int writePos_ = {}, float playbackDelayRemaining_ = {}, float remainingBufferTime_ = {}) noexcept : audio{audio_}, audioBuffer{audioBuffer_}, writePos{writePos_}, playbackDelayRemaining{playbackDelayRemaining_}, remainingBufferTime{remainingBufferTime_} {}
    // static field const value: static private System.Boolean VerboseLogging
    static constexpr const bool VerboseLogging = false;
    // Get static field: static private System.Boolean VerboseLogging
    static bool _get_VerboseLogging();
    // Set static field: static private System.Boolean VerboseLogging
    static void _set_VerboseLogging(bool value);
    // static field const value: static private System.Single bufferLengthSeconds
    static constexpr const float bufferLengthSeconds = 0.25;
    // Get static field: static private System.Single bufferLengthSeconds
    static float _get_bufferLengthSeconds();
    // Set static field: static private System.Single bufferLengthSeconds
    static void _set_bufferLengthSeconds(float value);
    // static field const value: static private System.Int32 sampleRate
    static constexpr const int sampleRate = 48000;
    // Get static field: static private System.Int32 sampleRate
    static int _get_sampleRate();
    // Set static field: static private System.Int32 sampleRate
    static void _set_sampleRate(int value);
    // static field const value: static private System.Int32 bufferSize
    static constexpr const int bufferSize = 12000;
    // Get static field: static private System.Int32 bufferSize
    static int _get_bufferSize();
    // Set static field: static private System.Int32 bufferSize
    static void _set_bufferSize(int value);
    // static field const value: static private System.Single playbackDelayTimeSeconds
    static constexpr const float playbackDelayTimeSeconds = 0.05;
    // Get static field: static private System.Single playbackDelayTimeSeconds
    static float _get_playbackDelayTimeSeconds();
    // Set static field: static private System.Single playbackDelayTimeSeconds
    static void _set_playbackDelayTimeSeconds(float value);
    // public System.Void .ctor(UnityEngine.AudioSource audio)
    // Offset: 0x189C370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferedAudioStream* New_ctor(UnityEngine::AudioSource* audio) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BufferedAudioStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferedAudioStream*, creationType>(audio)));
    }
    // public System.Void Update()
    // Offset: 0x189C49C
    void Update();
    // private System.Void Stop()
    // Offset: 0x189C44C
    void Stop();
    // public System.Void AddData(System.Single[] samples)
    // Offset: 0x189C674
    void AddData(::Array<float>* samples);
  }; // BufferedAudioStream
  static check_size<sizeof(BufferedAudioStream), 40 + sizeof(float)> __GlobalNamespace_BufferedAudioStreamSizeCheck;
  static_assert(sizeof(BufferedAudioStream) == 0x2C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BufferedAudioStream*, "", "BufferedAudioStream");
