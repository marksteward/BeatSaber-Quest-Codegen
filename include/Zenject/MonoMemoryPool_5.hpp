// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPool`5
#include "Zenject/MemoryPool_5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: Zenject.MonoMemoryPool`5
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class MonoMemoryPool_5 : public Zenject::MemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TValue>> || std::is_convertible_v<TValue, UnityEngine::Component*>));
    public:
    // private UnityEngine.Transform _originalParent
    // Offset: 0x0
    UnityEngine::Transform* originalParent;
    // Creating conversion operator: operator UnityEngine::Transform*
    constexpr operator UnityEngine::Transform*() const noexcept {
      return originalParent;
    }
    // protected System.Void OnCreated(TValue item)
    // Offset: 0xFFFFFFFF
    void OnCreated(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnCreated", item));
    }
    // protected System.Void OnDestroyed(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDestroyed(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroyed", item));
    }
    // protected System.Void OnSpawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSpawned", item));
    }
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDespawned(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`5
    // Base method: System.Void MemoryPool`5::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<MonoMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>()));
    }
  }; // Zenject.MonoMemoryPool`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoMemoryPool_5, "Zenject", "MonoMemoryPool`5");
#pragma pack(pop)
