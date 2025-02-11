// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
// Including type: GhostEffectBehaviour/GhostEffectType
#include "GlobalNamespace/GhostEffectBehaviour.hpp"
// Including type: UnityEngine.ExposedReference`1
#include "UnityEngine/ExposedReference_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TimelineArrayReference
  class TimelineArrayReference;
  // Skipping declaration: GhostEffectBehaviour because it is already included!
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
  // WARNING Size may be invalid!
  // Autogenerated type: GhostEffectAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class GhostEffectAsset : public UnityEngine::Playables::PlayableAsset/*, public UnityEngine::Timeline::ITimelineClipAsset*/ {
    public:
    // public GhostEffectBehaviour/GhostEffectType _ghostEffectType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::GhostEffectBehaviour::GhostEffectType ghostEffectType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostEffectBehaviour::GhostEffectType) == 0x4);
    // [NullAllowed] Offset: 0xEBF594
    // public UnityEngine.ExposedReference`1<TimelineArrayReference> arrayReference
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference*> arrayReference;
    // public GhostEffectBehaviour template
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::GhostEffectBehaviour* _template;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostEffectBehaviour*) == 0x8);
    // Creating value type constructor for type: GhostEffectAsset
    GhostEffectAsset(GlobalNamespace::GhostEffectBehaviour::GhostEffectType ghostEffectType_ = {}, UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference*> arrayReference_ = {}, GlobalNamespace::GhostEffectBehaviour* _template_ = {}) noexcept : ghostEffectType{ghostEffectType_}, arrayReference{arrayReference_}, _template{_template_} {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::ITimelineClipAsset
    operator UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public GhostEffectBehaviour/GhostEffectType _ghostEffectType
    GlobalNamespace::GhostEffectBehaviour::GhostEffectType _get__ghostEffectType();
    // Set instance field: public GhostEffectBehaviour/GhostEffectType _ghostEffectType
    void _set__ghostEffectType(GlobalNamespace::GhostEffectBehaviour::GhostEffectType value);
    // Get instance field: public UnityEngine.ExposedReference`1<TimelineArrayReference> arrayReference
    UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference*> _get_arrayReference();
    // Set instance field: public UnityEngine.ExposedReference`1<TimelineArrayReference> arrayReference
    void _set_arrayReference(UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference*> value);
    // Get instance field: public GhostEffectBehaviour template
    GlobalNamespace::GhostEffectBehaviour* _get_template();
    // Set instance field: public GhostEffectBehaviour template
    void _set_template(GlobalNamespace::GhostEffectBehaviour* value);
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x1F23238
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public System.Void .ctor()
    // Offset: 0x1F23374
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GhostEffectAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GhostEffectAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GhostEffectAsset*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x1F23240
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
  }; // GhostEffectAsset
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostEffectAsset*, "", "GhostEffectAsset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GhostEffectAsset::get_clipCaps
// Il2CppName: get_clipCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ClipCaps (GlobalNamespace::GhostEffectAsset::*)()>(&GlobalNamespace::GhostEffectAsset::get_clipCaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostEffectAsset*), "get_clipCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostEffectAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GhostEffectAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (GlobalNamespace::GhostEffectAsset::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject*)>(&GlobalNamespace::GhostEffectAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostEffectAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go});
  }
};
