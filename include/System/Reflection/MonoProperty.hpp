// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.RuntimePropertyInfo
#include "System/Reflection/RuntimePropertyInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Reflection.MonoPropertyInfo
#include "System/Reflection/MonoPropertyInfo.hpp"
// Including type: System.Reflection.PInfo
#include "System/Reflection/PInfo.hpp"
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
  // Skipping declaration: PropertyAttributes because it is already included!
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x60
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoProperty
  class MonoProperty : public System::Reflection::RuntimePropertyInfo {
    public:
    // Nested type: System::Reflection::MonoProperty::GetterAdapter
    class GetterAdapter;
    // Nested type: System::Reflection::MonoProperty::Getter_2<T, R>
    template<typename T, typename R>
    class Getter_2;
    // Nested type: System::Reflection::MonoProperty::StaticGetter_1<R>
    template<typename R>
    class StaticGetter_1;
    // System.IntPtr klass
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr klass;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.IntPtr prop
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr prop;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Reflection.MonoPropertyInfo info
    // Size: 0x2C
    // Offset: 0x20
    System::Reflection::MonoPropertyInfo info;
    // Field size check
    static_assert(sizeof(System::Reflection::MonoPropertyInfo) == 0x2C);
    // Padding between fields: info and: cached
    char __padding2[0x4] = {};
    // private System.Reflection.PInfo cached
    // Size: 0x4
    // Offset: 0x50
    System::Reflection::PInfo cached;
    // Field size check
    static_assert(sizeof(System::Reflection::PInfo) == 0x4);
    // Padding between fields: cached and: cached_getter
    char __padding3[0x4] = {};
    // private System.Reflection.MonoProperty/GetterAdapter cached_getter
    // Size: 0x8
    // Offset: 0x58
    System::Reflection::MonoProperty::GetterAdapter* cached_getter;
    // Field size check
    static_assert(sizeof(System::Reflection::MonoProperty::GetterAdapter*) == 0x8);
    // Creating value type constructor for type: MonoProperty
    MonoProperty(System::IntPtr klass_ = {}, System::IntPtr prop_ = {}, System::Reflection::MonoPropertyInfo info_ = {}, System::Reflection::PInfo cached_ = {}, System::Reflection::MonoProperty::GetterAdapter* cached_getter_ = {}) noexcept : klass{klass_}, prop{prop_}, info{info_}, cached{cached_}, cached_getter{cached_getter_} {}
    // private System.Void CachePropertyInfo(System.Reflection.PInfo flags)
    // Offset: 0x1C81018
    void CachePropertyInfo(System::Reflection::PInfo flags);
    // static private System.Object GetterAdapterFrame(System.Reflection.MonoProperty/Getter`2<T,R> getter, System.Object obj)
    // Offset: 0xFFFFFFFF
    template<class T, class R>
    static ::Il2CppObject* GetterAdapterFrame(System::Reflection::MonoProperty::Getter_2<T, R>* getter, ::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoProperty::GetterAdapterFrame");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Reflection", "MonoProperty", "GetterAdapterFrame", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<R>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(getter), ::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<R>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, getter, obj);
    }
    // static private System.Object StaticGetterAdapterFrame(System.Reflection.MonoProperty/StaticGetter`1<R> getter, System.Object obj)
    // Offset: 0xFFFFFFFF
    template<class R>
    static ::Il2CppObject* StaticGetterAdapterFrame(System::Reflection::MonoProperty::StaticGetter_1<R>* getter, ::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoProperty::StaticGetterAdapterFrame");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Reflection", "MonoProperty", "StaticGetterAdapterFrame", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<R>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(getter), ::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<R>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, getter, obj);
    }
    // static private System.Reflection.MonoProperty/GetterAdapter CreateGetterDelegate(System.Reflection.MethodInfo method)
    // Offset: 0x1C81A28
    static System::Reflection::MonoProperty::GetterAdapter* CreateGetterDelegate(System::Reflection::MethodInfo* method);
    // public override System.Reflection.PropertyAttributes get_Attributes()
    // Offset: 0x1C81060
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.PropertyAttributes PropertyInfo::get_Attributes()
    System::Reflection::PropertyAttributes get_Attributes();
    // public override System.Boolean get_CanRead()
    // Offset: 0x1C810A4
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Boolean PropertyInfo::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1C81114
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Boolean PropertyInfo::get_CanWrite()
    bool get_CanWrite();
    // public override System.Type get_PropertyType()
    // Offset: 0x1C81184
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Type PropertyInfo::get_PropertyType()
    System::Type* get_PropertyType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1C81268
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1C812AC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x1C812F0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Reflection.MethodInfo[] GetAccessors(System.Boolean nonPublic)
    // Offset: 0x1C81334
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.MethodInfo[] PropertyInfo::GetAccessors(System.Boolean nonPublic)
    ::Array<System::Reflection::MethodInfo*>* GetAccessors(bool nonPublic);
    // public override System.Reflection.MethodInfo GetGetMethod(System.Boolean nonPublic)
    // Offset: 0x1C81514
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.MethodInfo PropertyInfo::GetGetMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);
    // public override System.Reflection.ParameterInfo[] GetIndexParameters()
    // Offset: 0x1C815C4
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.ParameterInfo[] PropertyInfo::GetIndexParameters()
    ::Array<System::Reflection::ParameterInfo*>* GetIndexParameters();
    // public override System.Reflection.MethodInfo GetSetMethod(System.Boolean nonPublic)
    // Offset: 0x1C81808
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.MethodInfo PropertyInfo::GetSetMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);
    // public override System.Object GetConstantValue()
    // Offset: 0x1C818B8
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Object PropertyInfo::GetConstantValue()
    ::Il2CppObject* GetConstantValue();
    // public override System.Object GetRawConstantValue()
    // Offset: 0x1C818C0
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Object PropertyInfo::GetRawConstantValue()
    ::Il2CppObject* GetRawConstantValue();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C818C4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1C81940
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C819AC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Object GetValue(System.Object obj, System.Object[] index)
    // Offset: 0x1C81D20
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Object PropertyInfo::GetValue(System.Object obj, System.Object[] index)
    ::Il2CppObject* GetValue(::Il2CppObject* obj, ::Array<::Il2CppObject*>* index);
    // public override System.Object GetValue(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0x1C81D40
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Object PropertyInfo::GetValue(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    ::Il2CppObject* GetValue(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* index, System::Globalization::CultureInfo* culture);
    // public override System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0x1C81F60
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Void PropertyInfo::SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* index, System::Globalization::CultureInfo* culture);
    // public override System.Type[] GetOptionalCustomModifiers()
    // Offset: 0x1C82184
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Type[] PropertyInfo::GetOptionalCustomModifiers()
    ::Array<System::Type*>* GetOptionalCustomModifiers();
    // public override System.Type[] GetRequiredCustomModifiers()
    // Offset: 0x1C82208
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Type[] PropertyInfo::GetRequiredCustomModifiers()
    ::Array<System::Type*>* GetRequiredCustomModifiers();
    // public override System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x1C82284
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> MemberInfo::GetCustomAttributesData()
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
    // public System.Void .ctor()
    // Offset: 0x1C82288
    // Implemented from: System.Reflection.RuntimePropertyInfo
    // Base method: System.Void RuntimePropertyInfo::.ctor()
    // Base method: System.Void PropertyInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoProperty*, creationType>()));
    }
  }; // System.Reflection.MonoProperty
  #pragma pack(pop)
  static check_size<sizeof(MonoProperty), 88 + sizeof(System::Reflection::MonoProperty::GetterAdapter*)> __System_Reflection_MonoPropertySizeCheck;
  static_assert(sizeof(MonoProperty) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoProperty*, "System.Reflection", "MonoProperty");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoProperty::CachePropertyInfo
// Il2CppName: CachePropertyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::MonoProperty::*)(System::Reflection::PInfo)>(&System::Reflection::MonoProperty::CachePropertyInfo)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Reflection", "PInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "CachePropertyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetterAdapterFrame
// Il2CppName: GetterAdapterFrame
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Reflection::MonoProperty::StaticGetterAdapterFrame
// Il2CppName: StaticGetterAdapterFrame
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Reflection::MonoProperty::CreateGetterDelegate
// Il2CppName: CreateGetterDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MonoProperty::GetterAdapter* (*)(System::Reflection::MethodInfo*)>(&System::Reflection::MonoProperty::CreateGetterDelegate)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "CreateGetterDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyAttributes (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::get_ReflectedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::get_DeclaringType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetAccessors
// Il2CppName: GetAccessors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::MethodInfo*>* (System::Reflection::MonoProperty::*)(bool)>(&System::Reflection::MonoProperty::GetAccessors)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetAccessors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetGetMethod
// Il2CppName: GetGetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::MonoProperty::*)(bool)>(&System::Reflection::MonoProperty::GetGetMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetGetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetIndexParameters
// Il2CppName: GetIndexParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::ParameterInfo*>* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::GetIndexParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetIndexParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetSetMethod
// Il2CppName: GetSetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Reflection::MonoProperty::*)(bool)>(&System::Reflection::MonoProperty::GetSetMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetSetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetConstantValue
// Il2CppName: GetConstantValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::GetConstantValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetConstantValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetRawConstantValue
// Il2CppName: GetRawConstantValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::GetRawConstantValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetRawConstantValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoProperty::*)(System::Type*, bool)>(&System::Reflection::MonoProperty::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::MonoProperty::*)(bool)>(&System::Reflection::MonoProperty::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::MonoProperty::*)(System::Type*, bool)>(&System::Reflection::MonoProperty::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoProperty::*)(::Il2CppObject*, ::Array<::Il2CppObject*>*)>(&System::Reflection::MonoProperty::GetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, index});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoProperty::*)(::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, ::Array<::Il2CppObject*>*, System::Globalization::CultureInfo*)>(&System::Reflection::MonoProperty::GetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, invokeAttr, binder, index, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::MonoProperty::*)(::Il2CppObject*, ::Il2CppObject*, System::Reflection::BindingFlags, System::Reflection::Binder*, ::Array<::Il2CppObject*>*, System::Globalization::CultureInfo*)>(&System::Reflection::MonoProperty::SetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value, invokeAttr, binder, index, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetOptionalCustomModifiers
// Il2CppName: GetOptionalCustomModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::GetOptionalCustomModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetOptionalCustomModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetRequiredCustomModifiers
// Il2CppName: GetRequiredCustomModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::GetRequiredCustomModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetRequiredCustomModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetCustomAttributesData
// Il2CppName: GetCustomAttributesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* (System::Reflection::MonoProperty::*)()>(&System::Reflection::MonoProperty::GetCustomAttributesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty*), "GetCustomAttributesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
