// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoder
  class Encoder;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x51
  // Autogenerated type: System.Text.UTF7Encoding
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D37FDC
  class UTF7Encoding : public System::Text::Encoding {
    public:
    // Nested type: System::Text::UTF7Encoding::Decoder
    class Decoder;
    // Nested type: System::Text::UTF7Encoding::Encoder
    class Encoder;
    // Nested type: System::Text::UTF7Encoding::DecoderUTF7Fallback
    class DecoderUTF7Fallback;
    // Nested type: System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer
    class DecoderUTF7FallbackBuffer;
    // private System.Byte[] base64Bytes
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* base64Bytes;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.SByte[] base64Values
    // Size: 0x8
    // Offset: 0x40
    ::Array<int8_t>* base64Values;
    // Field size check
    static_assert(sizeof(::Array<int8_t>*) == 0x8);
    // private System.Boolean[] directEncode
    // Size: 0x8
    // Offset: 0x48
    ::Array<bool>* directEncode;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD3E0CC
    // private System.Boolean m_allowOptionals
    // Size: 0x1
    // Offset: 0x50
    bool m_allowOptionals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UTF7Encoding
    UTF7Encoding(::Array<uint8_t>* base64Bytes_ = {}, ::Array<int8_t>* base64Values_ = {}, ::Array<bool>* directEncode_ = {}, bool m_allowOptionals_ = {}) noexcept : base64Bytes{base64Bytes_}, base64Values{base64Values_}, directEncode{directEncode_}, m_allowOptionals{m_allowOptionals_} {}
    // public System.Void .ctor(System.Boolean allowOptionals)
    // Offset: 0x16A6FA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding* New_ctor(bool allowOptionals) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF7Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding*, creationType>(allowOptionals)));
    }
    // private System.Void MakeTables()
    // Offset: 0x16A6FD8
    void MakeTables();
    // public System.Void .ctor()
    // Offset: 0x16A6F70
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF7Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding*, creationType>()));
    }
    // override System.Void SetDefaultFallbacks()
    // Offset: 0x16A7250
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::SetDefaultFallbacks()
    void SetDefaultFallbacks();
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x16A730C
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x16A7314
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x16A73BC
    // Implemented from: System.Text.Encoding
    // Base method: System.Boolean Encoding::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x16A74B0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetHashCode()
    int GetHashCode();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x16A7520
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count);
    // public override System.Int32 GetByteCount(System.String s)
    // Offset: 0x16A76F4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.String s)
    int GetByteCount(::Il2CppString* s);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x16A77A4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count)
    int GetByteCount(::Il2CppChar* chars, int count);
    // public override System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x16A78C0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::Il2CppString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x16A7B30
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x16A7DD0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x16A7F34
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x16A8108
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count)
    int GetCharCount(uint8_t* bytes, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x16A8224
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x16A84C4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // public override System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x16A8628
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    ::Il2CppString* GetString(::Array<uint8_t>* bytes, int index, int count);
    // override System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS baseEncoder)
    // Offset: 0x16A8800
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS baseEncoder)
    int GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* baseEncoder);
    // override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS baseEncoder)
    // Offset: 0x16A881C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS baseEncoder)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* baseEncoder);
    // override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x16A8BE0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    int GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* baseDecoder);
    // override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x16A8BFC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* baseDecoder);
    // public override System.Text.Decoder GetDecoder()
    // Offset: 0x16A8EBC
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Decoder Encoding::GetDecoder()
    System::Text::Decoder* GetDecoder();
    // public override System.Text.Encoder GetEncoder()
    // Offset: 0x16A8F28
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Encoder Encoding::GetEncoder()
    System::Text::Encoder* GetEncoder();
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x16A8F94
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x16A9058
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
  }; // System.Text.UTF7Encoding
  static check_size<sizeof(UTF7Encoding), 80 + sizeof(bool)> __System_Text_UTF7EncodingSizeCheck;
  static_assert(sizeof(UTF7Encoding) == 0x51);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF7Encoding*, "System.Text", "UTF7Encoding");
#pragma pack(pop)
