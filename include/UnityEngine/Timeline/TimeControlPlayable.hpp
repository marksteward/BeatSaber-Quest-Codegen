// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ITimeControl
  class ITimeControl;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x19
  // Autogenerated type: UnityEngine.Timeline.TimeControlPlayable
  // [] Offset: FFFFFFFF
  class TimeControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // private UnityEngine.Timeline.ITimeControl m_timeControl
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Timeline::ITimeControl* m_timeControl;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::ITimeControl*) == 0x8);
    // private System.Boolean m_started
    // Size: 0x1
    // Offset: 0x18
    bool m_started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TimeControlPlayable
    TimeControlPlayable(UnityEngine::Timeline::ITimeControl* m_timeControl_ = {}, bool m_started_ = {}) noexcept : m_timeControl{m_timeControl_}, m_started{m_started_} {}
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.TimeControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Timeline.ITimeControl timeControl)
    // Offset: 0x14193C4
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimeControlPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Timeline::ITimeControl* timeControl);
    // public System.Void Initialize(UnityEngine.Timeline.ITimeControl timeControl)
    // Offset: 0x14215EC
    void Initialize(UnityEngine::Timeline::ITimeControl* timeControl);
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x14215F4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x14216EC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x14217B0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void .ctor()
    // Offset: 0x1421870
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeControlPlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimeControlPlayable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeControlPlayable*, creationType>()));
    }
  }; // UnityEngine.Timeline.TimeControlPlayable
  static check_size<sizeof(TimeControlPlayable), 24 + sizeof(bool)> __UnityEngine_Timeline_TimeControlPlayableSizeCheck;
  static_assert(sizeof(TimeControlPlayable) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeControlPlayable*, "UnityEngine.Timeline", "TimeControlPlayable");
#pragma pack(pop)
