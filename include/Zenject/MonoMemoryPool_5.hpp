// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MemoryPool`5
#include "Zenject/MemoryPool_5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MonoMemoryPool`5
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class MonoMemoryPool_5 : public Zenject::MemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue> {
    public:
    // private UnityEngine.Transform _originalParent
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Transform* originalParent;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: MonoMemoryPool_5
    MonoMemoryPool_5(UnityEngine::Transform* originalParent_ = {}) noexcept : originalParent{originalParent_} {}
    // Creating conversion operator: operator UnityEngine::Transform*
    constexpr operator UnityEngine::Transform*() const noexcept {
      return originalParent;
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Transform _originalParent
    UnityEngine::Transform* _get__originalParent() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoMemoryPool_5::_get__originalParent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_originalParent"))->offset;
      return *reinterpret_cast<UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private UnityEngine.Transform _originalParent
    void _set__originalParent(UnityEngine::Transform* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoMemoryPool_5::_set__originalParent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_originalParent"))->offset;
      *reinterpret_cast<UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // protected System.Void OnCreated(TValue item)
    // Offset: 0xFFFFFFFF
    void OnCreated(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoMemoryPool_5::OnCreated");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnCreated", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // protected System.Void OnDestroyed(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDestroyed(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoMemoryPool_5::OnDestroyed");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDestroyed", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // protected System.Void OnSpawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoMemoryPool_5::OnSpawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnSpawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDespawned(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoMemoryPool_5::OnDespawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`5
    // Base method: System.Void MemoryPool_5::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoMemoryPool_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*, creationType>()));
    }
  }; // Zenject.MonoMemoryPool`5
  // Could not write size check! Type: Zenject.MonoMemoryPool`5 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoMemoryPool_5, "Zenject", "MonoMemoryPool`5");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
