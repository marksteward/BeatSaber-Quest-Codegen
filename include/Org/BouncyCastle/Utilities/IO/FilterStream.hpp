// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.IO
namespace Org::BouncyCastle::Utilities::IO {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.FilterStream
  // [] Offset: FFFFFFFF
  class FilterStream : public System::IO::Stream {
    public:
    // protected readonly System.IO.Stream s
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* s;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // Creating value type constructor for type: FilterStream
    FilterStream(System::IO::Stream* s_ = {}) noexcept : s{s_} {}
    // public System.Void .ctor(System.IO.Stream s)
    // Offset: 0x18BF14C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FilterStream* New_ctor(System::IO::Stream* s) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::IO::FilterStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FilterStream*, creationType>(s)));
    }
    // public override System.Boolean get_CanRead()
    // Offset: 0x18BF1D0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x18BF1F0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x18BF210
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x18BF230
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x18BF250
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x18BF270
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Close()
    // Offset: 0x18BF290
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x18BF338
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x18BF35C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x18BF380
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x18BF3A4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Int32 ReadByte()
    // Offset: 0x18BF3C8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x18BF3EC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x18BF410
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
  }; // Org.BouncyCastle.Utilities.IO.FilterStream
  static check_size<sizeof(FilterStream), 40 + sizeof(System::IO::Stream*)> __Org_BouncyCastle_Utilities_IO_FilterStreamSizeCheck;
  static_assert(sizeof(FilterStream) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::FilterStream*, "Org.BouncyCastle.Utilities.IO", "FilterStream");
