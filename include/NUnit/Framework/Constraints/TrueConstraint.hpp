// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.Constraint
#include "NUnit/Framework/Constraints/Constraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x30
  // Autogenerated type: NUnit.Framework.Constraints.TrueConstraint
  // [] Offset: FFFFFFFF
  class TrueConstraint : public NUnit::Framework::Constraints::Constraint {
    public:
    // Creating value type constructor for type: TrueConstraint
    TrueConstraint() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13E6658
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrueConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::TrueConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrueConstraint*, creationType>()));
    }
    // public override NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0x13E66D0
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: NUnit.Framework.Constraints.ConstraintResult Constraint::ApplyTo(System.Object actual)
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
  }; // NUnit.Framework.Constraints.TrueConstraint
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::TrueConstraint*, "NUnit.Framework.Constraints", "TrueConstraint");
#pragma pack(pop)
