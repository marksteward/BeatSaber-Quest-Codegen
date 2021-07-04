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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ComDefaultInterfaceAttribute
  // [ComVisibleAttribute] Offset: D7EE2C
  // [AttributeUsageAttribute] Offset: D7EE2C
  class ComDefaultInterfaceAttribute : public System::Attribute {
    public:
    // System.Type _val
    // Size: 0x8
    // Offset: 0x10
    System::Type* val;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: ComDefaultInterfaceAttribute
    ComDefaultInterfaceAttribute(System::Type* val_ = {}) noexcept : val{val_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return val;
    }
    // public System.Void .ctor(System.Type defaultInterface)
    // Offset: 0x141DB2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComDefaultInterfaceAttribute* New_ctor(System::Type* defaultInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::ComDefaultInterfaceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComDefaultInterfaceAttribute*, creationType>(defaultInterface)));
    }
  }; // System.Runtime.InteropServices.ComDefaultInterfaceAttribute
  #pragma pack(pop)
  static check_size<sizeof(ComDefaultInterfaceAttribute), 16 + sizeof(System::Type*)> __System_Runtime_InteropServices_ComDefaultInterfaceAttributeSizeCheck;
  static_assert(sizeof(ComDefaultInterfaceAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComDefaultInterfaceAttribute*, "System.Runtime.InteropServices", "ComDefaultInterfaceAttribute");
// Writing MetadataGetter for method: System::Runtime::InteropServices::ComDefaultInterfaceAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
