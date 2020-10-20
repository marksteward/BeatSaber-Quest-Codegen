// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.ITweenValue
#include "TMPro/ITweenValue.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
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
  // Autogenerated type: TMPro.FloatTween
  struct FloatTween : public System::ValueType/*, public TMPro::ITweenValue*/ {
    public:
    // Nested type: TMPro::FloatTween::FloatTweenCallback
    class FloatTweenCallback;
    // private TMPro.FloatTween/FloatTweenCallback m_Target
    // Offset: 0x0
    TMPro::FloatTween::FloatTweenCallback* m_Target;
    // private System.Single m_StartValue
    // Offset: 0x8
    float m_StartValue;
    // private System.Single m_TargetValue
    // Offset: 0xC
    float m_TargetValue;
    // private System.Single m_Duration
    // Offset: 0x10
    float m_Duration;
    // private System.Boolean m_IgnoreTimeScale
    // Offset: 0x14
    bool m_IgnoreTimeScale;
    // Creating value type constructor for type: FloatTween
    constexpr FloatTween(TMPro::FloatTween::FloatTweenCallback* m_Target_ = {}, float m_StartValue_ = {}, float m_TargetValue_ = {}, float m_Duration_ = {}, bool m_IgnoreTimeScale_ = {}) noexcept : m_Target{m_Target_}, m_StartValue{m_StartValue_}, m_TargetValue{m_TargetValue_}, m_Duration{m_Duration_}, m_IgnoreTimeScale{m_IgnoreTimeScale_} {}
    // Creating interface conversion operator: operator TMPro::ITweenValue
    operator TMPro::ITweenValue() noexcept {
      return *reinterpret_cast<TMPro::ITweenValue*>(this);
    }
    // public System.Single get_startValue()
    // Offset: 0xC586D4
    float get_startValue();
    // public System.Void set_startValue(System.Single value)
    // Offset: 0xC586DC
    void set_startValue(float value);
    // public System.Single get_targetValue()
    // Offset: 0xC586E4
    float get_targetValue();
    // public System.Void set_targetValue(System.Single value)
    // Offset: 0xC586EC
    void set_targetValue(float value);
    // public System.Void set_duration(System.Single value)
    // Offset: 0xC586FC
    void set_duration(float value);
    // public System.Void set_ignoreTimeScale(System.Boolean value)
    // Offset: 0xC5870C
    void set_ignoreTimeScale(bool value);
    // public System.Void AddOnChangedCallback(UnityEngine.Events.UnityAction`1<System.Single> callback)
    // Offset: 0xC58720
    void AddOnChangedCallback(UnityEngine::Events::UnityAction_1<float>* callback);
    // public System.Boolean GetIgnoreTimescale()
    // Offset: 0xC58728
    bool GetIgnoreTimescale();
    // public System.Single GetDuration()
    // Offset: 0xC58730
    float GetDuration();
    // public System.Single get_duration()
    // Offset: 0xC586F4
    // Implemented from: TMPro.ITweenValue
    // Base method: System.Single ITweenValue::get_duration()
    float get_duration();
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0xC58704
    // Implemented from: TMPro.ITweenValue
    // Base method: System.Boolean ITweenValue::get_ignoreTimeScale()
    bool get_ignoreTimeScale();
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0xC58718
    // Implemented from: TMPro.ITweenValue
    // Base method: System.Void ITweenValue::TweenValue(System.Single floatPercentage)
    void TweenValue(float floatPercentage);
    // public System.Boolean ValidTarget()
    // Offset: 0xC58738
    // Implemented from: TMPro.ITweenValue
    // Base method: System.Boolean ITweenValue::ValidTarget()
    bool ValidTarget();
  }; // TMPro.FloatTween
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::FloatTween, "TMPro", "FloatTween");
#pragma pack(pop)
