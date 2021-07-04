// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.DataLengthException
#include "Org/BouncyCastle/Crypto/DataLengthException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.OutputLengthException
  class OutputLengthException : public Org::BouncyCastle::Crypto::DataLengthException {
    public:
    // Creating value type constructor for type: OutputLengthException
    OutputLengthException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1255D80
    // Implemented from: Org.BouncyCastle.Crypto.DataLengthException
    // Base method: System.Void DataLengthException::.ctor()
    // Base method: System.Void CryptoException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OutputLengthException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::OutputLengthException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OutputLengthException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1255D88
    // Implemented from: Org.BouncyCastle.Crypto.DataLengthException
    // Base method: System.Void DataLengthException::.ctor(System.String message)
    // Base method: System.Void CryptoException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OutputLengthException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::OutputLengthException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OutputLengthException*, creationType>(message)));
    }
  }; // Org.BouncyCastle.Crypto.OutputLengthException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::OutputLengthException*, "Org.BouncyCastle.Crypto", "OutputLengthException");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::OutputLengthException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::OutputLengthException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
