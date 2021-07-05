// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IMenuButtonTrigger
  class IMenuButtonTrigger {
    public:
    // Creating value type constructor for type: IMenuButtonTrigger
    IMenuButtonTrigger() noexcept {}
    // public System.Void add_menuButtonTriggeredEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_menuButtonTriggeredEvent(System::Action* value);
    // public System.Void remove_menuButtonTriggeredEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_menuButtonTriggeredEvent(System::Action* value);
  }; // IMenuButtonTrigger
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMenuButtonTrigger*, "", "IMenuButtonTrigger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IMenuButtonTrigger::add_menuButtonTriggeredEvent
// Il2CppName: add_menuButtonTriggeredEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMenuButtonTrigger::*)(System::Action*)>(&GlobalNamespace::IMenuButtonTrigger::add_menuButtonTriggeredEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMenuButtonTrigger*), "add_menuButtonTriggeredEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMenuButtonTrigger::remove_menuButtonTriggeredEvent
// Il2CppName: remove_menuButtonTriggeredEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMenuButtonTrigger::*)(System::Action*)>(&GlobalNamespace::IMenuButtonTrigger::remove_menuButtonTriggeredEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMenuButtonTrigger*), "remove_menuButtonTriggeredEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
