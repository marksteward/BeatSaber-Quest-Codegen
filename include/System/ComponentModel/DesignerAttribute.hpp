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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DesignerAttribute
  // [AttributeUsageAttribute] Offset: D878A0
  class DesignerAttribute : public System::Attribute {
    public:
    // private readonly System.String designerTypeName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* designerTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String designerBaseTypeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* designerBaseTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DesignerAttribute
    DesignerAttribute(::Il2CppString* designerTypeName_ = {}, ::Il2CppString* designerBaseTypeName_ = {}) noexcept : designerTypeName{designerTypeName_}, designerBaseTypeName{designerBaseTypeName_} {}
    // public System.Void .ctor(System.String designerTypeName)
    // Offset: 0x18674E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerAttribute* New_ctor(::Il2CppString* designerTypeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DesignerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerAttribute*, creationType>(designerTypeName)));
    }
    // public System.Void .ctor(System.String designerTypeName, System.Type designerBaseType)
    // Offset: 0x18675D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerAttribute* New_ctor(::Il2CppString* designerTypeName, System::Type* designerBaseType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DesignerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerAttribute*, creationType>(designerTypeName, designerBaseType)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1867690
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1867748
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DesignerAttribute
  #pragma pack(pop)
  static check_size<sizeof(DesignerAttribute), 24 + sizeof(::Il2CppString*)> __System_ComponentModel_DesignerAttributeSizeCheck;
  static_assert(sizeof(DesignerAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerAttribute*, "System.ComponentModel", "DesignerAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignerAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DesignerAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DesignerAttribute::*)()>(&System::ComponentModel::DesignerAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
