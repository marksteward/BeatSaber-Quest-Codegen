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
  // Forward declaring type: INotification
  class INotification;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.INotificationReceiver
  // [RequiredByNativeCodeAttribute] Offset: D92148
  class INotificationReceiver {
    public:
    // Creating value type constructor for type: INotificationReceiver
    INotificationReceiver() noexcept {}
    // public System.Void OnNotify(UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0xFFFFFFFF
    void OnNotify(UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification* notification, ::Il2CppObject* context);
  }; // UnityEngine.Playables.INotificationReceiver
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::INotificationReceiver*, "UnityEngine.Playables", "INotificationReceiver");
// Writing MetadataGetter for method: UnityEngine::Playables::INotificationReceiver::OnNotify
// Il2CppName: OnNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::INotificationReceiver::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::INotification*, ::Il2CppObject*)>(&UnityEngine::Playables::INotificationReceiver::OnNotify)> {
  const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* notification = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "INotification")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::INotificationReceiver*), "OnNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, notification, context});
  }
};
