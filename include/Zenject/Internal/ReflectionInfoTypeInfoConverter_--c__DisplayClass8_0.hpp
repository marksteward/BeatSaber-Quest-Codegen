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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass8_0
  // [CompilerGeneratedAttribute] Offset: DDE72C
  class ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public System.String propertyName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* propertyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Collections.Generic.List`1<System.Reflection.FieldInfo> writeableFields
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Reflection::FieldInfo*>* writeableFields;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Reflection::FieldInfo*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass8_0
    $$c__DisplayClass8_0(::Il2CppString* propertyName_ = {}, System::Collections::Generic::List_1<System::Reflection::FieldInfo*>* writeableFields_ = {}) noexcept : propertyName{propertyName_}, writeableFields{writeableFields_} {}
    // System.Boolean <GetOnlyPropertySetter>b__0(System.Reflection.FieldInfo f)
    // Offset: 0x16425D4
    bool $GetOnlyPropertySetter$b__0(System::Reflection::FieldInfo* f);
    // System.Void <GetOnlyPropertySetter>b__2(System.Object injectable, System.Object value)
    // Offset: 0x164267C
    void $GetOnlyPropertySetter$b__2(::Il2CppObject* injectable, ::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0x1642458
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0), 24 + sizeof(System::Collections::Generic::List_1<System::Reflection::FieldInfo*>*)> __Zenject_Internal_ReflectionInfoTypeInfoConverter_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass8_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0::$GetOnlyPropertySetter$b__0
// Il2CppName: <GetOnlyPropertySetter>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0::*)(System::Reflection::FieldInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0::$GetOnlyPropertySetter$b__0)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0*), "<GetOnlyPropertySetter>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0::$GetOnlyPropertySetter$b__2
// Il2CppName: <GetOnlyPropertySetter>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0::*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0::$GetOnlyPropertySetter$b__2)> {
  static const MethodInfo* get() {
    static auto* injectable = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0*), "<GetOnlyPropertySetter>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectable, value});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
