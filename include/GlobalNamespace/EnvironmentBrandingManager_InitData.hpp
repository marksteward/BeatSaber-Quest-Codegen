// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EnvironmentBrandingManager
#include "GlobalNamespace/EnvironmentBrandingManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentBrandingManager/InitData
  class EnvironmentBrandingManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean hideBranding
    // Size: 0x1
    // Offset: 0x10
    bool hideBranding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(bool hideBranding_ = {}) noexcept : hideBranding{hideBranding_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return hideBranding;
    }
    // public System.Void .ctor(System.Boolean hideBranding)
    // Offset: 0xF4E22C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentBrandingManager::InitData* New_ctor(bool hideBranding) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentBrandingManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentBrandingManager::InitData*, creationType>(hideBranding)));
    }
  }; // EnvironmentBrandingManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentBrandingManager::InitData), 16 + sizeof(bool)> __GlobalNamespace_EnvironmentBrandingManager_InitDataSizeCheck;
  static_assert(sizeof(EnvironmentBrandingManager::InitData) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentBrandingManager::InitData*, "", "EnvironmentBrandingManager/InitData");
