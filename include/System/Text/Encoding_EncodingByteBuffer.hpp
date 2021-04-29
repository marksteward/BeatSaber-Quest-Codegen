// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Encoding/EncodingByteBuffer
  class Encoding::EncodingByteBuffer : public ::Il2CppObject {
    public:
    // private System.Byte* bytes
    // Size: 0x8
    // Offset: 0x10
    uint8_t* bytes;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Byte* byteStart
    // Size: 0x8
    // Offset: 0x18
    uint8_t* byteStart;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Byte* byteEnd
    // Size: 0x8
    // Offset: 0x20
    uint8_t* byteEnd;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Char* chars
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppChar* chars;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Char* charStart
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppChar* charStart;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Char* charEnd
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppChar* charEnd;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Int32 byteCountResult
    // Size: 0x4
    // Offset: 0x40
    int byteCountResult;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: byteCountResult and: enc
    char __padding6[0x4] = {};
    // private System.Text.Encoding enc
    // Size: 0x8
    // Offset: 0x48
    System::Text::Encoding* enc;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Text.EncoderNLS encoder
    // Size: 0x8
    // Offset: 0x50
    System::Text::EncoderNLS* encoder;
    // Field size check
    static_assert(sizeof(System::Text::EncoderNLS*) == 0x8);
    // System.Text.EncoderFallbackBuffer fallbackBuffer
    // Size: 0x8
    // Offset: 0x58
    System::Text::EncoderFallbackBuffer* fallbackBuffer;
    // Field size check
    static_assert(sizeof(System::Text::EncoderFallbackBuffer*) == 0x8);
    // Creating value type constructor for type: EncodingByteBuffer
    EncodingByteBuffer(uint8_t* bytes_ = {}, uint8_t* byteStart_ = {}, uint8_t* byteEnd_ = {}, ::Il2CppChar* chars_ = {}, ::Il2CppChar* charStart_ = {}, ::Il2CppChar* charEnd_ = {}, int byteCountResult_ = {}, System::Text::Encoding* enc_ = {}, System::Text::EncoderNLS* encoder_ = {}, System::Text::EncoderFallbackBuffer* fallbackBuffer_ = {}) noexcept : bytes{bytes_}, byteStart{byteStart_}, byteEnd{byteEnd_}, chars{chars_}, charStart{charStart_}, charEnd{charEnd_}, byteCountResult{byteCountResult_}, enc{enc_}, encoder{encoder_}, fallbackBuffer{fallbackBuffer_} {}
    // System.Void .ctor(System.Text.Encoding inEncoding, System.Text.EncoderNLS inEncoder, System.Byte* inByteStart, System.Int32 inByteCount, System.Char* inCharStart, System.Int32 inCharCount)
    // Offset: 0x1B27210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding::EncodingByteBuffer* New_ctor(System::Text::Encoding* inEncoding, System::Text::EncoderNLS* inEncoder, uint8_t* inByteStart, int inByteCount, ::Il2CppChar* inCharStart, int inCharCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoding::EncodingByteBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding::EncodingByteBuffer*, creationType>(inEncoding, inEncoder, inByteStart, inByteCount, inCharStart, inCharCount)));
    }
    // System.Boolean AddByte(System.Byte b, System.Int32 moreBytesExpected)
    // Offset: 0x1B27448
    bool AddByte(uint8_t b, int moreBytesExpected);
    // System.Boolean AddByte(System.Byte b1)
    // Offset: 0x1B27520
    bool AddByte(uint8_t b1);
    // System.Boolean AddByte(System.Byte b1, System.Byte b2)
    // Offset: 0x1B27528
    bool AddByte(uint8_t b1, uint8_t b2);
    // System.Boolean AddByte(System.Byte b1, System.Byte b2, System.Int32 moreBytesExpected)
    // Offset: 0x1B27530
    bool AddByte(uint8_t b1, uint8_t b2, int moreBytesExpected);
    // System.Void MovePrevious(System.Boolean bThrow)
    // Offset: 0x1B2749C
    void MovePrevious(bool bThrow);
    // System.Boolean get_MoreData()
    // Offset: 0x1B27588
    bool get_MoreData();
    // System.Char GetNextChar()
    // Offset: 0x1B275DC
    ::Il2CppChar GetNextChar();
    // System.Int32 get_CharsUsed()
    // Offset: 0x1B27638
    int get_CharsUsed();
    // System.Int32 get_Count()
    // Offset: 0x1B27650
    int get_Count();
  }; // System.Text.Encoding/EncodingByteBuffer
  #pragma pack(pop)
  static check_size<sizeof(Encoding::EncodingByteBuffer), 88 + sizeof(System::Text::EncoderFallbackBuffer*)> __System_Text_Encoding_EncodingByteBufferSizeCheck;
  static_assert(sizeof(Encoding::EncodingByteBuffer) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding::EncodingByteBuffer*, "System.Text", "Encoding/EncodingByteBuffer");
