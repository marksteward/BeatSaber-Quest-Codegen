// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TickableManager
#include "Zenject/TickableManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ITickable
  class ITickable;
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.TickableManager/<>c__DisplayClass18_0
  class TickableManager::$$c__DisplayClass18_0 : public ::Il2CppObject {
    public:
    // public Zenject.ITickable tickable
    // Offset: 0x10
    Zenject::ITickable* tickable;
    // Creating conversion operator: operator Zenject::ITickable*
    constexpr operator Zenject::ITickable*() const {
      return tickable;
    }
    // System.Boolean <InitTickables>b__1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0xFD58E0
    bool $InitTickables$b__1(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0xFD5434
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TickableManager::$$c__DisplayClass18_0* New_ctor();
  }; // Zenject.TickableManager/<>c__DisplayClass18_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickableManager::$$c__DisplayClass18_0*, "Zenject", "TickableManager/<>c__DisplayClass18_0");
#pragma pack(pop)
