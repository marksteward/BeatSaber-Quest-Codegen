// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AudioMixerProperties
  class AudioMixerProperties : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // [RangeAttribute] Offset: 0xCFDC00
    // public System.Single volume
    // Size: 0x4
    // Offset: 0x10
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xCFDC18
    // public System.Single stereoPan
    // Size: 0x4
    // Offset: 0x14
    float stereoPan;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xCFDC30
    // public System.Single spatialBlend
    // Size: 0x4
    // Offset: 0x18
    float spatialBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AudioMixerProperties
    AudioMixerProperties(float volume_ = {}, float stereoPan_ = {}, float spatialBlend_ = {}) noexcept : volume{volume_}, stereoPan{stereoPan_}, spatialBlend{spatialBlend_} {}
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x16810AC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void .ctor()
    // Offset: 0x16812C8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioMixerProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::AudioMixerProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioMixerProperties*, creationType>()));
    }
  }; // UnityEngine.Timeline.AudioMixerProperties
  #pragma pack(pop)
  static check_size<sizeof(AudioMixerProperties), 24 + sizeof(float)> __UnityEngine_Timeline_AudioMixerPropertiesSizeCheck;
  static_assert(sizeof(AudioMixerProperties) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioMixerProperties*, "UnityEngine.Timeline", "AudioMixerProperties");
