// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IDespawnableMemoryPool`1
#include "Zenject/IDespawnableMemoryPool_1.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.StaticMemoryPoolBaseBase`1
  // [NoReflectionBakingAttribute] Offset: D023A4
  template<typename TValue>
  class StaticMemoryPoolBaseBase_1 : public ::Il2CppObject/*, public Zenject::IDespawnableMemoryPool_1<TValue>, public System::IDisposable*/ {
    public:
    // private readonly System.Collections.Generic.Stack`1<TValue> _stack
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Stack_1<TValue>* stack;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Stack_1<TValue>*) == 0x8);
    // private System.Action`1<TValue> _onDespawnedMethod
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<TValue>* onDespawnedMethod;
    // Field size check
    static_assert(sizeof(System::Action_1<TValue>*) == 0x8);
    // private System.Int32 _activeCount
    // Size: 0x4
    // Offset: 0x0
    int activeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StaticMemoryPoolBaseBase_1
    StaticMemoryPoolBaseBase_1(System::Collections::Generic::Stack_1<TValue>* stack_ = {}, System::Action_1<TValue>* onDespawnedMethod_ = {}, int activeCount_ = {}) noexcept : stack{stack_}, onDespawnedMethod{onDespawnedMethod_}, activeCount{activeCount_} {}
    // Creating interface conversion operator: operator Zenject::IDespawnableMemoryPool_1<TValue>
    operator Zenject::IDespawnableMemoryPool_1<TValue>() noexcept {
      return *reinterpret_cast<Zenject::IDespawnableMemoryPool_1<TValue>*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticMemoryPoolBaseBase_1<TValue>* New_ctor(System::Action_1<TValue>* onDespawnedMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticMemoryPoolBaseBase_1<TValue>*, creationType>(onDespawnedMethod)));
    }
    // public System.Void set_OnDespawnedMethod(System.Action`1<TValue> value)
    // Offset: 0xFFFFFFFF
    void set_OnDespawnedMethod(System::Action_1<TValue>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::set_OnDespawnedMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_OnDespawnedMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Int32 get_NumTotal()
    // Offset: 0xFFFFFFFF
    int get_NumTotal() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::get_NumTotal");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NumTotal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_NumActive()
    // Offset: 0xFFFFFFFF
    int get_NumActive() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::get_NumActive");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NumActive", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_NumInactive()
    // Offset: 0xFFFFFFFF
    int get_NumInactive() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::get_NumInactive");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NumInactive", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Type get_ItemType()
    // Offset: 0xFFFFFFFF
    System::Type* get_ItemType() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::get_ItemType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ItemType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method);
    }
    // public System.Void Resize(System.Int32 desiredPoolSize)
    // Offset: 0xFFFFFFFF
    void Resize(int desiredPoolSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::Resize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Resize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(desiredPoolSize)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, desiredPoolSize);
    }
    // private System.Void ResizeInternal(System.Int32 desiredPoolSize)
    // Offset: 0xFFFFFFFF
    void ResizeInternal(int desiredPoolSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::ResizeInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ResizeInternal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(desiredPoolSize)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, desiredPoolSize);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void ClearActiveCount()
    // Offset: 0xFFFFFFFF
    void ClearActiveCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::ClearActiveCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ClearActiveCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void ShrinkBy(System.Int32 numToRemove)
    // Offset: 0xFFFFFFFF
    void ShrinkBy(int numToRemove) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::ShrinkBy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ShrinkBy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(numToRemove)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, numToRemove);
    }
    // public System.Void ExpandBy(System.Int32 numToAdd)
    // Offset: 0xFFFFFFFF
    void ExpandBy(int numToAdd) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::ExpandBy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ExpandBy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(numToAdd)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, numToAdd);
    }
    // protected TValue SpawnInternal()
    // Offset: 0xFFFFFFFF
    TValue SpawnInternal() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::SpawnInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SpawnInternal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
    }
    // private System.Void Zenject.IMemoryPool.Despawn(System.Object item)
    // Offset: 0xFFFFFFFF
    void Zenject_IMemoryPool_Despawn(::Il2CppObject* item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::Zenject.IMemoryPool.Despawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Zenject.IMemoryPool.Despawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void Despawn(TValue element)
    // Offset: 0xFFFFFFFF
    void Despawn(TValue element) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::Despawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Despawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(element)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, element);
    }
    // protected TValue Alloc()
    // Offset: 0xFFFFFFFF
    TValue Alloc() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBaseBase_1::Alloc");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Alloc", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
    }
  }; // Zenject.StaticMemoryPoolBaseBase`1
  // Could not write size check! Type: Zenject.StaticMemoryPoolBaseBase`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPoolBaseBase_1, "Zenject", "StaticMemoryPoolBaseBase`1");
