// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimeControlPlayable
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Get instance field: private UnityEngine.Timeline.ITimeControl m_timeControl
    UnityEngine::Timeline::ITimeControl* _get_m_timeControl();
    // Set instance field: private UnityEngine.Timeline.ITimeControl m_timeControl
    void _set_m_timeControl(UnityEngine::Timeline::ITimeControl* value);
    // Get instance field: private System.Boolean m_started
    bool _get_m_started();
    // Set instance field: private System.Boolean m_started
    void _set_m_started(bool value);
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.TimeControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Timeline.ITimeControl timeControl)
    // Offset: 0x17E3E4C
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimeControlPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Timeline::ITimeControl* timeControl);
    // public System.Void Initialize(UnityEngine.Timeline.ITimeControl timeControl)
    // Offset: 0x17EC0E4
    void Initialize(UnityEngine::Timeline::ITimeControl* timeControl);
    // public System.Void .ctor()
    // Offset: 0x17EC368
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeControlPlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimeControlPlayable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeControlPlayable*, creationType>()));
    }
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x17EC0EC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x17EC1E4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x17EC2A8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
  }; // UnityEngine.Timeline.TimeControlPlayable
  #pragma pack(pop)
  static check_size<sizeof(TimeControlPlayable), 24 + sizeof(bool)> __UnityEngine_Timeline_TimeControlPlayableSizeCheck;
  static_assert(sizeof(TimeControlPlayable) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeControlPlayable*, "UnityEngine.Timeline", "TimeControlPlayable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeControlPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimeControlPlayable*> (*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Timeline::ITimeControl*)>(&UnityEngine::Timeline::TimeControlPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* timeControl = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "ITimeControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeControlPlayable*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, timeControl});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeControlPlayable::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeControlPlayable::*)(UnityEngine::Timeline::ITimeControl*)>(&UnityEngine::Timeline::TimeControlPlayable::Initialize)> {
  static const MethodInfo* get() {
    static auto* timeControl = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "ITimeControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeControlPlayable*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeControl});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeControlPlayable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeControlPlayable::PrepareFrame
// Il2CppName: PrepareFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimeControlPlayable::PrepareFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeControlPlayable*), "PrepareFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeControlPlayable::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimeControlPlayable::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeControlPlayable*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeControlPlayable::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimeControlPlayable::OnBehaviourPause)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeControlPlayable*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
