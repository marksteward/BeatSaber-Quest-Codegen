// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioType
  struct AudioType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AudioTypeHelper
  class AudioTypeHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AudioTypeHelper
    AudioTypeHelper() noexcept {}
    // static public UnityEngine.AudioType GetAudioTypeFromPath(System.String path)
    // Offset: 0x23A9778
    static UnityEngine::AudioType GetAudioTypeFromPath(::Il2CppString* path);
  }; // AudioTypeHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioTypeHelper*, "", "AudioTypeHelper");