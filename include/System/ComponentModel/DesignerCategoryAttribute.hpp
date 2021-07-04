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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DesignerCategoryAttribute
  // [AttributeUsageAttribute] Offset: D878D8
  class DesignerCategoryAttribute : public System::Attribute {
    public:
    // private System.String category
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* category;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DesignerCategoryAttribute
    DesignerCategoryAttribute(::Il2CppString* category_ = {}) noexcept : category{category_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return category;
    }
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Component
    static System::ComponentModel::DesignerCategoryAttribute* _get_Component();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Component
    static void _set_Component(System::ComponentModel::DesignerCategoryAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Default
    static System::ComponentModel::DesignerCategoryAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Default
    static void _set_Default(System::ComponentModel::DesignerCategoryAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Form
    static System::ComponentModel::DesignerCategoryAttribute* _get_Form();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Form
    static void _set_Form(System::ComponentModel::DesignerCategoryAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Generic
    static System::ComponentModel::DesignerCategoryAttribute* _get_Generic();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Generic
    static void _set_Generic(System::ComponentModel::DesignerCategoryAttribute* value);
    // public System.Void .ctor(System.String category)
    // Offset: 0x1867800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerCategoryAttribute* New_ctor(::Il2CppString* category) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DesignerCategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerCategoryAttribute*, creationType>(category)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18678F0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x186779C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerCategoryAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DesignerCategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerCategoryAttribute*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x186782C
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x18678D0
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DesignerCategoryAttribute
  #pragma pack(pop)
  static check_size<sizeof(DesignerCategoryAttribute), 16 + sizeof(::Il2CppString*)> __System_ComponentModel_DesignerCategoryAttributeSizeCheck;
  static_assert(sizeof(DesignerCategoryAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerCategoryAttribute*, "System.ComponentModel", "DesignerCategoryAttribute");
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DesignerCategoryAttribute::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerCategoryAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignerCategoryAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DesignerCategoryAttribute::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerCategoryAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DesignerCategoryAttribute::*)()>(&System::ComponentModel::DesignerCategoryAttribute::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerCategoryAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
