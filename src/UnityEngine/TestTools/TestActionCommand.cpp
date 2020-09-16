// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestActionCommand
#include "UnityEngine/TestTools/TestActionCommand.hpp"
// Including type: UnityEngine.TestTools.TestActionCommand/<InvokeBefore>d__2
#include "UnityEngine/TestTools/TestActionCommand_-InvokeBefore-d__2.hpp"
// Including type: UnityEngine.TestTools.TestActionCommand/<InvokeAfter>d__3
#include "UnityEngine/TestTools/TestActionCommand_-InvokeAfter-d__3.hpp"
// Including type: NUnit.Framework.ITestAction
#include "NUnit/Framework/ITestAction.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityTestExecutionContext.hpp"
// Including type: UnityEngine.TestTools.BeforeAfterTestCommandState
#include "UnityEngine/TestTools/BeforeAfterTestCommandState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.TestActionCommand.GetTestActionsFromMethod
::Array<NUnit::Framework::ITestAction*>* UnityEngine::TestTools::TestActionCommand::GetTestActionsFromMethod(System::Reflection::MethodInfo* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<NUnit::Framework::ITestAction*>*>("UnityEngine.TestTools", "TestActionCommand", "GetTestActionsFromMethod", method));
}
// Autogenerated method: UnityEngine.TestTools.TestActionCommand.InvokeBefore
System::Collections::IEnumerator* UnityEngine::TestTools::TestActionCommand::InvokeBefore(NUnit::Framework::ITestAction* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "InvokeBefore", action, test, context));
}
// Autogenerated method: UnityEngine.TestTools.TestActionCommand.InvokeAfter
System::Collections::IEnumerator* UnityEngine::TestTools::TestActionCommand::InvokeAfter(NUnit::Framework::ITestAction* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "InvokeAfter", action, test, context));
}
// Autogenerated method: UnityEngine.TestTools.TestActionCommand..ctor
UnityEngine::TestTools::TestActionCommand* UnityEngine::TestTools::TestActionCommand::New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
  return THROW_UNLESS(il2cpp_utils::New<TestActionCommand*>(innerCommand));
}
// Autogenerated method: UnityEngine.TestTools.TestActionCommand.GetState
UnityEngine::TestTools::BeforeAfterTestCommandState* UnityEngine::TestTools::TestActionCommand::GetState(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TestTools::BeforeAfterTestCommandState*>(this, "GetState", context));
}
