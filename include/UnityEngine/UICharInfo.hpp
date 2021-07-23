// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UICharInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: D94B9C
  struct UICharInfo/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Vector2 cursorPos
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Vector2 cursorPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public System.Single charWidth
    // Size: 0x4
    // Offset: 0x8
    float charWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: UICharInfo
    constexpr UICharInfo(UnityEngine::Vector2 cursorPos_ = {}, float charWidth_ = {}) noexcept : cursorPos{cursorPos_}, charWidth{charWidth_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public UnityEngine.Vector2 cursorPos
    UnityEngine::Vector2 _get_cursorPos();
    // Set instance field: public UnityEngine.Vector2 cursorPos
    void _set_cursorPos(UnityEngine::Vector2 value);
    // Get instance field: public System.Single charWidth
    float _get_charWidth();
    // Set instance field: public System.Single charWidth
    void _set_charWidth(float value);
  }; // UnityEngine.UICharInfo
  #pragma pack(pop)
  static check_size<sizeof(UICharInfo), 8 + sizeof(float)> __UnityEngine_UICharInfoSizeCheck;
  static_assert(sizeof(UICharInfo) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UICharInfo, "UnityEngine", "UICharInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
