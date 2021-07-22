// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.AsyncLocalValueChangedArgs`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct AsyncLocalValueChangedArgs_1/*, public System::ValueType*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD6F5EC
    // private T <PreviousValue>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T PreviousValue;
    // [CompilerGeneratedAttribute] Offset: 0xD6F5FC
    // private T <CurrentValue>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T CurrentValue;
    // [CompilerGeneratedAttribute] Offset: 0xD6F60C
    // private System.Boolean <ThreadContextChanged>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool ThreadContextChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AsyncLocalValueChangedArgs_1
    constexpr AsyncLocalValueChangedArgs_1(T PreviousValue_ = {}, T CurrentValue_ = {}, bool ThreadContextChanged_ = {}) noexcept : PreviousValue{PreviousValue_}, CurrentValue{CurrentValue_}, ThreadContextChanged{ThreadContextChanged_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.Threading.AsyncLocalValueChangedArgs`1
  // Could not write size check! Type: System.Threading.AsyncLocalValueChangedArgs`1 is generic, or has no fields that are valid for size checks!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Threading::AsyncLocalValueChangedArgs_1, "System.Threading", "AsyncLocalValueChangedArgs`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
