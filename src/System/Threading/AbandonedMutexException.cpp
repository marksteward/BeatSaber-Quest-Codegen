// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Threading.AbandonedMutexException
#include "System/Threading/AbandonedMutexException.hpp"
// Including type: System.Threading.Mutex
#include "System/Threading/Mutex.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.AbandonedMutexException..ctor
System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(int location, System::Threading::WaitHandle* handle) {
  return THROW_UNLESS(il2cpp_utils::New<AbandonedMutexException*>(location, handle));
}
// Autogenerated method: System.Threading.AbandonedMutexException.SetupException
void System::Threading::AbandonedMutexException::SetupException(int location, System::Threading::WaitHandle* handle) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetupException", location, handle));
}
// Autogenerated method: System.Threading.AbandonedMutexException..ctor
System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AbandonedMutexException*>());
}
// Autogenerated method: System.Threading.AbandonedMutexException..ctor
System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(il2cpp_utils::New<AbandonedMutexException*>(info, context));
}
