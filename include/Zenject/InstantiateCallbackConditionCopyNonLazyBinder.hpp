// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConditionCopyNonLazyBinder
#include "Zenject/ConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InstantiateCallbackConditionCopyNonLazyBinder
  // [NoReflectionBakingAttribute] Offset: DDCA34
  class InstantiateCallbackConditionCopyNonLazyBinder : public Zenject::ConditionCopyNonLazyBinder {
    public:
    // Nested type: Zenject::InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1<T>
    template<typename T>
    class $$c__DisplayClass2_0_1;
    // Creating value type constructor for type: InstantiateCallbackConditionCopyNonLazyBinder
    InstantiateCallbackConditionCopyNonLazyBinder() noexcept {}
    // public Zenject.ConditionCopyNonLazyBinder OnInstantiated(System.Action`2<Zenject.InjectContext,System.Object> callback)
    // Offset: 0x16415FC
    Zenject::ConditionCopyNonLazyBinder* OnInstantiated(System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* callback);
    // public Zenject.ConditionCopyNonLazyBinder OnInstantiated(System.Action`2<Zenject.InjectContext,T> callback)
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConditionCopyNonLazyBinder* OnInstantiated(System::Action_2<Zenject::InjectContext*, T>* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnInstantiated", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___generic__method, callback);
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x16415F4
    // Implemented from: Zenject.ConditionCopyNonLazyBinder
    // Base method: System.Void ConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstantiateCallbackConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InstantiateCallbackConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstantiateCallbackConditionCopyNonLazyBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.InstantiateCallbackConditionCopyNonLazyBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, "Zenject", "InstantiateCallbackConditionCopyNonLazyBinder");
// Writing MetadataGetter for method: Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated
// Il2CppName: OnInstantiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::InstantiateCallbackConditionCopyNonLazyBinder::*)(System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>*)>(&Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated)> {
  const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "InjectContext"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstantiateCallbackConditionCopyNonLazyBinder*), "OnInstantiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated
// Il2CppName: OnInstantiated
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::InstantiateCallbackConditionCopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
