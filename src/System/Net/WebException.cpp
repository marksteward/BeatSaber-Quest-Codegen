// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebException
#include "System/Net/WebException.hpp"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor(::Il2CppString* message, System::Net::WebExceptionStatus status) {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>(message, status));
}
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor(::Il2CppString* message, System::Net::WebExceptionStatus status, System::Net::WebExceptionInternalStatus internalStatus, System::Exception* innerException) {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>(message, status, internalStatus, innerException));
}
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor(::Il2CppString* message, System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response) {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>(message, innerException, status, response));
}
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor(::Il2CppString* message, ::Il2CppString* data, System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response) {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>(message, data, innerException, status, response));
}
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor(::Il2CppString* message, System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response, System::Net::WebExceptionInternalStatus internalStatus) {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>(message, innerException, status, response, internalStatus));
}
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor(::Il2CppString* message, ::Il2CppString* data, System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response, System::Net::WebExceptionInternalStatus internalStatus) {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>(message, data, innerException, status, response, internalStatus));
}
// Autogenerated method: System.Net.WebException.get_Status
System::Net::WebExceptionStatus System::Net::WebException::get_Status() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::WebExceptionStatus>(this, "get_Status"));
}
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>());
}
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor(::Il2CppString* message) {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>(message));
}
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor(::Il2CppString* message, System::Exception* innerException) {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>(message, innerException));
}
// Autogenerated method: System.Net.WebException..ctor
System::Net::WebException* System::Net::WebException::New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(il2cpp_utils::New<WebException*>(serializationInfo, streamingContext));
}
// Autogenerated method: System.Net.WebException.System.Runtime.Serialization.ISerializable.GetObjectData
void System::Net::WebException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Serialization.ISerializable.GetObjectData", serializationInfo, streamingContext));
}
// Autogenerated method: System.Net.WebException.GetObjectData
void System::Net::WebException::GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", serializationInfo, streamingContext));
}
// Redundant proxy method!
// ABORTED: conflicts with another method. void System::Net::WebException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)