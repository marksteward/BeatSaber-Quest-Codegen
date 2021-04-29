// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Collections.Concurrent
namespace System::Collections::Concurrent {
  // Size: 0x104
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.Collections.Concurrent.PaddedHeadAndTail
  // [DebuggerDisplayAttribute] Offset: CAB388
  struct PaddedHeadAndTail/*, public System::ValueType*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x80
    char ___base_padding[0x80] = {};
    // public System.Int32 Head
    // Size: 0x4
    // Offset: 0x80
    int Head;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Head and: Tail
    char __padding0[0x7C] = {};
    // public System.Int32 Tail
    // Size: 0x4
    // Offset: 0x100
    int Tail;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PaddedHeadAndTail
    constexpr PaddedHeadAndTail(int Head_ = {}, int Tail_ = {}) noexcept : Head{Head_}, Tail{Tail_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.Collections.Concurrent.PaddedHeadAndTail
  #pragma pack(pop)
  static check_size<sizeof(PaddedHeadAndTail), 256 + sizeof(int)> __System_Collections_Concurrent_PaddedHeadAndTailSizeCheck;
  static_assert(sizeof(PaddedHeadAndTail) == 0x104);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Concurrent::PaddedHeadAndTail, "System.Collections.Concurrent", "PaddedHeadAndTail");
