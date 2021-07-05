// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Forward declaring type: ComparisonAdapter
  class ComparisonAdapter;
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ComparisonConstraint
  class ComparisonConstraint : public NUnit::Framework::Constraints::Constraint {
    public:
    // protected System.Object expected
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* expected;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // protected System.Boolean lessComparisonResult
    // Size: 0x1
    // Offset: 0x38
    bool lessComparisonResult;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean equalComparisonResult
    // Size: 0x1
    // Offset: 0x39
    bool equalComparisonResult;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean greaterComparisonResult
    // Size: 0x1
    // Offset: 0x3A
    bool greaterComparisonResult;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: greaterComparisonResult and: comparer
    char __padding3[0x5] = {};
    // private NUnit.Framework.Constraints.ComparisonAdapter comparer
    // Size: 0x8
    // Offset: 0x40
    NUnit::Framework::Constraints::ComparisonAdapter* comparer;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ComparisonAdapter*) == 0x8);
    // Creating value type constructor for type: ComparisonConstraint
    ComparisonConstraint(::Il2CppObject* expected_ = {}, bool lessComparisonResult_ = {}, bool equalComparisonResult_ = {}, bool greaterComparisonResult_ = {}, NUnit::Framework::Constraints::ComparisonAdapter* comparer_ = {}) noexcept : expected{expected_}, lessComparisonResult{lessComparisonResult_}, equalComparisonResult{equalComparisonResult_}, greaterComparisonResult{greaterComparisonResult_}, comparer{comparer_} {}
    // protected System.Void .ctor(System.Object value, System.Boolean lessComparisonResult, System.Boolean equalComparisonResult, System.Boolean greaterComparisonResult, System.String predicate)
    // Offset: 0x1723A7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComparisonConstraint* New_ctor(::Il2CppObject* value, bool lessComparisonResult, bool equalComparisonResult, bool greaterComparisonResult, ::Il2CppString* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::ComparisonConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComparisonConstraint*, creationType>(value, lessComparisonResult, equalComparisonResult, greaterComparisonResult, predicate)));
    }
    // public override NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0x1723E28
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: NUnit.Framework.Constraints.ConstraintResult Constraint::ApplyTo(System.Object actual)
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
  }; // NUnit.Framework.Constraints.ComparisonConstraint
  #pragma pack(pop)
  static check_size<sizeof(ComparisonConstraint), 64 + sizeof(NUnit::Framework::Constraints::ComparisonAdapter*)> __NUnit_Framework_Constraints_ComparisonConstraintSizeCheck;
  static_assert(sizeof(ComparisonConstraint) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ComparisonConstraint*, "NUnit.Framework.Constraints", "ComparisonConstraint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ComparisonConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ComparisonConstraint::ApplyTo
// Il2CppName: ApplyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::ConstraintResult* (NUnit::Framework::Constraints::ComparisonConstraint::*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::ComparisonConstraint::ApplyTo)> {
  static const MethodInfo* get() {
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ComparisonConstraint*), "ApplyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actual});
  }
};
