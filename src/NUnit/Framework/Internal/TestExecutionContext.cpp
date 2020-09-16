// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestExecutionContext
#include "NUnit/Framework/Internal/TestExecutionContext.hpp"
// Including type: NUnit.Framework.Interfaces.ITestListener
#include "NUnit/Framework/Interfaces/ITestListener.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
// Including type: System.Security.Principal.IPrincipal
#include "System/Security/Principal/IPrincipal.hpp"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: NUnit.Framework.ITestAction
#include "NUnit/Framework/ITestAction.hpp"
// Including type: NUnit.Framework.Constraints.ValueFormatter
#include "NUnit/Framework/Constraints/ValueFormatter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.String CONTEXT_KEY
::Il2CppString* NUnit::Framework::Internal::TestExecutionContext::_get_CONTEXT_KEY() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("NUnit.Framework.Internal", "TestExecutionContext", "CONTEXT_KEY"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.String CONTEXT_KEY
void NUnit::Framework::Internal::TestExecutionContext::_set_CONTEXT_KEY(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "TestExecutionContext", "CONTEXT_KEY", value));
}
// Autogenerated static field getter
// Get static field: static private NUnit.Framework.Constraints.ValueFormatter CS$<>9__CachedAnonymousMethodDelegate1
NUnit::Framework::Constraints::ValueFormatter* NUnit::Framework::Internal::TestExecutionContext::_get_CS$$$9__CachedAnonymousMethodDelegate1() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<NUnit::Framework::Constraints::ValueFormatter*>("NUnit.Framework.Internal", "TestExecutionContext", "CS$<>9__CachedAnonymousMethodDelegate1")));
}
// Autogenerated static field setter
// Set static field: static private NUnit.Framework.Constraints.ValueFormatter CS$<>9__CachedAnonymousMethodDelegate1
void NUnit::Framework::Internal::TestExecutionContext::_set_CS$$$9__CachedAnonymousMethodDelegate1(NUnit::Framework::Constraints::ValueFormatter* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "TestExecutionContext", "CS$<>9__CachedAnonymousMethodDelegate1", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.get_CurrentContext
NUnit::Framework::Internal::ITestExecutionContext* NUnit::Framework::Internal::TestExecutionContext::get_CurrentContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::ITestExecutionContext*>("NUnit.Framework.Internal", "TestExecutionContext", "get_CurrentContext"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.GetTestExecutionContext
NUnit::Framework::Internal::TestExecutionContext* NUnit::Framework::Internal::TestExecutionContext::GetTestExecutionContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestExecutionContext*>("NUnit.Framework.Internal", "TestExecutionContext", "GetTestExecutionContext"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.get_CurrentTest
NUnit::Framework::Internal::Test* NUnit::Framework::Internal::TestExecutionContext::get_CurrentTest() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::Test*>(this, "get_CurrentTest"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.set_OutWriter
void NUnit::Framework::Internal::TestExecutionContext::set_OutWriter(System::IO::TextWriter* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_OutWriter", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.get_Listener
NUnit::Framework::Interfaces::ITestListener* NUnit::Framework::Internal::TestExecutionContext::get_Listener() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::ITestListener*>(this, "get_Listener"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.set_TestCaseTimeout
void NUnit::Framework::Internal::TestExecutionContext::set_TestCaseTimeout(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_TestCaseTimeout", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.set_UpstreamActions
void NUnit::Framework::Internal::TestExecutionContext::set_UpstreamActions(System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_UpstreamActions", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.set_CurrentValueFormatter
void NUnit::Framework::Internal::TestExecutionContext::set_CurrentValueFormatter(NUnit::Framework::Constraints::ValueFormatter* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_CurrentValueFormatter", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.set_IsSingleThreaded
void NUnit::Framework::Internal::TestExecutionContext::set_IsSingleThreaded(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsSingleThreaded", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.<.ctor>b__0
::Il2CppString* NUnit::Framework::Internal::TestExecutionContext::$_ctor$b__0(::Il2CppObject* val) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<::Il2CppString*>("NUnit.Framework.Internal", "TestExecutionContext", "<.ctor>b__0", val)));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext..cctor
void NUnit::Framework::Internal::TestExecutionContext::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Internal", "TestExecutionContext", ".cctor"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext..ctor
NUnit::Framework::Internal::TestExecutionContext* NUnit::Framework::Internal::TestExecutionContext::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<TestExecutionContext*>());
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.get_CurrentResult
NUnit::Framework::Internal::TestResult* NUnit::Framework::Internal::TestExecutionContext::get_CurrentResult() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestResult*>(this, "get_CurrentResult"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.set_CurrentResult
void NUnit::Framework::Internal::TestExecutionContext::set_CurrentResult(NUnit::Framework::Internal::TestResult* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_CurrentResult", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.get_OutWriter
System::IO::TextWriter* NUnit::Framework::Internal::TestExecutionContext::get_OutWriter() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::TextWriter*>(this, "get_OutWriter"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.get_TestObject
::Il2CppObject* NUnit::Framework::Internal::TestExecutionContext::get_TestObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_TestObject"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.set_TestObject
void NUnit::Framework::Internal::TestExecutionContext::set_TestObject(::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_TestObject", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.get_CurrentValueFormatter
NUnit::Framework::Constraints::ValueFormatter* NUnit::Framework::Internal::TestExecutionContext::get_CurrentValueFormatter() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Constraints::ValueFormatter*>(this, "get_CurrentValueFormatter"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.IncrementAssertCount
void NUnit::Framework::Internal::TestExecutionContext::IncrementAssertCount() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "IncrementAssertCount"));
}
// Autogenerated method: NUnit.Framework.Internal.TestExecutionContext.InitializeLifetimeService
::Il2CppObject* NUnit::Framework::Internal::TestExecutionContext::InitializeLifetimeService() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "InitializeLifetimeService"));
}
