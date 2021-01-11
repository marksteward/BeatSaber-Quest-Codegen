// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IntervalTree`1<T>
  template<typename T>
  class IntervalTree_1;
  // Forward declaring type: RuntimeElement
  class RuntimeElement;
  // Forward declaring type: ITimelineEvaluateCallback
  class ITimelineEvaluateCallback;
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationPlayableOutput
  struct AnimationPlayableOutput;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelinePlayable
  // [] Offset: FFFFFFFF
  class TimelinePlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // private UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> m_IntervalTree
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* m_IntervalTree;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.RuntimeElement> m_ActiveClips
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>* m_ActiveClips;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.RuntimeElement> m_CurrentListOfActiveClips
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>* m_CurrentListOfActiveClips;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>*) == 0x8);
    // private System.Int32 m_ActiveBit
    // Size: 0x4
    // Offset: 0x28
    int m_ActiveBit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_ActiveBit and: m_EvaluateCallbacks
    char __padding3[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.ITimelineEvaluateCallback> m_EvaluateCallbacks
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_EvaluateCallbacks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.Timeline.TrackAsset,UnityEngine.Playables.Playable> m_PlayableCache
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset*, UnityEngine::Playables::Playable>* m_PlayableCache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset*, UnityEngine::Playables::Playable>*) == 0x8);
    // Creating value type constructor for type: TimelinePlayable
    TimelinePlayable(UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* m_IntervalTree_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>* m_ActiveClips_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>* m_CurrentListOfActiveClips_ = {}, int m_ActiveBit_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_EvaluateCallbacks_ = {}, System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset*, UnityEngine::Playables::Playable>* m_PlayableCache_ = {}) noexcept : m_IntervalTree{m_IntervalTree_}, m_ActiveClips{m_ActiveClips_}, m_CurrentListOfActiveClips{m_CurrentListOfActiveClips_}, m_ActiveBit{m_ActiveBit_}, m_EvaluateCallbacks{m_EvaluateCallbacks_}, m_PlayableCache{m_PlayableCache_} {}
    // Get static field: static System.Boolean muteAudioScrubbing
    static bool _get_muteAudioScrubbing();
    // Set static field: static System.Boolean muteAudioScrubbing
    static void _set_muteAudioScrubbing(bool value);
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.TimelinePlayable> Create(UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> tracks, UnityEngine.GameObject go, System.Boolean autoRebalance, System.Boolean createOutputs)
    // Offset: 0x1969C7C
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimelinePlayable*> Create(UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* tracks, UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs);
    // public System.Void Compile(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.Playable timelinePlayable, System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> tracks, UnityEngine.GameObject go, System.Boolean autoRebalance, System.Boolean createOutputs)
    // Offset: 0x1969E48
    void Compile(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* tracks, UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs);
    // private System.Void CompileTrackList(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.Playable timelinePlayable, System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> tracks, UnityEngine.GameObject go, System.Boolean createOutputs)
    // Offset: 0x196A070
    void CompileTrackList(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* tracks, UnityEngine::GameObject* go, bool createOutputs);
    // private System.Void CreateTrackOutput(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Timeline.TrackAsset track, UnityEngine.GameObject go, UnityEngine.Playables.Playable playable, System.Int32 port)
    // Offset: 0x196AC90
    void CreateTrackOutput(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Timeline::TrackAsset* track, UnityEngine::GameObject* go, UnityEngine::Playables::Playable playable, int port);
    // private System.Void EvaluateWeightsForAnimationPlayableOutput(UnityEngine.Timeline.TrackAsset track, UnityEngine.Animations.AnimationPlayableOutput animOutput)
    // Offset: 0x196B228
    void EvaluateWeightsForAnimationPlayableOutput(UnityEngine::Timeline::TrackAsset* track, UnityEngine::Animations::AnimationPlayableOutput animOutput);
    // private System.Void EvaluateAnimationPreviewUpdateCallback(UnityEngine.Timeline.TrackAsset track, UnityEngine.Animations.AnimationPlayableOutput animOutput)
    // Offset: 0x196B2BC
    void EvaluateAnimationPreviewUpdateCallback(UnityEngine::Timeline::TrackAsset* track, UnityEngine::Animations::AnimationPlayableOutput animOutput);
    // static private UnityEngine.Playables.Playable CreatePlayableGraph(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Timeline.TrackAsset asset, UnityEngine.GameObject go, UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> tree, UnityEngine.Playables.Playable timelinePlayable)
    // Offset: 0x196B350
    static UnityEngine::Playables::Playable CreatePlayableGraph(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Timeline::TrackAsset* asset, UnityEngine::GameObject* go, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* tree, UnityEngine::Playables::Playable timelinePlayable);
    // private UnityEngine.Playables.Playable CreateTrackPlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.Playable timelinePlayable, UnityEngine.Timeline.TrackAsset track, UnityEngine.GameObject go, System.Boolean createOutputs)
    // Offset: 0x196A838
    UnityEngine::Playables::Playable CreateTrackPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, UnityEngine::Timeline::TrackAsset* track, UnityEngine::GameObject* go, bool createOutputs);
    // private System.Void Evaluate(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x196B6F0
    void Evaluate(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData frameData);
    // private System.Void CacheTrack(UnityEngine.Timeline.TrackAsset track, UnityEngine.Playables.Playable playable, System.Int32 port, UnityEngine.Playables.Playable parent)
    // Offset: 0x196B640
    void CacheTrack(UnityEngine::Timeline::TrackAsset* track, UnityEngine::Playables::Playable playable, int port, UnityEngine::Playables::Playable parent);
    // static private System.Void ForAOTCompilationOnly()
    // Offset: 0x196BC5C
    static void ForAOTCompilationOnly();
    // static private System.Void .cctor()
    // Offset: 0x196BDCC
    static void _cctor();
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x196B6C0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void .ctor()
    // Offset: 0x196BCB4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelinePlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimelinePlayable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelinePlayable*, creationType>()));
    }
  }; // UnityEngine.Timeline.TimelinePlayable
  static check_size<sizeof(TimelinePlayable), 56 + sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset*, UnityEngine::Playables::Playable>*)> __UnityEngine_Timeline_TimelinePlayableSizeCheck;
  static_assert(sizeof(TimelinePlayable) == 0x40);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelinePlayable*, "UnityEngine.Timeline", "TimelinePlayable");
