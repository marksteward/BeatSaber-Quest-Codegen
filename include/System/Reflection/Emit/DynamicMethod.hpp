// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodAttributes
  struct MethodAttributes;
  // Forward declaring type: MethodImplAttributes
  struct MethodImplAttributes;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeMethodHandle
  struct RuntimeMethodHandle;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.DynamicMethod
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6E5E4
  class DynamicMethod : public System::Reflection::MethodInfo {
    public:
    // Creating value type constructor for type: DynamicMethod
    DynamicMethod() noexcept {}
    // public override System.Reflection.MethodAttributes get_Attributes()
    // Offset: 0x1CA8CE0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodAttributes MethodBase::get_Attributes()
    System::Reflection::MethodAttributes get_Attributes();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1CA8D20
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.RuntimeMethodHandle get_MethodHandle()
    // Offset: 0x1CA8D60
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.RuntimeMethodHandle MethodBase::get_MethodHandle()
    System::RuntimeMethodHandle get_MethodHandle();
    // public override System.String get_Name()
    // Offset: 0x1CA8DA0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1CA8DE0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Reflection.MethodInfo GetBaseDefinition()
    // Offset: 0x1CA8E20
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::GetBaseDefinition()
    System::Reflection::MethodInfo* GetBaseDefinition();
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1CA8E60
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1CA8EA0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.MethodImplAttributes GetMethodImplementationFlags()
    // Offset: 0x1CA8EE0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodImplAttributes MethodBase::GetMethodImplementationFlags()
    System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
    // public override System.Reflection.ParameterInfo[] GetParameters()
    // Offset: 0x1CA8F20
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParameters()
    ::Array<System::Reflection::ParameterInfo*>* GetParameters();
    // public override System.Object Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x1CA8F60
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Object MethodBase::Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1CA8FA0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
  }; // System.Reflection.Emit.DynamicMethod
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::DynamicMethod*, "System.Reflection.Emit", "DynamicMethod");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodAttributes (System::Reflection::Emit::DynamicMethod::*)()>(&System::Reflection::Emit::DynamicMethod::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::Emit::DynamicMethod::*)()>(&System::Reflection::Emit::DynamicMethod::get_DeclaringType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::get_MethodHandle
// Il2CppName: get_MethodHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeMethodHandle (System::Reflection::Emit::DynamicMethod::*)()>(&System::Reflection::Emit::DynamicMethod::get_MethodHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "get_MethodHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::Emit::DynamicMethod::*)()>(&System::Reflection::Emit::DynamicMethod::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::Emit::DynamicMethod::*)()>(&System::Reflection::Emit::DynamicMethod::get_ReflectedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::GetBaseDefinition
// Il2CppName: GetBaseDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::Emit::DynamicMethod::*)()>(&System::Reflection::Emit::DynamicMethod::GetBaseDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "GetBaseDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::Emit::DynamicMethod::*)(bool)>(&System::Reflection::Emit::DynamicMethod::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::Emit::DynamicMethod::*)(System::Type*, bool)>(&System::Reflection::Emit::DynamicMethod::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::GetMethodImplementationFlags
// Il2CppName: GetMethodImplementationFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodImplAttributes (System::Reflection::Emit::DynamicMethod::*)()>(&System::Reflection::Emit::DynamicMethod::GetMethodImplementationFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "GetMethodImplementationFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::GetParameters
// Il2CppName: GetParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::ParameterInfo*>* (System::Reflection::Emit::DynamicMethod::*)()>(&System::Reflection::Emit::DynamicMethod::GetParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "GetParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::Emit::DynamicMethod::*)(::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, ::Array<::Il2CppObject*>*, System::Globalization::CultureInfo*)>(&System::Reflection::Emit::DynamicMethod::Invoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, invokeAttr, binder, parameters, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::DynamicMethod::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::DynamicMethod::*)(System::Type*, bool)>(&System::Reflection::Emit::DynamicMethod::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::DynamicMethod*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
