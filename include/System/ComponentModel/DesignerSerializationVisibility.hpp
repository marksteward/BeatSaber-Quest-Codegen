// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DesignerSerializationVisibility
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D75070
  struct DesignerSerializationVisibility/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DesignerSerializationVisibility
    constexpr DesignerSerializationVisibility(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ComponentModel.DesignerSerializationVisibility Hidden
    static constexpr const int Hidden = 0;
    // Get static field: static public System.ComponentModel.DesignerSerializationVisibility Hidden
    static System::ComponentModel::DesignerSerializationVisibility _get_Hidden();
    // Set static field: static public System.ComponentModel.DesignerSerializationVisibility Hidden
    static void _set_Hidden(System::ComponentModel::DesignerSerializationVisibility value);
    // static field const value: static public System.ComponentModel.DesignerSerializationVisibility Visible
    static constexpr const int Visible = 1;
    // Get static field: static public System.ComponentModel.DesignerSerializationVisibility Visible
    static System::ComponentModel::DesignerSerializationVisibility _get_Visible();
    // Set static field: static public System.ComponentModel.DesignerSerializationVisibility Visible
    static void _set_Visible(System::ComponentModel::DesignerSerializationVisibility value);
    // static field const value: static public System.ComponentModel.DesignerSerializationVisibility Content
    static constexpr const int Content = 2;
    // Get static field: static public System.ComponentModel.DesignerSerializationVisibility Content
    static System::ComponentModel::DesignerSerializationVisibility _get_Content();
    // Set static field: static public System.ComponentModel.DesignerSerializationVisibility Content
    static void _set_Content(System::ComponentModel::DesignerSerializationVisibility value);
  }; // System.ComponentModel.DesignerSerializationVisibility
  #pragma pack(pop)
  static check_size<sizeof(DesignerSerializationVisibility), 0 + sizeof(int)> __System_ComponentModel_DesignerSerializationVisibilitySizeCheck;
  static_assert(sizeof(DesignerSerializationVisibility) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerSerializationVisibility, "System.ComponentModel", "DesignerSerializationVisibility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
