// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.LimitedInputStream
#include "Org/BouncyCastle/Asn1/LimitedInputStream.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.IndefiniteLengthInputStream
  class IndefiniteLengthInputStream : public Org::BouncyCastle::Asn1::LimitedInputStream {
    public:
    // private System.Int32 _lookAhead
    // Offset: 0x3C
    int lookAhead;
    // private System.Boolean _eofOn00
    // Offset: 0x40
    bool eofOn00;
    // System.Void SetEofOn00(System.Boolean eofOn00)
    // Offset: 0x1403394
    void SetEofOn00(bool eofOn00);
    // private System.Boolean CheckForEof()
    // Offset: 0x14032D4
    bool CheckForEof();
    // private System.Int32 RequireByte()
    // Offset: 0x1403244
    int RequireByte();
    // System.Void .ctor(System.IO.Stream inStream, System.Int32 limit)
    // Offset: 0x140319C
    // Implemented from: Org.BouncyCastle.Asn1.LimitedInputStream
    // Base method: System.Void LimitedInputStream::.ctor(System.IO.Stream inStream, System.Int32 limit)
    static IndefiniteLengthInputStream* New_ctor(System::IO::Stream* inStream, int limit);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x14033A8
    // Implemented from: Org.BouncyCastle.Utilities.IO.BaseInputStream
    // Base method: System.Int32 BaseInputStream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Int32 ReadByte()
    // Offset: 0x14034E8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
  }; // Org.BouncyCastle.Asn1.IndefiniteLengthInputStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*, "Org.BouncyCastle.Asn1", "IndefiniteLengthInputStream");
#pragma pack(pop)