// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.SecureStringHasher
#include "System/Xml/SecureStringHasher.hpp"
// Including type: System.Xml.SecureStringHasher/HashCodeOfStringDelegate
#include "System/Xml/SecureStringHasher_HashCodeOfStringDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Xml.SecureStringHasher/HashCodeOfStringDelegate hashCodeDelegate
System::Xml::SecureStringHasher::HashCodeOfStringDelegate* System::Xml::SecureStringHasher::_get_hashCodeDelegate() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Xml::SecureStringHasher::HashCodeOfStringDelegate*>("System.Xml", "SecureStringHasher", "hashCodeDelegate"));
}
// Autogenerated static field setter
// Set static field: static private System.Xml.SecureStringHasher/HashCodeOfStringDelegate hashCodeDelegate
void System::Xml::SecureStringHasher::_set_hashCodeDelegate(System::Xml::SecureStringHasher::HashCodeOfStringDelegate* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "SecureStringHasher", "hashCodeDelegate", value));
}
// Autogenerated method: System.Xml.SecureStringHasher.GetHashCodeOfString
int System::Xml::SecureStringHasher::GetHashCodeOfString(::Il2CppString* key, int sLen, int64_t additionalEntropy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Xml", "SecureStringHasher", "GetHashCodeOfString", key, sLen, additionalEntropy));
}
// Autogenerated method: System.Xml.SecureStringHasher.GetHashCodeDelegate
System::Xml::SecureStringHasher::HashCodeOfStringDelegate* System::Xml::SecureStringHasher::GetHashCodeDelegate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Xml::SecureStringHasher::HashCodeOfStringDelegate*>("System.Xml", "SecureStringHasher", "GetHashCodeDelegate"));
}
// Autogenerated method: System.Xml.SecureStringHasher..ctor
System::Xml::SecureStringHasher* System::Xml::SecureStringHasher::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SecureStringHasher*>());
}
// Autogenerated method: System.Xml.SecureStringHasher.Equals
bool System::Xml::SecureStringHasher::Equals(::Il2CppString* x, ::Il2CppString* y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", x, y));
}
// Autogenerated method: System.Xml.SecureStringHasher.GetHashCode
int System::Xml::SecureStringHasher::GetHashCode(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", key));
}
