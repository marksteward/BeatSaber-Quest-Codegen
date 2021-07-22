// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ErrorWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6C9F0
  class ErrorWrapper : public ::Il2CppObject {
    public:
    // private System.Int32 m_ErrorCode
    // Size: 0x4
    // Offset: 0x10
    int m_ErrorCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ErrorWrapper
    ErrorWrapper(int m_ErrorCode_ = {}) noexcept : m_ErrorCode{m_ErrorCode_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_ErrorCode;
    }
  }; // System.Runtime.InteropServices.ErrorWrapper
  #pragma pack(pop)
  static check_size<sizeof(ErrorWrapper), 16 + sizeof(int)> __System_Runtime_InteropServices_ErrorWrapperSizeCheck;
  static_assert(sizeof(ErrorWrapper) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ErrorWrapper*, "System.Runtime.InteropServices", "ErrorWrapper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
