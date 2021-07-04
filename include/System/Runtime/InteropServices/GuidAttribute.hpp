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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.GuidAttribute
  // [ComVisibleAttribute] Offset: D7EF94
  // [AttributeUsageAttribute] Offset: D7EF94
  class GuidAttribute : public System::Attribute {
    public:
    // System.String _val
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* val;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: GuidAttribute
    GuidAttribute(::Il2CppString* val_ = {}) noexcept : val{val_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return val;
    }
    // public System.Void .ctor(System.String guid)
    // Offset: 0x141E610
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuidAttribute* New_ctor(::Il2CppString* guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::GuidAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuidAttribute*, creationType>(guid)));
    }
    // public System.String get_Value()
    // Offset: 0x141E63C
    ::Il2CppString* get_Value();
  }; // System.Runtime.InteropServices.GuidAttribute
  #pragma pack(pop)
  static check_size<sizeof(GuidAttribute), 16 + sizeof(::Il2CppString*)> __System_Runtime_InteropServices_GuidAttributeSizeCheck;
  static_assert(sizeof(GuidAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GuidAttribute*, "System.Runtime.InteropServices", "GuidAttribute");
// Writing MetadataGetter for method: System::Runtime::InteropServices::GuidAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::GuidAttribute::get_Value
// Il2CppName: get_Value
// Cannot perform method pointer template specialization from operators!
