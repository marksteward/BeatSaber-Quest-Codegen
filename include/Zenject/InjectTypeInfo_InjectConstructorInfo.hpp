// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenFactoryMethod
  class ZenFactoryMethod;
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  // Autogenerated type: Zenject.InjectTypeInfo/InjectConstructorInfo
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D82450
  class InjectTypeInfo::InjectConstructorInfo : public ::Il2CppObject {
    public:
    // public readonly Zenject.ZenFactoryMethod Factory
    // Size: 0x8
    // Offset: 0x10
    Zenject::ZenFactoryMethod* Factory;
    // Field size check
    static_assert(sizeof(Zenject::ZenFactoryMethod*) == 0x8);
    // public readonly Zenject.InjectableInfo[] Parameters
    // Size: 0x8
    // Offset: 0x18
    ::Array<Zenject::InjectableInfo*>* Parameters;
    // Field size check
    static_assert(sizeof(::Array<Zenject::InjectableInfo*>*) == 0x8);
    // Creating value type constructor for type: InjectConstructorInfo
    InjectConstructorInfo(Zenject::ZenFactoryMethod* Factory_ = {}, ::Array<Zenject::InjectableInfo*>* Parameters_ = {}) noexcept : Factory{Factory_}, Parameters{Parameters_} {}
    // public System.Void .ctor(Zenject.ZenFactoryMethod factory, Zenject.InjectableInfo[] parameters)
    // Offset: 0x19EEEEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectTypeInfo::InjectConstructorInfo* New_ctor(Zenject::ZenFactoryMethod* factory, ::Array<Zenject::InjectableInfo*>* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectTypeInfo::InjectConstructorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectTypeInfo::InjectConstructorInfo*, creationType>(factory, parameters)));
    }
  }; // Zenject.InjectTypeInfo/InjectConstructorInfo
  static check_size<sizeof(InjectTypeInfo::InjectConstructorInfo), 24 + sizeof(::Array<Zenject::InjectableInfo*>*)> __Zenject_InjectTypeInfo_InjectConstructorInfoSizeCheck;
  static_assert(sizeof(InjectTypeInfo::InjectConstructorInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectTypeInfo::InjectConstructorInfo*, "Zenject", "InjectTypeInfo/InjectConstructorInfo");
#pragma pack(pop)
