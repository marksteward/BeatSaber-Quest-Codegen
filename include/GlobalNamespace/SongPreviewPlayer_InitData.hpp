// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongPreviewPlayer
#include "GlobalNamespace/SongPreviewPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: SongPreviewPlayer/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class SongPreviewPlayer::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single ambientVolumeScale
    // Size: 0x4
    // Offset: 0x10
    float ambientVolumeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(float ambientVolumeScale_ = {}) noexcept : ambientVolumeScale{ambientVolumeScale_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return ambientVolumeScale;
    }
    // public System.Void .ctor(System.Single ambientVolumeScale)
    // Offset: 0x105C424
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPreviewPlayer::InitData* New_ctor(float ambientVolumeScale) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPreviewPlayer::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPreviewPlayer::InitData*, creationType>(ambientVolumeScale)));
    }
  }; // SongPreviewPlayer/InitData
  #pragma pack(pop)
  static check_size<sizeof(SongPreviewPlayer::InitData), 16 + sizeof(float)> __GlobalNamespace_SongPreviewPlayer_InitDataSizeCheck;
  static_assert(sizeof(SongPreviewPlayer::InitData) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPreviewPlayer::InitData*, "", "SongPreviewPlayer/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
