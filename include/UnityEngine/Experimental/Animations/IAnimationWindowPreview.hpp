// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Animations
namespace UnityEngine::Experimental::Animations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Animations.IAnimationWindowPreview
  // [TokenAttribute] Offset: FFFFFFFF
  class IAnimationWindowPreview : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IAnimationWindowPreview
    IAnimationWindowPreview() noexcept {}
    // public System.Void UpdatePreviewGraph(UnityEngine.Playables.PlayableGraph graph)
    // Offset: 0xFFFFFFFF
    void UpdatePreviewGraph(UnityEngine::Playables::PlayableGraph graph);
  }; // UnityEngine.Experimental.Animations.IAnimationWindowPreview
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Animations::IAnimationWindowPreview*, "UnityEngine.Experimental.Animations", "IAnimationWindowPreview");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Animations::IAnimationWindowPreview::UpdatePreviewGraph
// Il2CppName: UpdatePreviewGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Animations::IAnimationWindowPreview::*)(UnityEngine::Playables::PlayableGraph)>(&UnityEngine::Experimental::Animations::IAnimationWindowPreview::UpdatePreviewGraph)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Animations::IAnimationWindowPreview*), "UpdatePreviewGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph});
  }
};
