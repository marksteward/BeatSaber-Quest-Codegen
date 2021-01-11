// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimatorClipInfo
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: D61DE0
  // [NativeHeaderAttribute] Offset: D61DE0
  // [NativeHeaderAttribute] Offset: D61DE0
  struct AnimatorClipInfo/*, public System::ValueType*/ {
    public:
    // private System.Int32 m_ClipInstanceID
    // Size: 0x4
    // Offset: 0x0
    int m_ClipInstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_Weight
    // Size: 0x4
    // Offset: 0x4
    float m_Weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AnimatorClipInfo
    constexpr AnimatorClipInfo(int m_ClipInstanceID_ = {}, float m_Weight_ = {}) noexcept : m_ClipInstanceID{m_ClipInstanceID_}, m_Weight{m_Weight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.AnimatorClipInfo
  static check_size<sizeof(AnimatorClipInfo), 4 + sizeof(float)> __UnityEngine_AnimatorClipInfoSizeCheck;
  static_assert(sizeof(AnimatorClipInfo) == 0x8);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorClipInfo, "UnityEngine", "AnimatorClipInfo");
