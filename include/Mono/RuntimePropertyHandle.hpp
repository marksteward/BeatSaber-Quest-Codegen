// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.RuntimePropertyHandle
  struct RuntimePropertyHandle : public System::ValueType {
    public:
    // private System.IntPtr value
    // Offset: 0x0
    System::IntPtr value;
    // Creating value type constructor for type: RuntimePropertyHandle
    constexpr RuntimePropertyHandle(System::IntPtr value_ = {}) : value{value_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const {
      return value;
    }
    // System.Void .ctor(System.IntPtr v)
    // Offset: 0xA40908
    static RuntimePropertyHandle* New_ctor(System::IntPtr v);
    // public System.IntPtr get_Value()
    // Offset: 0xA40910
    System::IntPtr get_Value();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA40918
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA40920
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Mono.RuntimePropertyHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimePropertyHandle, "Mono", "RuntimePropertyHandle");
#pragma pack(pop)
