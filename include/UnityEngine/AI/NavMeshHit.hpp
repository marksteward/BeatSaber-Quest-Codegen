// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AI.NavMeshHit
  // [MovedFromAttribute] Offset: DE79C0
  struct NavMeshHit/*, public System::ValueType*/ {
    public:
    // private UnityEngine.Vector3 m_Position
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 m_Position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single m_Distance
    // Size: 0x4
    // Offset: 0x18
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_Mask
    // Size: 0x4
    // Offset: 0x1C
    int m_Mask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Hit
    // Size: 0x4
    // Offset: 0x20
    int m_Hit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NavMeshHit
    constexpr NavMeshHit(UnityEngine::Vector3 m_Position_ = {}, UnityEngine::Vector3 m_Normal_ = {}, float m_Distance_ = {}, int m_Mask_ = {}, int m_Hit_ = {}) noexcept : m_Position{m_Position_}, m_Normal{m_Normal_}, m_Distance{m_Distance_}, m_Mask{m_Mask_}, m_Hit{m_Hit_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public UnityEngine.Vector3 get_position()
    // Offset: 0xF27EEC
    UnityEngine::Vector3 get_position();
  }; // UnityEngine.AI.NavMeshHit
  #pragma pack(pop)
  static check_size<sizeof(NavMeshHit), 32 + sizeof(int)> __UnityEngine_AI_NavMeshHitSizeCheck;
  static_assert(sizeof(NavMeshHit) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMeshHit, "UnityEngine.AI", "NavMeshHit");
// Writing MetadataGetter for method: UnityEngine::AI::NavMeshHit::get_position
// Il2CppName: get_position
// Cannot perform method pointer template specialization from operators!
