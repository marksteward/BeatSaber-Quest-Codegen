// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
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
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.GetterProvider`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TObj, typename TResult>
  class GetterProvider_2 : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly System.Object _identifier
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* identifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Func`2<TObj,TResult> _method
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TObj, TResult>* method;
    // Field size check
    static_assert(sizeof(System::Func_2<TObj, TResult>*) == 0x8);
    // private readonly System.Boolean _matchAll
    // Size: 0x1
    // Offset: 0x0
    bool matchAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly Zenject.InjectSources _sourceType
    // Size: 0x4
    // Offset: 0x0
    Zenject::InjectSources sourceType;
    // Field size check
    static_assert(sizeof(Zenject::InjectSources) == 0x4);
    // Creating value type constructor for type: GetterProvider_2
    GetterProvider_2(Zenject::DiContainer* container_ = {}, ::Il2CppObject* identifier_ = {}, System::Func_2<TObj, TResult>* method_ = {}, bool matchAll_ = {}, Zenject::InjectSources sourceType_ = {}) noexcept : container{container_}, identifier{identifier_}, method{method_}, matchAll{matchAll_}, sourceType{sourceType_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.DiContainer _container
    Zenject::DiContainer* _get__container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_get__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      return *reinterpret_cast<Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly Zenject.DiContainer _container
    void _set__container(Zenject::DiContainer* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_set__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      *reinterpret_cast<Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Object _identifier
    ::Il2CppObject* _get__identifier() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_get__identifier");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_identifier"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly System.Object _identifier
    void _set__identifier(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_set__identifier");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_identifier"))->offset;
      *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<TObj,TResult> _method
    System::Func_2<TObj, TResult>* _get__method() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_get__method");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_method"))->offset;
      return *reinterpret_cast<System::Func_2<TObj, TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly System.Func`2<TObj,TResult> _method
    void _set__method(System::Func_2<TObj, TResult>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_set__method");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_method"))->offset;
      *reinterpret_cast<System::Func_2<TObj, TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Boolean _matchAll
    bool _get__matchAll() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_get__matchAll");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_matchAll"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly System.Boolean _matchAll
    void _set__matchAll(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_set__matchAll");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_matchAll"))->offset;
      *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.InjectSources _sourceType
    Zenject::InjectSources _get__sourceType() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_get__sourceType");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_sourceType"))->offset;
      return *reinterpret_cast<Zenject::InjectSources*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly Zenject.InjectSources _sourceType
    void _set__sourceType(Zenject::InjectSources value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::_set__sourceType");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_sourceType"))->offset;
      *reinterpret_cast<Zenject::InjectSources*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // public System.Boolean get_IsCached()
    // Offset: 0xFFFFFFFF
    bool get_IsCached() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::get_IsCached");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xFFFFFFFF
    bool get_TypeVariesBasedOnMemberType() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::get_TypeVariesBasedOnMemberType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Object identifier, System.Func`2<TObj,TResult> method, Zenject.DiContainer container, Zenject.InjectSources sourceType, System.Boolean matchAll)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetterProvider_2<TObj, TResult>* New_ctor(::Il2CppObject* identifier, System::Func_2<TObj, TResult>* method, Zenject::DiContainer* container, Zenject::InjectSources sourceType, bool matchAll) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetterProvider_2<TObj, TResult>*, creationType>(identifier, method, container, sourceType, matchAll)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    System::Type* GetInstanceType(Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::GetInstanceType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetInstanceType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context)})));
      return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method, context);
    }
    // private Zenject.InjectContext GetSubContext(Zenject.InjectContext parent)
    // Offset: 0xFFFFFFFF
    Zenject::InjectContext* GetSubContext(Zenject::InjectContext* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::GetSubContext");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetSubContext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(parent)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::InjectContext*, false>(this, ___internal__method, parent);
    }
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, ByRef<System::Action*> injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetterProvider_2::GetAllInstancesWithInjectSplit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractIndependentType<System::Action*&>(), ::il2cpp_utils::ExtractType(buffer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, context, args, byref(injectAction), buffer);
    }
  }; // Zenject.GetterProvider`2
  // Could not write size check! Type: Zenject.GetterProvider`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::GetterProvider_2, "Zenject", "GetterProvider`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
