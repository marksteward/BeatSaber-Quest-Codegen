// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_GlyphAdjustmentRecord
#include "TMPro/TMP_GlyphAdjustmentRecord.hpp"
// Including type: TMPro.FontFeatureLookupFlags
#include "TMPro/FontFeatureLookupFlags.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
#include "UnityEngine/TextCore/LowLevel/GlyphPairAdjustmentRecord.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord : public ::Il2CppObject {
    public:
    // private TMPro.TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord
    // Size: 0x14
    // Offset: 0x10
    TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;
    // Field size check
    static_assert(sizeof(TMPro::TMP_GlyphAdjustmentRecord) == 0x14);
    // private TMPro.TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord
    // Size: 0x14
    // Offset: 0x24
    TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;
    // Field size check
    static_assert(sizeof(TMPro::TMP_GlyphAdjustmentRecord) == 0x14);
    // private TMPro.FontFeatureLookupFlags m_FeatureLookupFlags
    // Size: 0x4
    // Offset: 0x38
    TMPro::FontFeatureLookupFlags m_FeatureLookupFlags;
    // Field size check
    static_assert(sizeof(TMPro::FontFeatureLookupFlags) == 0x4);
    // Creating value type constructor for type: TMP_GlyphPairAdjustmentRecord
    TMP_GlyphPairAdjustmentRecord(TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord_ = {}, TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord_ = {}, TMPro::FontFeatureLookupFlags m_FeatureLookupFlags_ = {}) noexcept : m_FirstAdjustmentRecord{m_FirstAdjustmentRecord_}, m_SecondAdjustmentRecord{m_SecondAdjustmentRecord_}, m_FeatureLookupFlags{m_FeatureLookupFlags_} {}
    // public TMPro.TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord()
    // Offset: 0x10F3800
    TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord();
    // public System.Void set_firstAdjustmentRecord(TMPro.TMP_GlyphAdjustmentRecord value)
    // Offset: 0x10F3814
    void set_firstAdjustmentRecord(TMPro::TMP_GlyphAdjustmentRecord value);
    // public TMPro.TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord()
    // Offset: 0x10F3828
    TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord();
    // public System.Void set_secondAdjustmentRecord(TMPro.TMP_GlyphAdjustmentRecord value)
    // Offset: 0x10F383C
    void set_secondAdjustmentRecord(TMPro::TMP_GlyphAdjustmentRecord value);
    // public TMPro.FontFeatureLookupFlags get_featureLookupFlags()
    // Offset: 0x10F3850
    TMPro::FontFeatureLookupFlags get_featureLookupFlags();
    // public System.Void set_featureLookupFlags(TMPro.FontFeatureLookupFlags value)
    // Offset: 0x10F3858
    void set_featureLookupFlags(TMPro::FontFeatureLookupFlags value);
    // public System.Void .ctor(TMPro.TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMPro.TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
    // Offset: 0x10F1F04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_GlyphPairAdjustmentRecord* New_ctor(TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_GlyphPairAdjustmentRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_GlyphPairAdjustmentRecord*, creationType>(firstAdjustmentRecord, secondAdjustmentRecord)));
    }
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
    // Offset: 0x10F1944
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_GlyphPairAdjustmentRecord* New_ctor(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_GlyphPairAdjustmentRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_GlyphPairAdjustmentRecord*, creationType>(glyphPairAdjustmentRecord)));
    }
  }; // TMPro.TMP_GlyphPairAdjustmentRecord
  #pragma pack(pop)
  static check_size<sizeof(TMP_GlyphPairAdjustmentRecord), 56 + sizeof(TMPro::FontFeatureLookupFlags)> __TMPro_TMP_GlyphPairAdjustmentRecordSizeCheck;
  static_assert(sizeof(TMP_GlyphPairAdjustmentRecord) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_GlyphPairAdjustmentRecord*, "TMPro", "TMP_GlyphPairAdjustmentRecord");
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::get_firstAdjustmentRecord
// Il2CppName: get_firstAdjustmentRecord
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::set_firstAdjustmentRecord
// Il2CppName: set_firstAdjustmentRecord
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::get_secondAdjustmentRecord
// Il2CppName: get_secondAdjustmentRecord
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::set_secondAdjustmentRecord
// Il2CppName: set_secondAdjustmentRecord
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::get_featureLookupFlags
// Il2CppName: get_featureLookupFlags
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::set_featureLookupFlags
// Il2CppName: set_featureLookupFlags
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
