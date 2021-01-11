// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass68_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93978
  class FromBinder::$$c__DisplayClass68_0 : public ::Il2CppObject {
    public:
    // public System.Func`2<Zenject.InjectContext,System.Collections.Generic.IEnumerable`1<System.Object>> method
    // Size: 0x8
    // Offset: 0x10
    System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>* method;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass68_0
    $$c__DisplayClass68_0(System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>* method_ = {}) noexcept : method{method_} {}
    // Creating conversion operator: operator System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>*
    constexpr operator System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>*() const noexcept {
      return method;
    }
    // Zenject.IProvider <FromMethodMultipleUntyped>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x129D194
    Zenject::IProvider* $FromMethodMultipleUntyped$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x129A5E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass68_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass68_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass68_0*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass68_0
  static check_size<sizeof(FromBinder::$$c__DisplayClass68_0), 16 + sizeof(System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>*)> __Zenject_FromBinder_$$c__DisplayClass68_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass68_0) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass68_0*, "Zenject", "FromBinder/<>c__DisplayClass68_0");
