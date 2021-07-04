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
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: RtFieldInfo
  class RtFieldInfo;
  // Forward declaring type: FieldAttributes
  struct FieldAttributes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.RuntimeFieldHandle
  // [ComVisibleAttribute] Offset: D7B350
  struct RuntimeFieldHandle/*, public System::ValueType, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.IntPtr value
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr value;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: RuntimeFieldHandle
    constexpr RuntimeFieldHandle(System::IntPtr value_ = {}) noexcept : value{value_} {}
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
    // Offset: 0xEF9D2C
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  RuntimeFieldHandle(System::IntPtr v)
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xEF9D34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RuntimeFieldHandle(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeFieldHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(info), ::il2cpp_utils::ExtractType(context)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, info, context);
    }
    // public System.IntPtr get_Value()
    // Offset: 0xEF9D3C
    System::IntPtr get_Value();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xEF9D44
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static private System.Void SetValueInternal(System.Reflection.FieldInfo fi, System.Object obj, System.Object value)
    // Offset: 0x169CE7C
    static void SetValueInternal(System::Reflection::FieldInfo* fi, ::Il2CppObject* obj, ::Il2CppObject* value);
    // static System.Void SetValue(System.Reflection.RtFieldInfo field, System.Object obj, System.Object value, System.RuntimeType fieldType, System.Reflection.FieldAttributes fieldAttr, System.RuntimeType declaringType, ref System.Boolean domainInitialized)
    // Offset: 0x169CE80
    static void SetValue(System::Reflection::RtFieldInfo* field, ::Il2CppObject* obj, ::Il2CppObject* value, System::RuntimeType* fieldType, System::Reflection::FieldAttributes fieldAttr, System::RuntimeType* declaringType, bool& domainInitialized);
    // static System.Void SetValueDirect(System.Reflection.RtFieldInfo field, System.RuntimeType fieldType, System.Void* pTypedRef, System.Object value, System.RuntimeType contextType)
    // Offset: 0x169CE84
    static void SetValueDirect(System::Reflection::RtFieldInfo* field, System::RuntimeType* fieldType, void* pTypedRef, ::Il2CppObject* value, System::RuntimeType* contextType);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEF9D4C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEF9D54
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.RuntimeFieldHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeFieldHandle), 0 + sizeof(System::IntPtr)> __System_RuntimeFieldHandleSizeCheck;
  static_assert(sizeof(RuntimeFieldHandle) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeFieldHandle, "System", "RuntimeFieldHandle");
// Writing MetadataGetter for method: System::RuntimeFieldHandle::RuntimeFieldHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::RuntimeFieldHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::get_Value
// Il2CppName: get_Value
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::GetObjectData
// Il2CppName: GetObjectData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::SetValueInternal
// Il2CppName: SetValueInternal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::SetValue
// Il2CppName: SetValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::SetValueDirect
// Il2CppName: SetValueDirect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
