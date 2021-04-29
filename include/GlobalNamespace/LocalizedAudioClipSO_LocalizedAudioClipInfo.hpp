// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalizedAudioClipSO
#include "GlobalNamespace/LocalizedAudioClipSO.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LocalizedAudioClipSO/LocalizedAudioClipInfo
  class LocalizedAudioClipSO::LocalizedAudioClipInfo : public ::Il2CppObject {
    public:
    // public Polyglot.Language language
    // Size: 0x4
    // Offset: 0x10
    Polyglot::Language language;
    // Field size check
    static_assert(sizeof(Polyglot::Language) == 0x4);
    // Padding between fields: language and: localizedAudioClip
    char __padding0[0x4] = {};
    // public UnityEngine.AudioClip localizedAudioClip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioClip* localizedAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // Creating value type constructor for type: LocalizedAudioClipInfo
    LocalizedAudioClipInfo(Polyglot::Language language_ = {}, UnityEngine::AudioClip* localizedAudioClip_ = {}) noexcept : language{language_}, localizedAudioClip{localizedAudioClip_} {}
    // public System.Void .ctor()
    // Offset: 0x10E4264
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedAudioClipSO::LocalizedAudioClipInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalizedAudioClipSO::LocalizedAudioClipInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedAudioClipSO::LocalizedAudioClipInfo*, creationType>()));
    }
  }; // LocalizedAudioClipSO/LocalizedAudioClipInfo
  #pragma pack(pop)
  static check_size<sizeof(LocalizedAudioClipSO::LocalizedAudioClipInfo), 24 + sizeof(UnityEngine::AudioClip*)> __GlobalNamespace_LocalizedAudioClipSO_LocalizedAudioClipInfoSizeCheck;
  static_assert(sizeof(LocalizedAudioClipSO::LocalizedAudioClipInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedAudioClipSO::LocalizedAudioClipInfo*, "", "LocalizedAudioClipSO/LocalizedAudioClipInfo");
