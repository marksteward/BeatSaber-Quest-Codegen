// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IntersectionMaskCircle_t
  struct IntersectionMaskCircle_t : public System::ValueType {
    public:
    // public System.Single m_flCenterX
    // Offset: 0x0
    float m_flCenterX;
    // public System.Single m_flCenterY
    // Offset: 0x4
    float m_flCenterY;
    // public System.Single m_flRadius
    // Offset: 0x8
    float m_flRadius;
    // Creating value type constructor for type: IntersectionMaskCircle_t
    constexpr IntersectionMaskCircle_t(float m_flCenterX_ = {}, float m_flCenterY_ = {}, float m_flRadius_ = {}) : m_flCenterX{m_flCenterX_}, m_flCenterY{m_flCenterY_}, m_flRadius{m_flRadius_} {}
  }; // OVR.OpenVR.IntersectionMaskCircle_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IntersectionMaskCircle_t, "OVR.OpenVR", "IntersectionMaskCircle_t");
#pragma pack(pop)
