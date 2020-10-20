// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.IntPtr
  struct IntPtr : public System::ValueType/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Void* m_value
    // Offset: 0x0
    void* m_value;
    // Creating value type constructor for type: IntPtr
    constexpr IntPtr(void* m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator void*
    constexpr operator void*() const noexcept {
      return m_value;
    }
    // Get static field: static public readonly System.IntPtr Zero
    static System::IntPtr _get_Zero();
    // Set static field: static public readonly System.IntPtr Zero
    static void _set_Zero(System::IntPtr value);
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0xC6E674
    IntPtr(int value);
    // public System.Void .ctor(System.Int64 value)
    // Offset: 0xC6E680
    IntPtr(int64_t value);
    // public System.Void .ctor(System.Void* value)
    // Offset: 0xC6E688
    // ABORTED: conflicts with another method.  IntPtr(void* value);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xC6E690
    IntPtr(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static public System.Int32 get_Size()
    // Offset: 0x1371F64
    static int get_Size();
    // public System.Int64 ToInt64()
    // Offset: 0xC6E6B0
    int64_t ToInt64();
    // public System.Void* ToPointer()
    // Offset: 0xC6E6B8
    void* ToPointer();
    // public System.String ToString(System.String format)
    // Offset: 0xC6E6F8
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.IntPtr op_Explicit(System.Int32 value)
    // Offset: 0x137213C
    explicit IntPtr(int& value);
    // static public System.IntPtr op_Explicit(System.Int64 value)
    // Offset: 0x1372144
    explicit IntPtr(int64_t& value);
    // static public System.IntPtr op_Explicit(System.Void* value)
    // Offset: 0x1372148
    // ABORTED: conflicts with another method.  explicit IntPtr(void* value);
    // static public System.Int32 op_Explicit(System.IntPtr value)
    // Offset: 0x137214C
    explicit operator int();
    // static public System.Int64 op_Explicit(System.IntPtr value)
    // Offset: 0x1372150
    explicit operator int64_t();
    // static public System.Void* op_Explicit(System.IntPtr value)
    // Offset: 0x1372154
    // ABORTED: conflicts with another method.  explicit operator void*();
    // System.Boolean IsNull()
    // Offset: 0xC6E734
    bool IsNull();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xC6E698
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC6E6A0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC6E6A8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xC6E6C0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.IntPtr
  // static public System.Boolean op_Equality(System.IntPtr value1, System.IntPtr value2)
  // Offset: 0x1372124
  bool operator ==(const System::IntPtr& value1, const System::IntPtr& value2);
  // static public System.Boolean op_Inequality(System.IntPtr value1, System.IntPtr value2)
  // Offset: 0x1372130
  bool operator !=(const System::IntPtr& value1, const System::IntPtr& value2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IntPtr, "System", "IntPtr");
#pragma pack(pop)
