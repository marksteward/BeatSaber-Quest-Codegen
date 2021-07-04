// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerModeSettings
  class MultiplayerModeSettings : public ::Il2CppObject {
    public:
    // public System.Int32 createServerPlayersCount
    // Size: 0x4
    // Offset: 0x10
    int createServerPlayersCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public BeatmapDifficultyMask quickPlayBeatmapDifficulty
    // Size: 0x1
    // Offset: 0x14
    GlobalNamespace::BeatmapDifficultyMask quickPlayBeatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: quickPlayBeatmapDifficulty and: quickPlaySongPackMaskSerializedName
    char __padding1[0x3] = {};
    // public System.String quickPlaySongPackMaskSerializedName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* quickPlaySongPackMaskSerializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MultiplayerModeSettings
    MultiplayerModeSettings(int createServerPlayersCount_ = {}, GlobalNamespace::BeatmapDifficultyMask quickPlayBeatmapDifficulty_ = {}, ::Il2CppString* quickPlaySongPackMaskSerializedName_ = {}) noexcept : createServerPlayersCount{createServerPlayersCount_}, quickPlayBeatmapDifficulty{quickPlayBeatmapDifficulty_}, quickPlaySongPackMaskSerializedName{quickPlaySongPackMaskSerializedName_} {}
    // public System.Void .ctor()
    // Offset: 0x1005D58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerModeSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerModeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerModeSettings*, creationType>()));
    }
  }; // MultiplayerModeSettings
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerModeSettings), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_MultiplayerModeSettingsSizeCheck;
  static_assert(sizeof(MultiplayerModeSettings) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerModeSettings*, "", "MultiplayerModeSettings");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
