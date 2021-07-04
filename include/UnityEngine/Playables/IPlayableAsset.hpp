// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.IPlayableAsset
  class IPlayableAsset {
    public:
    // Creating value type constructor for type: IPlayableAsset
    IPlayableAsset() noexcept {}
    // public UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0xFFFFFFFF
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* owner);
    // public System.Double get_duration()
    // Offset: 0xFFFFFFFF
    double get_duration();
  }; // UnityEngine.Playables.IPlayableAsset
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::IPlayableAsset*, "UnityEngine.Playables", "IPlayableAsset");
// Writing MetadataGetter for method: UnityEngine::Playables::IPlayableAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Playables::IPlayableAsset::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject*)>(&UnityEngine::Playables::IPlayableAsset::CreatePlayable)> {
  const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::IPlayableAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, owner});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::IPlayableAsset::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Playables::IPlayableAsset::*)()>(&UnityEngine::Playables::IPlayableAsset::get_duration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::IPlayableAsset*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
