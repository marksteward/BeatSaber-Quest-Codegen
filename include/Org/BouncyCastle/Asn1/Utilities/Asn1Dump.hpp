// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: DerApplicationSpecific
  class DerApplicationSpecific;
  // Forward declaring type: Asn1Encodable
  class Asn1Encodable;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Utilities
namespace Org::BouncyCastle::Asn1::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Utilities.Asn1Dump
  class Asn1Dump : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Asn1Dump
    Asn1Dump() noexcept {}
    // Get static field: static private readonly System.String NewLine
    static ::Il2CppString* _get_NewLine();
    // Set static field: static private readonly System.String NewLine
    static void _set_NewLine(::Il2CppString* value);
    // static private System.Void AsString(System.String indent, System.Boolean verbose, Org.BouncyCastle.Asn1.Asn1Object obj, System.Text.StringBuilder buf)
    // Offset: 0x17507B0
    static void AsString(::Il2CppString* indent, bool verbose, Org::BouncyCastle::Asn1::Asn1Object* obj, System::Text::StringBuilder* buf);
    // static private System.String outputApplicationSpecific(System.String type, System.String indent, System.Boolean verbose, Org.BouncyCastle.Asn1.DerApplicationSpecific app)
    // Offset: 0x1752F64
    static ::Il2CppString* outputApplicationSpecific(::Il2CppString* type, ::Il2CppString* indent, bool verbose, Org::BouncyCastle::Asn1::DerApplicationSpecific* app);
    // static public System.String DumpAsString(Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x17537AC
    static ::Il2CppString* DumpAsString(Org::BouncyCastle::Asn1::Asn1Encodable* obj);
    // static public System.String DumpAsString(Org.BouncyCastle.Asn1.Asn1Encodable obj, System.Boolean verbose)
    // Offset: 0x1753814
    static ::Il2CppString* DumpAsString(Org::BouncyCastle::Asn1::Asn1Encodable* obj, bool verbose);
    // static private System.String dumpBinaryDataAsString(System.String indent, System.Byte[] bytes)
    // Offset: 0x1752CF4
    static ::Il2CppString* dumpBinaryDataAsString(::Il2CppString* indent, ::Array<uint8_t>* bytes);
    // static private System.String calculateAscString(System.Byte[] bytes, System.Int32 off, System.Int32 len)
    // Offset: 0x17538E4
    static ::Il2CppString* calculateAscString(::Array<uint8_t>* bytes, int off, int len);
    // static private System.Void .cctor()
    // Offset: 0x17539B0
    static void _cctor();
  }; // Org.BouncyCastle.Asn1.Utilities.Asn1Dump
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Utilities::Asn1Dump*, "Org.BouncyCastle.Asn1.Utilities", "Asn1Dump");
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::AsString
// Il2CppName: AsString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::outputApplicationSpecific
// Il2CppName: outputApplicationSpecific
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString
// Il2CppName: DumpAsString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString
// Il2CppName: DumpAsString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::dumpBinaryDataAsString
// Il2CppName: dumpBinaryDataAsString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::calculateAscString
// Il2CppName: calculateAscString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
