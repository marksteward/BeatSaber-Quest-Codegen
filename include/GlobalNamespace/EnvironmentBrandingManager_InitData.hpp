// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EnvironmentBrandingManager
#include "GlobalNamespace/EnvironmentBrandingManager.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnvironmentBrandingManager/InitData
  class EnvironmentBrandingManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean hideBranding
    // Offset: 0x10
    bool hideBranding;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return hideBranding;
    }
    // public System.Void .ctor(System.Boolean hideBranding)
    // Offset: 0x201E008
    static EnvironmentBrandingManager::InitData* New_ctor(bool hideBranding);
  }; // EnvironmentBrandingManager/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentBrandingManager::InitData*, "", "EnvironmentBrandingManager/InitData");
#pragma pack(pop)