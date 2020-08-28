// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystemGradientMode
  struct ParticleSystemGradientMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ParticleSystemGradientMode
    constexpr ParticleSystemGradientMode(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.ParticleSystemGradientMode Color
    static constexpr const int Color = 0;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode Color
    static UnityEngine::ParticleSystemGradientMode _get_Color();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode Color
    static void _set_Color(UnityEngine::ParticleSystemGradientMode value);
    // static field const value: static public UnityEngine.ParticleSystemGradientMode Gradient
    static constexpr const int Gradient = 1;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode Gradient
    static UnityEngine::ParticleSystemGradientMode _get_Gradient();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode Gradient
    static void _set_Gradient(UnityEngine::ParticleSystemGradientMode value);
    // static field const value: static public UnityEngine.ParticleSystemGradientMode TwoColors
    static constexpr const int TwoColors = 2;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode TwoColors
    static UnityEngine::ParticleSystemGradientMode _get_TwoColors();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode TwoColors
    static void _set_TwoColors(UnityEngine::ParticleSystemGradientMode value);
    // static field const value: static public UnityEngine.ParticleSystemGradientMode TwoGradients
    static constexpr const int TwoGradients = 3;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode TwoGradients
    static UnityEngine::ParticleSystemGradientMode _get_TwoGradients();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode TwoGradients
    static void _set_TwoGradients(UnityEngine::ParticleSystemGradientMode value);
    // static field const value: static public UnityEngine.ParticleSystemGradientMode RandomColor
    static constexpr const int RandomColor = 4;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode RandomColor
    static UnityEngine::ParticleSystemGradientMode _get_RandomColor();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode RandomColor
    static void _set_RandomColor(UnityEngine::ParticleSystemGradientMode value);
  }; // UnityEngine.ParticleSystemGradientMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemGradientMode, "UnityEngine", "ParticleSystemGradientMode");
#pragma pack(pop)
