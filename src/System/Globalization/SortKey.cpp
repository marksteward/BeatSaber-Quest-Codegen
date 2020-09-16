// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.SortKey
#include "System/Globalization/SortKey.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Globalization.SortKey.Compare
int System::Globalization::SortKey::Compare(System::Globalization::SortKey* sortkey1, System::Globalization::SortKey* sortkey2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "SortKey", "Compare", sortkey1, sortkey2));
}
// Autogenerated method: System.Globalization.SortKey..ctor
System::Globalization::SortKey* System::Globalization::SortKey::New_ctor(int lcid, ::Il2CppString* source, System::Globalization::CompareOptions opt) {
  return THROW_UNLESS(il2cpp_utils::New<SortKey*>(lcid, source, opt));
}
// Autogenerated method: System.Globalization.SortKey..ctor
System::Globalization::SortKey* System::Globalization::SortKey::New_ctor(int lcid, ::Il2CppString* source, ::Array<uint8_t>* buffer, System::Globalization::CompareOptions opt, int lv1Length, int lv2Length, int lv3Length, int kanaSmallLength, int markTypeLength, int katakanaLength, int kanaWidthLength, int identLength) {
  return THROW_UNLESS(il2cpp_utils::New<SortKey*>(lcid, source, buffer, opt, lv1Length, lv2Length, lv3Length, kanaSmallLength, markTypeLength, katakanaLength, kanaWidthLength, identLength));
}
// Autogenerated method: System.Globalization.SortKey.get_OriginalString
::Il2CppString* System::Globalization::SortKey::get_OriginalString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_OriginalString"));
}
// Autogenerated method: System.Globalization.SortKey.get_KeyData
::Array<uint8_t>* System::Globalization::SortKey::get_KeyData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_KeyData"));
}
// Autogenerated method: System.Globalization.SortKey.Equals
bool System::Globalization::SortKey::Equals(::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", value));
}
// Autogenerated method: System.Globalization.SortKey.GetHashCode
int System::Globalization::SortKey::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Globalization.SortKey.ToString
::Il2CppString* System::Globalization::SortKey::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
// Autogenerated method: System.Globalization.SortKey..ctor
System::Globalization::SortKey* System::Globalization::SortKey::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SortKey*>());
}
