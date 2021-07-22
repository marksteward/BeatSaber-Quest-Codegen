// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.ComparisonConstraint
#include "NUnit/Framework/Constraints/ComparisonConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.LessThanOrEqualConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class LessThanOrEqualConstraint : public NUnit::Framework::Constraints::ComparisonConstraint {
    public:
    // Creating value type constructor for type: LessThanOrEqualConstraint
    LessThanOrEqualConstraint() noexcept {}
    // public System.Void .ctor(System.Object expected)
    // Offset: 0x171904C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LessThanOrEqualConstraint* New_ctor(::Il2CppObject* expected) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::LessThanOrEqualConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LessThanOrEqualConstraint*, creationType>(expected)));
    }
  }; // NUnit.Framework.Constraints.LessThanOrEqualConstraint
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::LessThanOrEqualConstraint*, "NUnit.Framework.Constraints", "LessThanOrEqualConstraint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::LessThanOrEqualConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
