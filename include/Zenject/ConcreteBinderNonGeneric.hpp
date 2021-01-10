// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: Zenject.FromBinderNonGeneric
#include "Zenject/FromBinderNonGeneric.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionSelectTypesBinder
  class ConventionSelectTypesBinder;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  // Autogenerated type: Zenject.ConcreteBinderNonGeneric
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D91EB0
  class ConcreteBinderNonGeneric : public Zenject::FromBinderNonGeneric {
    public:
    // Creating value type constructor for type: ConcreteBinderNonGeneric
    ConcreteBinderNonGeneric() noexcept {}
    // public Zenject.FromBinderNonGeneric ToSelf()
    // Offset: 0x10EEE14
    Zenject::FromBinderNonGeneric* ToSelf();
    // public Zenject.FromBinderNonGeneric To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FromBinderNonGeneric* To() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConcreteBinderNonGeneric::To");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FromBinderNonGeneric*, false>(this, ___generic__method);
    }
    // public Zenject.FromBinderNonGeneric To(params System.Type[] concreteTypes)
    // Offset: 0x10EEF2C
    Zenject::FromBinderNonGeneric* To(::Array<System::Type*>* concreteTypes);
    // Creating initializer_list -> params proxy for: Zenject.FromBinderNonGeneric To(params System.Type[] concreteTypes)
    Zenject::FromBinderNonGeneric* To(std::initializer_list<System::Type*> concreteTypes);
    // Creating TArgs -> initializer_list proxy for: Zenject.FromBinderNonGeneric To(params System.Type[] concreteTypes)
    template<class ...TParams>
    Zenject::FromBinderNonGeneric* To(TParams&&... concreteTypes) {
      return To({concreteTypes...});
    }
    // public Zenject.FromBinderNonGeneric To(System.Collections.Generic.IEnumerable`1<System.Type> concreteTypes)
    // Offset: 0x10EEF30
    Zenject::FromBinderNonGeneric* To(System::Collections::Generic::IEnumerable_1<System::Type*>* concreteTypes);
    // public Zenject.FromBinderNonGeneric To(System.Action`1<Zenject.ConventionSelectTypesBinder> generator)
    // Offset: 0x10EF020
    Zenject::FromBinderNonGeneric* To(System::Action_1<Zenject::ConventionSelectTypesBinder*>* generator);
    // private Zenject.IProvider <ToSelf>b__1_0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x10EF380
    Zenject::IProvider* $ToSelf$b__1_0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Offset: 0x10EEDEC
    // Implemented from: Zenject.FromBinderNonGeneric
    // Base method: System.Void FromBinderNonGeneric::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinder::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConcreteBinderNonGeneric* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConcreteBinderNonGeneric::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConcreteBinderNonGeneric*, creationType>(bindContainer, bindInfo, bindStatement)));
    }
  }; // Zenject.ConcreteBinderNonGeneric
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConcreteBinderNonGeneric*, "Zenject", "ConcreteBinderNonGeneric");
#pragma pack(pop)
