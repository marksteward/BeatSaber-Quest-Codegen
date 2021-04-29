// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.ITweenValue
#include "TMPro/ITweenValue.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Skipping declaration: ColorTweenMode because it is already included!
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x31
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.ColorTween
  struct ColorTween/*, public System::ValueType, public TMPro::ITweenValue*/ {
    public:
    // Nested type: TMPro::ColorTween::ColorTweenMode
    struct ColorTweenMode;
    // Nested type: TMPro::ColorTween::ColorTweenCallback
    class ColorTweenCallback;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: TMPro.ColorTween/ColorTweenMode
    struct ColorTweenMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ColorTweenMode
      constexpr ColorTweenMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public TMPro.ColorTween/ColorTweenMode All
      static constexpr const int All = 0;
      // Get static field: static public TMPro.ColorTween/ColorTweenMode All
      static TMPro::ColorTween::ColorTweenMode _get_All();
      // Set static field: static public TMPro.ColorTween/ColorTweenMode All
      static void _set_All(TMPro::ColorTween::ColorTweenMode value);
      // static field const value: static public TMPro.ColorTween/ColorTweenMode RGB
      static constexpr const int RGB = 1;
      // Get static field: static public TMPro.ColorTween/ColorTweenMode RGB
      static TMPro::ColorTween::ColorTweenMode _get_RGB();
      // Set static field: static public TMPro.ColorTween/ColorTweenMode RGB
      static void _set_RGB(TMPro::ColorTween::ColorTweenMode value);
      // static field const value: static public TMPro.ColorTween/ColorTweenMode Alpha
      static constexpr const int Alpha = 2;
      // Get static field: static public TMPro.ColorTween/ColorTweenMode Alpha
      static TMPro::ColorTween::ColorTweenMode _get_Alpha();
      // Set static field: static public TMPro.ColorTween/ColorTweenMode Alpha
      static void _set_Alpha(TMPro::ColorTween::ColorTweenMode value);
    }; // TMPro.ColorTween/ColorTweenMode
    #pragma pack(pop)
    static check_size<sizeof(ColorTween::ColorTweenMode), 0 + sizeof(int)> __TMPro_ColorTween_ColorTweenModeSizeCheck;
    static_assert(sizeof(ColorTween::ColorTweenMode) == 0x4);
    // private TMPro.ColorTween/ColorTweenCallback m_Target
    // Size: 0x8
    // Offset: 0x0
    TMPro::ColorTween::ColorTweenCallback* m_Target;
    // Field size check
    static_assert(sizeof(TMPro::ColorTween::ColorTweenCallback*) == 0x8);
    // private UnityEngine.Color m_StartColor
    // Size: 0x10
    // Offset: 0x8
    UnityEngine::Color m_StartColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_TargetColor
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color m_TargetColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private TMPro.ColorTween/ColorTweenMode m_TweenMode
    // Size: 0x4
    // Offset: 0x28
    TMPro::ColorTween::ColorTweenMode m_TweenMode;
    // Field size check
    static_assert(sizeof(TMPro::ColorTween::ColorTweenMode) == 0x4);
    // private System.Single m_Duration
    // Size: 0x4
    // Offset: 0x2C
    float m_Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_IgnoreTimeScale
    // Size: 0x1
    // Offset: 0x30
    bool m_IgnoreTimeScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ColorTween
    constexpr ColorTween(TMPro::ColorTween::ColorTweenCallback* m_Target_ = {}, UnityEngine::Color m_StartColor_ = {}, UnityEngine::Color m_TargetColor_ = {}, TMPro::ColorTween::ColorTweenMode m_TweenMode_ = {}, float m_Duration_ = {}, bool m_IgnoreTimeScale_ = {}) noexcept : m_Target{m_Target_}, m_StartColor{m_StartColor_}, m_TargetColor{m_TargetColor_}, m_TweenMode{m_TweenMode_}, m_Duration{m_Duration_}, m_IgnoreTimeScale{m_IgnoreTimeScale_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator TMPro::ITweenValue
    operator TMPro::ITweenValue() noexcept {
      return *reinterpret_cast<TMPro::ITweenValue*>(this);
    }
    // public UnityEngine.Color get_startColor()
    // Offset: 0xDF40C0
    UnityEngine::Color get_startColor();
    // public System.Void set_startColor(UnityEngine.Color value)
    // Offset: 0xDF40CC
    void set_startColor(UnityEngine::Color value);
    // public UnityEngine.Color get_targetColor()
    // Offset: 0xDF40D8
    UnityEngine::Color get_targetColor();
    // public System.Void set_targetColor(UnityEngine.Color value)
    // Offset: 0xDF40E4
    void set_targetColor(UnityEngine::Color value);
    // public TMPro.ColorTween/ColorTweenMode get_tweenMode()
    // Offset: 0xDF40F0
    TMPro::ColorTween::ColorTweenMode get_tweenMode();
    // public System.Void set_tweenMode(TMPro.ColorTween/ColorTweenMode value)
    // Offset: 0xDF40F8
    void set_tweenMode(TMPro::ColorTween::ColorTweenMode value);
    // public System.Single get_duration()
    // Offset: 0xDF4100
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0xDF4108
    void set_duration(float value);
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0xDF4110
    bool get_ignoreTimeScale();
    // public System.Void set_ignoreTimeScale(System.Boolean value)
    // Offset: 0xDF4118
    void set_ignoreTimeScale(bool value);
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0xDF4124
    void TweenValue(float floatPercentage);
    // public System.Void AddOnChangedCallback(UnityEngine.Events.UnityAction`1<UnityEngine.Color> callback)
    // Offset: 0xDF412C
    void AddOnChangedCallback(UnityEngine::Events::UnityAction_1<UnityEngine::Color>* callback);
    // public System.Boolean GetIgnoreTimescale()
    // Offset: 0xDF4134
    bool GetIgnoreTimescale();
    // public System.Single GetDuration()
    // Offset: 0xDF413C
    float GetDuration();
    // public System.Boolean ValidTarget()
    // Offset: 0xDF4144
    bool ValidTarget();
  }; // TMPro.ColorTween
  #pragma pack(pop)
  static check_size<sizeof(ColorTween), 48 + sizeof(bool)> __TMPro_ColorTweenSizeCheck;
  static_assert(sizeof(ColorTween) == 0x31);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::ColorTween, "TMPro", "ColorTween");
DEFINE_IL2CPP_ARG_TYPE(TMPro::ColorTween::ColorTweenMode, "TMPro", "ColorTween/ColorTweenMode");
