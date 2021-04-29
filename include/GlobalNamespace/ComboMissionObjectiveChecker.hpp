// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ComboMissionObjectiveChecker
  class ComboMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // [InjectAttribute] Offset: 0xD3BEE8
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // Creating value type constructor for type: ComboMissionObjectiveChecker
    ComboMissionObjectiveChecker(GlobalNamespace::IScoreController* scoreController_ = {}) noexcept : scoreController{scoreController_} {}
    // protected System.Void OnDestroy()
    // Offset: 0x10647E4
    void OnDestroy();
    // private System.Void HandleComboDidChange(System.Int32 combo)
    // Offset: 0x10648E4
    void HandleComboDidChange(int combo);
    // protected override System.Void Init()
    // Offset: 0x1064624
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0x1064920
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComboMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ComboMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComboMissionObjectiveChecker*, creationType>()));
    }
  }; // ComboMissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(ComboMissionObjectiveChecker), 72 + sizeof(GlobalNamespace::IScoreController*)> __GlobalNamespace_ComboMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(ComboMissionObjectiveChecker) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ComboMissionObjectiveChecker*, "", "ComboMissionObjectiveChecker");
