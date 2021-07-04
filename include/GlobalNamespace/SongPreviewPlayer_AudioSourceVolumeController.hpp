// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongPreviewPlayer
#include "GlobalNamespace/SongPreviewPlayer.hpp"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SongPreviewPlayer/AudioSourceVolumeController
  class SongPreviewPlayer::AudioSourceVolumeController : public ::Il2CppObject {
    public:
    // public readonly UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE29CB8
    // private System.Single <maxVolume>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    float maxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _volume
    // Size: 0x4
    // Offset: 0x1C
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AudioSourceVolumeController
    AudioSourceVolumeController(UnityEngine::AudioSource* audioSource_ = {}, float maxVolume_ = {}, float volume_ = {}) noexcept : audioSource{audioSource_}, maxVolume{maxVolume_}, volume{volume_} {}
    // public System.Void set_volume(System.Single value)
    // Offset: 0x11575F8
    void set_volume(float value);
    // public System.Single get_volume()
    // Offset: 0x1157DDC
    float get_volume();
    // public System.Single get_maxVolume()
    // Offset: 0x1157DE4
    float get_maxVolume();
    // public System.Void set_maxVolume(System.Single value)
    // Offset: 0x1157DEC
    void set_maxVolume(float value);
    // public System.Void .ctor(UnityEngine.AudioSource audioSource)
    // Offset: 0x1157128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPreviewPlayer::AudioSourceVolumeController* New_ctor(UnityEngine::AudioSource* audioSource) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPreviewPlayer::AudioSourceVolumeController*, creationType>(audioSource)));
    }
  }; // SongPreviewPlayer/AudioSourceVolumeController
  #pragma pack(pop)
  static check_size<sizeof(SongPreviewPlayer::AudioSourceVolumeController), 28 + sizeof(float)> __GlobalNamespace_SongPreviewPlayer_AudioSourceVolumeControllerSizeCheck;
  static_assert(sizeof(SongPreviewPlayer::AudioSourceVolumeController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController*, "", "SongPreviewPlayer/AudioSourceVolumeController");
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::set_volume
// Il2CppName: set_volume
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::get_volume
// Il2CppName: get_volume
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::get_maxVolume
// Il2CppName: get_maxVolume
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::set_maxVolume
// Il2CppName: set_maxVolume
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
