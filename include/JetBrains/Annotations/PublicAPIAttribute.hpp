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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.PublicAPIAttribute
  // [] Offset: FFFFFFFF
  // [MeansImplicitUseAttribute] Offset: D82660
  class PublicAPIAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD82E58
    // private System.String <Comment>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Comment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PublicAPIAttribute
    PublicAPIAttribute(::Il2CppString* Comment_ = {}) noexcept : Comment{Comment_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Comment;
    }
    // public System.Void .ctor(System.String comment)
    // Offset: 0x19EE848
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PublicAPIAttribute* New_ctor(::Il2CppString* comment) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::PublicAPIAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PublicAPIAttribute*, creationType>(comment)));
    }
    // public System.String get_Comment()
    // Offset: 0x19EE87C
    ::Il2CppString* get_Comment();
    // private System.Void set_Comment(System.String value)
    // Offset: 0x19EE884
    void set_Comment(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x19EE840
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PublicAPIAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::PublicAPIAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PublicAPIAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.PublicAPIAttribute
  static check_size<sizeof(PublicAPIAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_PublicAPIAttributeSizeCheck;
  static_assert(sizeof(PublicAPIAttribute) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PublicAPIAttribute*, "JetBrains.Annotations", "PublicAPIAttribute");
