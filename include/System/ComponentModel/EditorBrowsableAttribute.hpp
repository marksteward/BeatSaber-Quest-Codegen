// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.ComponentModel.EditorBrowsableState
#include "System/ComponentModel/EditorBrowsableState.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.EditorBrowsableAttribute
  class EditorBrowsableAttribute : public System::Attribute {
    public:
    // private System.ComponentModel.EditorBrowsableState browsableState
    // Offset: 0x10
    System::ComponentModel::EditorBrowsableState browsableState;
    // Creating conversion operator: operator System::ComponentModel::EditorBrowsableState
    constexpr operator System::ComponentModel::EditorBrowsableState() const {
      return browsableState;
    }
    // public System.Void .ctor(System.ComponentModel.EditorBrowsableState state)
    // Offset: 0xF5E394
    static EditorBrowsableAttribute* New_ctor(System::ComponentModel::EditorBrowsableState state);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF5E3C0
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF5E45C
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.EditorBrowsableAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EditorBrowsableAttribute*, "System.ComponentModel", "EditorBrowsableAttribute");
#pragma pack(pop)
