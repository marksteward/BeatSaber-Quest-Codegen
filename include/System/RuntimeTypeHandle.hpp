// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: RuntimeModule
  class RuntimeModule;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.RuntimeTypeHandle
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D37DFC
  struct RuntimeTypeHandle/*, public System::ValueType, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.IntPtr value
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr value;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: RuntimeTypeHandle
    constexpr RuntimeTypeHandle(System::IntPtr value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return value;
    }
    // System.Void .ctor(System.IntPtr val)
    // Offset: 0xCA00F4
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  RuntimeTypeHandle(System::IntPtr val)
    // System.Void .ctor(System.RuntimeType type)
    // Offset: 0xCA00FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RuntimeTypeHandle(System::RuntimeType* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeTypeHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, type);
    }
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCA0118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RuntimeTypeHandle(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeTypeHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(info, context)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, info, context);
    }
    // public System.IntPtr get_Value()
    // Offset: 0xCA0120
    System::IntPtr get_Value();
    // static System.Reflection.TypeAttributes GetAttributes(System.RuntimeType type)
    // Offset: 0x144B7F8
    static System::Reflection::TypeAttributes GetAttributes(System::RuntimeType* type);
    // static private System.Int32 GetMetadataToken(System.RuntimeType type)
    // Offset: 0x14513D8
    static int GetMetadataToken(System::RuntimeType* type);
    // static System.Int32 GetToken(System.RuntimeType type)
    // Offset: 0x144E610
    static int GetToken(System::RuntimeType* type);
    // static private System.Type GetGenericTypeDefinition_impl(System.RuntimeType type)
    // Offset: 0x14513DC
    static System::Type* GetGenericTypeDefinition_impl(System::RuntimeType* type);
    // static System.Type GetGenericTypeDefinition(System.RuntimeType type)
    // Offset: 0x144CE74
    static System::Type* GetGenericTypeDefinition(System::RuntimeType* type);
    // static System.Boolean HasElementType(System.RuntimeType type)
    // Offset: 0x144BA6C
    static bool HasElementType(System::RuntimeType* type);
    // static System.Boolean HasInstantiation(System.RuntimeType type)
    // Offset: 0x144CE7C
    static bool HasInstantiation(System::RuntimeType* type);
    // static System.Boolean IsArray(System.RuntimeType type)
    // Offset: 0x144BBF8
    static bool IsArray(System::RuntimeType* type);
    // static System.Boolean IsByRef(System.RuntimeType type)
    // Offset: 0x144B894
    static bool IsByRef(System::RuntimeType* type);
    // static System.Boolean IsComObject(System.RuntimeType type)
    // Offset: 0x14513E0
    static bool IsComObject(System::RuntimeType* type);
    // static System.Boolean IsInstanceOfType(System.RuntimeType type, System.Object o)
    // Offset: 0x144B4A0
    static bool IsInstanceOfType(System::RuntimeType* type, ::Il2CppObject* o);
    // static System.Boolean IsPointer(System.RuntimeType type)
    // Offset: 0x144B8A4
    static bool IsPointer(System::RuntimeType* type);
    // static System.Boolean IsPrimitive(System.RuntimeType type)
    // Offset: 0x144B89C
    static bool IsPrimitive(System::RuntimeType* type);
    // static System.Boolean HasReferences(System.RuntimeType type)
    // Offset: 0x14513E4
    static bool HasReferences(System::RuntimeType* type);
    // static System.Boolean IsComObject(System.RuntimeType type, System.Boolean isGenericCOM)
    // Offset: 0x144B8AC
    static bool IsComObject(System::RuntimeType* type, bool isGenericCOM);
    // static System.Boolean IsContextful(System.RuntimeType type)
    // Offset: 0x144B800
    static bool IsContextful(System::RuntimeType* type);
    // static System.Boolean IsEquivalentTo(System.RuntimeType rtType1, System.RuntimeType rtType2)
    // Offset: 0x144B7DC
    static bool IsEquivalentTo(System::RuntimeType* rtType1, System::RuntimeType* rtType2);
    // static System.Boolean IsSzArray(System.RuntimeType type)
    // Offset: 0x144BBA4
    static bool IsSzArray(System::RuntimeType* type);
    // static System.Boolean IsInterface(System.RuntimeType type)
    // Offset: 0x14513E8
    static bool IsInterface(System::RuntimeType* type);
    // static System.Int32 GetArrayRank(System.RuntimeType type)
    // Offset: 0x144BCA8
    static int GetArrayRank(System::RuntimeType* type);
    // static System.Reflection.RuntimeAssembly GetAssembly(System.RuntimeType type)
    // Offset: 0x144B464
    static System::Reflection::RuntimeAssembly* GetAssembly(System::RuntimeType* type);
    // static System.RuntimeType GetElementType(System.RuntimeType type)
    // Offset: 0x144BCB0
    static System::RuntimeType* GetElementType(System::RuntimeType* type);
    // static System.Reflection.RuntimeModule GetModule(System.RuntimeType type)
    // Offset: 0x144B458
    static System::Reflection::RuntimeModule* GetModule(System::RuntimeType* type);
    // static System.Boolean IsGenericVariable(System.RuntimeType type)
    // Offset: 0x144B7E8
    static bool IsGenericVariable(System::RuntimeType* type);
    // static System.RuntimeType GetBaseType(System.RuntimeType type)
    // Offset: 0x144B7EC
    static System::RuntimeType* GetBaseType(System::RuntimeType* type);
    // static System.Boolean CanCastTo(System.RuntimeType type, System.RuntimeType target)
    // Offset: 0x144B720
    static bool CanCastTo(System::RuntimeType* type, System::RuntimeType* target);
    // static private System.Boolean type_is_assignable_from(System.Type a, System.Type b)
    // Offset: 0x145140C
    static bool type_is_assignable_from(System::Type* a, System::Type* b);
    // static System.Boolean IsGenericTypeDefinition(System.RuntimeType type)
    // Offset: 0x144CD10
    static bool IsGenericTypeDefinition(System::RuntimeType* type);
    // static System.IntPtr GetGenericParameterInfo(System.RuntimeType type)
    // Offset: 0x1450930
    static System::IntPtr GetGenericParameterInfo(System::RuntimeType* type);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCA0128
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCA0130
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA0138
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.RuntimeTypeHandle
  static check_size<sizeof(RuntimeTypeHandle), 0 + sizeof(System::IntPtr)> __System_RuntimeTypeHandleSizeCheck;
  static_assert(sizeof(RuntimeTypeHandle) == 0x8);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeTypeHandle, "System", "RuntimeTypeHandle");
