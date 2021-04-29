// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionObjectiveChecker
#include "GlobalNamespace/MissionObjectiveChecker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: SimpleValueMissionObjectiveChecker
  class SimpleValueMissionObjectiveChecker : public GlobalNamespace::MissionObjectiveChecker {
    public:
    // Creating value type constructor for type: SimpleValueMissionObjectiveChecker
    SimpleValueMissionObjectiveChecker() noexcept {}
    // protected System.Void CheckAndUpdateStatus()
    // Offset: 0xF8C4FC
    void CheckAndUpdateStatus();
    // protected System.Void .ctor()
    // Offset: 0xF8C5AC
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleValueMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleValueMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleValueMissionObjectiveChecker*, creationType>()));
    }
  }; // SimpleValueMissionObjectiveChecker
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleValueMissionObjectiveChecker*, "", "SimpleValueMissionObjectiveChecker");
