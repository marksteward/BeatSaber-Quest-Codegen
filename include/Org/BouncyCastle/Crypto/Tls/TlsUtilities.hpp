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
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsUtilities
  class TlsUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TlsUtilities
    TlsUtilities() noexcept {}
    // Get static field: static public readonly System.Byte[] EmptyBytes
    static ::Array<uint8_t>* _get_EmptyBytes();
    // Set static field: static public readonly System.Byte[] EmptyBytes
    static void _set_EmptyBytes(::Array<uint8_t>* value);
    // Get static field: static public readonly System.Int16[] EmptyShorts
    static ::Array<int16_t>* _get_EmptyShorts();
    // Set static field: static public readonly System.Int16[] EmptyShorts
    static void _set_EmptyShorts(::Array<int16_t>* value);
    // Get static field: static public readonly System.Int32[] EmptyInts
    static ::Array<int>* _get_EmptyInts();
    // Set static field: static public readonly System.Int32[] EmptyInts
    static void _set_EmptyInts(::Array<int>* value);
    // Get static field: static public readonly System.Int64[] EmptyLongs
    static ::Array<int64_t>* _get_EmptyLongs();
    // Set static field: static public readonly System.Int64[] EmptyLongs
    static void _set_EmptyLongs(::Array<int64_t>* value);
    // Get static field: static readonly System.Byte[] SSL_CLIENT
    static ::Array<uint8_t>* _get_SSL_CLIENT();
    // Set static field: static readonly System.Byte[] SSL_CLIENT
    static void _set_SSL_CLIENT(::Array<uint8_t>* value);
    // Get static field: static readonly System.Byte[] SSL_SERVER
    static ::Array<uint8_t>* _get_SSL_SERVER();
    // Set static field: static readonly System.Byte[] SSL_SERVER
    static void _set_SSL_SERVER(::Array<uint8_t>* value);
    // Get static field: static readonly System.Byte[][] SSL3_CONST
    static ::Array<::Array<uint8_t>*>* _get_SSL3_CONST();
    // Set static field: static readonly System.Byte[][] SSL3_CONST
    static void _set_SSL3_CONST(::Array<::Array<uint8_t>*>* value);
    // static public System.Void WriteUint8(System.Byte i, System.IO.Stream output)
    // Offset: 0x126B988
    static void WriteUint8(uint8_t i, System::IO::Stream* output);
    // static public System.Void WriteUint16(System.Int32 i, System.IO.Stream output)
    // Offset: 0x126B9B4
    static void WriteUint16(int i, System::IO::Stream* output);
    // static public System.Void WriteOpaque8(System.Byte[] buf, System.IO.Stream output)
    // Offset: 0x126B294
    static void WriteOpaque8(::Array<uint8_t>* buf, System::IO::Stream* output);
    // static public System.Void WriteOpaque16(System.Byte[] buf, System.IO.Stream output)
    // Offset: 0x126A73C
    static void WriteOpaque16(::Array<uint8_t>* buf, System::IO::Stream* output);
    // static public System.Byte ReadUint8(System.IO.Stream input)
    // Offset: 0x126BA08
    static uint8_t ReadUint8(System::IO::Stream* input);
    // static public System.Int32 ReadUint16(System.IO.Stream input)
    // Offset: 0x126BA98
    static int ReadUint16(System::IO::Stream* input);
    // static public System.Void ReadFully(System.Byte[] buf, System.IO.Stream input)
    // Offset: 0x126BB44
    static void ReadFully(::Array<uint8_t>* buf, System::IO::Stream* input);
    // static public System.Byte[] ReadOpaque8(System.IO.Stream input)
    // Offset: 0x126BBEC
    static ::Array<uint8_t>* ReadOpaque8(System::IO::Stream* input);
    // static public System.Byte[] ReadOpaque16(System.IO.Stream input)
    // Offset: 0x126A6AC
    static ::Array<uint8_t>* ReadOpaque16(System::IO::Stream* input);
    // static private System.Byte[][] GenSsl3Const()
    // Offset: 0x126BC7C
    static ::Array<::Array<uint8_t>*>* GenSsl3Const();
    // static private System.Void .cctor()
    // Offset: 0x126BD9C
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Tls.TlsUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsUtilities");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8
// Il2CppName: WriteUint8
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16
// Il2CppName: WriteUint16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque8
// Il2CppName: WriteOpaque8
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque16
// Il2CppName: WriteOpaque16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint8
// Il2CppName: ReadUint8
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint16
// Il2CppName: ReadUint16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadFully
// Il2CppName: ReadFully
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque8
// Il2CppName: ReadOpaque8
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque16
// Il2CppName: ReadOpaque16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::GenSsl3Const
// Il2CppName: GenSsl3Const
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsUtilities::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
