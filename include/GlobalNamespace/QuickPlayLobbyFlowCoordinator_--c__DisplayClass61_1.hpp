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
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlayLobbyFlowCoordinator/<>c__DisplayClass61_1
  // [CompilerGeneratedAttribute] Offset: D322CC
  class QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.EventSystems.EventSystem eventSystem
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::EventSystems::EventSystem* eventSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::EventSystem*) == 0x8);
    // public QuickPlayLobbyFlowCoordinator/<>c__DisplayClass61_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass61_1
    $$c__DisplayClass61_1(UnityEngine::EventSystems::EventSystem* eventSystem_ = {}, GlobalNamespace::QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_0* CS$$$8__locals1_ = {}) noexcept : eventSystem{eventSystem_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // System.Void <Finish>b__0()
    // Offset: 0xF86740
    void $Finish$b__0();
    // public System.Void .ctor()
    // Offset: 0xF864D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_1*, creationType>()));
    }
  }; // QuickPlayLobbyFlowCoordinator/<>c__DisplayClass61_1
  #pragma pack(pop)
  static check_size<sizeof(QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_1), 24 + sizeof(GlobalNamespace::QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_0*)> __GlobalNamespace_QuickPlayLobbyFlowCoordinator_$$c__DisplayClass61_1SizeCheck;
  static_assert(sizeof(QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlayLobbyFlowCoordinator::$$c__DisplayClass61_1*, "", "QuickPlayLobbyFlowCoordinator/<>c__DisplayClass61_1");
