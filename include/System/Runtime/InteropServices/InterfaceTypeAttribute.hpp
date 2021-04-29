// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.ComInterfaceType
#include "System/Runtime/InteropServices/ComInterfaceType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.InterfaceTypeAttribute
  // [ComVisibleAttribute] Offset: CA9BFC
  // [AttributeUsageAttribute] Offset: CA9BFC
  class InterfaceTypeAttribute : public System::Attribute {
    public:
    // System.Runtime.InteropServices.ComInterfaceType _val
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::InteropServices::ComInterfaceType val;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::ComInterfaceType) == 0x4);
    // Creating value type constructor for type: InterfaceTypeAttribute
    InterfaceTypeAttribute(System::Runtime::InteropServices::ComInterfaceType val_ = {}) noexcept : val{val_} {}
    // Creating conversion operator: operator System::Runtime::InteropServices::ComInterfaceType
    constexpr operator System::Runtime::InteropServices::ComInterfaceType() const noexcept {
      return val;
    }
    // public System.Void .ctor(System.Runtime.InteropServices.ComInterfaceType interfaceType)
    // Offset: 0x1322540
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InterfaceTypeAttribute* New_ctor(System::Runtime::InteropServices::ComInterfaceType interfaceType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::InterfaceTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InterfaceTypeAttribute*, creationType>(interfaceType)));
    }
  }; // System.Runtime.InteropServices.InterfaceTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(InterfaceTypeAttribute), 16 + sizeof(System::Runtime::InteropServices::ComInterfaceType)> __System_Runtime_InteropServices_InterfaceTypeAttributeSizeCheck;
  static_assert(sizeof(InterfaceTypeAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::InterfaceTypeAttribute*, "System.Runtime.InteropServices", "InterfaceTypeAttribute");
