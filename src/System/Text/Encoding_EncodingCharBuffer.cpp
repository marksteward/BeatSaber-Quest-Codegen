// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Encoding/EncodingCharBuffer
#include "System/Text/Encoding_EncodingCharBuffer.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
// Including type: System.Text.DecoderFallbackBuffer
#include "System/Text/DecoderFallbackBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer..ctor
System::Text::Encoding::EncodingCharBuffer* System::Text::Encoding::EncodingCharBuffer::New_ctor(System::Text::Encoding* enc, System::Text::DecoderNLS* decoder, ::Il2CppChar* charStart, int charCount, uint8_t* byteStart, int byteCount) {
  return THROW_UNLESS(il2cpp_utils::New<Encoding::EncodingCharBuffer*>(enc, decoder, charStart, charCount, byteStart, byteCount));
}
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer.AddChar
bool System::Text::Encoding::EncodingCharBuffer::AddChar(::Il2CppChar ch, int numBytes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddChar", ch, numBytes));
}
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer.AddChar
bool System::Text::Encoding::EncodingCharBuffer::AddChar(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddChar", ch));
}
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer.AdjustBytes
void System::Text::Encoding::EncodingCharBuffer::AdjustBytes(int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AdjustBytes", count));
}
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer.get_MoreData
bool System::Text::Encoding::EncodingCharBuffer::get_MoreData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_MoreData"));
}
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer.GetNextByte
uint8_t System::Text::Encoding::EncodingCharBuffer::GetNextByte() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(this, "GetNextByte"));
}
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer.get_BytesUsed
int System::Text::Encoding::EncodingCharBuffer::get_BytesUsed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_BytesUsed"));
}
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer.Fallback
bool System::Text::Encoding::EncodingCharBuffer::Fallback(uint8_t fallbackByte) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Fallback", fallbackByte));
}
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer.Fallback
bool System::Text::Encoding::EncodingCharBuffer::Fallback(::Array<uint8_t>* byteBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Fallback", byteBuffer));
}
// Autogenerated method: System.Text.Encoding/EncodingCharBuffer.get_Count
int System::Text::Encoding::EncodingCharBuffer::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
