// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UTF32Encoding
#include "System/Text/UTF32Encoding.hpp"
// Including type: System.Text.UTF32Encoding/UTF32Decoder
#include "System/Text/UTF32Encoding_UTF32Decoder.hpp"
// Including type: System.Text.EncoderNLS
#include "System/Text/EncoderNLS.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
// Including type: System.Text.Encoder
#include "System/Text/Encoder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.UTF32Encoding..ctor
System::Text::UTF32Encoding* System::Text::UTF32Encoding::New_ctor(bool bigEndian, bool byteOrderMark) {
  return THROW_UNLESS(il2cpp_utils::New<UTF32Encoding*>(bigEndian, byteOrderMark));
}
// Autogenerated method: System.Text.UTF32Encoding..ctor
System::Text::UTF32Encoding* System::Text::UTF32Encoding::New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters) {
  return THROW_UNLESS(il2cpp_utils::New<UTF32Encoding*>(bigEndian, byteOrderMark, throwOnInvalidCharacters));
}
// Autogenerated method: System.Text.UTF32Encoding.GetSurrogate
uint System::Text::UTF32Encoding::GetSurrogate(::Il2CppChar cHigh, ::Il2CppChar cLow) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetSurrogate", cHigh, cLow));
}
// Autogenerated method: System.Text.UTF32Encoding.GetHighSurrogate
::Il2CppChar System::Text::UTF32Encoding::GetHighSurrogate(uint iChar) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "GetHighSurrogate", iChar));
}
// Autogenerated method: System.Text.UTF32Encoding.GetLowSurrogate
::Il2CppChar System::Text::UTF32Encoding::GetLowSurrogate(uint iChar) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "GetLowSurrogate", iChar));
}
// Autogenerated method: System.Text.UTF32Encoding..ctor
System::Text::UTF32Encoding* System::Text::UTF32Encoding::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<UTF32Encoding*>());
}
// Autogenerated method: System.Text.UTF32Encoding.SetDefaultFallbacks
void System::Text::UTF32Encoding::SetDefaultFallbacks() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetDefaultFallbacks"));
}
// Autogenerated method: System.Text.UTF32Encoding.GetByteCount
int System::Text::UTF32Encoding::GetByteCount(::Array<::Il2CppChar>* chars, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, index, count));
}
// Autogenerated method: System.Text.UTF32Encoding.GetByteCount
int System::Text::UTF32Encoding::GetByteCount(::Il2CppString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", s));
}
// Autogenerated method: System.Text.UTF32Encoding.GetByteCount
int System::Text::UTF32Encoding::GetByteCount(::Il2CppChar* chars, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, count));
}
// Autogenerated method: System.Text.UTF32Encoding.GetBytes
int System::Text::UTF32Encoding::GetBytes(::Il2CppString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", s, charIndex, charCount, bytes, byteIndex));
}
// Autogenerated method: System.Text.UTF32Encoding.GetBytes
int System::Text::UTF32Encoding::GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charIndex, charCount, bytes, byteIndex));
}
// Autogenerated method: System.Text.UTF32Encoding.GetBytes
int System::Text::UTF32Encoding::GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charCount, bytes, byteCount));
}
// Autogenerated method: System.Text.UTF32Encoding.GetCharCount
int System::Text::UTF32Encoding::GetCharCount(::Array<uint8_t>* bytes, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, index, count));
}
// Autogenerated method: System.Text.UTF32Encoding.GetCharCount
int System::Text::UTF32Encoding::GetCharCount(uint8_t* bytes, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, count));
}
// Autogenerated method: System.Text.UTF32Encoding.GetChars
int System::Text::UTF32Encoding::GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteIndex, byteCount, chars, charIndex));
}
// Autogenerated method: System.Text.UTF32Encoding.GetChars
int System::Text::UTF32Encoding::GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteCount, chars, charCount));
}
// Autogenerated method: System.Text.UTF32Encoding.GetString
::Il2CppString* System::Text::UTF32Encoding::GetString(::Array<uint8_t>* bytes, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetString", bytes, index, count));
}
// Autogenerated method: System.Text.UTF32Encoding.GetByteCount
int System::Text::UTF32Encoding::GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* encoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, count, encoder));
}
// Autogenerated method: System.Text.UTF32Encoding.GetBytes
int System::Text::UTF32Encoding::GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* encoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charCount, bytes, byteCount, encoder));
}
// Autogenerated method: System.Text.UTF32Encoding.GetCharCount
int System::Text::UTF32Encoding::GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* baseDecoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, count, baseDecoder));
}
// Autogenerated method: System.Text.UTF32Encoding.GetChars
int System::Text::UTF32Encoding::GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* baseDecoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteCount, chars, charCount, baseDecoder));
}
// Autogenerated method: System.Text.UTF32Encoding.GetDecoder
System::Text::Decoder* System::Text::UTF32Encoding::GetDecoder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Decoder*>(this, "GetDecoder"));
}
// Autogenerated method: System.Text.UTF32Encoding.GetEncoder
System::Text::Encoder* System::Text::UTF32Encoding::GetEncoder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Encoder*>(this, "GetEncoder"));
}
// Autogenerated method: System.Text.UTF32Encoding.GetMaxByteCount
int System::Text::UTF32Encoding::GetMaxByteCount(int charCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMaxByteCount", charCount));
}
// Autogenerated method: System.Text.UTF32Encoding.GetMaxCharCount
int System::Text::UTF32Encoding::GetMaxCharCount(int byteCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMaxCharCount", byteCount));
}
// Autogenerated method: System.Text.UTF32Encoding.GetPreamble
::Array<uint8_t>* System::Text::UTF32Encoding::GetPreamble() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetPreamble"));
}
// Autogenerated method: System.Text.UTF32Encoding.Equals
bool System::Text::UTF32Encoding::Equals(::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", value));
}
// Autogenerated method: System.Text.UTF32Encoding.GetHashCode
int System::Text::UTF32Encoding::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
