// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.ResourceReader
#include "System/Resources/ResourceReader.hpp"
// Including type: System.Resources.ResourceReader/ResourceEnumerator
#include "System/Resources/ResourceReader_ResourceEnumerator.hpp"
// Including type: System.IO.BinaryReader
#include "System/IO/BinaryReader.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "System/Runtime/Serialization/Formatters/Binary/BinaryFormatter.hpp"
// Including type: System.IO.UnmanagedMemoryStream
#include "System/IO/UnmanagedMemoryStream.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Resources.ResourceTypeCode
#include "System/Resources/ResourceTypeCode.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Resources.ResourceReader..ctor
System::Resources::ResourceReader* System::Resources::ResourceReader::New_ctor(System::IO::Stream* stream, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache) {
  return THROW_UNLESS(il2cpp_utils::New<ResourceReader*>(stream, resCache));
}
// Autogenerated method: System.Resources.ResourceReader.Dispose
void System::Resources::ResourceReader::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Resources.ResourceReader.ReadUnalignedI4
int System::Resources::ResourceReader::ReadUnalignedI4(int* p) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Resources", "ResourceReader", "ReadUnalignedI4", p));
}
// Autogenerated method: System.Resources.ResourceReader.SkipString
void System::Resources::ResourceReader::SkipString() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SkipString"));
}
// Autogenerated method: System.Resources.ResourceReader.GetNameHash
int System::Resources::ResourceReader::GetNameHash(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetNameHash", index));
}
// Autogenerated method: System.Resources.ResourceReader.GetNamePosition
int System::Resources::ResourceReader::GetNamePosition(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetNamePosition", index));
}
// Autogenerated method: System.Resources.ResourceReader.GetEnumeratorInternal
System::Resources::ResourceReader::ResourceEnumerator* System::Resources::ResourceReader::GetEnumeratorInternal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Resources::ResourceReader::ResourceEnumerator*>(this, "GetEnumeratorInternal"));
}
// Autogenerated method: System.Resources.ResourceReader.FindPosForResource
int System::Resources::ResourceReader::FindPosForResource(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FindPosForResource", name));
}
// Autogenerated method: System.Resources.ResourceReader.CompareStringEqualsName
bool System::Resources::ResourceReader::CompareStringEqualsName(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CompareStringEqualsName", name));
}
// Autogenerated method: System.Resources.ResourceReader.AllocateStringForNameIndex
::Il2CppString* System::Resources::ResourceReader::AllocateStringForNameIndex(int index, int& dataOffset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "AllocateStringForNameIndex", index, dataOffset));
}
// Autogenerated method: System.Resources.ResourceReader.GetValueForNameIndex
::Il2CppObject* System::Resources::ResourceReader::GetValueForNameIndex(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetValueForNameIndex", index));
}
// Autogenerated method: System.Resources.ResourceReader.LoadString
::Il2CppString* System::Resources::ResourceReader::LoadString(int pos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "LoadString", pos));
}
// Autogenerated method: System.Resources.ResourceReader.LoadObject
::Il2CppObject* System::Resources::ResourceReader::LoadObject(int pos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "LoadObject", pos));
}
// Autogenerated method: System.Resources.ResourceReader.LoadObject
::Il2CppObject* System::Resources::ResourceReader::LoadObject(int pos, System::Resources::ResourceTypeCode& typeCode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "LoadObject", pos, typeCode));
}
// Autogenerated method: System.Resources.ResourceReader.LoadObjectV1
::Il2CppObject* System::Resources::ResourceReader::LoadObjectV1(int pos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "LoadObjectV1", pos));
}
// Autogenerated method: System.Resources.ResourceReader._LoadObjectV1
::Il2CppObject* System::Resources::ResourceReader::_LoadObjectV1(int pos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "_LoadObjectV1", pos));
}
// Autogenerated method: System.Resources.ResourceReader.LoadObjectV2
::Il2CppObject* System::Resources::ResourceReader::LoadObjectV2(int pos, System::Resources::ResourceTypeCode& typeCode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "LoadObjectV2", pos, typeCode));
}
// Autogenerated method: System.Resources.ResourceReader._LoadObjectV2
::Il2CppObject* System::Resources::ResourceReader::_LoadObjectV2(int pos, System::Resources::ResourceTypeCode& typeCode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "_LoadObjectV2", pos, typeCode));
}
// Autogenerated method: System.Resources.ResourceReader.DeserializeObject
::Il2CppObject* System::Resources::ResourceReader::DeserializeObject(int typeIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "DeserializeObject", typeIndex));
}
// Autogenerated method: System.Resources.ResourceReader.ReadResources
void System::Resources::ResourceReader::ReadResources() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadResources"));
}
// Autogenerated method: System.Resources.ResourceReader._ReadResources
void System::Resources::ResourceReader::_ReadResources() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "_ReadResources"));
}
// Autogenerated method: System.Resources.ResourceReader.FindType
System::RuntimeType* System::Resources::ResourceReader::FindType(int typeIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::RuntimeType*>(this, "FindType", typeIndex));
}
// Autogenerated method: System.Resources.ResourceReader.Close
void System::Resources::ResourceReader::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Resources.ResourceReader.Dispose
void System::Resources::ResourceReader::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Resources::ResourceReader::System_IDisposable_Dispose() {
  System::Resources::ResourceReader::Dispose();
}
// Autogenerated method: System.Resources.ResourceReader.System.Collections.IEnumerable.GetEnumerator
System::Collections::IEnumerator* System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
}
// Autogenerated method: System.Resources.ResourceReader.GetEnumerator
System::Collections::IDictionaryEnumerator* System::Resources::ResourceReader::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionaryEnumerator*>(this, "GetEnumerator"));
}
