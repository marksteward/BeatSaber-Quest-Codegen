// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ComVisibleAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D3BA10
  // [ComVisibleAttribute] Offset: D3BA10
  class ComVisibleAttribute : public System::Attribute {
    public:
    // System.Boolean _val
    // Size: 0x1
    // Offset: 0x10
    bool val;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ComVisibleAttribute
    ComVisibleAttribute(bool val_ = {}) noexcept : val{val_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return val;
    }
    // public System.Void .ctor(System.Boolean visibility)
    // Offset: 0x11644C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComVisibleAttribute* New_ctor(bool visibility) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::ComVisibleAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComVisibleAttribute*, creationType>(visibility)));
    }
  }; // System.Runtime.InteropServices.ComVisibleAttribute
  static check_size<sizeof(ComVisibleAttribute), 16 + sizeof(bool)> __System_Runtime_InteropServices_ComVisibleAttributeSizeCheck;
  static_assert(sizeof(ComVisibleAttribute) == 0x11);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComVisibleAttribute*, "System.Runtime.InteropServices", "ComVisibleAttribute");
