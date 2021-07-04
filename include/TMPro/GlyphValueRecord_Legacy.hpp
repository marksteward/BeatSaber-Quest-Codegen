// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphValueRecord
#include "UnityEngine/TextCore/LowLevel/GlyphValueRecord.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.GlyphValueRecord_Legacy
  struct GlyphValueRecord_Legacy/*, public System::ValueType*/ {
    public:
    // public System.Single xPlacement
    // Size: 0x4
    // Offset: 0x0
    float xPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single yPlacement
    // Size: 0x4
    // Offset: 0x4
    float yPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xAdvance
    // Size: 0x4
    // Offset: 0x8
    float xAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single yAdvance
    // Size: 0x4
    // Offset: 0xC
    float yAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: GlyphValueRecord_Legacy
    constexpr GlyphValueRecord_Legacy(float xPlacement_ = {}, float yPlacement_ = {}, float xAdvance_ = {}, float yAdvance_ = {}) noexcept : xPlacement{xPlacement_}, yPlacement{yPlacement_}, xAdvance{xAdvance_}, yAdvance{yAdvance_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphValueRecord valueRecord)
    // Offset: 0xEE511C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    GlyphValueRecord_Legacy(UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::GlyphValueRecord_Legacy::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(valueRecord)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, valueRecord);
    }
  }; // TMPro.GlyphValueRecord_Legacy
  #pragma pack(pop)
  static check_size<sizeof(GlyphValueRecord_Legacy), 12 + sizeof(float)> __TMPro_GlyphValueRecord_LegacySizeCheck;
  static_assert(sizeof(GlyphValueRecord_Legacy) == 0x10);
  // static public TMPro.GlyphValueRecord_Legacy op_Addition(TMPro.GlyphValueRecord_Legacy a, TMPro.GlyphValueRecord_Legacy b)
  // Offset: 0x10E38E8
  TMPro::GlyphValueRecord_Legacy operator+(const TMPro::GlyphValueRecord_Legacy& a, const TMPro::GlyphValueRecord_Legacy& b);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::GlyphValueRecord_Legacy, "TMPro", "GlyphValueRecord_Legacy");
// Writing MetadataGetter for method: TMPro::GlyphValueRecord_Legacy::GlyphValueRecord_Legacy
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::GlyphValueRecord_Legacy::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
