// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.GlyphPairKey
  // [] Offset: FFFFFFFF
  struct GlyphPairKey/*, public System::ValueType*/ {
    public:
    // public System.UInt32 firstGlyphIndex
    // Size: 0x4
    // Offset: 0x0
    uint firstGlyphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 secondGlyphIndex
    // Size: 0x4
    // Offset: 0x4
    uint secondGlyphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int64 key
    // Size: 0x8
    // Offset: 0x8
    int64_t key;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: GlyphPairKey
    constexpr GlyphPairKey(uint firstGlyphIndex_ = {}, uint secondGlyphIndex_ = {}, int64_t key_ = {}) noexcept : firstGlyphIndex{firstGlyphIndex_}, secondGlyphIndex{secondGlyphIndex_}, key{key_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.UInt32 firstGlyphIndex, System.UInt32 secondGlyphIndex)
    // Offset: 0xC929D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    GlyphPairKey(uint firstGlyphIndex, uint secondGlyphIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::GlyphPairKey::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(firstGlyphIndex, secondGlyphIndex)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, firstGlyphIndex, secondGlyphIndex);
    }
    // System.Void .ctor(TMPro.TMP_GlyphPairAdjustmentRecord record)
    // Offset: 0xC929E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    GlyphPairKey(TMPro::TMP_GlyphPairAdjustmentRecord* record) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::GlyphPairKey::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(record)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, record);
    }
  }; // TMPro.GlyphPairKey
  static check_size<sizeof(GlyphPairKey), 8 + sizeof(int64_t)> __TMPro_GlyphPairKeySizeCheck;
  static_assert(sizeof(GlyphPairKey) == 0x10);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(TMPro::GlyphPairKey, "TMPro", "GlyphPairKey");
