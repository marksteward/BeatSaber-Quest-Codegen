// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.IsoTrailers
  class IsoTrailers : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.IDictionary trailerMap
    static System::Collections::IDictionary* _get_trailerMap();
    // Set static field: static private readonly System.Collections.IDictionary trailerMap
    static void _set_trailerMap(System::Collections::IDictionary* value);
    // static private System.Collections.IDictionary CreateTrailerMap()
    // Offset: 0xF556D0
    static System::Collections::IDictionary* CreateTrailerMap();
    // static public System.Int32 GetTrailer(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0xF54B70
    static int GetTrailer(Org::BouncyCastle::Crypto::IDigest* digest);
    // static public System.Boolean NoTrailerAvailable(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0xF54A14
    static bool NoTrailerAvailable(Org::BouncyCastle::Crypto::IDigest* digest);
    // static private System.Void .cctor()
    // Offset: 0xF55D14
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Signers.IsoTrailers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::IsoTrailers*, "Org.BouncyCastle.Crypto.Signers", "IsoTrailers");
#pragma pack(pop)