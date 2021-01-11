// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.OpenSsl.PemUtilities
#include "Org/BouncyCastle/OpenSsl/PemUtilities.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.OpenSsl
namespace Org::BouncyCastle::OpenSsl {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg
  // [] Offset: FFFFFFFF
  struct PemUtilities::PemBaseAlg/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PemBaseAlg
    constexpr PemBaseAlg(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg AES_128
    static constexpr const int AES_128 = 0;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg AES_128
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_AES_128();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg AES_128
    static void _set_AES_128(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg AES_192
    static constexpr const int AES_192 = 1;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg AES_192
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_AES_192();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg AES_192
    static void _set_AES_192(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg AES_256
    static constexpr const int AES_256 = 2;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg AES_256
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_AES_256();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg AES_256
    static void _set_AES_256(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg BF
    static constexpr const int BF = 3;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg BF
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_BF();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg BF
    static void _set_BF(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg DES
    static constexpr const int DES = 4;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg DES
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_DES();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg DES
    static void _set_DES(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg DES_EDE
    static constexpr const int DES_EDE = 5;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg DES_EDE
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_DES_EDE();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg DES_EDE
    static void _set_DES_EDE(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg DES_EDE3
    static constexpr const int DES_EDE3 = 6;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg DES_EDE3
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_DES_EDE3();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg DES_EDE3
    static void _set_DES_EDE3(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg RC2
    static constexpr const int RC2 = 7;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg RC2
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_RC2();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg RC2
    static void _set_RC2(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg RC2_40
    static constexpr const int RC2_40 = 8;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg RC2_40
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_RC2_40();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg RC2_40
    static void _set_RC2_40(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
    // static field const value: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg RC2_64
    static constexpr const int RC2_64 = 9;
    // Get static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg RC2_64
    static Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg _get_RC2_64();
    // Set static field: static public Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg RC2_64
    static void _set_RC2_64(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg value);
  }; // Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg
  static check_size<sizeof(PemUtilities::PemBaseAlg), 0 + sizeof(int)> __Org_BouncyCastle_OpenSsl_PemUtilities_PemBaseAlgSizeCheck;
  static_assert(sizeof(PemUtilities::PemBaseAlg) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::OpenSsl::PemUtilities::PemBaseAlg, "Org.BouncyCastle.OpenSsl", "PemUtilities/PemBaseAlg");
