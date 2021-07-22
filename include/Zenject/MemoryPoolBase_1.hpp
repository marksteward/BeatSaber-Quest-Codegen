// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.IValidatable
#include "Zenject/IValidatable.hpp"
// Including type: Zenject.IMemoryPool
#include "Zenject/IMemoryPool.hpp"
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
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IFactory`1<TValue>
  template<typename TValue>
  class IFactory_1;
  // Forward declaring type: MemoryPoolSettings
  class MemoryPoolSettings;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MemoryPoolBase`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [ZenjectAllowDuringValidationAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class MemoryPoolBase_1 : public ::Il2CppObject/*, public System::IDisposable, public Zenject::IValidatable, public Zenject::IMemoryPool*/ {
    public:
    // private System.Collections.Generic.Stack`1<TContract> _inactiveItems
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Stack_1<TContract>* inactiveItems;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Stack_1<TContract>*) == 0x8);
    // private Zenject.IFactory`1<TContract> _factory
    // Size: 0x8
    // Offset: 0x0
    Zenject::IFactory_1<TContract>* factory;
    // Field size check
    static_assert(sizeof(Zenject::IFactory_1<TContract>*) == 0x8);
    // private Zenject.MemoryPoolSettings _settings
    // Size: 0x8
    // Offset: 0x0
    Zenject::MemoryPoolSettings* settings;
    // Field size check
    static_assert(sizeof(Zenject::MemoryPoolSettings*) == 0x8);
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private System.Int32 _activeCount
    // Size: 0x4
    // Offset: 0x0
    int activeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MemoryPoolBase_1
    MemoryPoolBase_1(System::Collections::Generic::Stack_1<TContract>* inactiveItems_ = {}, Zenject::IFactory_1<TContract>* factory_ = {}, Zenject::MemoryPoolSettings* settings_ = {}, Zenject::DiContainer* container_ = {}, int activeCount_ = {}) noexcept : inactiveItems{inactiveItems_}, factory{factory_}, settings{settings_}, container{container_}, activeCount{activeCount_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IValidatable
    operator Zenject::IValidatable() noexcept {
      return *reinterpret_cast<Zenject::IValidatable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IMemoryPool
    operator Zenject::IMemoryPool() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool*>(this);
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.IEnumerable`1<TContract> get_InactiveItems()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<TContract>* get_InactiveItems() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::get_InactiveItems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_InactiveItems", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TContract>*, false>(this, ___internal__method);
    }
    // public System.Int32 get_NumTotal()
    // Offset: 0xFFFFFFFF
    int get_NumTotal() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::get_NumTotal");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NumTotal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_NumInactive()
    // Offset: 0xFFFFFFFF
    int get_NumInactive() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::get_NumInactive");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NumInactive", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_NumActive()
    // Offset: 0xFFFFFFFF
    int get_NumActive() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::get_NumActive");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NumActive", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Type get_ItemType()
    // Offset: 0xFFFFFFFF
    System::Type* get_ItemType() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::get_ItemType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ItemType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method);
    }
    // private System.Void Construct(Zenject.IFactory`1<TContract> factory, Zenject.DiContainer container, Zenject.MemoryPoolSettings settings)
    // Offset: 0xFFFFFFFF
    void Construct(Zenject::IFactory_1<TContract>* factory, Zenject::DiContainer* container, Zenject::MemoryPoolSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::Construct");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Construct", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(factory), ::il2cpp_utils::ExtractType(container), ::il2cpp_utils::ExtractType(settings)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, factory, container, settings);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void Zenject.IMemoryPool.Despawn(System.Object item)
    // Offset: 0xFFFFFFFF
    void Zenject_IMemoryPool_Despawn(::Il2CppObject* item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::Zenject.IMemoryPool.Despawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Zenject.IMemoryPool.Despawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void Despawn(TContract item)
    // Offset: 0xFFFFFFFF
    void Despawn(TContract item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::Despawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Despawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // private TContract AllocNew()
    // Offset: 0xFFFFFFFF
    TContract AllocNew() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::AllocNew");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AllocNew", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TContract, false>(this, ___internal__method);
    }
    // private System.Void Zenject.IValidatable.Validate()
    // Offset: 0xFFFFFFFF
    void Zenject_IValidatable_Validate() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::Zenject.IValidatable.Validate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Zenject.IValidatable.Validate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void ShrinkBy(System.Int32 numToRemove)
    // Offset: 0xFFFFFFFF
    void ShrinkBy(int numToRemove) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::ShrinkBy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ShrinkBy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(numToRemove)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, numToRemove);
    }
    // public System.Void ExpandBy(System.Int32 numToAdd)
    // Offset: 0xFFFFFFFF
    void ExpandBy(int numToAdd) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::ExpandBy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ExpandBy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(numToAdd)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, numToAdd);
    }
    // protected TContract GetInternal()
    // Offset: 0xFFFFFFFF
    TContract GetInternal() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::GetInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetInternal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TContract, false>(this, ___internal__method);
    }
    // public System.Void Resize(System.Int32 desiredPoolSize)
    // Offset: 0xFFFFFFFF
    void Resize(int desiredPoolSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::Resize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Resize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(desiredPoolSize)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, desiredPoolSize);
    }
    // private System.Void ExpandPool()
    // Offset: 0xFFFFFFFF
    void ExpandPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::ExpandPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ExpandPool", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnDespawned(TContract item)
    // Offset: 0xFFFFFFFF
    void OnDespawned(TContract item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::OnDespawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // protected System.Void OnSpawned(TContract item)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TContract item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::OnSpawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnSpawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // protected System.Void OnCreated(TContract item)
    // Offset: 0xFFFFFFFF
    void OnCreated(TContract item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::OnCreated");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnCreated", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // protected System.Void OnDestroyed(TContract item)
    // Offset: 0xFFFFFFFF
    void OnDestroyed(TContract item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::OnDestroyed");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDestroyed", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolBase_1<TContract>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolBase_1<TContract>*, creationType>()));
    }
  }; // Zenject.MemoryPoolBase`1
  // Could not write size check! Type: Zenject.MemoryPoolBase`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolBase_1, "Zenject", "MemoryPoolBase`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
