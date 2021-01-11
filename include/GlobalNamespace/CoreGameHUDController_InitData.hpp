// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x13
  #pragma pack(push, 1)
  // Autogenerated type: CoreGameHUDController/InitData
  // [] Offset: FFFFFFFF
  class CoreGameHUDController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean hide
    // Size: 0x1
    // Offset: 0x10
    bool hide;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean showEnergyPanel
    // Size: 0x1
    // Offset: 0x11
    bool showEnergyPanel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean advancedHUD
    // Size: 0x1
    // Offset: 0x12
    bool advancedHUD;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(bool hide_ = {}, bool showEnergyPanel_ = {}, bool advancedHUD_ = {}) noexcept : hide{hide_}, showEnergyPanel{showEnergyPanel_}, advancedHUD{advancedHUD_} {}
    // public System.Void .ctor(System.Boolean hide, System.Boolean showEnergyPanel, System.Boolean advancedHUD)
    // Offset: 0x1A548F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoreGameHUDController::InitData* New_ctor(bool hide, bool showEnergyPanel, bool advancedHUD) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CoreGameHUDController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoreGameHUDController::InitData*, creationType>(hide, showEnergyPanel, advancedHUD)));
    }
  }; // CoreGameHUDController/InitData
  static check_size<sizeof(CoreGameHUDController::InitData), 18 + sizeof(bool)> __GlobalNamespace_CoreGameHUDController_InitDataSizeCheck;
  static_assert(sizeof(CoreGameHUDController::InitData) == 0x13);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CoreGameHUDController::InitData*, "", "CoreGameHUDController/InitData");
