// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.SystemException..ctor
System::SystemException* System::SystemException::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SystemException*>());
}
// Autogenerated method: System.SystemException..ctor
System::SystemException* System::SystemException::New_ctor(::Il2CppString* message) {
  return THROW_UNLESS(il2cpp_utils::New<SystemException*>(message));
}
// Autogenerated method: System.SystemException..ctor
System::SystemException* System::SystemException::New_ctor(::Il2CppString* message, System::Exception* innerException) {
  return THROW_UNLESS(il2cpp_utils::New<SystemException*>(message, innerException));
}
// Autogenerated method: System.SystemException..ctor
System::SystemException* System::SystemException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(il2cpp_utils::New<SystemException*>(info, context));
}
