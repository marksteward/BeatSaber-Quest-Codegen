// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.GroupEnumerator
#include "System/Text/RegularExpressions/GroupEnumerator.hpp"
// Including type: System.Text.RegularExpressions.GroupCollection
#include "System/Text/RegularExpressions/GroupCollection.hpp"
// Including type: System.Text.RegularExpressions.Capture
#include "System/Text/RegularExpressions/Capture.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.RegularExpressions.GroupEnumerator..ctor
System::Text::RegularExpressions::GroupEnumerator* System::Text::RegularExpressions::GroupEnumerator::New_ctor(System::Text::RegularExpressions::GroupCollection* rgc) {
  return THROW_UNLESS(il2cpp_utils::New<GroupEnumerator*>(rgc));
}
// Autogenerated method: System.Text.RegularExpressions.GroupEnumerator.get_Capture
System::Text::RegularExpressions::Capture* System::Text::RegularExpressions::GroupEnumerator::get_Capture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::Capture*>(this, "get_Capture"));
}
// Autogenerated method: System.Text.RegularExpressions.GroupEnumerator.MoveNext
bool System::Text::RegularExpressions::GroupEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: System.Text.RegularExpressions.GroupEnumerator.get_Current
::Il2CppObject* System::Text::RegularExpressions::GroupEnumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Current"));
}
::Il2CppObject* System::Text::RegularExpressions::GroupEnumerator::System_Collections_IEnumerator_get_Current() {
  return System::Text::RegularExpressions::GroupEnumerator::get_Current();
}
// Autogenerated method: System.Text.RegularExpressions.GroupEnumerator.Reset
void System::Text::RegularExpressions::GroupEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void System::Text::RegularExpressions::GroupEnumerator::System_Collections_IEnumerator_Reset() {
  System::Text::RegularExpressions::GroupEnumerator::Reset();
}
