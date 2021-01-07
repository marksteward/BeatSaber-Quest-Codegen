// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
#include "UnityEngine/TestTools/TestRunner/Callbacks/RemoteTestResultSender.hpp"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData
#include "UnityEngine/TestTools/TestRunner/Callbacks/RemoteTestResultSender_QueueData.hpp"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/<SendDataRoutine>d__12
#include "UnityEngine/TestTools/TestRunner/Callbacks/RemoteTestResultSender_-SendDataRoutine-d__12.hpp"
// Including type: System.Collections.Generic.Queue`1
#include "System/Collections/Generic/Queue_1.hpp"
// Including type: UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory
#include "UnityEngine/TestRunner/TestLaunchers/IRemoteTestResultDataFactory.hpp"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: NUnit.Framework.Interfaces.ITestResult
#include "NUnit/Framework/Interfaces/ITestResult.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 k_aliveMessageFrequency
int UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::_get_k_aliveMessageFrequency() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("_get_k_aliveMessageFrequency");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender", "k_aliveMessageFrequency"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 k_aliveMessageFrequency
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::_set_k_aliveMessageFrequency(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("_set_k_aliveMessageFrequency");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender", "k_aliveMessageFrequency", value));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender.Start
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Start", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender.SerializeObject
::Array<uint8_t>* UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::SerializeObject(::Il2CppObject* objectToSerialize) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("SerializeObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SerializeObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(objectToSerialize)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method, objectToSerialize);
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender.RunStarted
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("RunStarted");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RunStarted", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(testsToRun)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, testsToRun);
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender.RunFinished
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("RunFinished");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RunFinished", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(testResults)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, testResults);
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender.TestStarted
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::TestStarted(NUnit::Framework::Interfaces::ITest* test) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("TestStarted");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TestStarted", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(test)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, test);
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender.TestFinished
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::TestFinished(NUnit::Framework::Interfaces::ITestResult* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("TestFinished");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TestFinished", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(result)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender.SendDataRoutine
System::Collections::IEnumerator* UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::SendDataRoutine() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("SendDataRoutine");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SendDataRoutine", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender.SendAliveMessageIfNeeded
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::SendAliveMessageIfNeeded() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("SendAliveMessageIfNeeded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SendAliveMessageIfNeeded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender.ResetNextPlayerAliveMessageTime
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::ResetNextPlayerAliveMessageTime() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::TestRunner::Callbacks").WithContext("RemoteTestResultSender").WithContext("ResetNextPlayerAliveMessageTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ResetNextPlayerAliveMessageTime", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
