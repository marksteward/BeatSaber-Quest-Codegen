// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.InternalEncoderBestFitFallbackBuffer
#include "System/Text/InternalEncoderBestFitFallbackBuffer.hpp"
// Including type: System.Text.InternalEncoderBestFitFallback
#include "System/Text/InternalEncoderBestFitFallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Object s_InternalSyncObject
::Il2CppObject* System::Text::InternalEncoderBestFitFallbackBuffer::_get_s_InternalSyncObject() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("_get_s_InternalSyncObject");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppObject*>("System.Text", "InternalEncoderBestFitFallbackBuffer", "s_InternalSyncObject"));
}
// Autogenerated static field setter
// Set static field: static private System.Object s_InternalSyncObject
void System::Text::InternalEncoderBestFitFallbackBuffer::_set_s_InternalSyncObject(::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("_set_s_InternalSyncObject");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Text", "InternalEncoderBestFitFallbackBuffer", "s_InternalSyncObject", value));
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallbackBuffer.get_InternalSyncObject
::Il2CppObject* System::Text::InternalEncoderBestFitFallbackBuffer::get_InternalSyncObject() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("get_InternalSyncObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Text", "InternalEncoderBestFitFallbackBuffer", "get_InternalSyncObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallbackBuffer.TryBestFit
::Il2CppChar System::Text::InternalEncoderBestFitFallbackBuffer::TryBestFit(::Il2CppChar cUnknown) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("TryBestFit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryBestFit", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(cUnknown)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppChar, false>(this, ___internal__method, cUnknown);
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallbackBuffer.Fallback
bool System::Text::InternalEncoderBestFitFallbackBuffer::Fallback(::Il2CppChar charUnknown, int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("Fallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Fallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(charUnknown, index)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, charUnknown, index);
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallbackBuffer.Fallback
bool System::Text::InternalEncoderBestFitFallbackBuffer::Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("Fallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Fallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(charUnknownHigh, charUnknownLow, index)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, charUnknownHigh, charUnknownLow, index);
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallbackBuffer.GetNextChar
::Il2CppChar System::Text::InternalEncoderBestFitFallbackBuffer::GetNextChar() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("GetNextChar");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetNextChar", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppChar, false>(this, ___internal__method);
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallbackBuffer.MovePrevious
bool System::Text::InternalEncoderBestFitFallbackBuffer::MovePrevious() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("MovePrevious");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MovePrevious", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallbackBuffer.get_Remaining
int System::Text::InternalEncoderBestFitFallbackBuffer::get_Remaining() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("get_Remaining");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Remaining", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallbackBuffer.Reset
void System::Text::InternalEncoderBestFitFallbackBuffer::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text").WithContext("InternalEncoderBestFitFallbackBuffer").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
