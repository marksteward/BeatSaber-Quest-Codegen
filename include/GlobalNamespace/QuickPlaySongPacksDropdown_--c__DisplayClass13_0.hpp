// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: QuickPlaySongPacksDropdown
#include "GlobalNamespace/QuickPlaySongPacksDropdown.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySongPacksDropdown/<>c__DisplayClass13_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1CD00
  class QuickPlaySongPacksDropdown::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public System.String serializedName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* serializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass13_0
    $$c__DisplayClass13_0(::Il2CppString* serializedName_ = {}) noexcept : serializedName{serializedName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return serializedName;
    }
    // System.Boolean <SelectCellWithSerializedName>b__0(QuickPlaySongPacksDropdown/SongPackMaskItem item)
    // Offset: 0xFC7E40
    bool $SelectCellWithSerializedName$b__0(GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem* item);
    // public System.Void .ctor()
    // Offset: 0xFC7A18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySongPacksDropdown::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySongPacksDropdown::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // QuickPlaySongPacksDropdown/<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySongPacksDropdown::$$c__DisplayClass13_0), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_QuickPlaySongPacksDropdown_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(QuickPlaySongPacksDropdown::$$c__DisplayClass13_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0*, "", "QuickPlaySongPacksDropdown/<>c__DisplayClass13_0");