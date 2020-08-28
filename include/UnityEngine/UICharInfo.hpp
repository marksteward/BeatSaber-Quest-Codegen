// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.UICharInfo
  struct UICharInfo : public System::ValueType {
    public:
    // public UnityEngine.Vector2 cursorPos
    // Offset: 0x0
    UnityEngine::Vector2 cursorPos;
    // public System.Single charWidth
    // Offset: 0x8
    float charWidth;
    // Creating value type constructor for type: UICharInfo
    constexpr UICharInfo(UnityEngine::Vector2 cursorPos_ = {}, float charWidth_ = {}) : cursorPos{cursorPos_}, charWidth{charWidth_} {}
  }; // UnityEngine.UICharInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UICharInfo, "UnityEngine", "UICharInfo");
#pragma pack(pop)
