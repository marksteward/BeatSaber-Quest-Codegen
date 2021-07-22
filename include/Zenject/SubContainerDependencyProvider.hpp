// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerDependencyProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerDependencyProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly Zenject.ISubContainerCreator _subContainerCreator
    // Size: 0x8
    // Offset: 0x10
    Zenject::ISubContainerCreator* subContainerCreator;
    // Field size check
    static_assert(sizeof(Zenject::ISubContainerCreator*) == 0x8);
    // private readonly System.Type _dependencyType
    // Size: 0x8
    // Offset: 0x18
    System::Type* dependencyType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private readonly System.Object _identifier
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* identifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Boolean _resolveAll
    // Size: 0x1
    // Offset: 0x28
    bool resolveAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SubContainerDependencyProvider
    SubContainerDependencyProvider(Zenject::ISubContainerCreator* subContainerCreator_ = {}, System::Type* dependencyType_ = {}, ::Il2CppObject* identifier_ = {}, bool resolveAll_ = {}) noexcept : subContainerCreator{subContainerCreator_}, dependencyType{dependencyType_}, identifier{identifier_}, resolveAll{resolveAll_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // public System.Boolean get_IsCached()
    // Offset: 0x16D38E4
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x16D38EC
    bool get_TypeVariesBasedOnMemberType();
    // public System.Void .ctor(System.Type dependencyType, System.Object identifier, Zenject.ISubContainerCreator subContainerCreator, System.Boolean resolveAll)
    // Offset: 0x16D1C3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerDependencyProvider* New_ctor(System::Type* dependencyType, ::Il2CppObject* identifier, Zenject::ISubContainerCreator* subContainerCreator, bool resolveAll) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerDependencyProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerDependencyProvider*, creationType>(dependencyType, identifier, subContainerCreator, resolveAll)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x16D38F4
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // private Zenject.InjectContext CreateSubContext(Zenject.InjectContext parent, Zenject.DiContainer subContainer)
    // Offset: 0x16D38FC
    Zenject::InjectContext* CreateSubContext(Zenject::InjectContext* parent, Zenject::DiContainer* subContainer);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x16D3944
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.SubContainerDependencyProvider
  #pragma pack(pop)
  static check_size<sizeof(SubContainerDependencyProvider), 40 + sizeof(bool)> __Zenject_SubContainerDependencyProviderSizeCheck;
  static_assert(sizeof(SubContainerDependencyProvider) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerDependencyProvider*, "Zenject", "SubContainerDependencyProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerDependencyProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SubContainerDependencyProvider::*)()>(&Zenject::SubContainerDependencyProvider::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerDependencyProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerDependencyProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SubContainerDependencyProvider::*)()>(&Zenject::SubContainerDependencyProvider::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerDependencyProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerDependencyProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerDependencyProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::SubContainerDependencyProvider::*)(Zenject::InjectContext*)>(&Zenject::SubContainerDependencyProvider::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerDependencyProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerDependencyProvider::CreateSubContext
// Il2CppName: CreateSubContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext* (Zenject::SubContainerDependencyProvider::*)(Zenject::InjectContext*, Zenject::DiContainer*)>(&Zenject::SubContainerDependencyProvider::CreateSubContext)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* subContainer = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerDependencyProvider*), "CreateSubContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, subContainer});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerDependencyProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerDependencyProvider::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, System::Action*&, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::SubContainerDependencyProvider::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerDependencyProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
