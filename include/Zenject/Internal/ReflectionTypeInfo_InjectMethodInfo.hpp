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
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D940D8
  class ReflectionTypeInfo::InjectMethodInfo : public ::Il2CppObject {
    public:
    // public readonly System.Reflection.MethodInfo MethodInfo
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::MethodInfo* MethodInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo> Parameters
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>* Parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>*) == 0x8);
    // Creating value type constructor for type: InjectMethodInfo
    InjectMethodInfo(System::Reflection::MethodInfo* MethodInfo_ = {}, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>* Parameters_ = {}) noexcept : MethodInfo{MethodInfo_}, Parameters{Parameters_} {}
    // public System.Void .ctor(System.Reflection.MethodInfo methodInfo, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo> parameters)
    // Offset: 0x12A43F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeInfo::InjectMethodInfo* New_ctor(System::Reflection::MethodInfo* methodInfo, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeInfo::InjectMethodInfo*, creationType>(methodInfo, parameters)));
    }
  }; // Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo
  static check_size<sizeof(ReflectionTypeInfo::InjectMethodInfo), 24 + sizeof(System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>*)> __Zenject_Internal_ReflectionTypeInfo_InjectMethodInfoSizeCheck;
  static_assert(sizeof(ReflectionTypeInfo::InjectMethodInfo) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectMethodInfo");
