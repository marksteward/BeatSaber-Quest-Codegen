// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Reflection.ICustomAttributeProvider
#include "System/Reflection/ICustomAttributeProvider.hpp"
// Including type: System.Runtime.InteropServices._Module
#include "System/Runtime/InteropServices/_Module.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: TypeFilter
  class TypeFilter;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.Module
  // [ComDefaultInterfaceAttribute] Offset: D7C3F0
  // [ClassInterfaceAttribute] Offset: D7C3F0
  // [ComVisibleAttribute] Offset: D7C3F0
  class Module : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable, public System::Reflection::ICustomAttributeProvider, public System::Runtime::InteropServices::_Module*/ {
    public:
    // System.IntPtr _impl
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr impl;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.Reflection.Assembly assembly
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::Assembly* assembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // System.String fqname
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* fqname;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String name
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String scopename
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* scopename;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Boolean is_resource
    // Size: 0x1
    // Offset: 0x38
    bool is_resource;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: is_resource and: token
    char __padding5[0x3] = {};
    // System.Int32 token
    // Size: 0x4
    // Offset: 0x3C
    int token;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Module
    Module(System::IntPtr impl_ = {}, System::Reflection::Assembly* assembly_ = {}, ::Il2CppString* fqname_ = {}, ::Il2CppString* name_ = {}, ::Il2CppString* scopename_ = {}, bool is_resource_ = {}, int token_ = {}) noexcept : impl{impl_}, assembly{assembly_}, fqname{fqname_}, name{name_}, scopename{scopename_}, is_resource{is_resource_}, token{token_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Reflection::ICustomAttributeProvider
    operator System::Reflection::ICustomAttributeProvider() noexcept {
      return *reinterpret_cast<System::Reflection::ICustomAttributeProvider*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_Module
    operator System::Runtime::InteropServices::_Module() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_Module*>(this);
    }
    // Get static field: static public readonly System.Reflection.TypeFilter FilterTypeName
    static System::Reflection::TypeFilter* _get_FilterTypeName();
    // Set static field: static public readonly System.Reflection.TypeFilter FilterTypeName
    static void _set_FilterTypeName(System::Reflection::TypeFilter* value);
    // Get static field: static public readonly System.Reflection.TypeFilter FilterTypeNameIgnoreCase
    static System::Reflection::TypeFilter* _get_FilterTypeNameIgnoreCase();
    // Set static field: static public readonly System.Reflection.TypeFilter FilterTypeNameIgnoreCase
    static void _set_FilterTypeNameIgnoreCase(System::Reflection::TypeFilter* value);
    // static field const value: static private System.Reflection.BindingFlags defaultBindingFlags
    static constexpr const int defaultBindingFlags = 28;
    // Get static field: static private System.Reflection.BindingFlags defaultBindingFlags
    static System::Reflection::BindingFlags _get_defaultBindingFlags();
    // Set static field: static private System.Reflection.BindingFlags defaultBindingFlags
    static void _set_defaultBindingFlags(System::Reflection::BindingFlags value);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C7DA68
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Guid GetModuleVersionId()
    // Offset: 0x1C7DAD0
    System::Guid GetModuleVersionId();
    // static private System.Boolean filter_by_type_name(System.Type m, System.Object filterCriteria)
    // Offset: 0x1C7DB08
    static bool filter_by_type_name(System::Type* m, ::Il2CppObject* filterCriteria);
    // static private System.Boolean filter_by_type_name_ignore_case(System.Type m, System.Object filterCriteria)
    // Offset: 0x1C7DC0C
    static bool filter_by_type_name_ignore_case(System::Type* m, ::Il2CppObject* filterCriteria);
    // private System.String GetGuidInternal()
    // Offset: 0x1C7DB04
    ::Il2CppString* GetGuidInternal();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0x1C7DD80
    System::Reflection::Assembly* get_Assembly();
    // public System.String get_ScopeName()
    // Offset: 0x1C7DE4C
    ::Il2CppString* get_ScopeName();
    // public System.Guid get_ModuleVersionId()
    // Offset: 0x1C7DEB0
    System::Guid get_ModuleVersionId();
    // static private System.Exception CreateNIE()
    // Offset: 0x1C7DDE4
    static System::Exception* CreateNIE();
    // public System.Boolean IsResource()
    // Offset: 0x1C7DF14
    bool IsResource();
    // public System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C7DF78
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C7DFDC
    bool IsDefined(System::Type* attributeType, bool inherit);
    // static private System.Void .cctor()
    // Offset: 0x1C7E040
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1C7DA64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Module* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::Module::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Module*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1C7DAC8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1C7DD24
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1C7DD30
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.Module
  #pragma pack(pop)
  static check_size<sizeof(Module), 60 + sizeof(int)> __System_Reflection_ModuleSizeCheck;
  static_assert(sizeof(Module) == 0x40);
  // static public System.Boolean op_Equality(System.Reflection.Module left, System.Reflection.Module right)
  // Offset: 0x1C7DD34
  bool operator ==(System::Reflection::Module* left, System::Reflection::Module& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Module*, "System.Reflection", "Module");
// Writing MetadataGetter for method: System::Reflection::Module::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Module::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::Module::GetObjectData)> {
  const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::GetModuleVersionId
// Il2CppName: GetModuleVersionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (System::Reflection::Module::*)()>(&System::Reflection::Module::GetModuleVersionId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "GetModuleVersionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::filter_by_type_name
// Il2CppName: filter_by_type_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, ::Il2CppObject*)>(&System::Reflection::Module::filter_by_type_name)> {
  const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* filterCriteria = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "filter_by_type_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, filterCriteria});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::filter_by_type_name_ignore_case
// Il2CppName: filter_by_type_name_ignore_case
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, ::Il2CppObject*)>(&System::Reflection::Module::filter_by_type_name_ignore_case)> {
  const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* filterCriteria = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "filter_by_type_name_ignore_case", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, filterCriteria});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::GetGuidInternal
// Il2CppName: GetGuidInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::Module::*)()>(&System::Reflection::Module::GetGuidInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "GetGuidInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly* (System::Reflection::Module::*)()>(&System::Reflection::Module::get_Assembly)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::get_ScopeName
// Il2CppName: get_ScopeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::Module::*)()>(&System::Reflection::Module::get_ScopeName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "get_ScopeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::get_ModuleVersionId
// Il2CppName: get_ModuleVersionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (System::Reflection::Module::*)()>(&System::Reflection::Module::get_ModuleVersionId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "get_ModuleVersionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::CreateNIE
// Il2CppName: CreateNIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)()>(&System::Reflection::Module::CreateNIE)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "CreateNIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::IsResource
// Il2CppName: IsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Module::*)()>(&System::Reflection::Module::IsResource)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "IsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Reflection::Module::*)(System::Type*, bool)>(&System::Reflection::Module::GetCustomAttributes)> {
  const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Module::*)(System::Type*, bool)>(&System::Reflection::Module::IsDefined)> {
  const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Reflection::Module::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::Module::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::Module::*)()>(&System::Reflection::Module::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Module::*)(::Il2CppObject*)>(&System::Reflection::Module::Equals)> {
  const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::Module::*)()>(&System::Reflection::Module::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Module*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Module::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
