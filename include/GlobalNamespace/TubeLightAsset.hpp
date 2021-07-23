// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeLightBehaviour
  class TubeLightBehaviour;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TubeLightAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class TubeLightAsset : public UnityEngine::Playables::PlayableAsset/*, public UnityEngine::Timeline::ITimelineClipAsset*/ {
    public:
    // public TubeLightBehaviour _template
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TubeLightBehaviour* _template;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeLightBehaviour*) == 0x8);
    // Creating value type constructor for type: TubeLightAsset
    TubeLightAsset(GlobalNamespace::TubeLightBehaviour* _template_ = {}) noexcept : _template{_template_} {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::ITimelineClipAsset
    operator UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public TubeLightBehaviour _template
    GlobalNamespace::TubeLightBehaviour* _get__template();
    // Set instance field: public TubeLightBehaviour _template
    void _set__template(GlobalNamespace::TubeLightBehaviour* value);
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x10716A0
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public System.Void .ctor()
    // Offset: 0x1071748
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TubeLightAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TubeLightAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TubeLightAsset*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x10716A8
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
  }; // TubeLightAsset
  #pragma pack(pop)
  static check_size<sizeof(TubeLightAsset), 24 + sizeof(GlobalNamespace::TubeLightBehaviour*)> __GlobalNamespace_TubeLightAssetSizeCheck;
  static_assert(sizeof(TubeLightAsset) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeLightAsset*, "", "TubeLightAsset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TubeLightAsset::get_clipCaps
// Il2CppName: get_clipCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ClipCaps (GlobalNamespace::TubeLightAsset::*)()>(&GlobalNamespace::TubeLightAsset::get_clipCaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeLightAsset*), "get_clipCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeLightAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TubeLightAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (GlobalNamespace::TubeLightAsset::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject*)>(&GlobalNamespace::TubeLightAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeLightAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go});
  }
};
