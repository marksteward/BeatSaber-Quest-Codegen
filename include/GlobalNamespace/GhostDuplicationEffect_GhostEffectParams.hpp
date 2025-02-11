// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GhostDuplicationEffect
#include "GlobalNamespace/GhostDuplicationEffect.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x45
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GhostDuplicationEffect/GhostEffectParams
  // [TokenAttribute] Offset: FFFFFFFF
  struct GhostDuplicationEffect::GhostEffectParams/*, public System::ValueType*/ {
    public:
    // public System.Single startAlpha
    // Size: 0x4
    // Offset: 0x0
    float startAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 startPosition
    // Size: 0xC
    // Offset: 0x4
    UnityEngine::Vector3 startPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single startSize
    // Size: 0x4
    // Offset: 0x10
    float startSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single endAlpha
    // Size: 0x4
    // Offset: 0x14
    float endAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 endPosition
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 endPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single endSize
    // Size: 0x4
    // Offset: 0x24
    float endSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x28
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x2C
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Tweening.EaseType easeType
    // Size: 0x4
    // Offset: 0x30
    Tweening::EaseType easeType;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // Padding between fields: easeType and: distanceCurve
    char __padding8[0x4] = {};
    // public UnityEngine.AnimationCurve distanceCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* distanceCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single peakDistance
    // Size: 0x4
    // Offset: 0x40
    float peakDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean lastPhase
    // Size: 0x1
    // Offset: 0x44
    bool lastPhase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GhostEffectParams
    constexpr GhostEffectParams(float startAlpha_ = {}, UnityEngine::Vector3 startPosition_ = {}, float startSize_ = {}, float endAlpha_ = {}, UnityEngine::Vector3 endPosition_ = {}, float endSize_ = {}, float duration_ = {}, float delay_ = {}, Tweening::EaseType easeType_ = {}, UnityEngine::AnimationCurve* distanceCurve_ = {}, float peakDistance_ = {}, bool lastPhase_ = {}) noexcept : startAlpha{startAlpha_}, startPosition{startPosition_}, startSize{startSize_}, endAlpha{endAlpha_}, endPosition{endPosition_}, endSize{endSize_}, duration{duration_}, delay{delay_}, easeType{easeType_}, distanceCurve{distanceCurve_}, peakDistance{peakDistance_}, lastPhase{lastPhase_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.Single startAlpha
    float _get_startAlpha();
    // Set instance field: public System.Single startAlpha
    void _set_startAlpha(float value);
    // Get instance field: public UnityEngine.Vector3 startPosition
    UnityEngine::Vector3 _get_startPosition();
    // Set instance field: public UnityEngine.Vector3 startPosition
    void _set_startPosition(UnityEngine::Vector3 value);
    // Get instance field: public System.Single startSize
    float _get_startSize();
    // Set instance field: public System.Single startSize
    void _set_startSize(float value);
    // Get instance field: public System.Single endAlpha
    float _get_endAlpha();
    // Set instance field: public System.Single endAlpha
    void _set_endAlpha(float value);
    // Get instance field: public UnityEngine.Vector3 endPosition
    UnityEngine::Vector3 _get_endPosition();
    // Set instance field: public UnityEngine.Vector3 endPosition
    void _set_endPosition(UnityEngine::Vector3 value);
    // Get instance field: public System.Single endSize
    float _get_endSize();
    // Set instance field: public System.Single endSize
    void _set_endSize(float value);
    // Get instance field: public System.Single duration
    float _get_duration();
    // Set instance field: public System.Single duration
    void _set_duration(float value);
    // Get instance field: public System.Single delay
    float _get_delay();
    // Set instance field: public System.Single delay
    void _set_delay(float value);
    // Get instance field: public Tweening.EaseType easeType
    Tweening::EaseType _get_easeType();
    // Set instance field: public Tweening.EaseType easeType
    void _set_easeType(Tweening::EaseType value);
    // Get instance field: public UnityEngine.AnimationCurve distanceCurve
    UnityEngine::AnimationCurve* _get_distanceCurve();
    // Set instance field: public UnityEngine.AnimationCurve distanceCurve
    void _set_distanceCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: public System.Single peakDistance
    float _get_peakDistance();
    // Set instance field: public System.Single peakDistance
    void _set_peakDistance(float value);
    // Get instance field: public System.Boolean lastPhase
    bool _get_lastPhase();
    // Set instance field: public System.Boolean lastPhase
    void _set_lastPhase(bool value);
  }; // GhostDuplicationEffect/GhostEffectParams
  #pragma pack(pop)
  static check_size<sizeof(GhostDuplicationEffect::GhostEffectParams), 68 + sizeof(bool)> __GlobalNamespace_GhostDuplicationEffect_GhostEffectParamsSizeCheck;
  static_assert(sizeof(GhostDuplicationEffect::GhostEffectParams) == 0x45);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostDuplicationEffect::GhostEffectParams, "", "GhostDuplicationEffect/GhostEffectParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
