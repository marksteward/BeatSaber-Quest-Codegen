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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AspChildControlTypeAttribute
  // [AttributeUsageAttribute] Offset: DCAF5C
  class AspChildControlTypeAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDCB408
    // private System.String <TagName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* TagName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCB418
    // private System.Type <ControlType>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Type* ControlType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: AspChildControlTypeAttribute
    AspChildControlTypeAttribute(::Il2CppString* TagName_ = {}, System::Type* ControlType_ = {}) noexcept : TagName{TagName_}, ControlType{ControlType_} {}
    // public System.Void .ctor(System.String tagName, System.Type controlType)
    // Offset: 0x23DAE98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspChildControlTypeAttribute* New_ctor(::Il2CppString* tagName, System::Type* controlType) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspChildControlTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspChildControlTypeAttribute*, creationType>(tagName, controlType)));
    }
    // public System.String get_TagName()
    // Offset: 0x23DAED0
    ::Il2CppString* get_TagName();
    // private System.Void set_TagName(System.String value)
    // Offset: 0x23DAED8
    void set_TagName(::Il2CppString* value);
    // public System.Type get_ControlType()
    // Offset: 0x23DAEE0
    System::Type* get_ControlType();
    // private System.Void set_ControlType(System.Type value)
    // Offset: 0x23DAEE8
    void set_ControlType(System::Type* value);
  }; // JetBrains.Annotations.AspChildControlTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspChildControlTypeAttribute), 24 + sizeof(System::Type*)> __JetBrains_Annotations_AspChildControlTypeAttributeSizeCheck;
  static_assert(sizeof(AspChildControlTypeAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspChildControlTypeAttribute*, "JetBrains.Annotations", "AspChildControlTypeAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspChildControlTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::AspChildControlTypeAttribute::get_TagName
// Il2CppName: get_TagName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::AspChildControlTypeAttribute::*)()>(&JetBrains::Annotations::AspChildControlTypeAttribute::get_TagName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspChildControlTypeAttribute*), "get_TagName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspChildControlTypeAttribute::set_TagName
// Il2CppName: set_TagName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspChildControlTypeAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::AspChildControlTypeAttribute::set_TagName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspChildControlTypeAttribute*), "set_TagName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspChildControlTypeAttribute::get_ControlType
// Il2CppName: get_ControlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (JetBrains::Annotations::AspChildControlTypeAttribute::*)()>(&JetBrains::Annotations::AspChildControlTypeAttribute::get_ControlType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspChildControlTypeAttribute*), "get_ControlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspChildControlTypeAttribute::set_ControlType
// Il2CppName: set_ControlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspChildControlTypeAttribute::*)(System::Type*)>(&JetBrains::Annotations::AspChildControlTypeAttribute::set_ControlType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspChildControlTypeAttribute*), "set_ControlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
