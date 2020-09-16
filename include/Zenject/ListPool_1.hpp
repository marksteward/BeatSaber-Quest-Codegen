// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticMemoryPool`1
#include "Zenject/StaticMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: Zenject.ListPool`1
  template<typename T>
  class ListPool_1 : public Zenject::StaticMemoryPool_1<System::Collections::Generic::List_1<T>*> {
    public:
    // Autogenerated static field getter
    // Get static field: static private readonly Zenject.ListPool`1<T> _instance
    static Zenject::ListPool_1<T>* _get__instance() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::ListPool_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "_instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly Zenject.ListPool`1<T> _instance
    static void _set__instance(Zenject::ListPool_1<T>* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "_instance", value));
    }
    // static public Zenject.ListPool`1<T> get_Instance()
    // Offset: 0xFFFFFFFF
    static Zenject::ListPool_1<T>* get_Instance() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ListPool_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), "get_Instance"));
    }
    // private System.Void OnDespawned(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFF
    void OnDespawned(System::Collections::Generic::List_1<T>* list) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", list));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ListPool_1<T>*>::get(), ".cctor"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ListPool_1<T>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<ListPool_1<T>*>());
    }
  }; // Zenject.ListPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ListPool_1, "Zenject", "ListPool`1");
#pragma pack(pop)
