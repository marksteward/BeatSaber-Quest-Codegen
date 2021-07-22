// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: GroupTrack
  class GroupTrack;
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TrackAssetExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TrackAssetExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TrackAssetExtensions
    TrackAssetExtensions() noexcept {}
    // static public UnityEngine.Timeline.GroupTrack GetGroup(UnityEngine.Timeline.TrackAsset asset)
    // Offset: 0x2321E9C
    static UnityEngine::Timeline::GroupTrack* GetGroup(UnityEngine::Timeline::TrackAsset* asset);
    // static public System.Void SetGroup(UnityEngine.Timeline.TrackAsset asset, UnityEngine.Timeline.GroupTrack group)
    // Offset: 0x2321F64
    static void SetGroup(UnityEngine::Timeline::TrackAsset* asset, UnityEngine::Timeline::GroupTrack* group);
  }; // UnityEngine.Timeline.TrackAssetExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackAssetExtensions*, "UnityEngine.Timeline", "TrackAssetExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackAssetExtensions::GetGroup
// Il2CppName: GetGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::GroupTrack* (*)(UnityEngine::Timeline::TrackAsset*)>(&UnityEngine::Timeline::TrackAssetExtensions::GetGroup)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TrackAssetExtensions*), "GetGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackAssetExtensions::SetGroup
// Il2CppName: SetGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Timeline::TrackAsset*, UnityEngine::Timeline::GroupTrack*)>(&UnityEngine::Timeline::TrackAssetExtensions::SetGroup)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "GroupTrack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TrackAssetExtensions*), "SetGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, group});
  }
};
