// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Runtime.InteropServices._PropertyInfo
#include "System/Runtime/InteropServices/_PropertyInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyAttributes
  struct PropertyAttributes;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: NotImplementedException
  class NotImplementedException;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimePropertyHandle
  struct RuntimePropertyHandle;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.PropertyInfo
  // [ComDefaultInterfaceAttribute] Offset: D7C6BC
  // [ClassInterfaceAttribute] Offset: D7C6BC
  // [ComVisibleAttribute] Offset: D7C6BC
  class PropertyInfo : public System::Reflection::MemberInfo/*, public System::Runtime::InteropServices::_PropertyInfo*/ {
    public:
    // Creating value type constructor for type: PropertyInfo
    PropertyInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_PropertyInfo
    operator System::Runtime::InteropServices::_PropertyInfo() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_PropertyInfo*>(this);
    }
    // public System.Reflection.PropertyAttributes get_Attributes()
    // Offset: 0xFFFFFFFF
    System::Reflection::PropertyAttributes get_Attributes();
    // public System.Boolean get_CanRead()
    // Offset: 0xFFFFFFFF
    bool get_CanRead();
    // public System.Boolean get_CanWrite()
    // Offset: 0xFFFFFFFF
    bool get_CanWrite();
    // public System.Type get_PropertyType()
    // Offset: 0xFFFFFFFF
    System::Type* get_PropertyType();
    // public System.Reflection.MethodInfo[] GetAccessors(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::MethodInfo*>* GetAccessors(bool nonPublic);
    // public System.Reflection.MethodInfo GetGetMethod()
    // Offset: 0x1C831DC
    System::Reflection::MethodInfo* GetGetMethod();
    // public System.Reflection.MethodInfo GetGetMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);
    // public System.Reflection.ParameterInfo[] GetIndexParameters()
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::ParameterInfo*>* GetIndexParameters();
    // public System.Reflection.MethodInfo GetSetMethod()
    // Offset: 0x1C831F0
    System::Reflection::MethodInfo* GetSetMethod();
    // public System.Reflection.MethodInfo GetSetMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);
    // public System.Object GetValue(System.Object obj, System.Object[] index)
    // Offset: 0x1C83204
    ::Il2CppObject* GetValue(::Il2CppObject* obj, ::Array<::Il2CppObject*>* index);
    // public System.Object GetValue(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* GetValue(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* index, System::Globalization::CultureInfo* culture);
    // public System.Void SetValue(System.Object obj, System.Object value, System.Object[] index)
    // Offset: 0x1C83224
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, ::Array<::Il2CppObject*>* index);
    // public System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* index, System::Globalization::CultureInfo* culture);
    // public System.Type[] GetOptionalCustomModifiers()
    // Offset: 0x1C83244
    ::Array<System::Type*>* GetOptionalCustomModifiers();
    // public System.Type[] GetRequiredCustomModifiers()
    // Offset: 0x1C832AC
    ::Array<System::Type*>* GetRequiredCustomModifiers();
    // static private System.NotImplementedException CreateNIE()
    // Offset: 0x1C83314
    static System::NotImplementedException* CreateNIE();
    // public System.Object GetConstantValue()
    // Offset: 0x1C83370
    ::Il2CppObject* GetConstantValue();
    // public System.Object GetRawConstantValue()
    // Offset: 0x1C833B4
    ::Il2CppObject* GetRawConstantValue();
    // static private System.Reflection.PropertyInfo internal_from_handle_type(System.IntPtr event_handle, System.IntPtr type_handle)
    // Offset: 0x1C83408
    static System::Reflection::PropertyInfo* internal_from_handle_type(System::IntPtr event_handle, System::IntPtr type_handle);
    // static System.Reflection.PropertyInfo GetPropertyFromHandle(Mono.RuntimePropertyHandle handle, System.RuntimeTypeHandle reflectedType)
    // Offset: 0x1C8340C
    static System::Reflection::PropertyInfo* GetPropertyFromHandle(Mono::RuntimePropertyHandle handle, System::RuntimeTypeHandle reflectedType);
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x1C831D0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // protected System.Void .ctor()
    // Offset: 0x1C831D8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::PropertyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyInfo*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1C833F8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1C83404
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.PropertyInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.PropertyInfo left, System.Reflection.PropertyInfo right)
  // Offset: 0x1C7BF18
  bool operator ==(System::Reflection::PropertyInfo* left, System::Reflection::PropertyInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.PropertyInfo left, System.Reflection.PropertyInfo right)
  // Offset: 0x1C7BEBC
  bool operator !=(System::Reflection::PropertyInfo* left, System::Reflection::PropertyInfo& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::PropertyInfo*, "System.Reflection", "PropertyInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyAttributes (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetAccessors
// Il2CppName: GetAccessors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::MethodInfo*>* (System::Reflection::PropertyInfo::*)(bool)>(&System::Reflection::PropertyInfo::GetAccessors)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetAccessors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetGetMethod
// Il2CppName: GetGetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetGetMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetGetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetGetMethod
// Il2CppName: GetGetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::PropertyInfo::*)(bool)>(&System::Reflection::PropertyInfo::GetGetMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetGetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetIndexParameters
// Il2CppName: GetIndexParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::ParameterInfo*>* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetIndexParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetIndexParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetSetMethod
// Il2CppName: GetSetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetSetMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetSetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetSetMethod
// Il2CppName: GetSetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::PropertyInfo::*)(bool)>(&System::Reflection::PropertyInfo::GetSetMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetSetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::PropertyInfo::*)(::Il2CppObject*, ::Array<::Il2CppObject*>*)>(&System::Reflection::PropertyInfo::GetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, index});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::PropertyInfo::*)(::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, ::Array<::Il2CppObject*>*, System::Globalization::CultureInfo*)>(&System::Reflection::PropertyInfo::GetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, invokeAttr, binder, index, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::PropertyInfo::*)(::Il2CppObject*, ::Il2CppObject*, ::Array<::Il2CppObject*>*)>(&System::Reflection::PropertyInfo::SetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value, index});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::PropertyInfo::*)(::Il2CppObject*, ::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, ::Array<::Il2CppObject*>*, System::Globalization::CultureInfo*)>(&System::Reflection::PropertyInfo::SetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value, invokeAttr, binder, index, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetOptionalCustomModifiers
// Il2CppName: GetOptionalCustomModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetOptionalCustomModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetOptionalCustomModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetRequiredCustomModifiers
// Il2CppName: GetRequiredCustomModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetRequiredCustomModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetRequiredCustomModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::CreateNIE
// Il2CppName: CreateNIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::NotImplementedException* (*)()>(&System::Reflection::PropertyInfo::CreateNIE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "CreateNIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetConstantValue
// Il2CppName: GetConstantValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetConstantValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetConstantValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetRawConstantValue
// Il2CppName: GetRawConstantValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetRawConstantValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetRawConstantValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::internal_from_handle_type
// Il2CppName: internal_from_handle_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo* (*)(System::IntPtr, System::IntPtr)>(&System::Reflection::PropertyInfo::internal_from_handle_type)> {
  static const MethodInfo* get() {
    static auto* event_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* type_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "internal_from_handle_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{event_handle, type_handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetPropertyFromHandle
// Il2CppName: GetPropertyFromHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo* (*)(Mono::RuntimePropertyHandle, System::RuntimeTypeHandle)>(&System::Reflection::PropertyInfo::GetPropertyFromHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("Mono", "RuntimePropertyHandle")->byval_arg;
    static auto* reflectedType = &::il2cpp_utils::GetClassFromName("System", "RuntimeTypeHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetPropertyFromHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, reflectedType});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberTypes (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::PropertyInfo::*)(::Il2CppObject*)>(&System::Reflection::PropertyInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::PropertyInfo::*)()>(&System::Reflection::PropertyInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::PropertyInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::PropertyInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
