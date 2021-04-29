// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionInfoTypeInfoConverter
#include "Zenject/Internal/ReflectionInfoTypeInfoConverter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass9_0
  // [CompilerGeneratedAttribute] Offset: D03DFC
  class ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    // public System.Reflection.FieldInfo fieldInfo
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::FieldInfo* fieldInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::FieldInfo*) == 0x8);
    // public System.Reflection.PropertyInfo propInfo
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::PropertyInfo* propInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::PropertyInfo*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass9_0
    $$c__DisplayClass9_0(System::Reflection::FieldInfo* fieldInfo_ = {}, System::Reflection::PropertyInfo* propInfo_ = {}) noexcept : fieldInfo{fieldInfo_}, propInfo{propInfo_} {}
    // System.Void <GetSetter>b__0(System.Object injectable, System.Object value)
    // Offset: 0x148CCD4
    void $GetSetter$b__0(::Il2CppObject* injectable, ::Il2CppObject* value);
    // System.Void <GetSetter>b__1(System.Object injectable, System.Object value)
    // Offset: 0x148CCF0
    void $GetSetter$b__1(::Il2CppObject* injectable, ::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0x148C9C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0), 24 + sizeof(System::Reflection::PropertyInfo*)> __Zenject_Internal_ReflectionInfoTypeInfoConverter_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass9_0");
