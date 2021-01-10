// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Encoder
  class Encoder;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x44
  // Autogenerated type: System.IO.BinaryWriter
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D392AC
  class BinaryWriter : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // protected System.IO.Stream OutStream
    // Size: 0x8
    // Offset: 0x10
    System::IO::Stream* OutStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Text.Encoding _encoding
    // Size: 0x8
    // Offset: 0x20
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Text.Encoder _encoder
    // Size: 0x8
    // Offset: 0x28
    System::Text::Encoder* encoder;
    // Field size check
    static_assert(sizeof(System::Text::Encoder*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD3E264
    // private System.Boolean _leaveOpen
    // Size: 0x1
    // Offset: 0x30
    bool leaveOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leaveOpen and: largeByteBuffer
    char __padding4[0x7] = {};
    // private System.Byte[] _largeByteBuffer
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* largeByteBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _maxChars
    // Size: 0x4
    // Offset: 0x40
    int maxChars;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BinaryWriter
    BinaryWriter(System::IO::Stream* OutStream_ = {}, ::Array<uint8_t>* buffer_ = {}, System::Text::Encoding* encoding_ = {}, System::Text::Encoder* encoder_ = {}, bool leaveOpen_ = {}, ::Array<uint8_t>* largeByteBuffer_ = {}, int maxChars_ = {}) noexcept : OutStream{OutStream_}, buffer{buffer_}, encoding{encoding_}, encoder{encoder_}, leaveOpen{leaveOpen_}, largeByteBuffer{largeByteBuffer_}, maxChars{maxChars_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static public readonly System.IO.BinaryWriter Null
    static System::IO::BinaryWriter* _get_Null();
    // Set static field: static public readonly System.IO.BinaryWriter Null
    static void _set_Null(System::IO::BinaryWriter* value);
    // public System.Void .ctor(System.IO.Stream output)
    // Offset: 0x143197C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryWriter* New_ctor(System::IO::Stream* output) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::BinaryWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryWriter*, creationType>(output)));
    }
    // public System.Void .ctor(System.IO.Stream output, System.Text.Encoding encoding)
    // Offset: 0x1431BA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryWriter* New_ctor(System::IO::Stream* output, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::BinaryWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryWriter*, creationType>(output, encoding)));
    }
    // public System.Void .ctor(System.IO.Stream output, System.Text.Encoding encoding, System.Boolean leaveOpen)
    // Offset: 0x14319FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryWriter* New_ctor(System::IO::Stream* output, System::Text::Encoding* encoding, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::BinaryWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryWriter*, creationType>(output, encoding, leaveOpen)));
    }
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1431BAC
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0x1431C00
    void Flush();
    // public System.Void Write(System.Boolean value)
    // Offset: 0x1431C24
    void Write(bool value);
    // public System.Void Write(System.Byte value)
    // Offset: 0x1431C80
    void Write(uint8_t value);
    // public System.Void Write(System.Byte[] buffer)
    // Offset: 0x1431CA4
    void Write(::Array<uint8_t>* buffer);
    // public System.Void Write(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1431D54
    void Write(::Array<uint8_t>* buffer, int index, int count);
    // public System.Void Write(System.Char ch)
    // Offset: 0x1431D78
    void Write(::Il2CppChar ch);
    // public System.Void Write(System.Char[] chars)
    // Offset: 0x1431EAC
    void Write(::Array<::Il2CppChar>* chars);
    // public System.Void Write(System.Double value)
    // Offset: 0x1431F84
    void Write(double value);
    // public System.Void Write(System.Int16 value)
    // Offset: 0x1431FCC
    void Write(int16_t value);
    // public System.Void Write(System.UInt16 value)
    // Offset: 0x1432040
    void Write(uint16_t value);
    // public System.Void Write(System.Int32 value)
    // Offset: 0x14320B4
    void Write(int value);
    // public System.Void Write(System.UInt32 value)
    // Offset: 0x1432160
    void Write(uint value);
    // public System.Void Write(System.Int64 value)
    // Offset: 0x143220C
    void Write(int64_t value);
    // public System.Void Write(System.UInt64 value)
    // Offset: 0x1432328
    void Write(uint64_t value);
    // public System.Void Write(System.Single value)
    // Offset: 0x1432444
    void Write(float value);
    // public System.Void Write(System.String value)
    // Offset: 0x143248C
    void Write(::Il2CppString* value);
    // protected System.Void Write7BitEncodedInt(System.Int32 value)
    // Offset: 0x1432730
    void Write7BitEncodedInt(int value);
    // static private System.Void .cctor()
    // Offset: 0x1432794
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x143186C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::BinaryWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryWriter*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x1431BF0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.IO.BinaryWriter
  static check_size<sizeof(BinaryWriter), 64 + sizeof(int)> __System_IO_BinaryWriterSizeCheck;
  static_assert(sizeof(BinaryWriter) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::BinaryWriter*, "System.IO", "BinaryWriter");
#pragma pack(pop)
