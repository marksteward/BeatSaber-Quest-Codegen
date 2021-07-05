// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
#include "UnityEngine/ResourceManagement/Util/ComponentSingleton_1.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MonoBehaviourCallbackHooks
  class MonoBehaviourCallbackHooks : public UnityEngine::ResourceManagement::Util::ComponentSingleton_1<GlobalNamespace::MonoBehaviourCallbackHooks*> {
    public:
    // System.Action`1<System.Single> m_OnUpdateDelegate
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<float>* m_OnUpdateDelegate;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // Creating value type constructor for type: MonoBehaviourCallbackHooks
    MonoBehaviourCallbackHooks(System::Action_1<float>* m_OnUpdateDelegate_ = {}) noexcept : m_OnUpdateDelegate{m_OnUpdateDelegate_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_OnUpdateDelegate(System.Action`1<System.Single> value)
    // Offset: 0x19BEC90
    void add_OnUpdateDelegate(System::Action_1<float>* value);
    // public System.Void remove_OnUpdateDelegate(System.Action`1<System.Single> value)
    // Offset: 0x19BED10
    void remove_OnUpdateDelegate(System::Action_1<float>* value);
    // System.Void Update()
    // Offset: 0x19BEDD8
    void Update();
    // protected override System.String GetGameObjectName()
    // Offset: 0x19BED90
    // Implemented from: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
    // Base method: System.String ComponentSingleton_1::GetGameObjectName()
    ::Il2CppString* GetGameObjectName();
    // public System.Void .ctor()
    // Offset: 0x19BEE44
    // Implemented from: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
    // Base method: System.Void ComponentSingleton_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoBehaviourCallbackHooks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MonoBehaviourCallbackHooks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoBehaviourCallbackHooks*, creationType>()));
    }
  }; // MonoBehaviourCallbackHooks
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MonoBehaviourCallbackHooks*, "", "MonoBehaviourCallbackHooks");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::add_OnUpdateDelegate
// Il2CppName: add_OnUpdateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)(System::Action_1<float>*)>(&GlobalNamespace::MonoBehaviourCallbackHooks::add_OnUpdateDelegate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonoBehaviourCallbackHooks*), "add_OnUpdateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::remove_OnUpdateDelegate
// Il2CppName: remove_OnUpdateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)(System::Action_1<float>*)>(&GlobalNamespace::MonoBehaviourCallbackHooks::remove_OnUpdateDelegate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonoBehaviourCallbackHooks*), "remove_OnUpdateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(&GlobalNamespace::MonoBehaviourCallbackHooks::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonoBehaviourCallbackHooks*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::GetGameObjectName
// Il2CppName: GetGameObjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(&GlobalNamespace::MonoBehaviourCallbackHooks::GetGameObjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonoBehaviourCallbackHooks*), "GetGameObjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonoBehaviourCallbackHooks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
