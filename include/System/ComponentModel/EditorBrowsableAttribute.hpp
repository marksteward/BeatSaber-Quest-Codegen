// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.ComponentModel.EditorBrowsableState
#include "System/ComponentModel/EditorBrowsableState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.EditorBrowsableAttribute
  // [AttributeUsageAttribute] Offset: D8794C
  class EditorBrowsableAttribute : public System::Attribute {
    public:
    // private System.ComponentModel.EditorBrowsableState browsableState
    // Size: 0x4
    // Offset: 0x10
    System::ComponentModel::EditorBrowsableState browsableState;
    // Field size check
    static_assert(sizeof(System::ComponentModel::EditorBrowsableState) == 0x4);
    // Creating value type constructor for type: EditorBrowsableAttribute
    EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState browsableState_ = {}) noexcept : browsableState{browsableState_} {}
    // Creating conversion operator: operator System::ComponentModel::EditorBrowsableState
    constexpr operator System::ComponentModel::EditorBrowsableState() const noexcept {
      return browsableState;
    }
    // public System.Void .ctor(System.ComponentModel.EditorBrowsableState state)
    // Offset: 0x1867D8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditorBrowsableAttribute* New_ctor(System::ComponentModel::EditorBrowsableState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::EditorBrowsableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditorBrowsableAttribute*, creationType>(state)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1867DB8
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1867E54
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.EditorBrowsableAttribute
  #pragma pack(pop)
  static check_size<sizeof(EditorBrowsableAttribute), 16 + sizeof(System::ComponentModel::EditorBrowsableState)> __System_ComponentModel_EditorBrowsableAttributeSizeCheck;
  static_assert(sizeof(EditorBrowsableAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EditorBrowsableAttribute*, "System.ComponentModel", "EditorBrowsableAttribute");
// Writing MetadataGetter for method: System::ComponentModel::EditorBrowsableAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::EditorBrowsableAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EditorBrowsableAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::EditorBrowsableAttribute::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EditorBrowsableAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EditorBrowsableAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::EditorBrowsableAttribute::*)()>(&System::ComponentModel::EditorBrowsableAttribute::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EditorBrowsableAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
