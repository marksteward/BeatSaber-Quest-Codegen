// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: EmptyBeatmapLevelData
  // [] Offset: FFFFFFFF
  class EmptyBeatmapLevelData : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelData*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDC340C
    // private readonly UnityEngine.AudioClip <audioClip>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC341C
    // private readonly IDifficultyBeatmapSet[] <difficultyBeatmapSets>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IDifficultyBeatmapSet*>*) == 0x8);
    // Creating value type constructor for type: EmptyBeatmapLevelData
    EmptyBeatmapLevelData(UnityEngine::AudioClip* audioClip_ = {}, ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets_ = {}) noexcept : audioClip{audioClip_}, difficultyBeatmapSets{difficultyBeatmapSets_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelData
    operator GlobalNamespace::IBeatmapLevelData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelData*>(this);
    }
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x1A5F800
    // Implemented from: IBeatmapLevelData
    // Base method: UnityEngine.AudioClip IBeatmapLevelData::get_audioClip()
    UnityEngine::AudioClip* get_audioClip();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x1A5F808
    // Implemented from: IBeatmapLevelData
    // Base method: IDifficultyBeatmapSet[] IBeatmapLevelData::get_difficultyBeatmapSets()
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor()
    // Offset: 0x1A5F7F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyBeatmapLevelData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EmptyBeatmapLevelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyBeatmapLevelData*, creationType>()));
    }
  }; // EmptyBeatmapLevelData
  static check_size<sizeof(EmptyBeatmapLevelData), 24 + sizeof(::Array<GlobalNamespace::IDifficultyBeatmapSet*>*)> __GlobalNamespace_EmptyBeatmapLevelDataSizeCheck;
  static_assert(sizeof(EmptyBeatmapLevelData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EmptyBeatmapLevelData*, "", "EmptyBeatmapLevelData");
#pragma pack(pop)
