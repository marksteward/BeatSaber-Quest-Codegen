// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore_MoveNextRunner.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Threading.ContextCallback
#include "System/Threading/ContextCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Threading.ContextCallback s_invokeMoveNext
System::Threading::ContextCallback* System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::_get_s_invokeMoveNext() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::CompilerServices").WithContext("MoveNextRunner").WithContext("_get_s_invokeMoveNext");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::ContextCallback*>("System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner", "s_invokeMoveNext"));
}
// Autogenerated static field setter
// Set static field: static private System.Threading.ContextCallback s_invokeMoveNext
void System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::_set_s_invokeMoveNext(System::Threading::ContextCallback* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::CompilerServices").WithContext("MoveNextRunner").WithContext("_set_s_invokeMoveNext");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner", "s_invokeMoveNext", value));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner.Run
void System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::Run() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::CompilerServices").WithContext("MoveNextRunner").WithContext("Run");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Run", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner.InvokeMoveNext
void System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::InvokeMoveNext(::Il2CppObject* stateMachine) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::CompilerServices").WithContext("MoveNextRunner").WithContext("InvokeMoveNext");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner", "InvokeMoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(stateMachine)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, stateMachine);
}
