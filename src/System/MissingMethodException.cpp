// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MissingMethodException
#include "System/MissingMethodException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.MissingMethodException..ctor
System::MissingMethodException* System::MissingMethodException::New_ctor(::Il2CppString* className, ::Il2CppString* methodName) {
  return THROW_UNLESS(il2cpp_utils::New<MissingMethodException*>(className, methodName));
}
// Autogenerated method: System.MissingMethodException..ctor
System::MissingMethodException* System::MissingMethodException::New_ctor(::Il2CppString* className, ::Il2CppString* methodName, ::Il2CppString* signature, ::Il2CppString* message) {
  return THROW_UNLESS(il2cpp_utils::New<MissingMethodException*>(className, methodName, signature, message));
}
// Autogenerated method: System.MissingMethodException..ctor
System::MissingMethodException* System::MissingMethodException::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MissingMethodException*>());
}
// Autogenerated method: System.MissingMethodException..ctor
System::MissingMethodException* System::MissingMethodException::New_ctor(::Il2CppString* message) {
  return THROW_UNLESS(il2cpp_utils::New<MissingMethodException*>(message));
}
// Autogenerated method: System.MissingMethodException..ctor
System::MissingMethodException* System::MissingMethodException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(il2cpp_utils::New<MissingMethodException*>(info, context));
}
// Autogenerated method: System.MissingMethodException.get_Message
::Il2CppString* System::MissingMethodException::get_Message() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Message"));
}
