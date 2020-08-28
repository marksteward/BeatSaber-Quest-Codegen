// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionObjectiveCheckersManager
#include "GlobalNamespace/MissionObjectiveCheckersManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionObjectiveCheckersManager/InitData
  class MissionObjectiveCheckersManager::InitData : public ::Il2CppObject {
    public:
    // public readonly MissionObjective[] missionObjectives
    // Offset: 0x10
    ::Array<GlobalNamespace::MissionObjective*>* missionObjectives;
    // Creating conversion operator: operator ::Array<GlobalNamespace::MissionObjective*>*
    constexpr operator ::Array<GlobalNamespace::MissionObjective*>*() const {
      return missionObjectives;
    }
    // public System.Void .ctor(MissionObjective[] missionObjectives)
    // Offset: 0xC0CD88
    static MissionObjectiveCheckersManager::InitData* New_ctor(::Array<GlobalNamespace::MissionObjective*>* missionObjectives);
  }; // MissionObjectiveCheckersManager/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveCheckersManager::InitData*, "", "MissionObjectiveCheckersManager/InitData");
#pragma pack(pop)
