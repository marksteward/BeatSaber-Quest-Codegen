// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PrefabBindingFinalizer
#include "Zenject/PrefabBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: PrefabInstantiatorCached
  class PrefabInstantiatorCached;
  // Forward declaring type: IProvider
  class IProvider;
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_1
  // [CompilerGeneratedAttribute] Offset: DDE1CC
  class PrefabBindingFinalizer::$$c__DisplayClass6_1 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabInstantiatorCached prefabCreator
    // Size: 0x8
    // Offset: 0x10
    Zenject::PrefabInstantiatorCached* prefabCreator;
    // Field size check
    static_assert(sizeof(Zenject::PrefabInstantiatorCached*) == 0x8);
    // public Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_1
    $$c__DisplayClass6_1(Zenject::PrefabInstantiatorCached* prefabCreator_ = {}, Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_0* CS$$$8__locals1_ = {}) noexcept : prefabCreator{prefabCreator_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // Zenject.IProvider <FinalizeBindingSelf>b__1(Zenject.DiContainer _, System.Type contractType)
    // Offset: 0x16DF4E0
    Zenject::IProvider* $FinalizeBindingSelf$b__1(Zenject::DiContainer* _, System::Type* contractType);
    // public System.Void .ctor()
    // Offset: 0x16DF210
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabBindingFinalizer::$$c__DisplayClass6_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabBindingFinalizer::$$c__DisplayClass6_1*, creationType>()));
    }
  }; // Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_1
  #pragma pack(pop)
  static check_size<sizeof(PrefabBindingFinalizer::$$c__DisplayClass6_1), 24 + sizeof(Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_0*)> __Zenject_PrefabBindingFinalizer_$$c__DisplayClass6_1SizeCheck;
  static_assert(sizeof(PrefabBindingFinalizer::$$c__DisplayClass6_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_1*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass6_1");
// Writing MetadataGetter for method: Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_1::$FinalizeBindingSelf$b__1
// Il2CppName: <FinalizeBindingSelf>b__1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
