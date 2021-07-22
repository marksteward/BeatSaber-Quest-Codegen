// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: Zenject.CopyNonLazyBinder
#include "Zenject/CopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindingCondition
  class BindingCondition;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConditionCopyNonLazyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ConditionCopyNonLazyBinder : public Zenject::CopyNonLazyBinder {
    public:
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_1
    class $$c__DisplayClass3_1;
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__4_1<T>
    template<typename T>
    class $$c__4_1;
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__5_1<T>
    template<typename T>
    class $$c__5_1;
    // Creating value type constructor for type: ConditionCopyNonLazyBinder
    ConditionCopyNonLazyBinder() noexcept {}
    // public Zenject.CopyNonLazyBinder When(Zenject.BindingCondition condition)
    // Offset: 0x137D358
    Zenject::CopyNonLazyBinder* When(Zenject::BindingCondition* condition);
    // public Zenject.CopyNonLazyBinder WhenInjectedIntoInstance(System.Object instance)
    // Offset: 0x137D374
    Zenject::CopyNonLazyBinder* WhenInjectedIntoInstance(::Il2CppObject* instance);
    // public Zenject.CopyNonLazyBinder WhenInjectedInto(params System.Type[] targets)
    // Offset: 0x137D428
    Zenject::CopyNonLazyBinder* WhenInjectedInto(::Array<System::Type*>* targets);
    // Creating initializer_list -> params proxy for: Zenject.CopyNonLazyBinder WhenInjectedInto(params System.Type[] targets)
    Zenject::CopyNonLazyBinder* WhenInjectedInto(std::initializer_list<System::Type*> targets);
    // Creating TArgs -> initializer_list proxy for: Zenject.CopyNonLazyBinder WhenInjectedInto(params System.Type[] targets)
    template<class ...TParams>
    Zenject::CopyNonLazyBinder* WhenInjectedInto(TParams&&... targets) {
      return WhenInjectedInto({targets...});
    }
    // public Zenject.CopyNonLazyBinder WhenInjectedInto()
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::CopyNonLazyBinder* WhenInjectedInto() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WhenInjectedInto", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::CopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public Zenject.CopyNonLazyBinder WhenNotInjectedInto()
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::CopyNonLazyBinder* WhenNotInjectedInto() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConditionCopyNonLazyBinder::WhenNotInjectedInto");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WhenNotInjectedInto", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::CopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x137D348
    // Implemented from: Zenject.CopyNonLazyBinder
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionCopyNonLazyBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.ConditionCopyNonLazyBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConditionCopyNonLazyBinder*, "Zenject", "ConditionCopyNonLazyBinder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::When
// Il2CppName: When
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::CopyNonLazyBinder* (Zenject::ConditionCopyNonLazyBinder::*)(Zenject::BindingCondition*)>(&Zenject::ConditionCopyNonLazyBinder::When)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("Zenject", "BindingCondition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConditionCopyNonLazyBinder*), "When", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::WhenInjectedIntoInstance
// Il2CppName: WhenInjectedIntoInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::CopyNonLazyBinder* (Zenject::ConditionCopyNonLazyBinder::*)(::Il2CppObject*)>(&Zenject::ConditionCopyNonLazyBinder::WhenInjectedIntoInstance)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConditionCopyNonLazyBinder*), "WhenInjectedIntoInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto
// Il2CppName: WhenInjectedInto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::CopyNonLazyBinder* (Zenject::ConditionCopyNonLazyBinder::*)(::Array<System::Type*>*)>(&Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto)> {
  static const MethodInfo* get() {
    static auto* targets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConditionCopyNonLazyBinder*), "WhenInjectedInto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targets});
  }
};
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto
// Il2CppName: WhenInjectedInto
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::WhenNotInjectedInto
// Il2CppName: WhenNotInjectedInto
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ConditionCopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
