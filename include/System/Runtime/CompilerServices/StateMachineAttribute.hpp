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
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.StateMachineAttribute
  // [AttributeUsageAttribute] Offset: D7E9C8
  class StateMachineAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD82190
    // private System.Type <StateMachineType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Type* StateMachineType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: StateMachineAttribute
    StateMachineAttribute(System::Type* StateMachineType_ = {}) noexcept : StateMachineType{StateMachineType_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return StateMachineType;
    }
    // private System.Void set_StateMachineType(System.Type value)
    // Offset: 0x141CDE0
    void set_StateMachineType(System::Type* value);
    // public System.Void .ctor(System.Type stateMachineType)
    // Offset: 0x141BF40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StateMachineAttribute* New_ctor(System::Type* stateMachineType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::StateMachineAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StateMachineAttribute*, creationType>(stateMachineType)));
    }
  }; // System.Runtime.CompilerServices.StateMachineAttribute
  #pragma pack(pop)
  static check_size<sizeof(StateMachineAttribute), 16 + sizeof(System::Type*)> __System_Runtime_CompilerServices_StateMachineAttributeSizeCheck;
  static_assert(sizeof(StateMachineAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::StateMachineAttribute*, "System.Runtime.CompilerServices", "StateMachineAttribute");
// Writing MetadataGetter for method: System::Runtime::CompilerServices::StateMachineAttribute::set_StateMachineType
// Il2CppName: set_StateMachineType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::StateMachineAttribute::*)(System::Type*)>(&System::Runtime::CompilerServices::StateMachineAttribute::set_StateMachineType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::StateMachineAttribute*), "set_StateMachineType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::StateMachineAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
