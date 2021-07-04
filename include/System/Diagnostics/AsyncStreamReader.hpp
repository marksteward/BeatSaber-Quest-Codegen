// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.AsyncStreamReader
  class AsyncStreamReader : public ::Il2CppObject {
    public:
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x10
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x18
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Text.Decoder decoder
    // Size: 0x8
    // Offset: 0x20
    System::Text::Decoder* decoder;
    // Field size check
    static_assert(sizeof(System::Text::Decoder*) == 0x8);
    // private System.Byte[] byteBuffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* byteBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Char[] charBuffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppChar>* charBuffer;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Boolean cancelOperation
    // Size: 0x1
    // Offset: 0x38
    bool cancelOperation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cancelOperation and: eofEvent
    char __padding5[0x7] = {};
    // private System.Threading.ManualResetEvent eofEvent
    // Size: 0x8
    // Offset: 0x40
    System::Threading::ManualResetEvent* eofEvent;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Object syncObject
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* syncObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: AsyncStreamReader
    AsyncStreamReader(System::IO::Stream* stream_ = {}, System::Text::Encoding* encoding_ = {}, System::Text::Decoder* decoder_ = {}, ::Array<uint8_t>* byteBuffer_ = {}, ::Array<::Il2CppChar>* charBuffer_ = {}, bool cancelOperation_ = {}, System::Threading::ManualResetEvent* eofEvent_ = {}, ::Il2CppObject* syncObject_ = {}) noexcept : stream{stream_}, encoding{encoding_}, decoder{decoder_}, byteBuffer{byteBuffer_}, charBuffer{charBuffer_}, cancelOperation{cancelOperation_}, eofEvent{eofEvent_}, syncObject{syncObject_} {}
    // public System.Void Close()
    // Offset: 0x1869620
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1869630
    void Dispose(bool disposing);
    // System.Void CancelOperation()
    // Offset: 0x1869710
    void CancelOperation();
  }; // System.Diagnostics.AsyncStreamReader
  #pragma pack(pop)
  static check_size<sizeof(AsyncStreamReader), 72 + sizeof(::Il2CppObject*)> __System_Diagnostics_AsyncStreamReaderSizeCheck;
  static_assert(sizeof(AsyncStreamReader) == 0x50);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::AsyncStreamReader*, "System.Diagnostics", "AsyncStreamReader");
// Writing MetadataGetter for method: System::Diagnostics::AsyncStreamReader::Close
// Il2CppName: Close
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Diagnostics::AsyncStreamReader::Dispose
// Il2CppName: Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Diagnostics::AsyncStreamReader::CancelOperation
// Il2CppName: CancelOperation
// Cannot perform method pointer template specialization from operators!
