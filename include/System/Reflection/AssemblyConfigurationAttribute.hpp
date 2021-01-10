// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  // Autogenerated type: System.Reflection.AssemblyConfigurationAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D38328
  // [AttributeUsageAttribute] Offset: D38328
  class AssemblyConfigurationAttribute : public System::Attribute {
    public:
    // private System.String m_configuration
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_configuration;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssemblyConfigurationAttribute
    AssemblyConfigurationAttribute(::Il2CppString* m_configuration_ = {}) noexcept : m_configuration{m_configuration_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_configuration;
    }
    // public System.Void .ctor(System.String configuration)
    // Offset: 0x17205B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyConfigurationAttribute* New_ctor(::Il2CppString* configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyConfigurationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyConfigurationAttribute*, creationType>(configuration)));
    }
  }; // System.Reflection.AssemblyConfigurationAttribute
  static check_size<sizeof(AssemblyConfigurationAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyConfigurationAttributeSizeCheck;
  static_assert(sizeof(AssemblyConfigurationAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyConfigurationAttribute*, "System.Reflection", "AssemblyConfigurationAttribute");
#pragma pack(pop)
