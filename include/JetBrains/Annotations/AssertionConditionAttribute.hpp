// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.AssertionConditionType
#include "JetBrains/Annotations/AssertionConditionType.hpp"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.AssertionConditionAttribute
  class AssertionConditionAttribute : public System::Attribute {
    public:
    // private JetBrains.Annotations.AssertionConditionType <ConditionType>k__BackingField
    // Offset: 0x10
    JetBrains::Annotations::AssertionConditionType ConditionType;
    // Creating conversion operator: operator JetBrains::Annotations::AssertionConditionType
    constexpr operator JetBrains::Annotations::AssertionConditionType() const {
      return ConditionType;
    }
    // public System.Void .ctor(JetBrains.Annotations.AssertionConditionType conditionType)
    // Offset: 0x19610F8
    static AssertionConditionAttribute* New_ctor(JetBrains::Annotations::AssertionConditionType conditionType);
    // public JetBrains.Annotations.AssertionConditionType get_ConditionType()
    // Offset: 0x1961124
    JetBrains::Annotations::AssertionConditionType get_ConditionType();
    // private System.Void set_ConditionType(JetBrains.Annotations.AssertionConditionType value)
    // Offset: 0x196112C
    void set_ConditionType(JetBrains::Annotations::AssertionConditionType value);
  }; // JetBrains.Annotations.AssertionConditionAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AssertionConditionAttribute*, "JetBrains.Annotations", "AssertionConditionAttribute");
#pragma pack(pop)
