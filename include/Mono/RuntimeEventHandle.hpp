// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  // Autogenerated type: Mono.RuntimeEventHandle
  // [] Offset: FFFFFFFF
  struct RuntimeEventHandle/*, public System::ValueType*/ {
    public:
    // private System.IntPtr value
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr value;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: RuntimeEventHandle
    constexpr RuntimeEventHandle(System::IntPtr value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return value;
    }
    // System.Void .ctor(System.IntPtr v)
    // Offset: 0xCA0C7C
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  RuntimeEventHandle(System::IntPtr v)
    // public System.IntPtr get_Value()
    // Offset: 0xCA0C84
    System::IntPtr get_Value();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCA0C8C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA0C94
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Mono.RuntimeEventHandle
  static check_size<sizeof(RuntimeEventHandle), 0 + sizeof(System::IntPtr)> __Mono_RuntimeEventHandleSizeCheck;
  static_assert(sizeof(RuntimeEventHandle) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeEventHandle, "Mono", "RuntimeEventHandle");
#pragma pack(pop)
