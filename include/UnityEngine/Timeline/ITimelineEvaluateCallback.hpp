// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ITimelineEvaluateCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class ITimelineEvaluateCallback {
    public:
    // Creating value type constructor for type: ITimelineEvaluateCallback
    ITimelineEvaluateCallback() noexcept {}
    // public System.Void Evaluate()
    // Offset: 0xFFFFFFFF
    void Evaluate();
  }; // UnityEngine.Timeline.ITimelineEvaluateCallback
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ITimelineEvaluateCallback*, "UnityEngine.Timeline", "ITimelineEvaluateCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::ITimelineEvaluateCallback::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ITimelineEvaluateCallback::*)()>(&UnityEngine::Timeline::ITimelineEvaluateCallback::Evaluate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ITimelineEvaluateCallback*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
