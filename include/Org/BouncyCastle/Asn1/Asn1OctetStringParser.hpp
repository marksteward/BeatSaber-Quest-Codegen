// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.IAsn1Convertible
#include "Org/BouncyCastle/Asn1/IAsn1Convertible.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1OctetStringParser
  // [TokenAttribute] Offset: FFFFFFFF
  class Asn1OctetStringParser : public ::Il2CppObject/*, public Org::BouncyCastle::Asn1::IAsn1Convertible*/ {
    public:
    // Creating value type constructor for type: Asn1OctetStringParser
    Asn1OctetStringParser() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Convertible
    operator Org::BouncyCastle::Asn1::IAsn1Convertible() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Convertible*>(this);
    }
    // public System.IO.Stream GetOctetStream()
    // Offset: 0xFFFFFFFF
    System::IO::Stream* GetOctetStream();
  }; // Org.BouncyCastle.Asn1.Asn1OctetStringParser
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1OctetStringParser*, "Org.BouncyCastle.Asn1", "Asn1OctetStringParser");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1OctetStringParser::GetOctetStream
// Il2CppName: GetOctetStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (Org::BouncyCastle::Asn1::Asn1OctetStringParser::*)()>(&Org::BouncyCastle::Asn1::Asn1OctetStringParser::GetOctetStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1OctetStringParser*), "GetOctetStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
