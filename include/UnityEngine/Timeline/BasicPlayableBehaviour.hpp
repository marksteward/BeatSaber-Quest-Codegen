// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Playables.IPlayableAsset
#include "UnityEngine/Playables/IPlayableAsset.hpp"
// Including type: UnityEngine.Playables.IPlayableBehaviour
#include "UnityEngine/Playables/IPlayableBehaviour.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.BasicPlayableBehaviour
  // [ObsoleteAttribute] Offset: DD76E4
  class BasicPlayableBehaviour : public UnityEngine::ScriptableObject/*, public UnityEngine::Playables::IPlayableAsset, public UnityEngine::Playables::IPlayableBehaviour*/ {
    public:
    // Creating value type constructor for type: BasicPlayableBehaviour
    BasicPlayableBehaviour() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableAsset
    operator UnityEngine::Playables::IPlayableAsset() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableAsset*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableBehaviour
    operator UnityEngine::Playables::IPlayableBehaviour() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableBehaviour*>(this);
    }
    // public System.Double get_duration()
    // Offset: 0x17DC890
    double get_duration();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x17DC8F8
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x17DC960
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x17DC964
    void OnGraphStop(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableCreate(UnityEngine.Playables.Playable playable)
    // Offset: 0x17DC968
    void OnPlayableCreate(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x17DC96C
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x17DC970
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x17DC974
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x17DC978
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x17DC97C
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0x17DC980
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* owner);
    // public System.Void .ctor()
    // Offset: 0x17DCA1C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicPlayableBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::BasicPlayableBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicPlayableBehaviour*, creationType>()));
    }
  }; // UnityEngine.Timeline.BasicPlayableBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::BasicPlayableBehaviour*, "UnityEngine.Timeline", "BasicPlayableBehaviour");
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::BasicPlayableBehaviour::*)()>(&UnityEngine::Timeline::BasicPlayableBehaviour::get_duration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::get_outputs
// Il2CppName: get_outputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* (UnityEngine::Timeline::BasicPlayableBehaviour::*)()>(&UnityEngine::Timeline::BasicPlayableBehaviour::get_outputs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "get_outputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::OnGraphStart
// Il2CppName: OnGraphStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::BasicPlayableBehaviour::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::BasicPlayableBehaviour::OnGraphStart)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "OnGraphStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::OnGraphStop
// Il2CppName: OnGraphStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::BasicPlayableBehaviour::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::BasicPlayableBehaviour::OnGraphStop)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "OnGraphStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::OnPlayableCreate
// Il2CppName: OnPlayableCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::BasicPlayableBehaviour::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::BasicPlayableBehaviour::OnPlayableCreate)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "OnPlayableCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::BasicPlayableBehaviour::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::BasicPlayableBehaviour::OnPlayableDestroy)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::BasicPlayableBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::BasicPlayableBehaviour::OnBehaviourPlay)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::BasicPlayableBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::BasicPlayableBehaviour::OnBehaviourPause)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::PrepareFrame
// Il2CppName: PrepareFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::BasicPlayableBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::BasicPlayableBehaviour::PrepareFrame)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "PrepareFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::BasicPlayableBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&UnityEngine::Timeline::BasicPlayableBehaviour::ProcessFrame)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::BasicPlayableBehaviour::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject*)>(&UnityEngine::Timeline::BasicPlayableBehaviour::CreatePlayable)> {
  const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::BasicPlayableBehaviour*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, owner});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::BasicPlayableBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
