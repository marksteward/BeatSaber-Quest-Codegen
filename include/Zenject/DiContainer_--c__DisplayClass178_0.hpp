// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DiContainer/<>c__DisplayClass178_0
  // [CompilerGeneratedAttribute] Offset: D03ACC
  class DiContainer::$$c__DisplayClass178_0 : public ::Il2CppObject {
    public:
    // public Zenject.DiContainer <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // public System.Type contractType
    // Size: 0x8
    // Offset: 0x18
    System::Type* contractType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.Object identifier
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* identifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Type concreteType
    // Size: 0x8
    // Offset: 0x28
    System::Type* concreteType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass178_0
    $$c__DisplayClass178_0(Zenject::DiContainer* $$4__this_ = {}, System::Type* contractType_ = {}, ::Il2CppObject* identifier_ = {}, System::Type* concreteType_ = {}) noexcept : $$4__this{$$4__this_}, contractType{contractType_}, identifier{identifier_}, concreteType{concreteType_} {}
    // System.Boolean <UnbindId>b__0(Zenject.DiContainer/ProviderInfo x)
    // Offset: 0x147D160
    bool $UnbindId$b__0(Zenject::DiContainer::ProviderInfo* x);
    // public System.Void .ctor()
    // Offset: 0x147D158
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiContainer::$$c__DisplayClass178_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DiContainer::$$c__DisplayClass178_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiContainer::$$c__DisplayClass178_0*, creationType>()));
    }
  }; // Zenject.DiContainer/<>c__DisplayClass178_0
  #pragma pack(pop)
  static check_size<sizeof(DiContainer::$$c__DisplayClass178_0), 40 + sizeof(System::Type*)> __Zenject_DiContainer_$$c__DisplayClass178_0SizeCheck;
  static_assert(sizeof(DiContainer::$$c__DisplayClass178_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DiContainer::$$c__DisplayClass178_0*, "Zenject", "DiContainer/<>c__DisplayClass178_0");
