// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSongController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialSongController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single songBpm
    // Size: 0x4
    // Offset: 0x10
    float songBpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(float songBpm_ = {}) noexcept : songBpm{songBpm_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return songBpm;
    }
    // public System.Void .ctor(System.Single songBpm)
    // Offset: 0x1074768
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSongController::InitData* New_ctor(float songBpm) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialSongController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSongController::InitData*, creationType>(songBpm)));
    }
  }; // TutorialSongController/InitData
  #pragma pack(pop)
  static check_size<sizeof(TutorialSongController::InitData), 16 + sizeof(float)> __GlobalNamespace_TutorialSongController_InitDataSizeCheck;
  static_assert(sizeof(TutorialSongController::InitData) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::InitData*, "", "TutorialSongController/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
