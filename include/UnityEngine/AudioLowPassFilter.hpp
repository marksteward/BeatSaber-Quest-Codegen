// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioLowPassFilter
  // [RequireComponent] Offset: CE2830
  class AudioLowPassFilter : public UnityEngine::Behaviour {
    public:
    // Creating value type constructor for type: AudioLowPassFilter
    AudioLowPassFilter() noexcept {}
    // public System.Single get_cutoffFrequency()
    // Offset: 0x2197C5C
    float get_cutoffFrequency();
    // public System.Void set_cutoffFrequency(System.Single value)
    // Offset: 0x2197C9C
    void set_cutoffFrequency(float value);
  }; // UnityEngine.AudioLowPassFilter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
