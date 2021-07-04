// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo
  // [NoReflectionBakingAttribute] Offset: DDE76C
  class ReflectionTypeInfo::InjectParameterInfo : public ::Il2CppObject {
    public:
    // public readonly System.Reflection.ParameterInfo ParameterInfo
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::ParameterInfo* ParameterInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::ParameterInfo*) == 0x8);
    // public readonly Zenject.InjectableInfo InjectableInfo
    // Size: 0x8
    // Offset: 0x18
    Zenject::InjectableInfo* InjectableInfo;
    // Field size check
    static_assert(sizeof(Zenject::InjectableInfo*) == 0x8);
    // Creating value type constructor for type: InjectParameterInfo
    InjectParameterInfo(System::Reflection::ParameterInfo* ParameterInfo_ = {}, Zenject::InjectableInfo* InjectableInfo_ = {}) noexcept : ParameterInfo{ParameterInfo_}, InjectableInfo{InjectableInfo_} {}
    // public System.Void .ctor(System.Reflection.ParameterInfo parameterInfo, Zenject.InjectableInfo injectableInfo)
    // Offset: 0x16439F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeInfo::InjectParameterInfo* New_ctor(System::Reflection::ParameterInfo* parameterInfo, Zenject::InjectableInfo* injectableInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeInfo::InjectParameterInfo*, creationType>(parameterInfo, injectableInfo)));
    }
  }; // Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeInfo::InjectParameterInfo), 24 + sizeof(Zenject::InjectableInfo*)> __Zenject_Internal_ReflectionTypeInfo_InjectParameterInfoSizeCheck;
  static_assert(sizeof(ReflectionTypeInfo::InjectParameterInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectParameterInfo");
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
