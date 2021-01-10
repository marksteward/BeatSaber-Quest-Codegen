// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: PatternFightSceneSetupData
  // [] Offset: FFFFFFFF
  // [ZenjectAllowDuringValidationAttribute] Offset: DBE9D4
  class PatternFightSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // public readonly PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // Creating value type constructor for type: PatternFightSceneSetupData
    PatternFightSceneSetupData(GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings_ = {}) noexcept : playerSpecificSettings{playerSpecificSettings_} {}
    // Creating conversion operator: operator GlobalNamespace::PlayerSpecificSettings*
    constexpr operator GlobalNamespace::PlayerSpecificSettings*() const noexcept {
      return playerSpecificSettings;
    }
    // public System.Void .ctor(PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0xF050AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PatternFightSceneSetupData* New_ctor(GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PatternFightSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PatternFightSceneSetupData*, creationType>(playerSpecificSettings)));
    }
  }; // PatternFightSceneSetupData
  static check_size<sizeof(PatternFightSceneSetupData), 16 + sizeof(GlobalNamespace::PlayerSpecificSettings*)> __GlobalNamespace_PatternFightSceneSetupDataSizeCheck;
  static_assert(sizeof(PatternFightSceneSetupData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightSceneSetupData*, "", "PatternFightSceneSetupData");
#pragma pack(pop)
