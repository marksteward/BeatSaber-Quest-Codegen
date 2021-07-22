// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticMemoryPool`1
#include "Zenject/StaticMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: Zenject.ListPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ListPool_1 : public Zenject::StaticMemoryPool_1<System::Collections::Generic::List_1<T>*> {
    public:
    // Creating value type constructor for type: ListPool_1
    ListPool_1() noexcept {}
    // Autogenerated static field getter
    // Get static field: static private readonly Zenject.ListPool`1<T> _instance
    static Zenject::ListPool_1<T>* _get__instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ListPool_1::_get__instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::ListPool_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "_instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly Zenject.ListPool`1<T> _instance
    static void _set__instance(Zenject::ListPool_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ListPool_1::_set__instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "_instance", value));
    }
    // static public Zenject.ListPool`1<T> get_Instance()
    // Offset: 0xFFFFFFFF
    static Zenject::ListPool_1<T>* get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ListPool_1::get_Instance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ListPool_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ListPool_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // private System.Void OnDespawned(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFF
    void OnDespawned(System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ListPool_1::OnDespawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, list);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListPool_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ListPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListPool_1<T>*, creationType>()));
    }
  }; // Zenject.ListPool`1
  // Could not write size check! Type: Zenject.ListPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ListPool_1, "Zenject", "ListPool`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
