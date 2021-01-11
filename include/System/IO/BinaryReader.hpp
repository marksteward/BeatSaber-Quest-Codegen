// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x47
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.BinaryReader
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D39298
  class BinaryReader : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.IO.Stream m_stream
    // Size: 0x8
    // Offset: 0x10
    System::IO::Stream* m_stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Byte[] m_buffer
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* m_buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Text.Decoder m_decoder
    // Size: 0x8
    // Offset: 0x20
    System::Text::Decoder* m_decoder;
    // Field size check
    static_assert(sizeof(System::Text::Decoder*) == 0x8);
    // private System.Byte[] m_charBytes
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* m_charBytes;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Char[] m_singleChar
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppChar>* m_singleChar;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Char[] m_charBuffer
    // Size: 0x8
    // Offset: 0x38
    ::Array<::Il2CppChar>* m_charBuffer;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Int32 m_maxCharsSize
    // Size: 0x4
    // Offset: 0x40
    int m_maxCharsSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_2BytesPerChar
    // Size: 0x1
    // Offset: 0x44
    bool m_2BytesPerChar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_isMemoryStream
    // Size: 0x1
    // Offset: 0x45
    bool m_isMemoryStream;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_leaveOpen
    // Size: 0x1
    // Offset: 0x46
    bool m_leaveOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BinaryReader
    BinaryReader(System::IO::Stream* m_stream_ = {}, ::Array<uint8_t>* m_buffer_ = {}, System::Text::Decoder* m_decoder_ = {}, ::Array<uint8_t>* m_charBytes_ = {}, ::Array<::Il2CppChar>* m_singleChar_ = {}, ::Array<::Il2CppChar>* m_charBuffer_ = {}, int m_maxCharsSize_ = {}, bool m_2BytesPerChar_ = {}, bool m_isMemoryStream_ = {}, bool m_leaveOpen_ = {}) noexcept : m_stream{m_stream_}, m_buffer{m_buffer_}, m_decoder{m_decoder_}, m_charBytes{m_charBytes_}, m_singleChar{m_singleChar_}, m_charBuffer{m_charBuffer_}, m_maxCharsSize{m_maxCharsSize_}, m_2BytesPerChar{m_2BytesPerChar_}, m_isMemoryStream{m_isMemoryStream_}, m_leaveOpen{m_leaveOpen_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.IO.Stream input)
    // Offset: 0x142FC98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryReader* New_ctor(System::IO::Stream* input) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::BinaryReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryReader*, creationType>(input)));
    }
    // public System.Void .ctor(System.IO.Stream input, System.Text.Encoding encoding)
    // Offset: 0x142FF8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryReader* New_ctor(System::IO::Stream* input, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::BinaryReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryReader*, creationType>(input, encoding)));
    }
    // public System.Void .ctor(System.IO.Stream input, System.Text.Encoding encoding, System.Boolean leaveOpen)
    // Offset: 0x142FD10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryReader* New_ctor(System::IO::Stream* input, System::Text::Encoding* encoding, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::BinaryReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryReader*, creationType>(input, encoding, leaveOpen)));
    }
    // public System.IO.Stream get_BaseStream()
    // Offset: 0x142FF94
    System::IO::Stream* get_BaseStream();
    // public System.Void Close()
    // Offset: 0x142FF9C
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x142FFAC
    void Dispose(bool disposing);
    // public System.Int32 Read()
    // Offset: 0x1430078
    int Read();
    // public System.Boolean ReadBoolean()
    // Offset: 0x1430350
    bool ReadBoolean();
    // public System.Byte ReadByte()
    // Offset: 0x14303AC
    uint8_t ReadByte();
    // public System.SByte ReadSByte()
    // Offset: 0x1430408
    int8_t ReadSByte();
    // public System.Char ReadChar()
    // Offset: 0x143045C
    ::Il2CppChar ReadChar();
    // public System.Int16 ReadInt16()
    // Offset: 0x1430498
    int16_t ReadInt16();
    // public System.UInt16 ReadUInt16()
    // Offset: 0x14304F4
    uint16_t ReadUInt16();
    // public System.Int32 ReadInt32()
    // Offset: 0x1430550
    int ReadInt32();
    // public System.UInt32 ReadUInt32()
    // Offset: 0x1430718
    uint ReadUInt32();
    // public System.Int64 ReadInt64()
    // Offset: 0x143079C
    int64_t ReadInt64();
    // public System.UInt64 ReadUInt64()
    // Offset: 0x1430860
    uint64_t ReadUInt64();
    // public System.Single ReadSingle()
    // Offset: 0x1430924
    float ReadSingle();
    // public System.Double ReadDouble()
    // Offset: 0x1430960
    double ReadDouble();
    // public System.Decimal ReadDecimal()
    // Offset: 0x143099C
    System::Decimal ReadDecimal();
    // public System.String ReadString()
    // Offset: 0x1430B20
    ::Il2CppString* ReadString();
    // private System.Int32 InternalReadChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1430ED8
    int InternalReadChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // private System.Int32 InternalReadOneChar()
    // Offset: 0x14300A8
    int InternalReadOneChar();
    // public System.Char[] ReadChars(System.Int32 count)
    // Offset: 0x143123C
    ::Array<::Il2CppChar>* ReadChars(int count);
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x143139C
    int Read(::Array<uint8_t>* buffer, int index, int count);
    // public System.Byte[] ReadBytes(System.Int32 count)
    // Offset: 0x1431564
    ::Array<uint8_t>* ReadBytes(int count);
    // protected System.Void FillBuffer(System.Int32 numBytes)
    // Offset: 0x14316FC
    void FillBuffer(int numBytes);
    // protected internal System.Int32 Read7BitEncodedInt()
    // Offset: 0x1430DD4
    int Read7BitEncodedInt();
    // public System.Void Dispose()
    // Offset: 0x1430068
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.IO.BinaryReader
  static check_size<sizeof(BinaryReader), 70 + sizeof(bool)> __System_IO_BinaryReaderSizeCheck;
  static_assert(sizeof(BinaryReader) == 0x47);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::IO::BinaryReader*, "System.IO", "BinaryReader");
