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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.DefaultMemberAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D38604
  // [ComVisibleAttribute] Offset: D38604
  class DefaultMemberAttribute : public System::Attribute {
    public:
    // private System.String m_memberName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_memberName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DefaultMemberAttribute
    DefaultMemberAttribute(::Il2CppString* m_memberName_ = {}) noexcept : m_memberName{m_memberName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_memberName;
    }
    // public System.Void .ctor(System.String memberName)
    // Offset: 0x172372C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultMemberAttribute* New_ctor(::Il2CppString* memberName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::DefaultMemberAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultMemberAttribute*, creationType>(memberName)));
    }
    // public System.String get_MemberName()
    // Offset: 0x1723760
    ::Il2CppString* get_MemberName();
  }; // System.Reflection.DefaultMemberAttribute
  static check_size<sizeof(DefaultMemberAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_DefaultMemberAttributeSizeCheck;
  static_assert(sizeof(DefaultMemberAttribute) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::DefaultMemberAttribute*, "System.Reflection", "DefaultMemberAttribute");
