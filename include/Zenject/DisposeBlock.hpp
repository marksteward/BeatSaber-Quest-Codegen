// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: StaticMemoryPool`1<TValue>
  template<typename TValue>
  class StaticMemoryPool_1;
  // Forward declaring type: IDespawnableMemoryPool`1<TValue>
  template<typename TValue>
  class IDespawnableMemoryPool_1;
  // Forward declaring type: IMemoryPool`1<TValue>
  template<typename TValue>
  class IMemoryPool_1;
  // Forward declaring type: IMemoryPool`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class IMemoryPool_2;
  // Forward declaring type: IMemoryPool`3<TParam1, TParam2, TValue>
  template<typename TParam1, typename TParam2, typename TValue>
  class IMemoryPool_3;
  // Forward declaring type: IMemoryPool`4<TParam1, TParam2, TParam3, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class IMemoryPool_4;
  // Forward declaring type: IMemoryPool`5<TParam1, TParam2, TParam3, TParam4, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class IMemoryPool_5;
  // Forward declaring type: IMemoryPool`6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class IMemoryPool_6;
  // Forward declaring type: IMemoryPool`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
  class IMemoryPool_7;
  // Forward declaring type: IMemoryPool`8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
  class IMemoryPool_8;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DisposeBlock
  // [NoReflectionBakingAttribute] Offset: DDD444
  class DisposeBlock : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: Zenject::DisposeBlock::SpawnedObjectPoolPair
    struct SpawnedObjectPoolPair;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Zenject.DisposeBlock/SpawnedObjectPoolPair
    struct SpawnedObjectPoolPair/*, public System::ValueType*/ {
      public:
      // public Zenject.IMemoryPool Pool
      // Size: 0x8
      // Offset: 0x0
      Zenject::IMemoryPool* Pool;
      // Field size check
      static_assert(sizeof(Zenject::IMemoryPool*) == 0x8);
      // public System.Object Object
      // Size: 0x8
      // Offset: 0x8
      ::Il2CppObject* Object;
      // Field size check
      static_assert(sizeof(::Il2CppObject*) == 0x8);
      // Creating value type constructor for type: SpawnedObjectPoolPair
      constexpr SpawnedObjectPoolPair(Zenject::IMemoryPool* Pool_ = {}, ::Il2CppObject* Object_ = {}) noexcept : Pool{Pool_}, Object{Object_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // Zenject.DisposeBlock/SpawnedObjectPoolPair
    #pragma pack(pop)
    static check_size<sizeof(DisposeBlock::SpawnedObjectPoolPair), 8 + sizeof(::Il2CppObject*)> __Zenject_DisposeBlock_SpawnedObjectPoolPairSizeCheck;
    static_assert(sizeof(DisposeBlock::SpawnedObjectPoolPair) == 0x10);
    // private System.Collections.Generic.List`1<System.IDisposable> _disposables
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::IDisposable*>* disposables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::IDisposable*>*) == 0x8);
    // private System.Collections.Generic.List`1<Zenject.DisposeBlock/SpawnedObjectPoolPair> _objectPoolPairs
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::DisposeBlock::SpawnedObjectPoolPair>* objectPoolPairs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::DisposeBlock::SpawnedObjectPoolPair>*) == 0x8);
    // Creating value type constructor for type: DisposeBlock
    DisposeBlock(System::Collections::Generic::List_1<System::IDisposable*>* disposables_ = {}, System::Collections::Generic::List_1<Zenject::DisposeBlock::SpawnedObjectPoolPair>* objectPoolPairs_ = {}) noexcept : disposables{disposables_}, objectPoolPairs{objectPoolPairs_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.DisposeBlock> _pool
    static Zenject::StaticMemoryPool_1<Zenject::DisposeBlock*>* _get__pool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.DisposeBlock> _pool
    static void _set__pool(Zenject::StaticMemoryPool_1<Zenject::DisposeBlock*>* value);
    // static private System.Void OnSpawned(Zenject.DisposeBlock that)
    // Offset: 0x16345F4
    static void OnSpawned(Zenject::DisposeBlock* that);
    // static private System.Void OnDespawned(Zenject.DisposeBlock that)
    // Offset: 0x163462C
    static void OnDespawned(Zenject::DisposeBlock* that);
    // private System.Void LazyInitializeDisposableList()
    // Offset: 0x1634890
    void LazyInitializeDisposableList();
    // public System.Void AddRange(System.Collections.Generic.IList`1<T> disposables)
    // Offset: 0xFFFFFFFF
    template<class T>
    void AddRange(System::Collections::Generic::IList_1<T>* disposables) {
      static_assert(std::is_base_of_v<System::IDisposable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::AddRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddRange", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(disposables)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, disposables);
    }
    // public System.Void Add(System.IDisposable disposable)
    // Offset: 0x1634924
    void Add(System::IDisposable* disposable);
    // public System.Void Remove(System.IDisposable disposable)
    // Offset: 0x16349C0
    void Remove(System::IDisposable* disposable);
    // private System.Void StoreSpawnedObject(T obj, Zenject.IDespawnableMemoryPool`1<T> pool)
    // Offset: 0xFFFFFFFF
    template<class T>
    void StoreSpawnedObject(T obj, Zenject::IDespawnableMemoryPool_1<T>* pool) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::StoreSpawnedObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "StoreSpawnedObject", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj), ::il2cpp_utils::ExtractType(pool)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, obj, pool);
    }
    // public T Spawn(Zenject.IMemoryPool`1<T> pool)
    // Offset: 0xFFFFFFFF
    template<class T>
    T Spawn(Zenject::IMemoryPool_1<T>* pool) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method, pool);
    }
    // public TValue Spawn(Zenject.IMemoryPool`2<TParam1,TValue> pool, TParam1 p1)
    // Offset: 0xFFFFFFFF
    template<class TValue, class TParam1>
    TValue Spawn(Zenject::IMemoryPool_2<TParam1, TValue>* pool, TParam1 p1) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool), ::il2cpp_utils::ExtractType(p1)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___generic__method, pool, p1);
    }
    // public TValue Spawn(Zenject.IMemoryPool`3<TParam1,TParam2,TValue> pool, TParam1 p1, TParam2 p2)
    // Offset: 0xFFFFFFFF
    template<class TValue, class TParam1, class TParam2>
    TValue Spawn(Zenject::IMemoryPool_3<TParam1, TParam2, TValue>* pool, TParam1 p1, TParam2 p2) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool), ::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___generic__method, pool, p1, p2);
    }
    // public TValue Spawn(Zenject.IMemoryPool`4<TParam1,TParam2,TParam3,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3)
    // Offset: 0xFFFFFFFF
    template<class TValue, class TParam1, class TParam2, class TParam3>
    TValue Spawn(Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool), ::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___generic__method, pool, p1, p2, p3);
    }
    // public TValue Spawn(Zenject.IMemoryPool`5<TParam1,TParam2,TParam3,TParam4,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xFFFFFFFF
    template<class TValue, class TParam1, class TParam2, class TParam3, class TParam4>
    TValue Spawn(Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool), ::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___generic__method, pool, p1, p2, p3, p4);
    }
    // public TValue Spawn(Zenject.IMemoryPool`6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    // Offset: 0xFFFFFFFF
    template<class TValue, class TParam1, class TParam2, class TParam3, class TParam4, class TParam5>
    TValue Spawn(Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool), ::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___generic__method, pool, p1, p2, p3, p4, p5);
    }
    // public TValue Spawn(Zenject.IMemoryPool`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6)
    // Offset: 0xFFFFFFFF
    template<class TValue, class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6>
    TValue Spawn(Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool), ::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5), ::il2cpp_utils::ExtractType(p6)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___generic__method, pool, p1, p2, p3, p4, p5, p6);
    }
    // public TValue Spawn(Zenject.IMemoryPool`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7)
    // Offset: 0xFFFFFFFF
    template<class TValue, class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6, class TParam7>
    TValue Spawn(Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool), ::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5), ::il2cpp_utils::ExtractType(p6), ::il2cpp_utils::ExtractType(p7)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___generic__method, pool, p1, p2, p3, p4, p5, p6, p7);
    }
    // public System.Collections.Generic.List`1<T> SpawnList(System.Collections.Generic.IEnumerable`1<T> elements)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Collections::Generic::List_1<T>* SpawnList(System::Collections::Generic::IEnumerable_1<T>* elements) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::SpawnList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SpawnList", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(elements)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(this, ___generic__method, elements);
    }
    // public System.Collections.Generic.List`1<T> SpawnList()
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Collections::Generic::List_1<T>* SpawnList() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::SpawnList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SpawnList", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(this, ___generic__method);
    }
    // static public Zenject.DisposeBlock Spawn()
    // Offset: 0x1634A2C
    static Zenject::DisposeBlock* Spawn();
    // public System.Void Dispose()
    // Offset: 0x1634AA8
    void Dispose();
    // static private System.Void .cctor()
    // Offset: 0x1634B34
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1634B2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposeBlock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposeBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposeBlock*, creationType>()));
    }
  }; // Zenject.DisposeBlock
  #pragma pack(pop)
  static check_size<sizeof(DisposeBlock), 24 + sizeof(System::Collections::Generic::List_1<Zenject::DisposeBlock::SpawnedObjectPoolPair>*)> __Zenject_DisposeBlockSizeCheck;
  static_assert(sizeof(DisposeBlock) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposeBlock*, "Zenject", "DisposeBlock");
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposeBlock::SpawnedObjectPoolPair, "Zenject", "DisposeBlock/SpawnedObjectPoolPair");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DisposeBlock::OnSpawned
// Il2CppName: OnSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::DisposeBlock*)>(&Zenject::DisposeBlock::OnSpawned)> {
  static const MethodInfo* get() {
    static auto* that = &::il2cpp_utils::GetClassFromName("Zenject", "DisposeBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposeBlock*), "OnSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{that});
  }
};
// Writing MetadataGetter for method: Zenject::DisposeBlock::OnDespawned
// Il2CppName: OnDespawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::DisposeBlock*)>(&Zenject::DisposeBlock::OnDespawned)> {
  static const MethodInfo* get() {
    static auto* that = &::il2cpp_utils::GetClassFromName("Zenject", "DisposeBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposeBlock*), "OnDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{that});
  }
};
// Writing MetadataGetter for method: Zenject::DisposeBlock::LazyInitializeDisposableList
// Il2CppName: LazyInitializeDisposableList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposeBlock::*)()>(&Zenject::DisposeBlock::LazyInitializeDisposableList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposeBlock*), "LazyInitializeDisposableList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DisposeBlock::AddRange
// Il2CppName: AddRange
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposeBlock::*)(System::IDisposable*)>(&Zenject::DisposeBlock::Add)> {
  static const MethodInfo* get() {
    static auto* disposable = &::il2cpp_utils::GetClassFromName("System", "IDisposable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposeBlock*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposable});
  }
};
// Writing MetadataGetter for method: Zenject::DisposeBlock::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposeBlock::*)(System::IDisposable*)>(&Zenject::DisposeBlock::Remove)> {
  static const MethodInfo* get() {
    static auto* disposable = &::il2cpp_utils::GetClassFromName("System", "IDisposable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposeBlock*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposable});
  }
};
// Writing MetadataGetter for method: Zenject::DisposeBlock::StoreSpawnedObject
// Il2CppName: StoreSpawnedObject
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Spawn
// Il2CppName: Spawn
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Spawn
// Il2CppName: Spawn
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Spawn
// Il2CppName: Spawn
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Spawn
// Il2CppName: Spawn
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Spawn
// Il2CppName: Spawn
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Spawn
// Il2CppName: Spawn
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Spawn
// Il2CppName: Spawn
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Spawn
// Il2CppName: Spawn
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::SpawnList
// Il2CppName: SpawnList
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::SpawnList
// Il2CppName: SpawnList
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::DisposeBlock::Spawn
// Il2CppName: Spawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DisposeBlock* (*)()>(&Zenject::DisposeBlock::Spawn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposeBlock*), "Spawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DisposeBlock::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposeBlock::*)()>(&Zenject::DisposeBlock::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposeBlock*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DisposeBlock::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::DisposeBlock::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposeBlock*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DisposeBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
