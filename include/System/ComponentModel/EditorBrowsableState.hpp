// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.EditorBrowsableState
  struct EditorBrowsableState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EditorBrowsableState
    constexpr EditorBrowsableState(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.ComponentModel.EditorBrowsableState Always
    static constexpr const int Always = 0;
    // Get static field: static public System.ComponentModel.EditorBrowsableState Always
    static System::ComponentModel::EditorBrowsableState _get_Always();
    // Set static field: static public System.ComponentModel.EditorBrowsableState Always
    static void _set_Always(System::ComponentModel::EditorBrowsableState value);
    // static field const value: static public System.ComponentModel.EditorBrowsableState Never
    static constexpr const int Never = 1;
    // Get static field: static public System.ComponentModel.EditorBrowsableState Never
    static System::ComponentModel::EditorBrowsableState _get_Never();
    // Set static field: static public System.ComponentModel.EditorBrowsableState Never
    static void _set_Never(System::ComponentModel::EditorBrowsableState value);
    // static field const value: static public System.ComponentModel.EditorBrowsableState Advanced
    static constexpr const int Advanced = 2;
    // Get static field: static public System.ComponentModel.EditorBrowsableState Advanced
    static System::ComponentModel::EditorBrowsableState _get_Advanced();
    // Set static field: static public System.ComponentModel.EditorBrowsableState Advanced
    static void _set_Advanced(System::ComponentModel::EditorBrowsableState value);
  }; // System.ComponentModel.EditorBrowsableState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EditorBrowsableState, "System.ComponentModel", "EditorBrowsableState");
#pragma pack(pop)
