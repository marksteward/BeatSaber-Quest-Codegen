// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.TMP_GlyphValueRecord
#include "TMPro/TMP_GlyphValueRecord.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
#include "UnityEngine/TextCore/LowLevel/GlyphAdjustmentRecord.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_GlyphAdjustmentRecord
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_GlyphAdjustmentRecord/*, public System::ValueType*/ {
    public:
    // private System.UInt32 m_GlyphIndex
    // Size: 0x4
    // Offset: 0x0
    uint m_GlyphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private TMPro.TMP_GlyphValueRecord m_GlyphValueRecord
    // Size: 0x10
    // Offset: 0x4
    TMPro::TMP_GlyphValueRecord m_GlyphValueRecord;
    // Field size check
    static_assert(sizeof(TMPro::TMP_GlyphValueRecord) == 0x10);
    // Creating value type constructor for type: TMP_GlyphAdjustmentRecord
    constexpr TMP_GlyphAdjustmentRecord(uint m_GlyphIndex_ = {}, TMPro::TMP_GlyphValueRecord m_GlyphValueRecord_ = {}) noexcept : m_GlyphIndex{m_GlyphIndex_}, m_GlyphValueRecord{m_GlyphValueRecord_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: private System.UInt32 m_GlyphIndex
    uint _get_m_GlyphIndex();
    // Set instance field: private System.UInt32 m_GlyphIndex
    void _set_m_GlyphIndex(uint value);
    // Get instance field: private TMPro.TMP_GlyphValueRecord m_GlyphValueRecord
    TMPro::TMP_GlyphValueRecord _get_m_GlyphValueRecord();
    // Set instance field: private TMPro.TMP_GlyphValueRecord m_GlyphValueRecord
    void _set_m_GlyphValueRecord(TMPro::TMP_GlyphValueRecord value);
    // public System.UInt32 get_glyphIndex()
    // Offset: 0xED0BD4
    uint get_glyphIndex();
    // public System.Void set_glyphIndex(System.UInt32 value)
    // Offset: 0xED0BDC
    void set_glyphIndex(uint value);
    // public TMPro.TMP_GlyphValueRecord get_glyphValueRecord()
    // Offset: 0xED0BE4
    TMPro::TMP_GlyphValueRecord get_glyphValueRecord();
    // public System.Void set_glyphValueRecord(TMPro.TMP_GlyphValueRecord value)
    // Offset: 0xED0BF0
    void set_glyphValueRecord(TMPro::TMP_GlyphValueRecord value);
    // public System.Void .ctor(System.UInt32 glyphIndex, TMPro.TMP_GlyphValueRecord glyphValueRecord)
    // Offset: 0xED0BFC
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  TMP_GlyphAdjustmentRecord(uint glyphIndex, TMPro::TMP_GlyphValueRecord glyphValueRecord)
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord adjustmentRecord)
    // Offset: 0xED0C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TMP_GlyphAdjustmentRecord(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord adjustmentRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_GlyphAdjustmentRecord::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(adjustmentRecord)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, adjustmentRecord);
    }
  }; // TMPro.TMP_GlyphAdjustmentRecord
  #pragma pack(pop)
  static check_size<sizeof(TMP_GlyphAdjustmentRecord), 4 + sizeof(TMPro::TMP_GlyphValueRecord)> __TMPro_TMP_GlyphAdjustmentRecordSizeCheck;
  static_assert(sizeof(TMP_GlyphAdjustmentRecord) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_GlyphAdjustmentRecord, "TMPro", "TMP_GlyphAdjustmentRecord");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_GlyphAdjustmentRecord::get_glyphIndex
// Il2CppName: get_glyphIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (TMPro::TMP_GlyphAdjustmentRecord::*)()>(&TMPro::TMP_GlyphAdjustmentRecord::get_glyphIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphAdjustmentRecord), "get_glyphIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphAdjustmentRecord::set_glyphIndex
// Il2CppName: set_glyphIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_GlyphAdjustmentRecord::*)(uint)>(&TMPro::TMP_GlyphAdjustmentRecord::set_glyphIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphAdjustmentRecord), "set_glyphIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphAdjustmentRecord::get_glyphValueRecord
// Il2CppName: get_glyphValueRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_GlyphValueRecord (TMPro::TMP_GlyphAdjustmentRecord::*)()>(&TMPro::TMP_GlyphAdjustmentRecord::get_glyphValueRecord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphAdjustmentRecord), "get_glyphValueRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphAdjustmentRecord::set_glyphValueRecord
// Il2CppName: set_glyphValueRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_GlyphAdjustmentRecord::*)(TMPro::TMP_GlyphValueRecord)>(&TMPro::TMP_GlyphAdjustmentRecord::set_glyphValueRecord)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_GlyphValueRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphAdjustmentRecord), "set_glyphValueRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphAdjustmentRecord::TMP_GlyphAdjustmentRecord
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_GlyphAdjustmentRecord::TMP_GlyphAdjustmentRecord
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
