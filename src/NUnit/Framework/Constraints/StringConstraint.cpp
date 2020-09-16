// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.StringConstraint
#include "NUnit/Framework/Constraints/StringConstraint.hpp"
// Including type: NUnit.Framework.Constraints.ConstraintResult
#include "NUnit/Framework/Constraints/ConstraintResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Constraints.StringConstraint..ctor
NUnit::Framework::Constraints::StringConstraint* NUnit::Framework::Constraints::StringConstraint::New_ctor(::Il2CppString* expected) {
  return THROW_UNLESS(il2cpp_utils::New<StringConstraint*>(expected));
}
// Autogenerated method: NUnit.Framework.Constraints.StringConstraint.Matches
bool NUnit::Framework::Constraints::StringConstraint::Matches(::Il2CppString* actual) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Matches", actual));
}
// Autogenerated method: NUnit.Framework.Constraints.StringConstraint.get_Description
::Il2CppString* NUnit::Framework::Constraints::StringConstraint::get_Description() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Description"));
}
// Autogenerated method: NUnit.Framework.Constraints.StringConstraint.ApplyTo
NUnit::Framework::Constraints::ConstraintResult* NUnit::Framework::Constraints::StringConstraint::ApplyTo(::Il2CppObject* actual) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Constraints::ConstraintResult*>(this, "ApplyTo", actual));
}
