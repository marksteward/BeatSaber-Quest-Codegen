// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.CultureNotFoundException
#include "System/Globalization/CultureNotFoundException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Globalization.CultureNotFoundException..ctor
System::Globalization::CultureNotFoundException* System::Globalization::CultureNotFoundException::New_ctor(::Il2CppString* paramName, ::Il2CppString* invalidCultureName, ::Il2CppString* message) {
  return THROW_UNLESS(il2cpp_utils::New<CultureNotFoundException*>(paramName, invalidCultureName, message));
}
// Autogenerated method: System.Globalization.CultureNotFoundException.get_InvalidCultureId
System::Nullable_1<int> System::Globalization::CultureNotFoundException::get_InvalidCultureId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<int>>(this, "get_InvalidCultureId"));
}
// Autogenerated method: System.Globalization.CultureNotFoundException.get_InvalidCultureName
::Il2CppString* System::Globalization::CultureNotFoundException::get_InvalidCultureName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_InvalidCultureName"));
}
// Autogenerated method: System.Globalization.CultureNotFoundException.get_DefaultMessage
::Il2CppString* System::Globalization::CultureNotFoundException::get_DefaultMessage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Globalization", "CultureNotFoundException", "get_DefaultMessage"));
}
// Autogenerated method: System.Globalization.CultureNotFoundException.get_FormatedInvalidCultureId
::Il2CppString* System::Globalization::CultureNotFoundException::get_FormatedInvalidCultureId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_FormatedInvalidCultureId"));
}
// Autogenerated method: System.Globalization.CultureNotFoundException..ctor
System::Globalization::CultureNotFoundException* System::Globalization::CultureNotFoundException::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<CultureNotFoundException*>());
}
// Autogenerated method: System.Globalization.CultureNotFoundException..ctor
System::Globalization::CultureNotFoundException* System::Globalization::CultureNotFoundException::New_ctor(::Il2CppString* paramName, ::Il2CppString* message) {
  return THROW_UNLESS(il2cpp_utils::New<CultureNotFoundException*>(paramName, message));
}
// Autogenerated method: System.Globalization.CultureNotFoundException..ctor
System::Globalization::CultureNotFoundException* System::Globalization::CultureNotFoundException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(il2cpp_utils::New<CultureNotFoundException*>(info, context));
}
// Autogenerated method: System.Globalization.CultureNotFoundException.GetObjectData
void System::Globalization::CultureNotFoundException::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::Globalization::CultureNotFoundException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  System::Globalization::CultureNotFoundException::GetObjectData(info, context);
}
// Autogenerated method: System.Globalization.CultureNotFoundException.get_Message
::Il2CppString* System::Globalization::CultureNotFoundException::get_Message() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Message"));
}
