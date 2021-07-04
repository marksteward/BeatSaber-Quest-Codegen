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
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.OptionalFieldAttribute
  // [AttributeUsageAttribute] Offset: D7DD60
  // [ComVisibleAttribute] Offset: D7DD60
  class OptionalFieldAttribute : public System::Attribute {
    public:
    // private System.Int32 versionAdded
    // Size: 0x4
    // Offset: 0x10
    int versionAdded;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OptionalFieldAttribute
    OptionalFieldAttribute(int versionAdded_ = {}) noexcept : versionAdded{versionAdded_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return versionAdded;
    }
    // public System.Void set_VersionAdded(System.Int32 value)
    // Offset: 0x1698980
    void set_VersionAdded(int value);
    // public System.Void .ctor()
    // Offset: 0x1698970
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OptionalFieldAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::OptionalFieldAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OptionalFieldAttribute*, creationType>()));
    }
  }; // System.Runtime.Serialization.OptionalFieldAttribute
  #pragma pack(pop)
  static check_size<sizeof(OptionalFieldAttribute), 16 + sizeof(int)> __System_Runtime_Serialization_OptionalFieldAttributeSizeCheck;
  static_assert(sizeof(OptionalFieldAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::OptionalFieldAttribute*, "System.Runtime.Serialization", "OptionalFieldAttribute");
// Writing MetadataGetter for method: System::Runtime::Serialization::OptionalFieldAttribute::set_VersionAdded
// Il2CppName: set_VersionAdded
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::OptionalFieldAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
