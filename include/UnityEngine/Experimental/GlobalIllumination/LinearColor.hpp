// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.LinearColor
  struct LinearColor/*, public System::ValueType*/ {
    public:
    // private System.Single m_red
    // Size: 0x4
    // Offset: 0x0
    float m_red;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_green
    // Size: 0x4
    // Offset: 0x4
    float m_green;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_blue
    // Size: 0x4
    // Offset: 0x8
    float m_blue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_intensity
    // Size: 0x4
    // Offset: 0xC
    float m_intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: LinearColor
    constexpr LinearColor(float m_red_ = {}, float m_green_ = {}, float m_blue_ = {}, float m_intensity_ = {}) noexcept : m_red{m_red_}, m_green{m_green_}, m_blue{m_blue_}, m_intensity{m_intensity_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor Convert(UnityEngine.Color color, System.Single intensity)
    // Offset: 0x1B974A4
    static UnityEngine::Experimental::GlobalIllumination::LinearColor Convert(UnityEngine::Color color, float intensity);
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor Black()
    // Offset: 0x1B9876C
    static UnityEngine::Experimental::GlobalIllumination::LinearColor Black();
  }; // UnityEngine.Experimental.GlobalIllumination.LinearColor
  #pragma pack(pop)
  static check_size<sizeof(LinearColor), 12 + sizeof(float)> __UnityEngine_Experimental_GlobalIllumination_LinearColorSizeCheck;
  static_assert(sizeof(LinearColor) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::LinearColor, "UnityEngine.Experimental.GlobalIllumination", "LinearColor");
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::Convert
// Il2CppName: Convert
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::Black
// Il2CppName: Black
// Cannot perform method pointer template specialization from operators!
