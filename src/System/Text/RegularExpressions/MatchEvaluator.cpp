// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.MatchEvaluator
#include "System/Text/RegularExpressions/MatchEvaluator.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Text.RegularExpressions.Match
#include "System/Text/RegularExpressions/Match.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.RegularExpressions.MatchEvaluator..ctor
System::Text::RegularExpressions::MatchEvaluator* System::Text::RegularExpressions::MatchEvaluator::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<MatchEvaluator*>(object, method));
}
// Autogenerated method: System.Text.RegularExpressions.MatchEvaluator.Invoke
::Il2CppString* System::Text::RegularExpressions::MatchEvaluator::Invoke(System::Text::RegularExpressions::Match* match) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "Invoke", match));
}
// Autogenerated method: System.Text.RegularExpressions.MatchEvaluator.BeginInvoke
System::IAsyncResult* System::Text::RegularExpressions::MatchEvaluator::BeginInvoke(System::Text::RegularExpressions::Match* match, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", match, callback, object));
}
// Autogenerated method: System.Text.RegularExpressions.MatchEvaluator.EndInvoke
::Il2CppString* System::Text::RegularExpressions::MatchEvaluator::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "EndInvoke", result));
}
