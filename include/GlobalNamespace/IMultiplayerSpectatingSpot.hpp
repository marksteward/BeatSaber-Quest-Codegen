// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IMultiplayerSpectatingSpot
  class IMultiplayerSpectatingSpot {
    public:
    // Creating value type constructor for type: IMultiplayerSpectatingSpot
    IMultiplayerSpectatingSpot() noexcept {}
    // public System.Void add_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0xFFFFFFFF
    void add_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void remove_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0xFFFFFFFF
    void remove_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Boolean get_isMain()
    // Offset: 0xFFFFFFFF
    bool get_isMain();
    // public IMultiplayerObservable get_observable()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IMultiplayerObservable* get_observable();
    // public UnityEngine.Transform get_transform()
    // Offset: 0xFFFFFFFF
    UnityEngine::Transform* get_transform();
    // public System.String get_spotName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_spotName();
    // public System.Void SetIsObserved(System.Boolean isObserved)
    // Offset: 0xFFFFFFFF
    void SetIsObserved(bool isObserved);
  }; // IMultiplayerSpectatingSpot
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerSpectatingSpot*, "", "IMultiplayerSpectatingSpot");
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::add_hasBeenRemovedEvent
// Il2CppName: add_hasBeenRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerSpectatingSpot::*)(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(&GlobalNamespace::IMultiplayerSpectatingSpot::add_hasBeenRemovedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IMultiplayerSpectatingSpot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "add_hasBeenRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::remove_hasBeenRemovedEvent
// Il2CppName: remove_hasBeenRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerSpectatingSpot::*)(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(&GlobalNamespace::IMultiplayerSpectatingSpot::remove_hasBeenRemovedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IMultiplayerSpectatingSpot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "remove_hasBeenRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::get_isMain
// Il2CppName: get_isMain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IMultiplayerSpectatingSpot::*)()>(&GlobalNamespace::IMultiplayerSpectatingSpot::get_isMain)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "get_isMain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::get_observable
// Il2CppName: get_observable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IMultiplayerObservable* (GlobalNamespace::IMultiplayerSpectatingSpot::*)()>(&GlobalNamespace::IMultiplayerSpectatingSpot::get_observable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "get_observable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::IMultiplayerSpectatingSpot::*)()>(&GlobalNamespace::IMultiplayerSpectatingSpot::get_transform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::get_spotName
// Il2CppName: get_spotName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IMultiplayerSpectatingSpot::*)()>(&GlobalNamespace::IMultiplayerSpectatingSpot::get_spotName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "get_spotName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::SetIsObserved
// Il2CppName: SetIsObserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerSpectatingSpot::*)(bool)>(&GlobalNamespace::IMultiplayerSpectatingSpot::SetIsObserved)> {
  const MethodInfo* get() {
    static auto* isObserved = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "SetIsObserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isObserved});
  }
};
