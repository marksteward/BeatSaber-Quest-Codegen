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
  // [ComDefaultInterfaceAttribute] Offset: CA74D8
  // [ClassInterfaceAttribute] Offset: CA74D8
  // [ComVisibleAttribute] Offset: CA74D8
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
    // Offset: 0x1B0C5DC
    System::Reflection::MethodInfo* GetGetMethod();
    // public System.Reflection.MethodInfo GetGetMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);
    // public System.Reflection.ParameterInfo[] GetIndexParameters()
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::ParameterInfo*>* GetIndexParameters();
    // public System.Reflection.MethodInfo GetSetMethod()
    // Offset: 0x1B0C5F0
    System::Reflection::MethodInfo* GetSetMethod();
    // public System.Reflection.MethodInfo GetSetMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);
    // public System.Object GetValue(System.Object obj, System.Object[] index)
    // Offset: 0x1B0C604
    ::Il2CppObject* GetValue(::Il2CppObject* obj, ::Array<::Il2CppObject*>* index);
    // public System.Object GetValue(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* GetValue(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* index, System::Globalization::CultureInfo* culture);
    // public System.Void SetValue(System.Object obj, System.Object value, System.Object[] index)
    // Offset: 0x1B0C624
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, ::Array<::Il2CppObject*>* index);
    // public System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* index, System::Globalization::CultureInfo* culture);
    // public System.Type[] GetOptionalCustomModifiers()
    // Offset: 0x1B0C644
    ::Array<System::Type*>* GetOptionalCustomModifiers();
    // public System.Type[] GetRequiredCustomModifiers()
    // Offset: 0x1B0C6AC
    ::Array<System::Type*>* GetRequiredCustomModifiers();
    // static private System.NotImplementedException CreateNIE()
    // Offset: 0x1B0C714
    static System::NotImplementedException* CreateNIE();
    // public System.Object GetConstantValue()
    // Offset: 0x1B0C770
    ::Il2CppObject* GetConstantValue();
    // public System.Object GetRawConstantValue()
    // Offset: 0x1B0C7B4
    ::Il2CppObject* GetRawConstantValue();
    // static private System.Reflection.PropertyInfo internal_from_handle_type(System.IntPtr event_handle, System.IntPtr type_handle)
    // Offset: 0x1B0C808
    static System::Reflection::PropertyInfo* internal_from_handle_type(System::IntPtr event_handle, System::IntPtr type_handle);
    // static System.Reflection.PropertyInfo GetPropertyFromHandle(Mono.RuntimePropertyHandle handle, System.RuntimeTypeHandle reflectedType)
    // Offset: 0x1B0C80C
    static System::Reflection::PropertyInfo* GetPropertyFromHandle(Mono::RuntimePropertyHandle handle, System::RuntimeTypeHandle reflectedType);
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x1B0C5D0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // protected System.Void .ctor()
    // Offset: 0x1B0C5D8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::PropertyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyInfo*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1B0C7F8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B0C804
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.PropertyInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.PropertyInfo left, System.Reflection.PropertyInfo right)
  // Offset: 0x1B05318
  bool operator ==(System::Reflection::PropertyInfo* left, System::Reflection::PropertyInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.PropertyInfo left, System.Reflection.PropertyInfo right)
  // Offset: 0x1B052BC
  bool operator !=(System::Reflection::PropertyInfo* left, System::Reflection::PropertyInfo& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::PropertyInfo*, "System.Reflection", "PropertyInfo");
