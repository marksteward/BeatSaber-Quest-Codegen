// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ContactPoint
  struct ContactPoint : public System::ValueType {
    public:
    // UnityEngine.Vector3 m_Point
    // Offset: 0x0
    UnityEngine::Vector3 m_Point;
    // UnityEngine.Vector3 m_Normal
    // Offset: 0xC
    UnityEngine::Vector3 m_Normal;
    // System.Int32 m_ThisColliderInstanceID
    // Offset: 0x18
    int m_ThisColliderInstanceID;
    // System.Int32 m_OtherColliderInstanceID
    // Offset: 0x1C
    int m_OtherColliderInstanceID;
    // System.Single m_Separation
    // Offset: 0x20
    float m_Separation;
    // Creating value type constructor for type: ContactPoint
    constexpr ContactPoint(UnityEngine::Vector3 m_Point_ = {}, UnityEngine::Vector3 m_Normal_ = {}, int m_ThisColliderInstanceID_ = {}, int m_OtherColliderInstanceID_ = {}, float m_Separation_ = {}) : m_Point{m_Point_}, m_Normal{m_Normal_}, m_ThisColliderInstanceID{m_ThisColliderInstanceID_}, m_OtherColliderInstanceID{m_OtherColliderInstanceID_}, m_Separation{m_Separation_} {}
  }; // UnityEngine.ContactPoint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContactPoint, "UnityEngine", "ContactPoint");
#pragma pack(pop)
