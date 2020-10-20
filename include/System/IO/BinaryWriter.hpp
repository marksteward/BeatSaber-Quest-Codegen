// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
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
  // Forward declaring type: Encoder
  class Encoder;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.BinaryWriter
  class BinaryWriter : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // protected System.IO.Stream OutStream
    // Offset: 0x10
    System::IO::Stream* OutStream;
    // private System.Byte[] _buffer
    // Offset: 0x18
    ::Array<uint8_t>* buffer;
    // private System.Text.Encoding _encoding
    // Offset: 0x20
    System::Text::Encoding* encoding;
    // private System.Text.Encoder _encoder
    // Offset: 0x28
    System::Text::Encoder* encoder;
    // private System.Boolean _leaveOpen
    // Offset: 0x30
    bool leaveOpen;
    // private System.Byte[] _largeByteBuffer
    // Offset: 0x38
    ::Array<uint8_t>* largeByteBuffer;
    // private System.Int32 _maxChars
    // Offset: 0x40
    int maxChars;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static public readonly System.IO.BinaryWriter Null
    static System::IO::BinaryWriter* _get_Null();
    // Set static field: static public readonly System.IO.BinaryWriter Null
    static void _set_Null(System::IO::BinaryWriter* value);
    // public System.Void .ctor(System.IO.Stream output)
    // Offset: 0x1447570
    static BinaryWriter* New_ctor(System::IO::Stream* output);
    // public System.Void .ctor(System.IO.Stream output, System.Text.Encoding encoding)
    // Offset: 0x1447798
    static BinaryWriter* New_ctor(System::IO::Stream* output, System::Text::Encoding* encoding);
    // public System.Void .ctor(System.IO.Stream output, System.Text.Encoding encoding, System.Boolean leaveOpen)
    // Offset: 0x14475F0
    static BinaryWriter* New_ctor(System::IO::Stream* output, System::Text::Encoding* encoding, bool leaveOpen);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x14477A0
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0x14477F4
    void Flush();
    // public System.Void Write(System.Boolean value)
    // Offset: 0x1447818
    void Write(bool value);
    // public System.Void Write(System.Byte value)
    // Offset: 0x1447874
    void Write(uint8_t value);
    // public System.Void Write(System.Byte[] buffer)
    // Offset: 0x1447898
    void Write(::Array<uint8_t>* buffer);
    // public System.Void Write(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1447948
    void Write(::Array<uint8_t>* buffer, int index, int count);
    // public System.Void Write(System.Char ch)
    // Offset: 0x144796C
    void Write(::Il2CppChar ch);
    // public System.Void Write(System.Char[] chars)
    // Offset: 0x1447AA0
    void Write(::Array<::Il2CppChar>* chars);
    // public System.Void Write(System.Double value)
    // Offset: 0x1447B78
    void Write(double value);
    // public System.Void Write(System.Int16 value)
    // Offset: 0x1447BC0
    void Write(int16_t value);
    // public System.Void Write(System.UInt16 value)
    // Offset: 0x1447C34
    void Write(uint16_t value);
    // public System.Void Write(System.Int32 value)
    // Offset: 0x1447CA8
    void Write(int value);
    // public System.Void Write(System.UInt32 value)
    // Offset: 0x1447D54
    void Write(uint value);
    // public System.Void Write(System.Int64 value)
    // Offset: 0x1447E00
    void Write(int64_t value);
    // public System.Void Write(System.UInt64 value)
    // Offset: 0x1447F1C
    void Write(uint64_t value);
    // public System.Void Write(System.Single value)
    // Offset: 0x1448038
    void Write(float value);
    // public System.Void Write(System.String value)
    // Offset: 0x1448080
    void Write(::Il2CppString* value);
    // protected System.Void Write7BitEncodedInt(System.Int32 value)
    // Offset: 0x1448324
    void Write7BitEncodedInt(int value);
    // static private System.Void .cctor()
    // Offset: 0x1448388
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1447460
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BinaryWriter* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x14477E4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.IO.BinaryWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::BinaryWriter*, "System.IO", "BinaryWriter");
#pragma pack(pop)
