// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: DataModels.PlayerAvatar
namespace DataModels::PlayerAvatar {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DataModels.PlayerAvatar.RandomizeAvatarColorMap
  class RandomizeAvatarColorMap : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD47DDC
    // private readonly System.Int32 <totalIndices>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int totalIndices;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: totalIndices and: colorIndices
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD47DEC
    // private readonly System.Int32[] <colorIndices>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* colorIndices;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: RandomizeAvatarColorMap
    RandomizeAvatarColorMap(int totalIndices_ = {}, ::Array<int>* colorIndices_ = {}) noexcept : totalIndices{totalIndices_}, colorIndices{colorIndices_} {}
    // public System.Int32 get_totalIndices()
    // Offset: 0x106AE80
    int get_totalIndices();
    // public System.Int32[] get_colorIndices()
    // Offset: 0x106AE88
    ::Array<int>* get_colorIndices();
    // public System.Void .ctor(System.Int32 headTopPrimaryColorIndex, System.Int32 headTopSecondaryColorIndex, System.Int32 glassesColorIndex, System.Int32 facialHairColorIndex, System.Int32 handsColorIndex, System.Int32 clothesPrimaryColorIndex, System.Int32 clothesSecondaryColorIndex, System.Int32 clothesDetailColorIndex)
    // Offset: 0x106A888
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomizeAvatarColorMap* New_ctor(int headTopPrimaryColorIndex, int headTopSecondaryColorIndex, int glassesColorIndex, int facialHairColorIndex, int handsColorIndex, int clothesPrimaryColorIndex, int clothesSecondaryColorIndex, int clothesDetailColorIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("DataModels::PlayerAvatar::RandomizeAvatarColorMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomizeAvatarColorMap*, creationType>(headTopPrimaryColorIndex, headTopSecondaryColorIndex, glassesColorIndex, facialHairColorIndex, handsColorIndex, clothesPrimaryColorIndex, clothesSecondaryColorIndex, clothesDetailColorIndex)));
    }
  }; // DataModels.PlayerAvatar.RandomizeAvatarColorMap
  #pragma pack(pop)
  static check_size<sizeof(RandomizeAvatarColorMap), 24 + sizeof(::Array<int>*)> __DataModels_PlayerAvatar_RandomizeAvatarColorMapSizeCheck;
  static_assert(sizeof(RandomizeAvatarColorMap) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(DataModels::PlayerAvatar::RandomizeAvatarColorMap*, "DataModels.PlayerAvatar", "RandomizeAvatarColorMap");
