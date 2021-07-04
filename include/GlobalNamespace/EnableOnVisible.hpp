// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Behaviour because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnableOnVisible
  class EnableOnVisible : public UnityEngine::MonoBehaviour {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE34E0
    // private System.Action`1<System.Boolean> VisibilityChangedEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<bool>* VisibilityChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // public UnityEngine.Behaviour[] _components
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Behaviour*>* components;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Behaviour*>*) == 0x8);
    // Creating value type constructor for type: EnableOnVisible
    EnableOnVisible(System::Action_1<bool>* VisibilityChangedEvent_ = {}, ::Array<UnityEngine::Behaviour*>* components_ = {}) noexcept : VisibilityChangedEvent{VisibilityChangedEvent_}, components{components_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_VisibilityChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1243DC0
    void add_VisibilityChangedEvent(System::Action_1<bool>* value);
    // public System.Void remove_VisibilityChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1243E64
    void remove_VisibilityChangedEvent(System::Action_1<bool>* value);
    // protected System.Void Awake()
    // Offset: 0x1243F08
    void Awake();
    // protected System.Void OnBecameVisible()
    // Offset: 0x1243F78
    void OnBecameVisible();
    // protected System.Void OnBecameInvisible()
    // Offset: 0x1244030
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0x12440E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableOnVisible* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnableOnVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableOnVisible*, creationType>()));
    }
  }; // EnableOnVisible
  #pragma pack(pop)
  static check_size<sizeof(EnableOnVisible), 32 + sizeof(::Array<UnityEngine::Behaviour*>*)> __GlobalNamespace_EnableOnVisibleSizeCheck;
  static_assert(sizeof(EnableOnVisible) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableOnVisible*, "", "EnableOnVisible");
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::add_VisibilityChangedEvent
// Il2CppName: add_VisibilityChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)(System::Action_1<bool>*)>(&GlobalNamespace::EnableOnVisible::add_VisibilityChangedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "add_VisibilityChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::remove_VisibilityChangedEvent
// Il2CppName: remove_VisibilityChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)(System::Action_1<bool>*)>(&GlobalNamespace::EnableOnVisible::remove_VisibilityChangedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "remove_VisibilityChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)()>(&GlobalNamespace::EnableOnVisible::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::OnBecameVisible
// Il2CppName: OnBecameVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)()>(&GlobalNamespace::EnableOnVisible::OnBecameVisible)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "OnBecameVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::OnBecameInvisible
// Il2CppName: OnBecameInvisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)()>(&GlobalNamespace::EnableOnVisible::OnBecameInvisible)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "OnBecameInvisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
