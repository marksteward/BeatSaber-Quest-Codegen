// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.YieldAwaitable
  struct YieldAwaitable/*, public System::ValueType*/ {
    public:
    // Nested type: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter
    struct YieldAwaiter;
    // Creating value type constructor for type: YieldAwaitable
    constexpr YieldAwaitable() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter GetAwaiter()
    // Offset: 0xEED0FC
    System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter GetAwaiter();
  }; // System.Runtime.CompilerServices.YieldAwaitable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::YieldAwaitable, "System.Runtime.CompilerServices", "YieldAwaitable");
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::GetAwaiter
// Il2CppName: GetAwaiter
// Cannot perform method pointer template specialization from operators!
