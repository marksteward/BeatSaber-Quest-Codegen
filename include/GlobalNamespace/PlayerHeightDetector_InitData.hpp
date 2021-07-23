// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerHeightDetector
#include "GlobalNamespace/PlayerHeightDetector.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: PlayerHeightDetector/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerHeightDetector::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single headPosToPlayerHeightOffset
    // Size: 0x4
    // Offset: 0x10
    float headPosToPlayerHeightOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(float headPosToPlayerHeightOffset_ = {}) noexcept : headPosToPlayerHeightOffset{headPosToPlayerHeightOffset_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return headPosToPlayerHeightOffset;
    }
    // Get instance field: public readonly System.Single headPosToPlayerHeightOffset
    float _get_headPosToPlayerHeightOffset();
    // Set instance field: public readonly System.Single headPosToPlayerHeightOffset
    void _set_headPosToPlayerHeightOffset(float value);
    // public System.Void .ctor(System.Single headPosToPlayerHeightOffset)
    // Offset: 0x1105220
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHeightDetector::InitData* New_ctor(float headPosToPlayerHeightOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerHeightDetector::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHeightDetector::InitData*, creationType>(headPosToPlayerHeightOffset)));
    }
  }; // PlayerHeightDetector/InitData
  #pragma pack(pop)
  static check_size<sizeof(PlayerHeightDetector::InitData), 16 + sizeof(float)> __GlobalNamespace_PlayerHeightDetector_InitDataSizeCheck;
  static_assert(sizeof(PlayerHeightDetector::InitData) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeightDetector::InitData*, "", "PlayerHeightDetector/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightDetector::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
