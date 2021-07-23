// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IntersectionMaskRectangle_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct IntersectionMaskRectangle_t/*, public System::ValueType*/ {
    public:
    // public System.Single m_flTopLeftX
    // Size: 0x4
    // Offset: 0x0
    float m_flTopLeftX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flTopLeftY
    // Size: 0x4
    // Offset: 0x4
    float m_flTopLeftY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flWidth
    // Size: 0x4
    // Offset: 0x8
    float m_flWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flHeight
    // Size: 0x4
    // Offset: 0xC
    float m_flHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: IntersectionMaskRectangle_t
    constexpr IntersectionMaskRectangle_t(float m_flTopLeftX_ = {}, float m_flTopLeftY_ = {}, float m_flWidth_ = {}, float m_flHeight_ = {}) noexcept : m_flTopLeftX{m_flTopLeftX_}, m_flTopLeftY{m_flTopLeftY_}, m_flWidth{m_flWidth_}, m_flHeight{m_flHeight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.Single m_flTopLeftX
    float _get_m_flTopLeftX();
    // Set instance field: public System.Single m_flTopLeftX
    void _set_m_flTopLeftX(float value);
    // Get instance field: public System.Single m_flTopLeftY
    float _get_m_flTopLeftY();
    // Set instance field: public System.Single m_flTopLeftY
    void _set_m_flTopLeftY(float value);
    // Get instance field: public System.Single m_flWidth
    float _get_m_flWidth();
    // Set instance field: public System.Single m_flWidth
    void _set_m_flWidth(float value);
    // Get instance field: public System.Single m_flHeight
    float _get_m_flHeight();
    // Set instance field: public System.Single m_flHeight
    void _set_m_flHeight(float value);
  }; // OVR.OpenVR.IntersectionMaskRectangle_t
  #pragma pack(pop)
  static check_size<sizeof(IntersectionMaskRectangle_t), 12 + sizeof(float)> __OVR_OpenVR_IntersectionMaskRectangle_tSizeCheck;
  static_assert(sizeof(IntersectionMaskRectangle_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IntersectionMaskRectangle_t, "OVR.OpenVR", "IntersectionMaskRectangle_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
