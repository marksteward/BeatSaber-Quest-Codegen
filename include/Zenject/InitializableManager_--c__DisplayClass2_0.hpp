// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InitializableManager
#include "Zenject/InitializableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IInitializable
  class IInitializable;
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InitializableManager/<>c__DisplayClass2_0
  // [CompilerGeneratedAttribute] Offset: D03CCC
  class InitializableManager::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public Zenject.IInitializable initializable
    // Size: 0x8
    // Offset: 0x10
    Zenject::IInitializable* initializable;
    // Field size check
    static_assert(sizeof(Zenject::IInitializable*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(Zenject::IInitializable* initializable_ = {}) noexcept : initializable{initializable_} {}
    // Creating conversion operator: operator Zenject::IInitializable*
    constexpr operator Zenject::IInitializable*() const noexcept {
      return initializable;
    }
    // System.Boolean <.ctor>b__0(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x1489DDC
    bool $_ctor$b__0(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x1489890
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializableManager::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InitializableManager::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializableManager::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // Zenject.InitializableManager/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(InitializableManager::$$c__DisplayClass2_0), 16 + sizeof(Zenject::IInitializable*)> __Zenject_InitializableManager_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(InitializableManager::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InitializableManager::$$c__DisplayClass2_0*, "Zenject", "InitializableManager/<>c__DisplayClass2_0");
