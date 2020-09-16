// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.CompatibleComparer
#include "System/Collections/CompatibleComparer.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Including type: System.Collections.IHashCodeProvider
#include "System/Collections/IHashCodeProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.CompatibleComparer..ctor
System::Collections::CompatibleComparer* System::Collections::CompatibleComparer::New_ctor(System::Collections::IComparer* comparer, System::Collections::IHashCodeProvider* hashCodeProvider) {
  return THROW_UNLESS(il2cpp_utils::New<CompatibleComparer*>(comparer, hashCodeProvider));
}
// Autogenerated method: System.Collections.CompatibleComparer.Compare
int System::Collections::CompatibleComparer::Compare(::Il2CppObject* a, ::Il2CppObject* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", a, b));
}
// Autogenerated method: System.Collections.CompatibleComparer.get_Comparer
System::Collections::IComparer* System::Collections::CompatibleComparer::get_Comparer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IComparer*>(this, "get_Comparer"));
}
// Autogenerated method: System.Collections.CompatibleComparer.get_HashCodeProvider
System::Collections::IHashCodeProvider* System::Collections::CompatibleComparer::get_HashCodeProvider() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IHashCodeProvider*>(this, "get_HashCodeProvider"));
}
// Autogenerated method: System.Collections.CompatibleComparer.Equals
bool System::Collections::CompatibleComparer::Equals(::Il2CppObject* a, ::Il2CppObject* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", a, b));
}
bool System::Collections::CompatibleComparer::System_Collections_IEqualityComparer_Equals(::Il2CppObject* a, ::Il2CppObject* b) {
  return System::Collections::CompatibleComparer::Equals(a, b);
}
// Autogenerated method: System.Collections.CompatibleComparer.GetHashCode
int System::Collections::CompatibleComparer::GetHashCode(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
}
int System::Collections::CompatibleComparer::System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj) {
  return System::Collections::CompatibleComparer::GetHashCode(obj);
}
