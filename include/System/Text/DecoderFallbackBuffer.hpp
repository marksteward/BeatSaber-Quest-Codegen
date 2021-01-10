// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x20
  // Autogenerated type: System.Text.DecoderFallbackBuffer
  // [] Offset: FFFFFFFF
  class DecoderFallbackBuffer : public ::Il2CppObject {
    public:
    // System.Byte* byteStart
    // Size: 0x8
    // Offset: 0x10
    uint8_t* byteStart;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // System.Char* charEnd
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppChar* charEnd;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // Creating value type constructor for type: DecoderFallbackBuffer
    DecoderFallbackBuffer(uint8_t* byteStart_ = {}, ::Il2CppChar* charEnd_ = {}) noexcept : byteStart{byteStart_}, charEnd{charEnd_} {}
    // public System.Boolean Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0xFFFFFFFF
    bool Fallback(::Array<uint8_t>* bytesUnknown, int index);
    // public System.Char GetNextChar()
    // Offset: 0xFFFFFFFF
    ::Il2CppChar GetNextChar();
    // public System.Void Reset()
    // Offset: 0x159A458
    void Reset();
    // System.Void InternalReset()
    // Offset: 0x1599488
    void InternalReset();
    // System.Void InternalInitialize(System.Byte* byteStart, System.Char* charEnd)
    // Offset: 0x1599158
    void InternalInitialize(uint8_t* byteStart, ::Il2CppChar* charEnd);
    // System.Boolean InternalFallback(System.Byte[] bytes, System.Byte* pBytes, ref System.Char* chars)
    // Offset: 0x159A48C
    bool InternalFallback(::Array<uint8_t>* bytes, uint8_t* pBytes, ::Il2CppChar*& chars);
    // System.Int32 InternalFallback(System.Byte[] bytes, System.Byte* pBytes)
    // Offset: 0x159A638
    int InternalFallback(::Array<uint8_t>* bytes, uint8_t* pBytes);
    // System.Void ThrowLastBytesRecursive(System.Byte[] bytesUnknown)
    // Offset: 0x159A7CC
    void ThrowLastBytesRecursive(::Array<uint8_t>* bytesUnknown);
    // protected System.Void .ctor()
    // Offset: 0x159A230
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderFallbackBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderFallbackBuffer*, creationType>()));
    }
  }; // System.Text.DecoderFallbackBuffer
  static check_size<sizeof(DecoderFallbackBuffer), 24 + sizeof(::Il2CppChar*)> __System_Text_DecoderFallbackBufferSizeCheck;
  static_assert(sizeof(DecoderFallbackBuffer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderFallbackBuffer*, "System.Text", "DecoderFallbackBuffer");
#pragma pack(pop)
