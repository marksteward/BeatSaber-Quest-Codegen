// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NUnit.Framework.CombiningStrategyAttribute
#include "NUnit/Framework/CombiningStrategyAttribute.hpp"
// Including type: NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder
#include "NUnit/Framework/Internal/Builders/NUnitTestCaseBuilder.hpp"
// Including type: NUnit.Framework.Interfaces.ICombiningStrategy
#include "NUnit/Framework/Interfaces/ICombiningStrategy.hpp"
// Including type: NUnit.Framework.Interfaces.IParameterDataProvider
#include "NUnit/Framework/Interfaces/IParameterDataProvider.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: NUnit.Framework.Internal.TestMethod
#include "NUnit/Framework/Internal/TestMethod.hpp"
// Including type: NUnit.Framework.Interfaces.IMethodInfo
#include "NUnit/Framework/Interfaces/IMethodInfo.hpp"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.CombiningStrategyAttribute..ctor
NUnit::Framework::CombiningStrategyAttribute* NUnit::Framework::CombiningStrategyAttribute::New_ctor(NUnit::Framework::Interfaces::ICombiningStrategy* strategy, NUnit::Framework::Interfaces::IParameterDataProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::New<CombiningStrategyAttribute*>(strategy, provider));
}
// Autogenerated method: NUnit.Framework.CombiningStrategyAttribute.BuildFrom
System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>* NUnit::Framework::CombiningStrategyAttribute::BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>*>(this, "BuildFrom", method, suite));
}
// Autogenerated method: NUnit.Framework.CombiningStrategyAttribute.ApplyToTest
void NUnit::Framework::CombiningStrategyAttribute::ApplyToTest(NUnit::Framework::Internal::Test* test) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyToTest", test));
}
