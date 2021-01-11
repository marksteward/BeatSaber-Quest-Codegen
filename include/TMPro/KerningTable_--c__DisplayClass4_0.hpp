// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.KerningTable
#include "TMPro/KerningTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: KerningPair
  class KerningPair;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.KerningTable/<>c__DisplayClass4_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D8B3B0
  class KerningTable::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    // public System.UInt32 first
    // Size: 0x4
    // Offset: 0x10
    uint first;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 second
    // Size: 0x4
    // Offset: 0x14
    uint second;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass4_0
    $$c__DisplayClass4_0(uint first_ = {}, uint second_ = {}) noexcept : first{first_}, second{second_} {}
    // System.Boolean <AddGlyphPairAdjustmentRecord>b__0(TMPro.KerningPair item)
    // Offset: 0xF4EB20
    bool $AddGlyphPairAdjustmentRecord$b__0(TMPro::KerningPair* item);
    // public System.Void .ctor()
    // Offset: 0xF4E6D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KerningTable::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::KerningTable::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KerningTable::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // TMPro.KerningTable/<>c__DisplayClass4_0
  static check_size<sizeof(KerningTable::$$c__DisplayClass4_0), 20 + sizeof(uint)> __TMPro_KerningTable_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(KerningTable::$$c__DisplayClass4_0) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningTable::$$c__DisplayClass4_0*, "TMPro", "KerningTable/<>c__DisplayClass4_0");
