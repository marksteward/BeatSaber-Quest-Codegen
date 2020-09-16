// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.NUnitEqualityComparer
#include "NUnit/Framework/Constraints/NUnitEqualityComparer.hpp"
// Including type: NUnit.Framework.Constraints.NUnitEqualityComparer/FailurePoint
#include "NUnit/Framework/Constraints/NUnitEqualityComparer_FailurePoint.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: NUnit.Framework.Constraints.EqualityAdapter
#include "NUnit/Framework/Constraints/EqualityAdapter.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: NUnit.Framework.Constraints.Tolerance
#include "NUnit/Framework/Constraints/Tolerance.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: System.Collections.DictionaryEntry
#include "System/Collections/DictionaryEntry.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Including type: System.IO.DirectoryInfo
#include "System/IO/DirectoryInfo.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 BUFFER_SIZE
int NUnit::Framework::Constraints::NUnitEqualityComparer::_get_BUFFER_SIZE() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("NUnit.Framework.Constraints", "NUnitEqualityComparer", "BUFFER_SIZE"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 BUFFER_SIZE
void NUnit::Framework::Constraints::NUnitEqualityComparer::_set_BUFFER_SIZE(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Constraints", "NUnitEqualityComparer", "BUFFER_SIZE", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Type GameObjectType
System::Type* NUnit::Framework::Constraints::NUnitEqualityComparer::_get_GameObjectType() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("NUnit.Framework.Constraints", "NUnitEqualityComparer", "GameObjectType"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Type GameObjectType
void NUnit::Framework::Constraints::NUnitEqualityComparer::_set_GameObjectType(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Constraints", "NUnitEqualityComparer", "GameObjectType", value));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.get_IgnoreCase
bool NUnit::Framework::Constraints::NUnitEqualityComparer::get_IgnoreCase() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IgnoreCase"));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.get_FailurePoints
System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* NUnit::Framework::Constraints::NUnitEqualityComparer::get_FailurePoints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>*>(this, "get_FailurePoints"));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.get_WithSameOffset
bool NUnit::Framework::Constraints::NUnitEqualityComparer::get_WithSameOffset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_WithSameOffset"));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.AreEqual
bool NUnit::Framework::Constraints::NUnitEqualityComparer::AreEqual(::Il2CppObject* x, ::Il2CppObject* y, NUnit::Framework::Constraints::Tolerance*& tolerance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AreEqual", x, y, tolerance));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.FirstImplementsIEquatableOfSecond
System::Reflection::MethodInfo* NUnit::Framework::Constraints::NUnitEqualityComparer::FirstImplementsIEquatableOfSecond(System::Type* first, System::Type* second) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>("NUnit.Framework.Constraints", "NUnitEqualityComparer", "FirstImplementsIEquatableOfSecond", first, second));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.GetEquatableGenericArguments
System::Collections::Generic::IList_1<System::Collections::Generic::KeyValuePair_2<System::Type*, System::Reflection::MethodInfo*>>* NUnit::Framework::Constraints::NUnitEqualityComparer::GetEquatableGenericArguments(System::Type* type) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Collections::Generic::KeyValuePair_2<System::Type*, System::Reflection::MethodInfo*>>*>("NUnit.Framework.Constraints", "NUnitEqualityComparer", "GetEquatableGenericArguments", type)));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.InvokeFirstIEquatableEqualsSecond
bool NUnit::Framework::Constraints::NUnitEqualityComparer::InvokeFirstIEquatableEqualsSecond(::Il2CppObject* first, ::Il2CppObject* second, System::Reflection::MethodInfo* equals) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("NUnit.Framework.Constraints", "NUnitEqualityComparer", "InvokeFirstIEquatableEqualsSecond", first, second, equals));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.GetExternalComparer
NUnit::Framework::Constraints::EqualityAdapter* NUnit::Framework::Constraints::NUnitEqualityComparer::GetExternalComparer(::Il2CppObject* x, ::Il2CppObject* y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Constraints::EqualityAdapter*>(this, "GetExternalComparer", x, y));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.ArraysEqual
bool NUnit::Framework::Constraints::NUnitEqualityComparer::ArraysEqual(System::Array* x, System::Array* y, NUnit::Framework::Constraints::Tolerance*& tolerance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ArraysEqual", x, y, tolerance));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.DictionariesEqual
bool NUnit::Framework::Constraints::NUnitEqualityComparer::DictionariesEqual(System::Collections::IDictionary* x, System::Collections::IDictionary* y, NUnit::Framework::Constraints::Tolerance*& tolerance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "DictionariesEqual", x, y, tolerance));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.DictionaryEntriesEqual
bool NUnit::Framework::Constraints::NUnitEqualityComparer::DictionaryEntriesEqual(System::Collections::DictionaryEntry x, System::Collections::DictionaryEntry y, NUnit::Framework::Constraints::Tolerance*& tolerance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "DictionaryEntriesEqual", x, y, tolerance));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.StringsEqual
bool NUnit::Framework::Constraints::NUnitEqualityComparer::StringsEqual(::Il2CppString* x, ::Il2CppString* y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "StringsEqual", x, y));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.CharsEqual
bool NUnit::Framework::Constraints::NUnitEqualityComparer::CharsEqual(::Il2CppChar x, ::Il2CppChar y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CharsEqual", x, y));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.EnumerablesEqual
bool NUnit::Framework::Constraints::NUnitEqualityComparer::EnumerablesEqual(System::Collections::IEnumerable* x, System::Collections::IEnumerable* y, NUnit::Framework::Constraints::Tolerance*& tolerance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EnumerablesEqual", x, y, tolerance));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.DirectoriesEqual
bool NUnit::Framework::Constraints::NUnitEqualityComparer::DirectoriesEqual(System::IO::DirectoryInfo* x, System::IO::DirectoryInfo* y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("NUnit.Framework.Constraints", "NUnitEqualityComparer", "DirectoriesEqual", x, y));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer.StreamsEqual
bool NUnit::Framework::Constraints::NUnitEqualityComparer::StreamsEqual(System::IO::Stream* x, System::IO::Stream* y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "StreamsEqual", x, y));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer..cctor
void NUnit::Framework::Constraints::NUnitEqualityComparer::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Constraints", "NUnitEqualityComparer", ".cctor"));
}
// Autogenerated method: NUnit.Framework.Constraints.NUnitEqualityComparer..ctor
NUnit::Framework::Constraints::NUnitEqualityComparer* NUnit::Framework::Constraints::NUnitEqualityComparer::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<NUnitEqualityComparer*>());
}
