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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename TResult>
  class Func_12;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
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
  // Autogenerated type: Zenject.MethodProviderWithContainer`11
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10, typename TValue>
  class MethodProviderWithContainer_11 : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly System.Func`12<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TValue> _method
    // Size: 0x8
    // Offset: 0x0
    System::Func_12<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TValue>* method;
    // Field size check
    static_assert(sizeof(System::Func_12<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TValue>*) == 0x8);
    // Creating value type constructor for type: MethodProviderWithContainer_11
    MethodProviderWithContainer_11(System::Func_12<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TValue>* method_ = {}) noexcept : method{method_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // Creating conversion operator: operator System::Func_12<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TValue>*
    constexpr operator System::Func_12<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TValue>*() const noexcept {
      return method;
    }
    // public System.Boolean get_IsCached()
    // Offset: 0xFFFFFFFF
    bool get_IsCached() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MethodProviderWithContainer_11::get_IsCached");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xFFFFFFFF
    bool get_TypeVariesBasedOnMemberType() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MethodProviderWithContainer_11::get_TypeVariesBasedOnMemberType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Func`12<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TValue> method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodProviderWithContainer_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TValue>* New_ctor(System::Func_12<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TValue>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MethodProviderWithContainer_11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodProviderWithContainer_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TValue>*, creationType>(method)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    System::Type* GetInstanceType(Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MethodProviderWithContainer_11::GetInstanceType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetInstanceType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context)})));
      return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method, context);
    }
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MethodProviderWithContainer_11::GetAllInstancesWithInjectSplit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractIndependentType<System::Action*&>(), ::il2cpp_utils::ExtractType(buffer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, context, args, injectAction, buffer);
    }
  }; // Zenject.MethodProviderWithContainer`11
  // Could not write size check! Type: Zenject.MethodProviderWithContainer`11 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MethodProviderWithContainer_11, "Zenject", "MethodProviderWithContainer`11");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
