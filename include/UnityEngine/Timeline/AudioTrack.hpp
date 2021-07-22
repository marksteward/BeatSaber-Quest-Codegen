// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AudioMixerProperties
  class AudioMixerProperties;
  // Forward declaring type: TimelineClip
  class TimelineClip;
  // Forward declaring type: IntervalTree`1<T>
  template<typename T>
  class IntervalTree_1;
  // Forward declaring type: RuntimeElement
  class RuntimeElement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Skipping declaration: Playable because it is already included!
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.AudioTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [TrackClipTypeAttribute] Offset: DC380C
  // [TrackBindingTypeAttribute] Offset: DC380C
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  class AudioTrack : public UnityEngine::Timeline::TrackAsset {
    public:
    // Nested type: UnityEngine::Timeline::AudioTrack::$get_outputs$d__4
    class $get_outputs$d__4;
    // private UnityEngine.Timeline.AudioMixerProperties m_TrackProperties
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::Timeline::AudioMixerProperties* m_TrackProperties;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::AudioMixerProperties*) == 0x8);
    // Creating value type constructor for type: AudioTrack
    AudioTrack(UnityEngine::Timeline::AudioMixerProperties* m_TrackProperties_ = {}) noexcept : m_TrackProperties{m_TrackProperties_} {}
    // public UnityEngine.Timeline.TimelineClip CreateClip(UnityEngine.AudioClip clip)
    // Offset: 0x17E0DA0
    UnityEngine::Timeline::TimelineClip* CreateClip(UnityEngine::AudioClip* clip);
    // private System.Void OnValidate()
    // Offset: 0x17E1630
    void OnValidate();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x17E1578
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> TrackAsset::get_outputs()
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public System.Void .ctor()
    // Offset: 0x17E16F0
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::AudioTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioTrack*, creationType>()));
    }
    // override UnityEngine.Playables.Playable CompileClips(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Collections.Generic.IList`1<UnityEngine.Timeline.TimelineClip> timelineClips, UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> tree)
    // Offset: 0x17E0EE8
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: UnityEngine.Playables.Playable TrackAsset::CompileClips(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Collections.Generic.IList`1<UnityEngine.Timeline.TimelineClip> timelineClips, UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> tree)
    UnityEngine::Playables::Playable CompileClips(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, System::Collections::Generic::IList_1<UnityEngine::Timeline::TimelineClip*>* timelineClips, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* tree);
  }; // UnityEngine.Timeline.AudioTrack
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioTrack*, "UnityEngine.Timeline", "AudioTrack");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioTrack::CreateClip
// Il2CppName: CreateClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TimelineClip* (UnityEngine::Timeline::AudioTrack::*)(UnityEngine::AudioClip*)>(&UnityEngine::Timeline::AudioTrack::CreateClip)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioTrack*), "CreateClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioTrack::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AudioTrack::*)()>(&UnityEngine::Timeline::AudioTrack::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioTrack*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioTrack::get_outputs
// Il2CppName: get_outputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* (UnityEngine::Timeline::AudioTrack::*)()>(&UnityEngine::Timeline::AudioTrack::get_outputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioTrack*), "get_outputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioTrack::CompileClips
// Il2CppName: CompileClips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::AudioTrack::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject*, System::Collections::Generic::IList_1<UnityEngine::Timeline::TimelineClip*>*, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>*)>(&UnityEngine::Timeline::AudioTrack::CompileClips)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* timelineClips = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")})->byval_arg;
    static auto* tree = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "IntervalTree`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "RuntimeElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioTrack*), "CompileClips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go, timelineClips, tree});
  }
};
