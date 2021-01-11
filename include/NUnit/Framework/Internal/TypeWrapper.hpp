// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITypeInfo
#include "NUnit/Framework/Interfaces/ITypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TypeWrapper
  // [] Offset: FFFFFFFF
  class TypeWrapper : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITypeInfo*/ {
    public:
    // Nested type: NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass1
    class $$c__DisplayClass1;
    // [CompilerGeneratedAttribute] Offset: 0xDB361C
    // private System.Type <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Type* Type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: TypeWrapper
    TypeWrapper(System::Type* Type_ = {}) noexcept : Type{Type_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITypeInfo
    operator NUnit::Framework::Interfaces::ITypeInfo() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITypeInfo*>(this);
    }
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return Type;
    }
    // public System.Void .ctor(System.Type type)
    // Offset: 0x1957C1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeWrapper* New_ctor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TypeWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeWrapper*, creationType>(type)));
    }
    // private System.Void set_Type(System.Type value)
    // Offset: 0x1964380
    void set_Type(System::Type* value);
    // public System.Type get_Type()
    // Offset: 0x1964378
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Type ITypeInfo::get_Type()
    System::Type* get_Type();
    // public NUnit.Framework.Interfaces.ITypeInfo get_BaseType()
    // Offset: 0x1964388
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: NUnit.Framework.Interfaces.ITypeInfo ITypeInfo::get_BaseType()
    NUnit::Framework::Interfaces::ITypeInfo* get_BaseType();
    // public System.String get_FullName()
    // Offset: 0x196441C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.String ITypeInfo::get_FullName()
    ::Il2CppString* get_FullName();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0x1964440
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Reflection.Assembly ITypeInfo::get_Assembly()
    System::Reflection::Assembly* get_Assembly();
    // public System.String get_Namespace()
    // Offset: 0x1964470
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.String ITypeInfo::get_Namespace()
    ::Il2CppString* get_Namespace();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x1964494
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsAbstract()
    bool get_IsAbstract();
    // public System.Boolean get_IsGenericType()
    // Offset: 0x19644BC
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsGenericType()
    bool get_IsGenericType();
    // public System.Boolean IsType(System.Type type)
    // Offset: 0x19644EC
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::IsType(System.Type type)
    bool IsType(System::Type* type);
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x19644FC
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_ContainsGenericParameters()
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericTypeDefinition()
    // Offset: 0x196452C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsGenericTypeDefinition()
    bool get_IsGenericTypeDefinition();
    // public System.Boolean get_IsSealed()
    // Offset: 0x196455C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsSealed()
    bool get_IsSealed();
    // public System.Boolean get_IsStaticClass()
    // Offset: 0x1964584
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::get_IsStaticClass()
    bool get_IsStaticClass();
    // public System.String GetDisplayName()
    // Offset: 0x19645E4
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.String ITypeInfo::GetDisplayName()
    ::Il2CppString* GetDisplayName();
    // public System.String GetDisplayName(System.Object[] args)
    // Offset: 0x196464C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.String ITypeInfo::GetDisplayName(System.Object[] args)
    ::Il2CppString* GetDisplayName(::Array<::Il2CppObject*>* args);
    // public NUnit.Framework.Interfaces.ITypeInfo MakeGenericType(System.Type[] typeArgs)
    // Offset: 0x19646C4
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: NUnit.Framework.Interfaces.ITypeInfo ITypeInfo::MakeGenericType(System.Type[] typeArgs)
    NUnit::Framework::Interfaces::ITypeInfo* MakeGenericType(::Array<System::Type*>* typeArgs);
    // public System.Type GetGenericTypeDefinition()
    // Offset: 0x1964758
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Type ITypeInfo::GetGenericTypeDefinition()
    System::Type* GetGenericTypeDefinition();
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IReflectionInfo
    // Base method: T[] IReflectionInfo::GetCustomAttributes(System.Boolean inherit)
    template<class T>
    ::Array<T>* GetCustomAttributes(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TypeWrapper::GetCustomAttributes");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetCustomAttributes", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(inherit)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, inherit);
    }
    // public System.Boolean IsDefined(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IReflectionInfo
    // Base method: System.Boolean IReflectionInfo::IsDefined(System.Boolean inherit)
    template<class T>
    bool IsDefined(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TypeWrapper::IsDefined");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IsDefined", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(inherit)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, inherit);
    }
    // public System.Boolean HasMethodWithAttribute(System.Type attributeType)
    // Offset: 0x196477C
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::HasMethodWithAttribute(System.Type attributeType)
    bool HasMethodWithAttribute(System::Type* attributeType);
    // public NUnit.Framework.Interfaces.IMethodInfo[] GetMethods(System.Reflection.BindingFlags flags)
    // Offset: 0x19647F4
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: NUnit.Framework.Interfaces.IMethodInfo[] ITypeInfo::GetMethods(System.Reflection.BindingFlags flags)
    ::Array<NUnit::Framework::Interfaces::IMethodInfo*>* GetMethods(System::Reflection::BindingFlags flags);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Type[] argTypes)
    // Offset: 0x1964950
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Reflection.ConstructorInfo ITypeInfo::GetConstructor(System.Type[] argTypes)
    System::Reflection::ConstructorInfo* GetConstructor(::Array<System::Type*>* argTypes);
    // public System.Boolean HasConstructor(System.Type[] argTypes)
    // Offset: 0x1964A48
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Boolean ITypeInfo::HasConstructor(System.Type[] argTypes)
    bool HasConstructor(::Array<System::Type*>* argTypes);
    // public System.Object Construct(System.Object[] args)
    // Offset: 0x1964A64
    // Implemented from: NUnit.Framework.Interfaces.ITypeInfo
    // Base method: System.Object ITypeInfo::Construct(System.Object[] args)
    ::Il2CppObject* Construct(::Array<::Il2CppObject*>* args);
    // public override System.String ToString()
    // Offset: 0x1964ADC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Internal.TypeWrapper
  static check_size<sizeof(TypeWrapper), 16 + sizeof(System::Type*)> __NUnit_Framework_Internal_TypeWrapperSizeCheck;
  static_assert(sizeof(TypeWrapper) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TypeWrapper*, "NUnit.Framework.Internal", "TypeWrapper");
