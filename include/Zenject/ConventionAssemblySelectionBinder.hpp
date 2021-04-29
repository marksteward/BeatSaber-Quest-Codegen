// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionBindInfo
  class ConventionBindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionAssemblySelectionBinder
  // [NoReflectionBakingAttribute] Offset: D01C64
  class ConventionAssemblySelectionBinder : public ::Il2CppObject {
    public:
    // Nested type: Zenject::ConventionAssemblySelectionBinder::$$c
    class $$c;
    // Nested type: Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // [CompilerGeneratedAttribute] Offset: 0xD03FDC
    // private Zenject.ConventionBindInfo <BindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    Zenject::ConventionBindInfo* BindInfo;
    // Field size check
    static_assert(sizeof(Zenject::ConventionBindInfo*) == 0x8);
    // Creating value type constructor for type: ConventionAssemblySelectionBinder
    ConventionAssemblySelectionBinder(Zenject::ConventionBindInfo* BindInfo_ = {}) noexcept : BindInfo{BindInfo_} {}
    // Creating conversion operator: operator Zenject::ConventionBindInfo*
    constexpr operator Zenject::ConventionBindInfo*() const noexcept {
      return BindInfo;
    }
    // public System.Void .ctor(Zenject.ConventionBindInfo bindInfo)
    // Offset: 0x12C748C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionAssemblySelectionBinder* New_ctor(Zenject::ConventionBindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionAssemblySelectionBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionAssemblySelectionBinder*, creationType>(bindInfo)));
    }
    // protected Zenject.ConventionBindInfo get_BindInfo()
    // Offset: 0x12C74B8
    Zenject::ConventionBindInfo* get_BindInfo();
    // private System.Void set_BindInfo(Zenject.ConventionBindInfo value)
    // Offset: 0x12C74C0
    void set_BindInfo(Zenject::ConventionBindInfo* value);
    // public System.Void FromAllAssemblies()
    // Offset: 0x12C74C8
    void FromAllAssemblies();
    // public System.Void FromAssemblyContaining()
    // Offset: 0xFFFFFFFF
    template<class T>
    void FromAssemblyContaining() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionAssemblySelectionBinder::FromAssemblyContaining");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromAssemblyContaining", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method);
    }
    // public System.Void FromAssembliesContaining(params System.Type[] types)
    // Offset: 0x12C74CC
    void FromAssembliesContaining(::Array<System::Type*>* types);
    // Creating initializer_list -> params proxy for: System.Void FromAssembliesContaining(params System.Type[] types)
    void FromAssembliesContaining(std::initializer_list<System::Type*> types);
    // Creating TArgs -> initializer_list proxy for: System.Void FromAssembliesContaining(params System.Type[] types)
    template<class ...TParams>
    void FromAssembliesContaining(TParams&&... types) {
      FromAssembliesContaining({types...});
    }
    // public System.Void FromAssembliesContaining(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x12C74D0
    void FromAssembliesContaining(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // public System.Void FromThisAssembly()
    // Offset: 0x12C76A4
    void FromThisAssembly();
    // public System.Void FromAssembly(System.Reflection.Assembly assembly)
    // Offset: 0x12C7760
    void FromAssembly(System::Reflection::Assembly* assembly);
    // public System.Void FromAssemblies(params System.Reflection.Assembly[] assemblies)
    // Offset: 0x12C775C
    void FromAssemblies(::Array<System::Reflection::Assembly*>* assemblies);
    // Creating initializer_list -> params proxy for: System.Void FromAssemblies(params System.Reflection.Assembly[] assemblies)
    void FromAssemblies(std::initializer_list<System::Reflection::Assembly*> assemblies);
    // Creating TArgs -> initializer_list proxy for: System.Void FromAssemblies(params System.Reflection.Assembly[] assemblies)
    template<class ...TParams>
    void FromAssemblies(TParams&&... assemblies) {
      FromAssemblies({assemblies...});
    }
    // public System.Void FromAssemblies(System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> assemblies)
    // Offset: 0x12C75EC
    void FromAssemblies(System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly*>* assemblies);
    // public System.Void FromAssembliesWhere(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0x12C7880
    void FromAssembliesWhere(System::Func_2<System::Reflection::Assembly*, bool>* predicate);
  }; // Zenject.ConventionAssemblySelectionBinder
  #pragma pack(pop)
  static check_size<sizeof(ConventionAssemblySelectionBinder), 16 + sizeof(Zenject::ConventionBindInfo*)> __Zenject_ConventionAssemblySelectionBinderSizeCheck;
  static_assert(sizeof(ConventionAssemblySelectionBinder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionAssemblySelectionBinder*, "Zenject", "ConventionAssemblySelectionBinder");
