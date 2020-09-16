// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.DirectoryInfo
#include "System/IO/DirectoryInfo.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.DirectoryInfo..ctor
System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::Il2CppString* path) {
  return THROW_UNLESS(il2cpp_utils::New<DirectoryInfo*>(path));
}
// Autogenerated method: System.IO.DirectoryInfo..ctor
System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::Il2CppString* path, bool simpleOriginalPath) {
  return THROW_UNLESS(il2cpp_utils::New<DirectoryInfo*>(path, simpleOriginalPath));
}
// Autogenerated method: System.IO.DirectoryInfo.Initialize
void System::IO::DirectoryInfo::Initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize"));
}
// Autogenerated method: System.IO.DirectoryInfo.get_Parent
System::IO::DirectoryInfo* System::IO::DirectoryInfo::get_Parent() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::DirectoryInfo*>(this, "get_Parent"));
}
// Autogenerated method: System.IO.DirectoryInfo.Create
void System::IO::DirectoryInfo::Create() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Create"));
}
// Autogenerated method: System.IO.DirectoryInfo.GetDirectories
::Array<System::IO::DirectoryInfo*>* System::IO::DirectoryInfo::GetDirectories() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::IO::DirectoryInfo*>*>(this, "GetDirectories"));
}
// Autogenerated method: System.IO.DirectoryInfo.GetDirectories
::Array<System::IO::DirectoryInfo*>* System::IO::DirectoryInfo::GetDirectories(::Il2CppString* searchPattern) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::IO::DirectoryInfo*>*>(this, "GetDirectories", searchPattern));
}
// Autogenerated method: System.IO.DirectoryInfo.CheckPath
void System::IO::DirectoryInfo::CheckPath(::Il2CppString* path) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckPath", path));
}
// Autogenerated method: System.IO.DirectoryInfo..ctor
System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(il2cpp_utils::New<DirectoryInfo*>(info, context));
}
// Autogenerated method: System.IO.DirectoryInfo.get_Exists
bool System::IO::DirectoryInfo::get_Exists() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Exists"));
}
// Autogenerated method: System.IO.DirectoryInfo.get_Name
::Il2CppString* System::IO::DirectoryInfo::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Name"));
}
// Autogenerated method: System.IO.DirectoryInfo.ToString
::Il2CppString* System::IO::DirectoryInfo::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
