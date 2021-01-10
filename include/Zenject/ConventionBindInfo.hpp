// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  // Autogenerated type: Zenject.ConventionBindInfo
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D91F10
  class ConventionBindInfo : public ::Il2CppObject {
    public:
    // Nested type: Zenject::ConventionBindInfo::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::ConventionBindInfo::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // private readonly System.Collections.Generic.List`1<System.Func`2<System.Type,System.Boolean>> _typeFilters
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Func_2<System::Type*, bool>*>* typeFilters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Func_2<System::Type*, bool>*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Func`2<System.Reflection.Assembly,System.Boolean>> _assemblyFilters
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Func_2<System::Reflection::Assembly*, bool>*>* assemblyFilters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Func_2<System::Reflection::Assembly*, bool>*>*) == 0x8);
    // Creating value type constructor for type: ConventionBindInfo
    ConventionBindInfo(System::Collections::Generic::List_1<System::Func_2<System::Type*, bool>*>* typeFilters_ = {}, System::Collections::Generic::List_1<System::Func_2<System::Reflection::Assembly*, bool>*>* assemblyFilters_ = {}) noexcept : typeFilters{typeFilters_}, assemblyFilters{assemblyFilters_} {}
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]> _assemblyTypeCache
    static System::Collections::Generic::Dictionary_2<System::Reflection::Assembly*, ::Array<System::Type*>*>* _get__assemblyTypeCache();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]> _assemblyTypeCache
    static void _set__assemblyTypeCache(System::Collections::Generic::Dictionary_2<System::Reflection::Assembly*, ::Array<System::Type*>*>* value);
    // public System.Void AddAssemblyFilter(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0x10F193C
    void AddAssemblyFilter(System::Func_2<System::Reflection::Assembly*, bool>* predicate);
    // public System.Void AddTypeFilter(System.Func`2<System.Type,System.Boolean> predicate)
    // Offset: 0x10F1AB0
    void AddTypeFilter(System::Func_2<System::Type*, bool>* predicate);
    // private System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> GetAllAssemblies()
    // Offset: 0x10F1B18
    System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly*>* GetAllAssemblies();
    // private System.Boolean ShouldIncludeAssembly(System.Reflection.Assembly assembly)
    // Offset: 0x10F1B3C
    bool ShouldIncludeAssembly(System::Reflection::Assembly* assembly);
    // private System.Boolean ShouldIncludeType(System.Type type)
    // Offset: 0x10F1C10
    bool ShouldIncludeType(System::Type* type);
    // private System.Type[] GetTypes(System.Reflection.Assembly assembly)
    // Offset: 0x10F1CE4
    ::Array<System::Type*>* GetTypes(System::Reflection::Assembly* assembly);
    // public System.Collections.Generic.List`1<System.Type> ResolveTypes()
    // Offset: 0x10EF22C
    System::Collections::Generic::List_1<System::Type*>* ResolveTypes();
    // static private System.Void .cctor()
    // Offset: 0x10F1DE4
    static void _cctor();
    // private System.Collections.Generic.IEnumerable`1<System.Type> <ResolveTypes>b__9_0(System.Reflection.Assembly assembly)
    // Offset: 0x10F1E5C
    System::Collections::Generic::IEnumerable_1<System::Type*>* $ResolveTypes$b__9_0(System::Reflection::Assembly* assembly);
    // public System.Void .ctor()
    // Offset: 0x10EF148
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionBindInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionBindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionBindInfo*, creationType>()));
    }
  }; // Zenject.ConventionBindInfo
  static check_size<sizeof(ConventionBindInfo), 24 + sizeof(System::Collections::Generic::List_1<System::Func_2<System::Reflection::Assembly*, bool>*>*)> __Zenject_ConventionBindInfoSizeCheck;
  static_assert(sizeof(ConventionBindInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionBindInfo*, "Zenject", "ConventionBindInfo");
#pragma pack(pop)
