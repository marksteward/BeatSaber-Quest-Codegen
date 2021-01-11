// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ColorExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ColorExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ColorExtensions
    ColorExtensions() noexcept {}
    // static public UnityEngine.Color SaturatedColor(UnityEngine.Color color, System.Single saturation)
    // Offset: 0x102B5C0
    static UnityEngine::Color SaturatedColor(UnityEngine::Color color, float saturation);
    // static public UnityEngine.Color ColorWithAlpha(UnityEngine.Color color, System.Single alpha)
    // Offset: 0x102B618
    static UnityEngine::Color ColorWithAlpha(UnityEngine::Color color, float alpha);
    // static public UnityEngine.Color ColorWithR(UnityEngine.Color color, System.Single r)
    // Offset: 0x102B620
    static UnityEngine::Color ColorWithR(UnityEngine::Color color, float r);
    // static public UnityEngine.Color ColorWithG(UnityEngine.Color color, System.Single g)
    // Offset: 0x102B628
    static UnityEngine::Color ColorWithG(UnityEngine::Color color, float g);
    // static public UnityEngine.Color ColorWithB(UnityEngine.Color color, System.Single b)
    // Offset: 0x102B630
    static UnityEngine::Color ColorWithB(UnityEngine::Color color, float b);
    // static public UnityEngine.Color ColorWithValue(UnityEngine.Color color, System.Single value)
    // Offset: 0x102B638
    static UnityEngine::Color ColorWithValue(UnityEngine::Color color, float value);
  }; // ColorExtensions
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorExtensions*, "", "ColorExtensions");
