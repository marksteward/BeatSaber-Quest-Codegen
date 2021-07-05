// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.RuntimeClipBase
#include "UnityEngine/Timeline/RuntimeClipBase.hpp"
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
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ScheduleRuntimeClip
  class ScheduleRuntimeClip : public UnityEngine::Timeline::RuntimeClipBase {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private UnityEngine.Timeline.TimelineClip m_Clip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Timeline::TimelineClip* m_Clip;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineClip*) == 0x8);
    // private UnityEngine.Playables.Playable m_Playable
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Playables::Playable m_Playable;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::Playable) == 0xC);
    // Padding between fields: m_Playable and: m_ParentMixer
    char __padding1[0x4] = {};
    // private UnityEngine.Playables.Playable m_ParentMixer
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Playables::Playable m_ParentMixer;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::Playable) == 0xC);
    // Padding between fields: m_ParentMixer and: m_StartDelay
    char __padding2[0x4] = {};
    // private System.Double m_StartDelay
    // Size: 0x8
    // Offset: 0x40
    double m_StartDelay;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m_FinishTail
    // Size: 0x8
    // Offset: 0x48
    double m_FinishTail;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean m_Started
    // Size: 0x1
    // Offset: 0x50
    bool m_Started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ScheduleRuntimeClip
    ScheduleRuntimeClip(UnityEngine::Timeline::TimelineClip* m_Clip_ = {}, UnityEngine::Playables::Playable m_Playable_ = {}, UnityEngine::Playables::Playable m_ParentMixer_ = {}, double m_StartDelay_ = {}, double m_FinishTail_ = {}, bool m_Started_ = {}) noexcept : m_Clip{m_Clip_}, m_Playable{m_Playable_}, m_ParentMixer{m_ParentMixer_}, m_StartDelay{m_StartDelay_}, m_FinishTail{m_FinishTail_}, m_Started{m_Started_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // public System.Void SetTime(System.Double time)
    // Offset: 0x17E5AD4
    void SetTime(double time);
    // public UnityEngine.Timeline.TimelineClip get_clip()
    // Offset: 0x17E5B34
    UnityEngine::Timeline::TimelineClip* get_clip();
    // public UnityEngine.Playables.Playable get_mixer()
    // Offset: 0x17E5B3C
    UnityEngine::Playables::Playable get_mixer();
    // public UnityEngine.Playables.Playable get_playable()
    // Offset: 0x17E5B48
    UnityEngine::Playables::Playable get_playable();
    // public System.Void .ctor(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer, System.Double startDelay, System.Double finishTail)
    // Offset: 0x17DC3F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScheduleRuntimeClip* New_ctor(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double startDelay, double finishTail) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ScheduleRuntimeClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScheduleRuntimeClip*, creationType>(clip, clipPlayable, parentMixer, startDelay, finishTail)));
    }
    // private System.Void Create(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer, System.Double startDelay, System.Double finishTail)
    // Offset: 0x17E5B54
    void Create(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double startDelay, double finishTail);
    // public override System.Double get_start()
    // Offset: 0x17E59FC
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_start()
    double get_start();
    // public override System.Double get_duration()
    // Offset: 0x17E5A84
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_duration()
    double get_duration();
    // public override System.Void set_enable(System.Boolean value)
    // Offset: 0x17E5BF4
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::set_enable(System.Boolean value)
    void set_enable(bool value);
    // public override System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x17E5CEC
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    void EvaluateAt(double localTime, UnityEngine::Playables::FrameData frameData);
    // public override System.Void DisableAt(System.Double localTime, System.Double rootDuration, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x17E5F64
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::DisableAt(System.Double localTime, System.Double rootDuration, UnityEngine.Playables.FrameData frameData)
    void DisableAt(double localTime, double rootDuration, UnityEngine::Playables::FrameData frameData);
  }; // UnityEngine.Timeline.ScheduleRuntimeClip
  #pragma pack(pop)
  static check_size<sizeof(ScheduleRuntimeClip), 80 + sizeof(bool)> __UnityEngine_Timeline_ScheduleRuntimeClipSizeCheck;
  static_assert(sizeof(ScheduleRuntimeClip) == 0x51);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ScheduleRuntimeClip*, "UnityEngine.Timeline", "ScheduleRuntimeClip");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::SetTime
// Il2CppName: SetTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ScheduleRuntimeClip::*)(double)>(&UnityEngine::Timeline::ScheduleRuntimeClip::SetTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "SetTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::get_clip
// Il2CppName: get_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TimelineClip* (UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(&UnityEngine::Timeline::ScheduleRuntimeClip::get_clip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "get_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::get_mixer
// Il2CppName: get_mixer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(&UnityEngine::Timeline::ScheduleRuntimeClip::get_mixer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "get_mixer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::get_playable
// Il2CppName: get_playable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(&UnityEngine::Timeline::ScheduleRuntimeClip::get_playable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "get_playable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ScheduleRuntimeClip::*)(UnityEngine::Timeline::TimelineClip*, UnityEngine::Playables::Playable, UnityEngine::Playables::Playable, double, double)>(&UnityEngine::Timeline::ScheduleRuntimeClip::Create)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    static auto* clipPlayable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* parentMixer = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* startDelay = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* finishTail = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, clipPlayable, parentMixer, startDelay, finishTail});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::get_start
// Il2CppName: get_start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(&UnityEngine::Timeline::ScheduleRuntimeClip::get_start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "get_start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(&UnityEngine::Timeline::ScheduleRuntimeClip::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::set_enable
// Il2CppName: set_enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ScheduleRuntimeClip::*)(bool)>(&UnityEngine::Timeline::ScheduleRuntimeClip::set_enable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "set_enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::EvaluateAt
// Il2CppName: EvaluateAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ScheduleRuntimeClip::*)(double, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::ScheduleRuntimeClip::EvaluateAt)> {
  static const MethodInfo* get() {
    static auto* localTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameData = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "EvaluateAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localTime, frameData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ScheduleRuntimeClip::DisableAt
// Il2CppName: DisableAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ScheduleRuntimeClip::*)(double, double, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::ScheduleRuntimeClip::DisableAt)> {
  static const MethodInfo* get() {
    static auto* localTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* rootDuration = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameData = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ScheduleRuntimeClip*), "DisableAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localTime, rootDuration, frameData});
  }
};
