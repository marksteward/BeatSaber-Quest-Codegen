// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Size: 0x14
  // Autogenerated type: UnityEngine.TextCore.GlyphMetrics
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: D7A5A4
  struct GlyphMetrics/*, public System::ValueType, public System::IEquatable_1<UnityEngine::TextCore::GlyphMetrics>*/ {
    public:
    // [NativeNameAttribute] Offset: 0xD7AD40
    // private System.Single m_Width
    // Size: 0x4
    // Offset: 0x0
    float m_Width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD7AD8C
    // private System.Single m_Height
    // Size: 0x4
    // Offset: 0x4
    float m_Height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD7ADD8
    // private System.Single m_HorizontalBearingX
    // Size: 0x4
    // Offset: 0x8
    float m_HorizontalBearingX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD7AE24
    // private System.Single m_HorizontalBearingY
    // Size: 0x4
    // Offset: 0xC
    float m_HorizontalBearingY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD7AE70
    // private System.Single m_HorizontalAdvance
    // Size: 0x4
    // Offset: 0x10
    float m_HorizontalAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: GlyphMetrics
    constexpr GlyphMetrics(float m_Width_ = {}, float m_Height_ = {}, float m_HorizontalBearingX_ = {}, float m_HorizontalBearingY_ = {}, float m_HorizontalAdvance_ = {}) noexcept : m_Width{m_Width_}, m_Height{m_Height_}, m_HorizontalBearingX{m_HorizontalBearingX_}, m_HorizontalBearingY{m_HorizontalBearingY_}, m_HorizontalAdvance{m_HorizontalAdvance_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::TextCore::GlyphMetrics>
    operator System::IEquatable_1<UnityEngine::TextCore::GlyphMetrics>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::TextCore::GlyphMetrics>*>(this);
    }
    // public System.Single get_width()
    // Offset: 0xCB8090
    float get_width();
    // public System.Single get_height()
    // Offset: 0xCB8098
    float get_height();
    // public System.Single get_horizontalBearingX()
    // Offset: 0xCB80A0
    float get_horizontalBearingX();
    // public System.Single get_horizontalBearingY()
    // Offset: 0xCB80A8
    float get_horizontalBearingY();
    // public System.Single get_horizontalAdvance()
    // Offset: 0xCB80B0
    float get_horizontalAdvance();
    // public System.Void .ctor(System.Single width, System.Single height, System.Single bearingX, System.Single bearingY, System.Single advance)
    // Offset: 0xCB80B8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  GlyphMetrics(float width, float height, float bearingX, float bearingY, float advance)
    // public override System.Int32 GetHashCode()
    // Offset: 0xCB80C8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCB80D0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.TextCore.GlyphMetrics other)
    // Offset: 0xCB80D8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.TextCore.GlyphMetrics other)
    bool Equals(UnityEngine::TextCore::GlyphMetrics other);
  }; // UnityEngine.TextCore.GlyphMetrics
  static check_size<sizeof(GlyphMetrics), 16 + sizeof(float)> __UnityEngine_TextCore_GlyphMetricsSizeCheck;
  static_assert(sizeof(GlyphMetrics) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::GlyphMetrics, "UnityEngine.TextCore", "GlyphMetrics");
#pragma pack(pop)
