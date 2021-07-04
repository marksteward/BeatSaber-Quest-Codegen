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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: EnergyMissionObjectiveChecker
  class EnergyMissionObjectiveChecker : public GlobalNamespace::MissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // [InjectAttribute] Offset: 0xE1C8DC
    // private GameEnergyCounter _energyCounter
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameEnergyCounter* energyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameEnergyCounter*) == 0x8);
    // Creating value type constructor for type: EnergyMissionObjectiveChecker
    EnergyMissionObjectiveChecker(GlobalNamespace::GameEnergyCounter* energyCounter_ = {}) noexcept : energyCounter{energyCounter_} {}
    // protected System.Void OnDestroy()
    // Offset: 0x103C6A8
    void OnDestroy();
    // private System.Void HandleEnergyDidChange(System.Single energy)
    // Offset: 0x103C780
    void HandleEnergyDidChange(float energy);
    // private System.Void CheckAndUpdateStatus()
    // Offset: 0x103C7B8
    void CheckAndUpdateStatus();
    // protected override System.Void Init()
    // Offset: 0x103C834
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0x103C934
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnergyMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnergyMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnergyMissionObjectiveChecker*, creationType>()));
    }
  }; // EnergyMissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(EnergyMissionObjectiveChecker), 72 + sizeof(GlobalNamespace::GameEnergyCounter*)> __GlobalNamespace_EnergyMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(EnergyMissionObjectiveChecker) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnergyMissionObjectiveChecker*, "", "EnergyMissionObjectiveChecker");
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&GlobalNamespace::EnergyMissionObjectiveChecker::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnergyMissionObjectiveChecker*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::HandleEnergyDidChange
// Il2CppName: HandleEnergyDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnergyMissionObjectiveChecker::*)(float)>(&GlobalNamespace::EnergyMissionObjectiveChecker::HandleEnergyDidChange)> {
  const MethodInfo* get() {
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnergyMissionObjectiveChecker*), "HandleEnergyDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{energy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::CheckAndUpdateStatus
// Il2CppName: CheckAndUpdateStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&GlobalNamespace::EnergyMissionObjectiveChecker::CheckAndUpdateStatus)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnergyMissionObjectiveChecker*), "CheckAndUpdateStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&GlobalNamespace::EnergyMissionObjectiveChecker::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnergyMissionObjectiveChecker*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
