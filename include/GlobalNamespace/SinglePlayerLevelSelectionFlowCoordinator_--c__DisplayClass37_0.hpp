// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SinglePlayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass37_0
  // [CompilerGeneratedAttribute] Offset: E125D8
  class SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0 : public ::Il2CppObject {
    public:
    // public SinglePlayerLevelSelectionFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*) == 0x8);
    // public System.Action beforeSceneSwitchCallback
    // Size: 0x8
    // Offset: 0x18
    System::Action* beforeSceneSwitchCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Boolean practice
    // Size: 0x1
    // Offset: 0x20
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: practice and: $$9__1
    char __padding2[0x7] = {};
    // public System.Action <>9__1
    // Size: 0x8
    // Offset: 0x28
    System::Action* $$9__1;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass37_0
    $$c__DisplayClass37_0(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* $$4__this_ = {}, System::Action* beforeSceneSwitchCallback_ = {}, bool practice_ = {}, System::Action* $$9__1_ = {}) noexcept : $$4__this{$$4__this_}, beforeSceneSwitchCallback{beforeSceneSwitchCallback_}, practice{practice_}, $$9__1{$$9__1_} {}
    // System.Void <StartLevelOrShow360Prompt>b__0(System.Int32 buttonNumber)
    // Offset: 0x10E21F4
    void $StartLevelOrShow360Prompt$b__0(int buttonNumber);
    // System.Void <StartLevelOrShow360Prompt>b__1()
    // Offset: 0x10E228C
    void $StartLevelOrShow360Prompt$b__1();
    // public System.Void .ctor()
    // Offset: 0x10E2060
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0*, creationType>()));
    }
  }; // SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass37_0
  #pragma pack(pop)
  static check_size<sizeof(SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0), 40 + sizeof(System::Action*)> __GlobalNamespace_SinglePlayerLevelSelectionFlowCoordinator_$$c__DisplayClass37_0SizeCheck;
  static_assert(sizeof(SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0*, "", "SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass37_0");
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::$StartLevelOrShow360Prompt$b__0
// Il2CppName: <StartLevelOrShow360Prompt>b__0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::$StartLevelOrShow360Prompt$b__1
// Il2CppName: <StartLevelOrShow360Prompt>b__1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
