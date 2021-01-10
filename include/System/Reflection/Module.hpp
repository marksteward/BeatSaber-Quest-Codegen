// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  // Autogenerated type: System.Reflection.Module
  // [] Offset: FFFFFFFF
  // [ComDefaultInterfaceAttribute] Offset: D38EEC
  // [ComVisibleAttribute] Offset: D38EEC
  // [ClassInterfaceAttribute] Offset: D38EEC
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
    // System.Guid GetModuleVersionId()
    // Offset: 0x15CA398
    System::Guid GetModuleVersionId();
    // static private System.Boolean filter_by_type_name(System.Type m, System.Object filterCriteria)
    // Offset: 0x15CA3D0
    static bool filter_by_type_name(System::Type* m, ::Il2CppObject* filterCriteria);
    // static private System.Boolean filter_by_type_name_ignore_case(System.Type m, System.Object filterCriteria)
    // Offset: 0x15CA4D4
    static bool filter_by_type_name_ignore_case(System::Type* m, ::Il2CppObject* filterCriteria);
    // private System.String GetGuidInternal()
    // Offset: 0x15CA3CC
    ::Il2CppString* GetGuidInternal();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0x15CA64C
    System::Reflection::Assembly* get_Assembly();
    // public System.String get_ScopeName()
    // Offset: 0x15CA718
    ::Il2CppString* get_ScopeName();
    // public System.Guid get_ModuleVersionId()
    // Offset: 0x15CA77C
    System::Guid get_ModuleVersionId();
    // static private System.Exception CreateNIE()
    // Offset: 0x15CA6B0
    static System::Exception* CreateNIE();
    // public System.Boolean IsResource()
    // Offset: 0x15CA7E0
    bool IsResource();
    // static private System.Void .cctor()
    // Offset: 0x15CA90C
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x15CA328
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Module* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::Module::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Module*, creationType>()));
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x15CA330
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x15CA390
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x15CA5EC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15CA5F8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15CA844
    // Implemented from: System.Reflection.ICustomAttributeProvider
    // Base method: System.Object[] ICustomAttributeProvider::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15CA8A8
    // Implemented from: System.Reflection.ICustomAttributeProvider
    // Base method: System.Boolean ICustomAttributeProvider::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
  }; // System.Reflection.Module
  static check_size<sizeof(Module), 60 + sizeof(int)> __System_Reflection_ModuleSizeCheck;
  static_assert(sizeof(Module) == 0x40);
  // static public System.Boolean op_Equality(System.Reflection.Module left, System.Reflection.Module right)
  // Offset: 0x15CA600
  bool operator ==(System::Reflection::Module* left, System::Reflection::Module& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Module*, "System.Reflection", "Module");
#pragma pack(pop)
