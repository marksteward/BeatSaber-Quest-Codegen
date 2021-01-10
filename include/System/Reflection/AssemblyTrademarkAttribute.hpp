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
  // Autogenerated type: System.Reflection.AssemblyTrademarkAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D381B4
  // [AttributeUsageAttribute] Offset: D381B4
  class AssemblyTrademarkAttribute : public System::Attribute {
    public:
    // private System.String m_trademark
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_trademark;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssemblyTrademarkAttribute
    AssemblyTrademarkAttribute(::Il2CppString* m_trademark_ = {}) noexcept : m_trademark{m_trademark_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_trademark;
    }
    // public System.Void .ctor(System.String trademark)
    // Offset: 0x172194C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyTrademarkAttribute* New_ctor(::Il2CppString* trademark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyTrademarkAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyTrademarkAttribute*, creationType>(trademark)));
    }
  }; // System.Reflection.AssemblyTrademarkAttribute
  static check_size<sizeof(AssemblyTrademarkAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyTrademarkAttributeSizeCheck;
  static_assert(sizeof(AssemblyTrademarkAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyTrademarkAttribute*, "System.Reflection", "AssemblyTrademarkAttribute");
#pragma pack(pop)
