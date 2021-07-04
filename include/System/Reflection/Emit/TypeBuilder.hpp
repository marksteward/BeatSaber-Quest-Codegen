// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.TypeInfo
#include "System/Reflection/TypeInfo.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Skipping declaration: BindingFlags because it is already included!
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Type because it is already included!
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.TypeBuilder
  class TypeBuilder : public System::Reflection::TypeInfo {
    public:
    // Creating value type constructor for type: TypeBuilder
    TypeBuilder() noexcept {}
    // static field const value: static public System.Int32 UnspecifiedTypeSize
    static constexpr const int UnspecifiedTypeSize = 0;
    // Get static field: static public System.Int32 UnspecifiedTypeSize
    static int _get_UnspecifiedTypeSize();
    // Set static field: static public System.Int32 UnspecifiedTypeSize
    static void _set_UnspecifiedTypeSize(int value);
    // public override System.Reflection.Assembly get_Assembly()
    // Offset: 0x1C79CCC
    // Implemented from: System.Type
    // Base method: System.Reflection.Assembly Type::get_Assembly()
    System::Reflection::Assembly* get_Assembly();
    // public override System.String get_AssemblyQualifiedName()
    // Offset: 0x1C79D28
    // Implemented from: System.Type
    // Base method: System.String Type::get_AssemblyQualifiedName()
    ::Il2CppString* get_AssemblyQualifiedName();
    // public override System.Type get_BaseType()
    // Offset: 0x1C79D84
    // Implemented from: System.Type
    // Base method: System.Type Type::get_BaseType()
    System::Type* get_BaseType();
    // public override System.String get_FullName()
    // Offset: 0x1C79DE0
    // Implemented from: System.Type
    // Base method: System.String Type::get_FullName()
    ::Il2CppString* get_FullName();
    // public override System.Guid get_GUID()
    // Offset: 0x1C79E3C
    // Implemented from: System.Type
    // Base method: System.Guid Type::get_GUID()
    System::Guid get_GUID();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x1C79E98
    // Implemented from: System.Type
    // Base method: System.Reflection.Module Type::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.String get_Name()
    // Offset: 0x1C79EF4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.String get_Namespace()
    // Offset: 0x1C79F50
    // Implemented from: System.Type
    // Base method: System.String Type::get_Namespace()
    ::Il2CppString* get_Namespace();
    // public override System.Type GetElementType()
    // Offset: 0x1C79FAC
    // Implemented from: System.Type
    // Base method: System.Type Type::GetElementType()
    System::Type* GetElementType();
    // public override System.Type get_UnderlyingSystemType()
    // Offset: 0x1C7A008
    // Implemented from: System.Type
    // Base method: System.Type Type::get_UnderlyingSystemType()
    System::Type* get_UnderlyingSystemType();
    // protected override System.Reflection.TypeAttributes GetAttributeFlagsImpl()
    // Offset: 0x1C7A048
    // Implemented from: System.Type
    // Base method: System.Reflection.TypeAttributes Type::GetAttributeFlagsImpl()
    System::Reflection::TypeAttributes GetAttributeFlagsImpl();
    // protected override System.Reflection.ConstructorInfo GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1C7A088
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo Type::GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::ConstructorInfo* GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.ConstructorInfo[] GetConstructors(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1C7A0C8
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo[] Type::GetConstructors(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::ConstructorInfo*>* GetConstructors(System::Reflection::BindingFlags bindingAttr);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1C7A108
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C7A148
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.EventInfo GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1C7A188
    // Implemented from: System.Type
    // Base method: System.Reflection.EventInfo Type::GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Reflection::EventInfo* GetEvent(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1C7A1C8
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo Type::GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Reflection::FieldInfo* GetField(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo[] GetFields(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1C7A208
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo[] Type::GetFields(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::FieldInfo*>* GetFields(System::Reflection::BindingFlags bindingAttr);
    // public override System.Type[] GetInterfaces()
    // Offset: 0x1C7A248
    // Implemented from: System.Type
    // Base method: System.Type[] Type::GetInterfaces()
    ::Array<System::Type*>* GetInterfaces();
    // protected override System.Reflection.MethodInfo GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1C7A288
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo Type::GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::MethodInfo* GetMethodImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.MethodInfo[] GetMethods(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1C7A2C8
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo[] Type::GetMethods(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::MethodInfo*>* GetMethods(System::Reflection::BindingFlags bindingAttr);
    // public override System.Type GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1C7A308
    // Implemented from: System.Type
    // Base method: System.Type Type::GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Type* GetNestedType(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.PropertyInfo[] GetProperties(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1C7A348
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo[] Type::GetProperties(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::PropertyInfo*>* GetProperties(System::Reflection::BindingFlags bindingAttr);
    // protected override System.Reflection.PropertyInfo GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1C7A388
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo Type::GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::PropertyInfo* GetPropertyImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Type* returnType, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // protected override System.Boolean HasElementTypeImpl()
    // Offset: 0x1C7A3C8
    // Implemented from: System.Type
    // Base method: System.Boolean Type::HasElementTypeImpl()
    bool HasElementTypeImpl();
    // public override System.Object InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    // Offset: 0x1C7A408
    // Implemented from: System.Type
    // Base method: System.Object Type::InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    ::Il2CppObject* InvokeMember(::Il2CppString* name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Il2CppObject* target, ::Array<::Il2CppObject*>* args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* culture, ::Array<::Il2CppString*>* namedParameters);
    // protected override System.Boolean IsArrayImpl()
    // Offset: 0x1C7A448
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsArrayImpl()
    bool IsArrayImpl();
    // protected override System.Boolean IsByRefImpl()
    // Offset: 0x1C7A488
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsByRefImpl()
    bool IsByRefImpl();
    // protected override System.Boolean IsCOMObjectImpl()
    // Offset: 0x1C7A4C8
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsCOMObjectImpl()
    bool IsCOMObjectImpl();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C7A508
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // protected override System.Boolean IsPointerImpl()
    // Offset: 0x1C7A548
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPointerImpl()
    bool IsPointerImpl();
    // protected override System.Boolean IsPrimitiveImpl()
    // Offset: 0x1C7A588
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPrimitiveImpl()
    bool IsPrimitiveImpl();
  }; // System.Reflection.Emit.TypeBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::TypeBuilder*, "System.Reflection.Emit", "TypeBuilder");
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::get_Assembly
// Il2CppName: get_Assembly
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::get_AssemblyQualifiedName
// Il2CppName: get_AssemblyQualifiedName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::get_BaseType
// Il2CppName: get_BaseType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::get_FullName
// Il2CppName: get_FullName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::get_GUID
// Il2CppName: get_GUID
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::get_Module
// Il2CppName: get_Module
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::get_Name
// Il2CppName: get_Name
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::get_Namespace
// Il2CppName: get_Namespace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetElementType
// Il2CppName: GetElementType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::get_UnderlyingSystemType
// Il2CppName: get_UnderlyingSystemType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetAttributeFlagsImpl
// Il2CppName: GetAttributeFlagsImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetConstructorImpl
// Il2CppName: GetConstructorImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetConstructors
// Il2CppName: GetConstructors
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetEvent
// Il2CppName: GetEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetField
// Il2CppName: GetField
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetFields
// Il2CppName: GetFields
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetInterfaces
// Il2CppName: GetInterfaces
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetMethodImpl
// Il2CppName: GetMethodImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetMethods
// Il2CppName: GetMethods
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetNestedType
// Il2CppName: GetNestedType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetProperties
// Il2CppName: GetProperties
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::GetPropertyImpl
// Il2CppName: GetPropertyImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::HasElementTypeImpl
// Il2CppName: HasElementTypeImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::InvokeMember
// Il2CppName: InvokeMember
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::IsArrayImpl
// Il2CppName: IsArrayImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::IsByRefImpl
// Il2CppName: IsByRefImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::IsCOMObjectImpl
// Il2CppName: IsCOMObjectImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::IsDefined
// Il2CppName: IsDefined
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::IsPointerImpl
// Il2CppName: IsPointerImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilder::IsPrimitiveImpl
// Il2CppName: IsPrimitiveImpl
// Cannot perform method pointer template specialization from operators!
