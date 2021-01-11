// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: NUnit.Framework.Constraints.IResolveConstraint
#include "NUnit/Framework/Constraints/IResolveConstraint.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintBuilder
  class ConstraintBuilder;
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.IConstraint
  // [] Offset: FFFFFFFF
  class IConstraint/*, public NUnit::Framework::Constraints::IResolveConstraint*/ {
    public:
    // Creating value type constructor for type: IConstraint
    IConstraint() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Constraints::IResolveConstraint
    operator NUnit::Framework::Constraints::IResolveConstraint() noexcept {
      return *reinterpret_cast<NUnit::Framework::Constraints::IResolveConstraint*>(this);
    }
    // public System.String get_Description()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Description();
    // public System.Void set_Builder(NUnit.Framework.Constraints.ConstraintBuilder value)
    // Offset: 0xFFFFFFFF
    void set_Builder(NUnit::Framework::Constraints::ConstraintBuilder* value);
    // public NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
  }; // NUnit.Framework.Constraints.IConstraint
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::IConstraint*, "NUnit.Framework.Constraints", "IConstraint");
