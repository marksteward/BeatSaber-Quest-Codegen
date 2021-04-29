// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PoolableManager
#include "Zenject/PoolableManager.hpp"
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
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PoolableManager/<>c__DisplayClass2_0
  // [CompilerGeneratedAttribute] Offset: D03CFC
  class PoolableManager::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public Zenject.PoolableManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::PoolableManager* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::PoolableManager*) == 0x8);
    // public System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(Zenject::PoolableManager* $$4__this_ = {}, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities_ = {}) noexcept : $$4__this{$$4__this_}, priorities{priorities_} {}
    // Zenject.PoolableManager/PoolableInfo <.ctor>b__0(Zenject.IPoolable x)
    // Offset: 0x152FE34
    Zenject::PoolableManager::PoolableInfo $_ctor$b__0(Zenject::IPoolable* x);
    // public System.Void .ctor()
    // Offset: 0x152F948
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableManager::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableManager::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableManager::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // Zenject.PoolableManager/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(PoolableManager::$$c__DisplayClass2_0), 24 + sizeof(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>*)> __Zenject_PoolableManager_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(PoolableManager::$$c__DisplayClass2_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolableManager::$$c__DisplayClass2_0*, "Zenject", "PoolableManager/<>c__DisplayClass2_0");
