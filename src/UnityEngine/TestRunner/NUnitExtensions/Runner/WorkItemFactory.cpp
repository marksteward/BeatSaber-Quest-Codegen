// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/WorkItemFactory.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityWorkItem.hpp"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: NUnit.Framework.Interfaces.ITestFilter
#include "NUnit/Framework/Interfaces/ITestFilter.hpp"
// Including type: NUnit.Framework.Internal.TestMethod
#include "NUnit/Framework/Internal/TestMethod.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory.Create
UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::Create(NUnit::Framework::Interfaces::ITest* loadedTest, NUnit::Framework::Interfaces::ITestFilter* filter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>(this, "Create", loadedTest, filter));
}
// Autogenerated method: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory.Create
UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::Create(NUnit::Framework::Internal::TestMethod* method, NUnit::Framework::Interfaces::ITestFilter* filter, NUnit::Framework::Interfaces::ITest* loadedTest) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>(this, "Create", method, filter, loadedTest));
}
// Autogenerated method: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory..ctor
UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<WorkItemFactory*>());
}
