// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: QuickPlayLobbyFlowCoordinator
#include "GlobalNamespace/QuickPlayLobbyFlowCoordinator.hpp"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlayLobbyFlowCoordinator/<>c__DisplayClass55_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF894
  class QuickPlayLobbyFlowCoordinator::$$c__DisplayClass55_0 : public ::Il2CppObject {
    public:
    // public QuickPlayLobbyFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::QuickPlayLobbyFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::QuickPlayLobbyFlowCoordinator*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x18
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass55_0
    $$c__DisplayClass55_0(GlobalNamespace::QuickPlayLobbyFlowCoordinator* $$4__this_ = {}, System::Action* finishedCallback_ = {}) noexcept : $$4__this{$$4__this_}, finishedCallback{finishedCallback_} {}
    // System.Void <Finish>b__0()
    // Offset: 0xF325D8
    void $Finish$b__0();
    // public System.Void .ctor()
    // Offset: 0xF32368
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlayLobbyFlowCoordinator::$$c__DisplayClass55_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuickPlayLobbyFlowCoordinator::$$c__DisplayClass55_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlayLobbyFlowCoordinator::$$c__DisplayClass55_0*, creationType>()));
    }
  }; // QuickPlayLobbyFlowCoordinator/<>c__DisplayClass55_0
  static check_size<sizeof(QuickPlayLobbyFlowCoordinator::$$c__DisplayClass55_0), 24 + sizeof(System::Action*)> __GlobalNamespace_QuickPlayLobbyFlowCoordinator_$$c__DisplayClass55_0SizeCheck;
  static_assert(sizeof(QuickPlayLobbyFlowCoordinator::$$c__DisplayClass55_0) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlayLobbyFlowCoordinator::$$c__DisplayClass55_0*, "", "QuickPlayLobbyFlowCoordinator/<>c__DisplayClass55_0");
