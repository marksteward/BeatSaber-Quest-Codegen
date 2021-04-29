// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Reflection.PropertyAttributes
#include "System/Reflection/PropertyAttributes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: MonoProperty
  class MonoProperty;
  // Forward declaring type: PInfo
  struct PInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoPropertyInfo
  struct MonoPropertyInfo/*, public System::ValueType*/ {
    public:
    // public System.Type parent
    // Size: 0x8
    // Offset: 0x0
    System::Type* parent;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.Type declaring_type
    // Size: 0x8
    // Offset: 0x8
    System::Type* declaring_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Reflection.MethodInfo get_method
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::MethodInfo* get_method;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public System.Reflection.MethodInfo set_method
    // Size: 0x8
    // Offset: 0x20
    System::Reflection::MethodInfo* set_method;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public System.Reflection.PropertyAttributes attrs
    // Size: 0x4
    // Offset: 0x28
    System::Reflection::PropertyAttributes attrs;
    // Field size check
    static_assert(sizeof(System::Reflection::PropertyAttributes) == 0x4);
    // Creating value type constructor for type: MonoPropertyInfo
    constexpr MonoPropertyInfo(System::Type* parent_ = {}, System::Type* declaring_type_ = {}, ::Il2CppString* name_ = {}, System::Reflection::MethodInfo* get_method_ = {}, System::Reflection::MethodInfo* set_method_ = {}, System::Reflection::PropertyAttributes attrs_ = {}) noexcept : parent{parent_}, declaring_type{declaring_type_}, name{name_}, get_method{get_method_}, set_method{set_method_}, attrs{attrs_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static System.Void get_property_info(System.Reflection.MonoProperty prop, ref System.Reflection.MonoPropertyInfo info, System.Reflection.PInfo req_info)
    // Offset: 0x1B0A45C
    static void get_property_info(System::Reflection::MonoProperty* prop, System::Reflection::MonoPropertyInfo& info, System::Reflection::PInfo req_info);
    // static System.Type[] GetTypeModifiers(System.Reflection.MonoProperty prop, System.Boolean optional)
    // Offset: 0x1B0B600
    static ::Array<System::Type*>* GetTypeModifiers(System::Reflection::MonoProperty* prop, bool optional);
    // static System.Object get_default_value(System.Reflection.MonoProperty prop)
    // Offset: 0x1B0ACBC
    static ::Il2CppObject* get_default_value(System::Reflection::MonoProperty* prop);
  }; // System.Reflection.MonoPropertyInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoPropertyInfo), 40 + sizeof(System::Reflection::PropertyAttributes)> __System_Reflection_MonoPropertyInfoSizeCheck;
  static_assert(sizeof(MonoPropertyInfo) == 0x2C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoPropertyInfo, "System.Reflection", "MonoPropertyInfo");
