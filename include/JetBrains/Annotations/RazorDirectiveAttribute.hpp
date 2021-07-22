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
  // Autogenerated type: JetBrains.Annotations.RazorDirectiveAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DB85AC
  class RazorDirectiveAttribute : public System::Attribute {
    public:
    // private System.String <Directive>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Directive;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RazorDirectiveAttribute
    RazorDirectiveAttribute(::Il2CppString* Directive_ = {}) noexcept : Directive{Directive_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Directive;
    }
    // public System.String get_Directive()
    // Offset: 0x23B2630
    ::Il2CppString* get_Directive();
    // private System.Void set_Directive(System.String value)
    // Offset: 0x23B2638
    void set_Directive(::Il2CppString* value);
    // public System.Void .ctor(System.String directive)
    // Offset: 0x23B2604
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorDirectiveAttribute* New_ctor(::Il2CppString* directive) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorDirectiveAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorDirectiveAttribute*, creationType>(directive)));
    }
  }; // JetBrains.Annotations.RazorDirectiveAttribute
  #pragma pack(pop)
  static check_size<sizeof(RazorDirectiveAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_RazorDirectiveAttributeSizeCheck;
  static_assert(sizeof(RazorDirectiveAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorDirectiveAttribute*, "JetBrains.Annotations", "RazorDirectiveAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::RazorDirectiveAttribute::get_Directive
// Il2CppName: get_Directive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::RazorDirectiveAttribute::*)()>(&JetBrains::Annotations::RazorDirectiveAttribute::get_Directive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorDirectiveAttribute*), "get_Directive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorDirectiveAttribute::set_Directive
// Il2CppName: set_Directive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::RazorDirectiveAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::RazorDirectiveAttribute::set_Directive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::RazorDirectiveAttribute*), "set_Directive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::RazorDirectiveAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
