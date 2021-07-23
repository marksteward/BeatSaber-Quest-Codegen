// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.IntersectionMaskRectangle_t
#include "Valve/VR/IntersectionMaskRectangle_t.hpp"
// Including type: Valve.VR.IntersectionMaskCircle_t
#include "Valve/VR/IntersectionMaskCircle_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VROverlayIntersectionMaskPrimitive_Data_t/*, public System::ValueType*/ {
    public:
    // public Valve.VR.IntersectionMaskRectangle_t m_Rectangle
    // Size: 0x10
    // Offset: 0x0
    Valve::VR::IntersectionMaskRectangle_t m_Rectangle;
    // Field size check
    static_assert(sizeof(Valve::VR::IntersectionMaskRectangle_t) == 0x10);
    // public Valve.VR.IntersectionMaskCircle_t m_Circle
    // Size: 0xC
    // Offset: 0x0
    Valve::VR::IntersectionMaskCircle_t m_Circle;
    // Field size check
    static_assert(sizeof(Valve::VR::IntersectionMaskCircle_t) == 0xC);
    // Creating value type constructor for type: VROverlayIntersectionMaskPrimitive_Data_t
    constexpr VROverlayIntersectionMaskPrimitive_Data_t(Valve::VR::IntersectionMaskRectangle_t m_Rectangle_ = {}, Valve::VR::IntersectionMaskCircle_t m_Circle_ = {}) noexcept : m_Rectangle{m_Rectangle_}, m_Circle{m_Circle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public Valve.VR.IntersectionMaskRectangle_t m_Rectangle
    Valve::VR::IntersectionMaskRectangle_t _get_m_Rectangle();
    // Set instance field: public Valve.VR.IntersectionMaskRectangle_t m_Rectangle
    void _set_m_Rectangle(Valve::VR::IntersectionMaskRectangle_t value);
    // Get instance field: public Valve.VR.IntersectionMaskCircle_t m_Circle
    Valve::VR::IntersectionMaskCircle_t _get_m_Circle();
    // Set instance field: public Valve.VR.IntersectionMaskCircle_t m_Circle
    void _set_m_Circle(Valve::VR::IntersectionMaskCircle_t value);
  }; // Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VROverlayIntersectionMaskPrimitive_Data_t, "Valve.VR", "VROverlayIntersectionMaskPrimitive_Data_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
