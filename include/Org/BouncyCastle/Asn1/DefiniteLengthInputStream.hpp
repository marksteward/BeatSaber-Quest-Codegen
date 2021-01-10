// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.LimitedInputStream
#include "Org/BouncyCastle/Asn1/LimitedInputStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x44
  // Autogenerated type: Org.BouncyCastle.Asn1.DefiniteLengthInputStream
  // [] Offset: FFFFFFFF
  class DefiniteLengthInputStream : public Org::BouncyCastle::Asn1::LimitedInputStream {
    public:
    // private readonly System.Int32 _originalLength
    // Size: 0x4
    // Offset: 0x3C
    int originalLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _remaining
    // Size: 0x4
    // Offset: 0x40
    int remaining;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DefiniteLengthInputStream
    DefiniteLengthInputStream(int originalLength_ = {}, int remaining_ = {}) noexcept : originalLength{originalLength_}, remaining{remaining_} {}
    // Get static field: static private readonly System.Byte[] EmptyBytes
    static ::Array<uint8_t>* _get_EmptyBytes();
    // Set static field: static private readonly System.Byte[] EmptyBytes
    static void _set_EmptyBytes(::Array<uint8_t>* value);
    // System.Void .ctor(System.IO.Stream inStream, System.Int32 length, System.Int32 limit)
    // Offset: 0x137146C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefiniteLengthInputStream* New_ctor(System::IO::Stream* inStream, int length, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DefiniteLengthInputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefiniteLengthInputStream*, creationType>(inStream, length, limit)));
    }
    // System.Int32 get_Remaining()
    // Offset: 0x137F428
    int get_Remaining();
    // System.Void ReadAllIntoByteArray(System.Byte[] buf)
    // Offset: 0x1373608
    void ReadAllIntoByteArray(::Array<uint8_t>* buf);
    // System.Byte[] ToArray()
    // Offset: 0x1371558
    ::Array<uint8_t>* ToArray();
    // public override System.Int32 ReadByte()
    // Offset: 0x137F430
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Int32 Read(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x137F614
    // Implemented from: Org.BouncyCastle.Utilities.IO.BaseInputStream
    // Base method: System.Int32 BaseInputStream::Read(System.Byte[] buf, System.Int32 off, System.Int32 len)
    int Read(::Array<uint8_t>* buf, int off, int len);
    // static private System.Void .cctor()
    // Offset: 0x137F848
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.cctor()
    static void _cctor();
  }; // Org.BouncyCastle.Asn1.DefiniteLengthInputStream
  static check_size<sizeof(DefiniteLengthInputStream), 64 + sizeof(int)> __Org_BouncyCastle_Asn1_DefiniteLengthInputStreamSizeCheck;
  static_assert(sizeof(DefiniteLengthInputStream) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, "Org.BouncyCastle.Asn1", "DefiniteLengthInputStream");
#pragma pack(pop)
