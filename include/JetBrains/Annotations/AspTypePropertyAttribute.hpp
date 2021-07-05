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
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AspTypePropertyAttribute
  // [AttributeUsageAttribute] Offset: DCB008
  class AspTypePropertyAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDCB438
    // private System.Boolean <CreateConstructorReferences>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool CreateConstructorReferences;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AspTypePropertyAttribute
    AspTypePropertyAttribute(bool CreateConstructorReferences_ = {}) noexcept : CreateConstructorReferences{CreateConstructorReferences_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return CreateConstructorReferences;
    }
    // public System.Boolean get_CreateConstructorReferences()
    // Offset: 0x23DB1D0
    bool get_CreateConstructorReferences();
    // private System.Void set_CreateConstructorReferences(System.Boolean value)
    // Offset: 0x23DB1D8
    void set_CreateConstructorReferences(bool value);
    // public System.Void .ctor(System.Boolean createConstructorReferences)
    // Offset: 0x23DB1E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspTypePropertyAttribute* New_ctor(bool createConstructorReferences) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspTypePropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspTypePropertyAttribute*, creationType>(createConstructorReferences)));
    }
  }; // JetBrains.Annotations.AspTypePropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspTypePropertyAttribute), 16 + sizeof(bool)> __JetBrains_Annotations_AspTypePropertyAttributeSizeCheck;
  static_assert(sizeof(AspTypePropertyAttribute) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspTypePropertyAttribute*, "JetBrains.Annotations", "AspTypePropertyAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspTypePropertyAttribute::get_CreateConstructorReferences
// Il2CppName: get_CreateConstructorReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (JetBrains::Annotations::AspTypePropertyAttribute::*)()>(&JetBrains::Annotations::AspTypePropertyAttribute::get_CreateConstructorReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspTypePropertyAttribute*), "get_CreateConstructorReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspTypePropertyAttribute::set_CreateConstructorReferences
// Il2CppName: set_CreateConstructorReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspTypePropertyAttribute::*)(bool)>(&JetBrains::Annotations::AspTypePropertyAttribute::set_CreateConstructorReferences)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspTypePropertyAttribute*), "set_CreateConstructorReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspTypePropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
