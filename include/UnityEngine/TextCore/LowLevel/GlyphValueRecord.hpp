// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphValueRecord
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: D7A5C4
  struct GlyphValueRecord/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xD7B038
    // private System.Single m_XPlacement
    // Size: 0x4
    // Offset: 0x0
    float m_XPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD7B084
    // private System.Single m_YPlacement
    // Size: 0x4
    // Offset: 0x4
    float m_YPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD7B0D0
    // private System.Single m_XAdvance
    // Size: 0x4
    // Offset: 0x8
    float m_XAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD7B11C
    // private System.Single m_YAdvance
    // Size: 0x4
    // Offset: 0xC
    float m_YAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: GlyphValueRecord
    constexpr GlyphValueRecord(float m_XPlacement_ = {}, float m_YPlacement_ = {}, float m_XAdvance_ = {}, float m_YAdvance_ = {}) noexcept : m_XPlacement{m_XPlacement_}, m_YPlacement{m_YPlacement_}, m_XAdvance{m_XAdvance_}, m_YAdvance{m_YAdvance_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Single get_xPlacement()
    // Offset: 0xCB8198
    float get_xPlacement();
    // public System.Single get_yPlacement()
    // Offset: 0xCB81A0
    float get_yPlacement();
    // public System.Single get_xAdvance()
    // Offset: 0xCB81A8
    float get_xAdvance();
    // public System.Single get_yAdvance()
    // Offset: 0xCB81B0
    float get_yAdvance();
  }; // UnityEngine.TextCore.LowLevel.GlyphValueRecord
  static check_size<sizeof(GlyphValueRecord), 12 + sizeof(float)> __UnityEngine_TextCore_LowLevel_GlyphValueRecordSizeCheck;
  static_assert(sizeof(GlyphValueRecord) == 0x10);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphValueRecord, "UnityEngine.TextCore.LowLevel", "GlyphValueRecord");
