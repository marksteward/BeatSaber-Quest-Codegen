// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Attribute
  // [AttributeUsageAttribute] Offset: D7A318
  class Attribute : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Attribute
    Attribute() noexcept {}
    // static private System.Attribute[] InternalGetCustomAttributes(System.Reflection.PropertyInfo element, System.Type type, System.Boolean inherit)
    // Offset: 0x1779B58
    static ::Array<System::Attribute*>* InternalGetCustomAttributes(System::Reflection::PropertyInfo* element, System::Type* type, bool inherit);
    // static private System.Attribute[] InternalGetCustomAttributes(System.Reflection.EventInfo element, System.Type type, System.Boolean inherit)
    // Offset: 0x1779C08
    static ::Array<System::Attribute*>* InternalGetCustomAttributes(System::Reflection::EventInfo* element, System::Type* type, bool inherit);
    // static private System.Attribute[] InternalParamGetCustomAttributes(System.Reflection.ParameterInfo parameter, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1779CB8
    static ::Array<System::Attribute*>* InternalParamGetCustomAttributes(System::Reflection::ParameterInfo* parameter, System::Type* attributeType, bool inherit);
    // static private System.Boolean InternalIsDefined(System.Reflection.PropertyInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x177A09C
    static bool InternalIsDefined(System::Reflection::PropertyInfo* element, System::Type* attributeType, bool inherit);
    // static private System.Boolean InternalIsDefined(System.Reflection.EventInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x177A11C
    static bool InternalIsDefined(System::Reflection::EventInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute[] GetCustomAttributes(System.Reflection.MemberInfo element, System.Type type, System.Boolean inherit)
    // Offset: 0x177A19C
    static ::Array<System::Attribute*>* GetCustomAttributes(System::Reflection::MemberInfo* element, System::Type* type, bool inherit);
    // static public System.Boolean IsDefined(System.Reflection.MemberInfo element, System.Type attributeType)
    // Offset: 0x177A464
    static bool IsDefined(System::Reflection::MemberInfo* element, System::Type* attributeType);
    // static public System.Boolean IsDefined(System.Reflection.MemberInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x177A46C
    static bool IsDefined(System::Reflection::MemberInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute GetCustomAttribute(System.Reflection.MemberInfo element, System.Type attributeType)
    // Offset: 0x177A724
    static System::Attribute* GetCustomAttribute(System::Reflection::MemberInfo* element, System::Type* attributeType);
    // static public System.Attribute GetCustomAttribute(System.Reflection.MemberInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x177A72C
    static System::Attribute* GetCustomAttribute(System::Reflection::MemberInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute[] GetCustomAttributes(System.Reflection.ParameterInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x177A7FC
    static ::Array<System::Attribute*>* GetCustomAttributes(System::Reflection::ParameterInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute[] GetCustomAttributes(System.Reflection.Assembly element, System.Type attributeType)
    // Offset: 0x177AA98
    static ::Array<System::Attribute*>* GetCustomAttributes(System::Reflection::Assembly* element, System::Type* attributeType);
    // static public System.Attribute[] GetCustomAttributes(System.Reflection.Assembly element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x177AAA0
    static ::Array<System::Attribute*>* GetCustomAttributes(System::Reflection::Assembly* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute GetCustomAttribute(System.Reflection.Assembly element, System.Type attributeType)
    // Offset: 0x177ACB8
    static System::Attribute* GetCustomAttribute(System::Reflection::Assembly* element, System::Type* attributeType);
    // static public System.Attribute GetCustomAttribute(System.Reflection.Assembly element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x177ACC0
    static System::Attribute* GetCustomAttribute(System::Reflection::Assembly* element, System::Type* attributeType, bool inherit);
    // static private System.Boolean AreFieldValuesEqual(System.Object thisValue, System.Object thatValue)
    // Offset: 0x177AFE0
    static bool AreFieldValuesEqual(::Il2CppObject* thisValue, ::Il2CppObject* thatValue);
    // protected System.Void .ctor()
    // Offset: 0x177AD90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Attribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Attribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Attribute*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x177AD98
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x177B1A8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Attribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Attribute*, "System", "Attribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Attribute::InternalGetCustomAttributes
// Il2CppName: InternalGetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Attribute*>* (*)(System::Reflection::PropertyInfo*, System::Type*, bool)>(&System::Attribute::InternalGetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "InternalGetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, type, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::InternalGetCustomAttributes
// Il2CppName: InternalGetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Attribute*>* (*)(System::Reflection::EventInfo*, System::Type*, bool)>(&System::Attribute::InternalGetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "EventInfo")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "InternalGetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, type, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::InternalParamGetCustomAttributes
// Il2CppName: InternalParamGetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Attribute*>* (*)(System::Reflection::ParameterInfo*, System::Type*, bool)>(&System::Attribute::InternalParamGetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* parameter = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "InternalParamGetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameter, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::InternalIsDefined
// Il2CppName: InternalIsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::PropertyInfo*, System::Type*, bool)>(&System::Attribute::InternalIsDefined)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "InternalIsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::InternalIsDefined
// Il2CppName: InternalIsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::EventInfo*, System::Type*, bool)>(&System::Attribute::InternalIsDefined)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "EventInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "InternalIsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Attribute*>* (*)(System::Reflection::MemberInfo*, System::Type*, bool)>(&System::Attribute::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, type, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MemberInfo*, System::Type*)>(&System::Attribute::IsDefined)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType});
  }
};
// Writing MetadataGetter for method: System::Attribute::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MemberInfo*, System::Type*, bool)>(&System::Attribute::IsDefined)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::GetCustomAttribute
// Il2CppName: GetCustomAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Attribute* (*)(System::Reflection::MemberInfo*, System::Type*)>(&System::Attribute::GetCustomAttribute)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "GetCustomAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType});
  }
};
// Writing MetadataGetter for method: System::Attribute::GetCustomAttribute
// Il2CppName: GetCustomAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Attribute* (*)(System::Reflection::MemberInfo*, System::Type*, bool)>(&System::Attribute::GetCustomAttribute)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "GetCustomAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Attribute*>* (*)(System::Reflection::ParameterInfo*, System::Type*, bool)>(&System::Attribute::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Attribute*>* (*)(System::Reflection::Assembly*, System::Type*)>(&System::Attribute::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType});
  }
};
// Writing MetadataGetter for method: System::Attribute::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Attribute*>* (*)(System::Reflection::Assembly*, System::Type*, bool)>(&System::Attribute::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::GetCustomAttribute
// Il2CppName: GetCustomAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Attribute* (*)(System::Reflection::Assembly*, System::Type*)>(&System::Attribute::GetCustomAttribute)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "GetCustomAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType});
  }
};
// Writing MetadataGetter for method: System::Attribute::GetCustomAttribute
// Il2CppName: GetCustomAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Attribute* (*)(System::Reflection::Assembly*, System::Type*, bool)>(&System::Attribute::GetCustomAttribute)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "GetCustomAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Attribute::AreFieldValuesEqual
// Il2CppName: AreFieldValuesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Attribute::AreFieldValuesEqual)> {
  static const MethodInfo* get() {
    static auto* thisValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* thatValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "AreFieldValuesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thisValue, thatValue});
  }
};
// Writing MetadataGetter for method: System::Attribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Attribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Attribute::*)(::Il2CppObject*)>(&System::Attribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Attribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Attribute::*)()>(&System::Attribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Attribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
