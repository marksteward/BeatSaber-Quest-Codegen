// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ICurvesOwner
  class ICurvesOwner {
    public:
    // Creating value type constructor for type: ICurvesOwner
    ICurvesOwner() noexcept {}
    // public UnityEngine.AnimationClip get_curves()
    // Offset: 0xFFFFFFFF
    UnityEngine::AnimationClip* get_curves();
    // public System.Boolean get_hasCurves()
    // Offset: 0xFFFFFFFF
    bool get_hasCurves();
    // public System.Double get_duration()
    // Offset: 0xFFFFFFFF
    double get_duration();
    // public System.Void CreateCurves(System.String curvesClipName)
    // Offset: 0xFFFFFFFF
    void CreateCurves(::Il2CppString* curvesClipName);
    // public System.String get_defaultCurvesName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_defaultCurvesName();
    // public UnityEngine.Object get_asset()
    // Offset: 0xFFFFFFFF
    UnityEngine::Object* get_asset();
    // public UnityEngine.Object get_assetOwner()
    // Offset: 0xFFFFFFFF
    UnityEngine::Object* get_assetOwner();
    // public UnityEngine.Timeline.TrackAsset get_targetTrack()
    // Offset: 0xFFFFFFFF
    UnityEngine::Timeline::TrackAsset* get_targetTrack();
  }; // UnityEngine.Timeline.ICurvesOwner
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ICurvesOwner*, "UnityEngine.Timeline", "ICurvesOwner");
// Writing MetadataGetter for method: UnityEngine::Timeline::ICurvesOwner::get_curves
// Il2CppName: get_curves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationClip* (UnityEngine::Timeline::ICurvesOwner::*)()>(&UnityEngine::Timeline::ICurvesOwner::get_curves)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ICurvesOwner*), "get_curves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ICurvesOwner::get_hasCurves
// Il2CppName: get_hasCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::ICurvesOwner::*)()>(&UnityEngine::Timeline::ICurvesOwner::get_hasCurves)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ICurvesOwner*), "get_hasCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ICurvesOwner::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::ICurvesOwner::*)()>(&UnityEngine::Timeline::ICurvesOwner::get_duration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ICurvesOwner*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ICurvesOwner::CreateCurves
// Il2CppName: CreateCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ICurvesOwner::*)(::Il2CppString*)>(&UnityEngine::Timeline::ICurvesOwner::CreateCurves)> {
  const MethodInfo* get() {
    static auto* curvesClipName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ICurvesOwner*), "CreateCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curvesClipName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ICurvesOwner::get_defaultCurvesName
// Il2CppName: get_defaultCurvesName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Timeline::ICurvesOwner::*)()>(&UnityEngine::Timeline::ICurvesOwner::get_defaultCurvesName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ICurvesOwner*), "get_defaultCurvesName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ICurvesOwner::get_asset
// Il2CppName: get_asset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (UnityEngine::Timeline::ICurvesOwner::*)()>(&UnityEngine::Timeline::ICurvesOwner::get_asset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ICurvesOwner*), "get_asset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ICurvesOwner::get_assetOwner
// Il2CppName: get_assetOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (UnityEngine::Timeline::ICurvesOwner::*)()>(&UnityEngine::Timeline::ICurvesOwner::get_assetOwner)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ICurvesOwner*), "get_assetOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ICurvesOwner::get_targetTrack
// Il2CppName: get_targetTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset* (UnityEngine::Timeline::ICurvesOwner::*)()>(&UnityEngine::Timeline::ICurvesOwner::get_targetTrack)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ICurvesOwner*), "get_targetTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
