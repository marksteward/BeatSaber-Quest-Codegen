// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
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
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92E28
  class ReflectionTypeInfo : public ::Il2CppObject {
    public:
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo
    class InjectFieldInfo;
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo
    class InjectParameterInfo;
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo
    class InjectPropertyInfo;
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo
    class InjectMethodInfo;
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo
    class InjectConstructorInfo;
    // public readonly System.Type Type
    // Size: 0x8
    // Offset: 0x10
    System::Type* Type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public readonly System.Type BaseType
    // Size: 0x8
    // Offset: 0x18
    System::Type* BaseType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo> InjectProperties
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* InjectProperties;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>*) == 0x8);
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo> InjectFields
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* InjectFields;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>*) == 0x8);
    // public readonly Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo InjectConstructor
    // Size: 0x8
    // Offset: 0x30
    Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* InjectConstructor;
    // Field size check
    static_assert(sizeof(Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo*) == 0x8);
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo> InjectMethods
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* InjectMethods;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>*) == 0x8);
    // Creating value type constructor for type: ReflectionTypeInfo
    ReflectionTypeInfo(System::Type* Type_ = {}, System::Type* BaseType_ = {}, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* InjectProperties_ = {}, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* InjectFields_ = {}, Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* InjectConstructor_ = {}, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* InjectMethods_ = {}) noexcept : Type{Type_}, BaseType{BaseType_}, InjectProperties{InjectProperties_}, InjectFields{InjectFields_}, InjectConstructor{InjectConstructor_}, InjectMethods{InjectMethods_} {}
    // public System.Void .ctor(System.Type type, System.Type baseType, Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo injectConstructor, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo> injectMethods, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo> injectFields, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo> injectProperties)
    // Offset: 0x12A4328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeInfo* New_ctor(System::Type* type, System::Type* baseType, Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* injectConstructor, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* injectMethods, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* injectFields, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* injectProperties) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeInfo*, creationType>(type, baseType, injectConstructor, injectMethods, injectFields, injectProperties)));
    }
  }; // Zenject.Internal.ReflectionTypeInfo
  static check_size<sizeof(ReflectionTypeInfo), 56 + sizeof(System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>*)> __Zenject_Internal_ReflectionTypeInfoSizeCheck;
  static_assert(sizeof(ReflectionTypeInfo) == 0x40);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo*, "Zenject.Internal", "ReflectionTypeInfo");
