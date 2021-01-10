// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
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
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Decoder
  class Decoder;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  // Autogenerated type: System.IO.StreamReader
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D393E0
  class StreamReader : public System::IO::TextReader {
    public:
    // Nested type: System::IO::StreamReader::NullStreamReader
    class NullStreamReader;
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x18
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x20
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Text.Decoder decoder
    // Size: 0x8
    // Offset: 0x28
    System::Text::Decoder* decoder;
    // Field size check
    static_assert(sizeof(System::Text::Decoder*) == 0x8);
    // private System.Byte[] byteBuffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* byteBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Char[] charBuffer
    // Size: 0x8
    // Offset: 0x38
    ::Array<::Il2CppChar>* charBuffer;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Byte[] _preamble
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* preamble;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 charPos
    // Size: 0x4
    // Offset: 0x48
    int charPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 charLen
    // Size: 0x4
    // Offset: 0x4C
    int charLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 byteLen
    // Size: 0x4
    // Offset: 0x50
    int byteLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 bytePos
    // Size: 0x4
    // Offset: 0x54
    int bytePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxCharsPerBuffer
    // Size: 0x4
    // Offset: 0x58
    int maxCharsPerBuffer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _detectEncoding
    // Size: 0x1
    // Offset: 0x5C
    bool detectEncoding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _checkPreamble
    // Size: 0x1
    // Offset: 0x5D
    bool checkPreamble;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isBlocked
    // Size: 0x1
    // Offset: 0x5E
    bool isBlocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _closable
    // Size: 0x1
    // Offset: 0x5F
    bool closable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Threading.Tasks.Task _asyncReadTask
    // Size: 0x8
    // Offset: 0x60
    System::Threading::Tasks::Task* asyncReadTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // Creating value type constructor for type: StreamReader
    StreamReader(System::IO::Stream* stream_ = {}, System::Text::Encoding* encoding_ = {}, System::Text::Decoder* decoder_ = {}, ::Array<uint8_t>* byteBuffer_ = {}, ::Array<::Il2CppChar>* charBuffer_ = {}, ::Array<uint8_t>* preamble_ = {}, int charPos_ = {}, int charLen_ = {}, int byteLen_ = {}, int bytePos_ = {}, int maxCharsPerBuffer_ = {}, bool detectEncoding_ = {}, bool checkPreamble_ = {}, bool isBlocked_ = {}, bool closable_ = {}, System::Threading::Tasks::Task* asyncReadTask_ = {}) noexcept : stream{stream_}, encoding{encoding_}, decoder{decoder_}, byteBuffer{byteBuffer_}, charBuffer{charBuffer_}, preamble{preamble_}, charPos{charPos_}, charLen{charLen_}, byteLen{byteLen_}, bytePos{bytePos_}, maxCharsPerBuffer{maxCharsPerBuffer_}, detectEncoding{detectEncoding_}, checkPreamble{checkPreamble_}, isBlocked{isBlocked_}, closable{closable_}, asyncReadTask{asyncReadTask_} {}
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static public readonly System.IO.StreamReader Null
    static System::IO::StreamReader* _get_Null();
    // Set static field: static public readonly System.IO.StreamReader Null
    static void _set_Null(System::IO::StreamReader* value);
    // static System.Int32 get_DefaultBufferSize()
    // Offset: 0x13A88D8
    static int get_DefaultBufferSize();
    // private System.Void CheckAsyncTaskInProgress()
    // Offset: 0x13A88E0
    void CheckAsyncTaskInProgress();
    // public System.Void .ctor(System.IO.Stream stream)
    // Offset: 0x13A89F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(System::IO::Stream* stream) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(stream)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Boolean detectEncodingFromByteOrderMarks)
    // Offset: 0x13A8A00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(stream, detectEncodingFromByteOrderMarks)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0x13A8C50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(stream, encoding)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0x13A8A98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen)));
    }
    // public System.Void .ctor(System.String path)
    // Offset: 0x13A8E58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path)));
    }
    // public System.Void .ctor(System.String path, System.Boolean detectEncodingFromByteOrderMarks)
    // Offset: 0x13A8E60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path, bool detectEncodingFromByteOrderMarks) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path, detectEncodingFromByteOrderMarks)));
    }
    // public System.Void .ctor(System.String path, System.Text.Encoding encoding)
    // Offset: 0x13A8F04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path, encoding)));
    }
    // public System.Void .ctor(System.String path, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize)
    // Offset: 0x13A8EF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path, encoding, detectEncodingFromByteOrderMarks, bufferSize)));
    }
    // System.Void .ctor(System.String path, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize, System.Boolean checkHost)
    // Offset: 0x13A8F8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool checkHost) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path, encoding, detectEncodingFromByteOrderMarks, bufferSize, checkHost)));
    }
    // private System.Void Init(System.IO.Stream stream, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0x13A8CD8
    void Init(System::IO::Stream* stream, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen);
    // System.Void Init(System.IO.Stream stream)
    // Offset: 0x13A91B8
    void Init(System::IO::Stream* stream);
    // public System.Text.Encoding get_CurrentEncoding()
    // Offset: 0x13A9300
    System::Text::Encoding* get_CurrentEncoding();
    // public System.IO.Stream get_BaseStream()
    // Offset: 0x13A9308
    System::IO::Stream* get_BaseStream();
    // System.Boolean get_LeaveOpen()
    // Offset: 0x13A92EC
    bool get_LeaveOpen();
    // public System.Boolean get_EndOfStream()
    // Offset: 0x13A9310
    bool get_EndOfStream();
    // System.Boolean DataAvailable()
    // Offset: 0x13A9480
    bool DataAvailable();
    // private System.Void CompressBuffer(System.Int32 n)
    // Offset: 0x13A9A48
    void CompressBuffer(int n);
    // private System.Void DetectEncoding()
    // Offset: 0x13A9A90
    void DetectEncoding();
    // private System.Boolean IsPreamble()
    // Offset: 0x13A9DC0
    bool IsPreamble();
    // System.Int32 ReadBuffer()
    // Offset: 0x13A9ED8
    int ReadBuffer();
    // private System.Int32 ReadBuffer(System.Char[] userBuffer, System.Int32 userOffset, System.Int32 desiredChars, out System.Boolean readToUserBuffer)
    // Offset: 0x13A9758
    int ReadBuffer(::Array<::Il2CppChar>* userBuffer, int userOffset, int desiredChars, bool& readToUserBuffer);
    // System.Void .ctor()
    // Offset: 0x13A8988
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>()));
    }
    // public override System.Void Close()
    // Offset: 0x13A91E8
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x13A91F8
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Peek()
    // Offset: 0x13A93F0
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x13A9490
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read()
    int Read();
    // public override System.Int32 Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x13A9520
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>*& buffer, int index, int count);
    // public override System.String ReadToEnd()
    // Offset: 0x13A9970
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
    // public override System.String ReadLine()
    // Offset: 0x13AA048
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadLine()
    ::Il2CppString* ReadLine();
    // static private System.Void .cctor()
    // Offset: 0x13AA26C
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::.cctor()
    static void _cctor();
  }; // System.IO.StreamReader
  static check_size<sizeof(StreamReader), 96 + sizeof(System::Threading::Tasks::Task*)> __System_IO_StreamReaderSizeCheck;
  static_assert(sizeof(StreamReader) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamReader*, "System.IO", "StreamReader");
#pragma pack(pop)
