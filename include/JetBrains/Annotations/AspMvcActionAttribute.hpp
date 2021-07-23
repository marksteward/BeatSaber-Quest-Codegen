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
  // Autogenerated type: JetBrains.Annotations.AspMvcActionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DB8214
  class AspMvcActionAttribute : public System::Attribute {
    public:
    // private System.String <AnonymousProperty>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* AnonymousProperty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AspMvcActionAttribute
    AspMvcActionAttribute(::Il2CppString* AnonymousProperty_ = {}) noexcept : AnonymousProperty{AnonymousProperty_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return AnonymousProperty;
    }
    // Get instance field: private System.String <AnonymousProperty>k__BackingField
    ::Il2CppString* _get_$AnonymousProperty$k__BackingField();
    // Set instance field: private System.String <AnonymousProperty>k__BackingField
    void _set_$AnonymousProperty$k__BackingField(::Il2CppString* value);
    // public System.String get_AnonymousProperty()
    // Offset: 0x23B1E5C
    ::Il2CppString* get_AnonymousProperty();
    // private System.Void set_AnonymousProperty(System.String value)
    // Offset: 0x23B1E64
    void set_AnonymousProperty(::Il2CppString* value);
    // public System.Void .ctor(System.String anonymousProperty)
    // Offset: 0x23B1E30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcActionAttribute* New_ctor(::Il2CppString* anonymousProperty) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcActionAttribute*, creationType>(anonymousProperty)));
    }
    // public System.Void .ctor()
    // Offset: 0x23B1E28
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcActionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcActionAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.AspMvcActionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspMvcActionAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_AspMvcActionAttributeSizeCheck;
  static_assert(sizeof(AspMvcActionAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcActionAttribute*, "JetBrains.Annotations", "AspMvcActionAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcActionAttribute::get_AnonymousProperty
// Il2CppName: get_AnonymousProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::AspMvcActionAttribute::*)()>(&JetBrains::Annotations::AspMvcActionAttribute::get_AnonymousProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcActionAttribute*), "get_AnonymousProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcActionAttribute::set_AnonymousProperty
// Il2CppName: set_AnonymousProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspMvcActionAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::AspMvcActionAttribute::set_AnonymousProperty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcActionAttribute*), "set_AnonymousProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcActionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcActionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
