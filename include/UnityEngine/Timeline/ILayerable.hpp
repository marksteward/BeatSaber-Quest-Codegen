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
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ILayerable
  class ILayerable {
    public:
    // Creating value type constructor for type: ILayerable
    ILayerable() noexcept {}
    // public UnityEngine.Playables.Playable CreateLayerMixer(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Int32 inputCount)
    // Offset: 0xFFFFFFFF
    UnityEngine::Playables::Playable CreateLayerMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, int inputCount);
  }; // UnityEngine.Timeline.ILayerable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ILayerable*, "UnityEngine.Timeline", "ILayerable");
// Writing MetadataGetter for method: UnityEngine::Timeline::ILayerable::CreateLayerMixer
// Il2CppName: CreateLayerMixer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::ILayerable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject*, int)>(&UnityEngine::Timeline::ILayerable::CreateLayerMixer)> {
  const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ILayerable*), "CreateLayerMixer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go, inputCount});
  }
};
