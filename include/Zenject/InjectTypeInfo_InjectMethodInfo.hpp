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
  // Forward declaring type: ZenInjectMethod
  class ZenInjectMethod;
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  // Autogenerated type: Zenject.InjectTypeInfo/InjectMethodInfo
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D82460
  class InjectTypeInfo::InjectMethodInfo : public ::Il2CppObject {
    public:
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly Zenject.ZenInjectMethod Action
    // Size: 0x8
    // Offset: 0x18
    Zenject::ZenInjectMethod* Action;
    // Field size check
    static_assert(sizeof(Zenject::ZenInjectMethod*) == 0x8);
    // public readonly Zenject.InjectableInfo[] Parameters
    // Size: 0x8
    // Offset: 0x20
    ::Array<Zenject::InjectableInfo*>* Parameters;
    // Field size check
    static_assert(sizeof(::Array<Zenject::InjectableInfo*>*) == 0x8);
    // Creating value type constructor for type: InjectMethodInfo
    InjectMethodInfo(::Il2CppString* Name_ = {}, Zenject::ZenInjectMethod* Action_ = {}, ::Array<Zenject::InjectableInfo*>* Parameters_ = {}) noexcept : Name{Name_}, Action{Action_}, Parameters{Parameters_} {}
    // public System.Void .ctor(Zenject.ZenInjectMethod action, Zenject.InjectableInfo[] parameters, System.String name)
    // Offset: 0x19EEF8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectTypeInfo::InjectMethodInfo* New_ctor(Zenject::ZenInjectMethod* action, ::Array<Zenject::InjectableInfo*>* parameters, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectTypeInfo::InjectMethodInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectTypeInfo::InjectMethodInfo*, creationType>(action, parameters, name)));
    }
  }; // Zenject.InjectTypeInfo/InjectMethodInfo
  static check_size<sizeof(InjectTypeInfo::InjectMethodInfo), 32 + sizeof(::Array<Zenject::InjectableInfo*>*)> __Zenject_InjectTypeInfo_InjectMethodInfoSizeCheck;
  static_assert(sizeof(InjectTypeInfo::InjectMethodInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectTypeInfo::InjectMethodInfo*, "Zenject", "InjectTypeInfo/InjectMethodInfo");
#pragma pack(pop)
