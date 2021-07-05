// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IMarker
  class IMarker {
    public:
    // Creating value type constructor for type: IMarker
    IMarker() noexcept {}
    // public System.Double get_time()
    // Offset: 0xFFFFFFFF
    double get_time();
    // public System.Void set_time(System.Double value)
    // Offset: 0xFFFFFFFF
    void set_time(double value);
    // public UnityEngine.Timeline.TrackAsset get_parent()
    // Offset: 0xFFFFFFFF
    UnityEngine::Timeline::TrackAsset* get_parent();
    // public System.Void Initialize(UnityEngine.Timeline.TrackAsset parent)
    // Offset: 0xFFFFFFFF
    void Initialize(UnityEngine::Timeline::TrackAsset* parent);
  }; // UnityEngine.Timeline.IMarker
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IMarker*, "UnityEngine.Timeline", "IMarker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::IMarker::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::IMarker::*)()>(&UnityEngine::Timeline::IMarker::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IMarker*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IMarker::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IMarker::*)(double)>(&UnityEngine::Timeline::IMarker::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IMarker*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IMarker::get_parent
// Il2CppName: get_parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset* (UnityEngine::Timeline::IMarker::*)()>(&UnityEngine::Timeline::IMarker::get_parent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IMarker*), "get_parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IMarker::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IMarker::*)(UnityEngine::Timeline::TrackAsset*)>(&UnityEngine::Timeline::IMarker::Initialize)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IMarker*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
