// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.ComponentModel.DesignerSerializationVisibility
#include "System/ComponentModel/DesignerSerializationVisibility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DesignerSerializationVisibilityAttribute
  // [AttributeUsageAttribute] Offset: CB2730
  class DesignerSerializationVisibilityAttribute : public System::Attribute {
    public:
    // private System.ComponentModel.DesignerSerializationVisibility visibility
    // Size: 0x4
    // Offset: 0x10
    System::ComponentModel::DesignerSerializationVisibility visibility;
    // Field size check
    static_assert(sizeof(System::ComponentModel::DesignerSerializationVisibility) == 0x4);
    // Creating value type constructor for type: DesignerSerializationVisibilityAttribute
    DesignerSerializationVisibilityAttribute(System::ComponentModel::DesignerSerializationVisibility visibility_ = {}) noexcept : visibility{visibility_} {}
    // Creating conversion operator: operator System::ComponentModel::DesignerSerializationVisibility
    constexpr operator System::ComponentModel::DesignerSerializationVisibility() const noexcept {
      return visibility;
    }
    // Get static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Content
    static System::ComponentModel::DesignerSerializationVisibilityAttribute* _get_Content();
    // Set static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Content
    static void _set_Content(System::ComponentModel::DesignerSerializationVisibilityAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Hidden
    static System::ComponentModel::DesignerSerializationVisibilityAttribute* _get_Hidden();
    // Set static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Hidden
    static void _set_Hidden(System::ComponentModel::DesignerSerializationVisibilityAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Visible
    static System::ComponentModel::DesignerSerializationVisibilityAttribute* _get_Visible();
    // Set static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Visible
    static void _set_Visible(System::ComponentModel::DesignerSerializationVisibilityAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Default
    static System::ComponentModel::DesignerSerializationVisibilityAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Default
    static void _set_Default(System::ComponentModel::DesignerSerializationVisibilityAttribute* value);
    // public System.Void .ctor(System.ComponentModel.DesignerSerializationVisibility visibility)
    // Offset: 0x16CC964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerSerializationVisibilityAttribute* New_ctor(System::ComponentModel::DesignerSerializationVisibility visibility) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DesignerSerializationVisibilityAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerSerializationVisibilityAttribute*, creationType>(visibility)));
    }
    // public System.ComponentModel.DesignerSerializationVisibility get_Visibility()
    // Offset: 0x16CC990
    System::ComponentModel::DesignerSerializationVisibility get_Visibility();
    // static private System.Void .cctor()
    // Offset: 0x16CCA3C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x16CC998
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x16CCA34
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DesignerSerializationVisibilityAttribute
  #pragma pack(pop)
  static check_size<sizeof(DesignerSerializationVisibilityAttribute), 16 + sizeof(System::ComponentModel::DesignerSerializationVisibility)> __System_ComponentModel_DesignerSerializationVisibilityAttributeSizeCheck;
  static_assert(sizeof(DesignerSerializationVisibilityAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerSerializationVisibilityAttribute*, "System.ComponentModel", "DesignerSerializationVisibilityAttribute");
