// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: NUnit.Framework.Interfaces.IReflectionInfo
#include "NUnit/Framework/Interfaces/IReflectionInfo.hpp"
// Completed includes
// Begin forward declares
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
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ITypeInfo
  class ITypeInfo/*, public NUnit::Framework::Interfaces::IReflectionInfo*/ {
    public:
    // Creating value type constructor for type: ITypeInfo
    ITypeInfo() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IReflectionInfo
    operator NUnit::Framework::Interfaces::IReflectionInfo() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IReflectionInfo*>(this);
    }
    // public System.Type get_Type()
    // Offset: 0xFFFFFFFF
    System::Type* get_Type();
    // public NUnit.Framework.Interfaces.ITypeInfo get_BaseType()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITypeInfo* get_BaseType();
    // public System.Boolean IsType(System.Type type)
    // Offset: 0xFFFFFFFF
    bool IsType(System::Type* type);
    // public System.String get_FullName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_FullName();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0xFFFFFFFF
    System::Reflection::Assembly* get_Assembly();
    // public System.String get_Namespace()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Namespace();
    // public System.Boolean get_IsAbstract()
    // Offset: 0xFFFFFFFF
    bool get_IsAbstract();
    // public System.Boolean get_IsGenericType()
    // Offset: 0xFFFFFFFF
    bool get_IsGenericType();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0xFFFFFFFF
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericTypeDefinition()
    // Offset: 0xFFFFFFFF
    bool get_IsGenericTypeDefinition();
    // public System.Boolean get_IsSealed()
    // Offset: 0xFFFFFFFF
    bool get_IsSealed();
    // public System.Boolean get_IsStaticClass()
    // Offset: 0xFFFFFFFF
    bool get_IsStaticClass();
    // public System.String GetDisplayName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetDisplayName();
    // public System.String GetDisplayName(System.Object[] args)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetDisplayName(::Array<::Il2CppObject*>* args);
    // public System.Type GetGenericTypeDefinition()
    // Offset: 0xFFFFFFFF
    System::Type* GetGenericTypeDefinition();
    // public NUnit.Framework.Interfaces.ITypeInfo MakeGenericType(System.Type[] typeArgs)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITypeInfo* MakeGenericType(::Array<System::Type*>* typeArgs);
    // public System.Boolean HasMethodWithAttribute(System.Type attrType)
    // Offset: 0xFFFFFFFF
    bool HasMethodWithAttribute(System::Type* attrType);
    // public NUnit.Framework.Interfaces.IMethodInfo[] GetMethods(System.Reflection.BindingFlags flags)
    // Offset: 0xFFFFFFFF
    ::Array<NUnit::Framework::Interfaces::IMethodInfo*>* GetMethods(System::Reflection::BindingFlags flags);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Type[] argTypes)
    // Offset: 0xFFFFFFFF
    System::Reflection::ConstructorInfo* GetConstructor(::Array<System::Type*>* argTypes);
    // public System.Boolean HasConstructor(System.Type[] argTypes)
    // Offset: 0xFFFFFFFF
    bool HasConstructor(::Array<System::Type*>* argTypes);
    // public System.Object Construct(System.Object[] args)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Construct(::Array<::Il2CppObject*>* args);
  }; // NUnit.Framework.Interfaces.ITypeInfo
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITypeInfo*, "NUnit.Framework.Interfaces", "ITypeInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_BaseType
// Il2CppName: get_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_BaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::IsType
// Il2CppName: IsType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITypeInfo::*)(System::Type*)>(&NUnit::Framework::Interfaces::ITypeInfo::IsType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "IsType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_FullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly* (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_Assembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_IsAbstract
// Il2CppName: get_IsAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_IsAbstract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_IsAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_IsGenericType
// Il2CppName: get_IsGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_IsGenericType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_IsGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_ContainsGenericParameters
// Il2CppName: get_ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_ContainsGenericParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_IsGenericTypeDefinition
// Il2CppName: get_IsGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_IsGenericTypeDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_IsGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_IsSealed
// Il2CppName: get_IsSealed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_IsSealed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_IsSealed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::get_IsStaticClass
// Il2CppName: get_IsStaticClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::get_IsStaticClass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "get_IsStaticClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::GetDisplayName
// Il2CppName: GetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::GetDisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "GetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::GetDisplayName
// Il2CppName: GetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITypeInfo::*)(::Array<::Il2CppObject*>*)>(&NUnit::Framework::Interfaces::ITypeInfo::GetDisplayName)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "GetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::GetGenericTypeDefinition
// Il2CppName: GetGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (NUnit::Framework::Interfaces::ITypeInfo::*)()>(&NUnit::Framework::Interfaces::ITypeInfo::GetGenericTypeDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "GetGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::MakeGenericType
// Il2CppName: MakeGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Interfaces::ITypeInfo::*)(::Array<System::Type*>*)>(&NUnit::Framework::Interfaces::ITypeInfo::MakeGenericType)> {
  static const MethodInfo* get() {
    static auto* typeArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "MakeGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeArgs});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::HasMethodWithAttribute
// Il2CppName: HasMethodWithAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITypeInfo::*)(System::Type*)>(&NUnit::Framework::Interfaces::ITypeInfo::HasMethodWithAttribute)> {
  static const MethodInfo* get() {
    static auto* attrType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "HasMethodWithAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrType});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::GetMethods
// Il2CppName: GetMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<NUnit::Framework::Interfaces::IMethodInfo*>* (NUnit::Framework::Interfaces::ITypeInfo::*)(System::Reflection::BindingFlags)>(&NUnit::Framework::Interfaces::ITypeInfo::GetMethods)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "GetMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::GetConstructor
// Il2CppName: GetConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ConstructorInfo* (NUnit::Framework::Interfaces::ITypeInfo::*)(::Array<System::Type*>*)>(&NUnit::Framework::Interfaces::ITypeInfo::GetConstructor)> {
  static const MethodInfo* get() {
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "GetConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argTypes});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::HasConstructor
// Il2CppName: HasConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITypeInfo::*)(::Array<System::Type*>*)>(&NUnit::Framework::Interfaces::ITypeInfo::HasConstructor)> {
  static const MethodInfo* get() {
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "HasConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argTypes});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITypeInfo::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Interfaces::ITypeInfo::*)(::Array<::Il2CppObject*>*)>(&NUnit::Framework::Interfaces::ITypeInfo::Construct)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITypeInfo*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
