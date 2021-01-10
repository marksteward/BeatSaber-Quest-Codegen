// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ExternalCamerasManager
#include "GlobalNamespace/ExternalCamerasManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  // Autogenerated type: ExternalCamerasManager/InitData
  // [] Offset: FFFFFFFF
  class ExternalCamerasManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean enableOculusMRC
    // Size: 0x1
    // Offset: 0x10
    bool enableOculusMRC;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(bool enableOculusMRC_ = {}) noexcept : enableOculusMRC{enableOculusMRC_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return enableOculusMRC;
    }
    // public System.Void .ctor(System.Boolean enableOculusMRC)
    // Offset: 0x1989378
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalCamerasManager::InitData* New_ctor(bool enableOculusMRC) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExternalCamerasManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalCamerasManager::InitData*, creationType>(enableOculusMRC)));
    }
  }; // ExternalCamerasManager/InitData
  static check_size<sizeof(ExternalCamerasManager::InitData), 16 + sizeof(bool)> __GlobalNamespace_ExternalCamerasManager_InitDataSizeCheck;
  static_assert(sizeof(ExternalCamerasManager::InitData) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExternalCamerasManager::InitData*, "", "ExternalCamerasManager/InitData");
#pragma pack(pop)
