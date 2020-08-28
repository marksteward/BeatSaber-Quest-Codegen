// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.RuntimeClipBase
#include "UnityEngine/Timeline/RuntimeClipBase.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.RuntimeClip
  class RuntimeClip : public UnityEngine::Timeline::RuntimeClipBase {
    public:
    // private UnityEngine.Timeline.TimelineClip m_Clip
    // Offset: 0x18
    UnityEngine::Timeline::TimelineClip* m_Clip;
    // private UnityEngine.Playables.Playable m_Playable
    // Offset: 0x20
    UnityEngine::Playables::Playable m_Playable;
    // private UnityEngine.Playables.Playable m_ParentMixer
    // Offset: 0x30
    UnityEngine::Playables::Playable m_ParentMixer;
    // Deleting conversion operator: operator int
    constexpr operator int() const = delete;
    // public System.Void .ctor(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer)
    // Offset: 0x1092608
    static RuntimeClip* New_ctor(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer);
    // private System.Void Create(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer)
    // Offset: 0x109E3C0
    void Create(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer);
    // public UnityEngine.Timeline.TimelineClip get_clip()
    // Offset: 0x109E458
    UnityEngine::Timeline::TimelineClip* get_clip();
    // public UnityEngine.Playables.Playable get_mixer()
    // Offset: 0x109E460
    UnityEngine::Playables::Playable get_mixer();
    // public UnityEngine.Playables.Playable get_playable()
    // Offset: 0x109E46C
    UnityEngine::Playables::Playable get_playable();
    // public System.Void SetTime(System.Double time)
    // Offset: 0x109E5C0
    void SetTime(double time);
    // public System.Void SetDuration(System.Double duration)
    // Offset: 0x109E620
    void SetDuration(double duration);
    // public override System.Double get_start()
    // Offset: 0x109E35C
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_start()
    double get_start();
    // public override System.Double get_duration()
    // Offset: 0x109E3A0
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_duration()
    double get_duration();
    // public override System.Void set_enable(System.Boolean value)
    // Offset: 0x109E478
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::set_enable(System.Boolean value)
    void set_enable(bool value);
    // public override System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x109E680
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    void EvaluateAt(double localTime, UnityEngine::Playables::FrameData frameData);
    // public override System.Void Reset()
    // Offset: 0x109EC84
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::Reset()
    void Reset();
  }; // UnityEngine.Timeline.RuntimeClip
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::RuntimeClip*, "UnityEngine.Timeline", "RuntimeClip");
#pragma pack(pop)
