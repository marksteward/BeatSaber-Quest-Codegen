// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.ITimelineEvaluateCallback
#include "UnityEngine/Timeline/ITimelineEvaluateCallback.hpp"
// Including type: UnityEngine.Animations.AnimationPlayableOutput
#include "UnityEngine/Animations/AnimationPlayableOutput.hpp"
// Including type: UnityEngine.Animations.AnimationMotionXToDeltaPlayable
#include "UnityEngine/Animations/AnimationMotionXToDeltaPlayable.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.AnimationOutputWeightProcessor
  class AnimationOutputWeightProcessor : public ::Il2CppObject/*, public UnityEngine::Timeline::ITimelineEvaluateCallback*/ {
    public:
    // Nested type: UnityEngine::Timeline::AnimationOutputWeightProcessor::WeightInfo
    struct WeightInfo;
    // Autogenerated type: UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo
    struct WeightInfo : public System::ValueType {
      public:
      // public UnityEngine.Playables.Playable mixer
      // Offset: 0x0
      UnityEngine::Playables::Playable mixer;
      // public UnityEngine.Playables.Playable parentMixer
      // Offset: 0x10
      UnityEngine::Playables::Playable parentMixer;
      // public System.Int32 port
      // Offset: 0x20
      int port;
      // Creating value type constructor for type: WeightInfo
      constexpr WeightInfo(UnityEngine::Playables::Playable mixer_ = {}, UnityEngine::Playables::Playable parentMixer_ = {}, int port_ = {}) noexcept : mixer{mixer_}, parentMixer{parentMixer_}, port{port_} {}
    }; // UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo
    // private UnityEngine.Animations.AnimationPlayableOutput m_Output
    // Offset: 0x10
    UnityEngine::Animations::AnimationPlayableOutput m_Output;
    // private UnityEngine.Animations.AnimationMotionXToDeltaPlayable m_MotionXPlayable
    // Offset: 0x20
    UnityEngine::Animations::AnimationMotionXToDeltaPlayable m_MotionXPlayable;
    // private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo> m_Mixers
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::Timeline::AnimationOutputWeightProcessor::WeightInfo>* m_Mixers;
    // Creating interface conversion operator: operator UnityEngine::Timeline::ITimelineEvaluateCallback
    operator UnityEngine::Timeline::ITimelineEvaluateCallback() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ITimelineEvaluateCallback*>(this);
    }
    // public System.Void .ctor(UnityEngine.Animations.AnimationPlayableOutput output)
    // Offset: 0x13EA144
    static AnimationOutputWeightProcessor* New_ctor(UnityEngine::Animations::AnimationPlayableOutput output);
    // private System.Void FindMixers()
    // Offset: 0x13EA1F8
    void FindMixers();
    // private System.Void FindMixers(UnityEngine.Playables.Playable parent, System.Int32 port, UnityEngine.Playables.Playable node)
    // Offset: 0x13EA2CC
    void FindMixers(UnityEngine::Playables::Playable parent, int port, UnityEngine::Playables::Playable node);
    // public System.Void Evaluate()
    // Offset: 0x13EA510
    // Implemented from: UnityEngine.Timeline.ITimelineEvaluateCallback
    // Base method: System.Void ITimelineEvaluateCallback::Evaluate()
    void Evaluate();
  }; // UnityEngine.Timeline.AnimationOutputWeightProcessor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationOutputWeightProcessor*, "UnityEngine.Timeline", "AnimationOutputWeightProcessor");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationOutputWeightProcessor::WeightInfo, "UnityEngine.Timeline", "AnimationOutputWeightProcessor/WeightInfo");
#pragma pack(pop)
