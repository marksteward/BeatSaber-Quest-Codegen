// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SaberModelController
#include "GlobalNamespace/SaberModelController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SaberModelController/InitData
  class SaberModelController::InitData : public ::Il2CppObject {
    public:
    // public readonly UnityEngine.Color trailTintColor
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color trailTintColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: InitData
    InitData(UnityEngine::Color trailTintColor_ = {}) noexcept : trailTintColor{trailTintColor_} {}
    // Creating conversion operator: operator UnityEngine::Color
    constexpr operator UnityEngine::Color() const noexcept {
      return trailTintColor;
    }
    // public System.Void .ctor(UnityEngine.Color trailTintColor)
    // Offset: 0x1050918
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberModelController::InitData* New_ctor(UnityEngine::Color trailTintColor) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberModelController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberModelController::InitData*, creationType>(trailTintColor)));
    }
    // public System.Void .ctor()
    // Offset: 0x10508E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberModelController::InitData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberModelController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberModelController::InitData*, creationType>()));
    }
  }; // SaberModelController/InitData
  #pragma pack(pop)
  static check_size<sizeof(SaberModelController::InitData), 16 + sizeof(UnityEngine::Color)> __GlobalNamespace_SaberModelController_InitDataSizeCheck;
  static_assert(sizeof(SaberModelController::InitData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberModelController::InitData*, "", "SaberModelController/InitData");
