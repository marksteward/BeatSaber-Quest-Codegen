// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioSpeakerMode
  struct AudioSpeakerMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: AudioSpeakerMode
    constexpr AudioSpeakerMode(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.AudioSpeakerMode Raw
    static constexpr const int Raw = 0;
    // Get static field: static public UnityEngine.AudioSpeakerMode Raw
    static UnityEngine::AudioSpeakerMode _get_Raw();
    // Set static field: static public UnityEngine.AudioSpeakerMode Raw
    static void _set_Raw(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Mono
    static constexpr const int Mono = 1;
    // Get static field: static public UnityEngine.AudioSpeakerMode Mono
    static UnityEngine::AudioSpeakerMode _get_Mono();
    // Set static field: static public UnityEngine.AudioSpeakerMode Mono
    static void _set_Mono(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Stereo
    static constexpr const int Stereo = 2;
    // Get static field: static public UnityEngine.AudioSpeakerMode Stereo
    static UnityEngine::AudioSpeakerMode _get_Stereo();
    // Set static field: static public UnityEngine.AudioSpeakerMode Stereo
    static void _set_Stereo(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Quad
    static constexpr const int Quad = 3;
    // Get static field: static public UnityEngine.AudioSpeakerMode Quad
    static UnityEngine::AudioSpeakerMode _get_Quad();
    // Set static field: static public UnityEngine.AudioSpeakerMode Quad
    static void _set_Quad(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Surround
    static constexpr const int Surround = 4;
    // Get static field: static public UnityEngine.AudioSpeakerMode Surround
    static UnityEngine::AudioSpeakerMode _get_Surround();
    // Set static field: static public UnityEngine.AudioSpeakerMode Surround
    static void _set_Surround(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Mode5point1
    static constexpr const int Mode5point1 = 5;
    // Get static field: static public UnityEngine.AudioSpeakerMode Mode5point1
    static UnityEngine::AudioSpeakerMode _get_Mode5point1();
    // Set static field: static public UnityEngine.AudioSpeakerMode Mode5point1
    static void _set_Mode5point1(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Mode7point1
    static constexpr const int Mode7point1 = 6;
    // Get static field: static public UnityEngine.AudioSpeakerMode Mode7point1
    static UnityEngine::AudioSpeakerMode _get_Mode7point1();
    // Set static field: static public UnityEngine.AudioSpeakerMode Mode7point1
    static void _set_Mode7point1(UnityEngine::AudioSpeakerMode value);
    // static field const value: static public UnityEngine.AudioSpeakerMode Prologic
    static constexpr const int Prologic = 7;
    // Get static field: static public UnityEngine.AudioSpeakerMode Prologic
    static UnityEngine::AudioSpeakerMode _get_Prologic();
    // Set static field: static public UnityEngine.AudioSpeakerMode Prologic
    static void _set_Prologic(UnityEngine::AudioSpeakerMode value);
  }; // UnityEngine.AudioSpeakerMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSpeakerMode, "UnityEngine", "AudioSpeakerMode");
#pragma pack(pop)
