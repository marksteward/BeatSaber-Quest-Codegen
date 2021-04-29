// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionResultsViewController
#include "GlobalNamespace/MissionResultsViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: MissionObjectiveResult
  class MissionObjectiveResult;
  // Forward declaring type: ResultObjectiveListItem
  class ResultObjectiveListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MissionResultsViewController/<>c__DisplayClass29_0
  // [CompilerGeneratedAttribute] Offset: D3263C
  class MissionResultsViewController::$$c__DisplayClass29_0 : public ::Il2CppObject {
    public:
    // public System.Boolean levelCleared
    // Size: 0x1
    // Offset: 0x10
    bool levelCleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: levelCleared and: $$4__this
    char __padding0[0x7] = {};
    // public MissionResultsViewController <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionResultsViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionResultsViewController*) == 0x8);
    // public MissionObjective[] missionObjectives
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::MissionObjective*>* missionObjectives;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjective*>*) == 0x8);
    // public MissionObjectiveResult[] missionObjectiveResults
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::MissionObjectiveResult*>* missionObjectiveResults;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjectiveResult*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass29_0
    $$c__DisplayClass29_0(bool levelCleared_ = {}, GlobalNamespace::MissionResultsViewController* $$4__this_ = {}, ::Array<GlobalNamespace::MissionObjective*>* missionObjectives_ = {}, ::Array<GlobalNamespace::MissionObjectiveResult*>* missionObjectiveResults_ = {}) noexcept : levelCleared{levelCleared_}, $$4__this{$$4__this_}, missionObjectives{missionObjectives_}, missionObjectiveResults{missionObjectiveResults_} {}
    // System.Void <SetDataToUI>b__0(System.Int32 idx, ResultObjectiveListItem objectiveListItem)
    // Offset: 0xF4AB68
    void $SetDataToUI$b__0(int idx, GlobalNamespace::ResultObjectiveListItem* objectiveListItem);
    // public System.Void .ctor()
    // Offset: 0xF4AA90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionResultsViewController::$$c__DisplayClass29_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionResultsViewController::$$c__DisplayClass29_0*, creationType>()));
    }
  }; // MissionResultsViewController/<>c__DisplayClass29_0
  #pragma pack(pop)
  static check_size<sizeof(MissionResultsViewController::$$c__DisplayClass29_0), 40 + sizeof(::Array<GlobalNamespace::MissionObjectiveResult*>*)> __GlobalNamespace_MissionResultsViewController_$$c__DisplayClass29_0SizeCheck;
  static_assert(sizeof(MissionResultsViewController::$$c__DisplayClass29_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0*, "", "MissionResultsViewController/<>c__DisplayClass29_0");
