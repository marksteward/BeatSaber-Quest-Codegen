// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.FlowCoordinator/<>c__DisplayClass38_1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA6310
  class FlowCoordinator::$$c__DisplayClass38_1 : public ::Il2CppObject {
    public:
    // public HMUI.ViewController topViewController
    // Size: 0x8
    // Offset: 0x10
    HMUI::ViewController* topViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public HMUI.FlowCoordinator/<>c__DisplayClass38_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    HMUI::FlowCoordinator::$$c__DisplayClass38_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(HMUI::FlowCoordinator::$$c__DisplayClass38_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass38_1
    $$c__DisplayClass38_1(HMUI::ViewController* topViewController_ = {}, HMUI::FlowCoordinator::$$c__DisplayClass38_0* CS$$$8__locals1_ = {}) noexcept : topViewController{topViewController_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // System.Void <PresentViewController>b__0()
    // Offset: 0x10B046C
    void $PresentViewController$b__0();
    // public System.Void .ctor()
    // Offset: 0x10AF450
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlowCoordinator::$$c__DisplayClass38_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::FlowCoordinator::$$c__DisplayClass38_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlowCoordinator::$$c__DisplayClass38_1*, creationType>()));
    }
  }; // HMUI.FlowCoordinator/<>c__DisplayClass38_1
  static check_size<sizeof(FlowCoordinator::$$c__DisplayClass38_1), 24 + sizeof(HMUI::FlowCoordinator::$$c__DisplayClass38_0*)> __HMUI_FlowCoordinator_$$c__DisplayClass38_1SizeCheck;
  static_assert(sizeof(FlowCoordinator::$$c__DisplayClass38_1) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(HMUI::FlowCoordinator::$$c__DisplayClass38_1*, "HMUI", "FlowCoordinator/<>c__DisplayClass38_1");
