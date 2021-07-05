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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeMethodInfo
  class RuntimeMethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypeNameFormatFlags
  struct TypeNameFormatFlags;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.RuntimeMethodHandle
  // [ComVisibleAttribute] Offset: D7B364
  struct RuntimeMethodHandle/*, public System::ValueType, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.IntPtr value
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr value;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: RuntimeMethodHandle
    constexpr RuntimeMethodHandle(System::IntPtr value_ = {}) noexcept : value{value_} {}
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
    // System.Void .ctor(System.IntPtr v)
    // Offset: 0xEF9D60
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  RuntimeMethodHandle(System::IntPtr v)
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xEF9D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RuntimeMethodHandle(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeMethodHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(info), ::il2cpp_utils::ExtractType(context)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, info, context);
    }
    // public System.IntPtr get_Value()
    // Offset: 0xEF9D70
    System::IntPtr get_Value();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xEF9D78
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static System.String ConstructInstantiation(System.Reflection.RuntimeMethodInfo method, System.TypeNameFormatFlags format)
    // Offset: 0x169D2B0
    static ::Il2CppString* ConstructInstantiation(System::Reflection::RuntimeMethodInfo* method, System::TypeNameFormatFlags format);
    // System.Boolean IsNullHandle()
    // Offset: 0xEF9D94
    bool IsNullHandle();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEF9D80
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEF9D88
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.RuntimeMethodHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeMethodHandle), 0 + sizeof(System::IntPtr)> __System_RuntimeMethodHandleSizeCheck;
  static_assert(sizeof(RuntimeMethodHandle) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeMethodHandle, "System", "RuntimeMethodHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::RuntimeMethodHandle::RuntimeMethodHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::RuntimeMethodHandle::RuntimeMethodHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::RuntimeMethodHandle::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (System::RuntimeMethodHandle::*)()>(&System::RuntimeMethodHandle::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeMethodHandle), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::RuntimeMethodHandle::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeMethodHandle::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::RuntimeMethodHandle::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeMethodHandle), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::RuntimeMethodHandle::ConstructInstantiation
// Il2CppName: ConstructInstantiation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Reflection::RuntimeMethodInfo*, System::TypeNameFormatFlags)>(&System::RuntimeMethodHandle::ConstructInstantiation)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "RuntimeMethodInfo")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "TypeNameFormatFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeMethodHandle), "ConstructInstantiation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, format});
  }
};
// Writing MetadataGetter for method: System::RuntimeMethodHandle::IsNullHandle
// Il2CppName: IsNullHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeMethodHandle::*)()>(&System::RuntimeMethodHandle::IsNullHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeMethodHandle), "IsNullHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::RuntimeMethodHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeMethodHandle::*)(::Il2CppObject*)>(&System::RuntimeMethodHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeMethodHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::RuntimeMethodHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::RuntimeMethodHandle::*)()>(&System::RuntimeMethodHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeMethodHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
