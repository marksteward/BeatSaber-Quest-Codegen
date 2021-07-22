// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphValueRecord
#include "UnityEngine/TextCore/LowLevel/GlyphValueRecord.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DAFEC0
  struct GlyphAdjustmentRecord/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xDB0AB8
    // private System.UInt32 m_GlyphIndex
    // Size: 0x4
    // Offset: 0x0
    uint m_GlyphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [NativeNameAttribute] Offset: 0xDB0B04
    // private UnityEngine.TextCore.LowLevel.GlyphValueRecord m_GlyphValueRecord
    // Size: 0x10
    // Offset: 0x4
    UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord;
    // Field size check
    static_assert(sizeof(UnityEngine::TextCore::LowLevel::GlyphValueRecord) == 0x10);
    // Creating value type constructor for type: GlyphAdjustmentRecord
    constexpr GlyphAdjustmentRecord(uint m_GlyphIndex_ = {}, UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord_ = {}) noexcept : m_GlyphIndex{m_GlyphIndex_}, m_GlyphValueRecord{m_GlyphValueRecord_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.UInt32 get_glyphIndex()
    // Offset: 0xF0E004
    uint get_glyphIndex();
    // public UnityEngine.TextCore.LowLevel.GlyphValueRecord get_glyphValueRecord()
    // Offset: 0xF0E00C
    UnityEngine::TextCore::LowLevel::GlyphValueRecord get_glyphValueRecord();
  }; // UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
  #pragma pack(pop)
  static check_size<sizeof(GlyphAdjustmentRecord), 4 + sizeof(UnityEngine::TextCore::LowLevel::GlyphValueRecord)> __UnityEngine_TextCore_LowLevel_GlyphAdjustmentRecordSizeCheck;
  static_assert(sizeof(GlyphAdjustmentRecord) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphAdjustmentRecord");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphIndex
// Il2CppName: get_glyphIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord), "get_glyphIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphValueRecord
// Il2CppName: get_glyphValueRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::LowLevel::GlyphValueRecord (UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphValueRecord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord), "get_glyphValueRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
