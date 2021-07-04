// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Math.Prime.Generator.PrimeGeneratorBase
#include "Mono/Math/Prime/Generator/PrimeGeneratorBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime.Generator
namespace Mono::Math::Prime::Generator {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
  class SequentialSearchPrimeGeneratorBase : public Mono::Math::Prime::Generator::PrimeGeneratorBase {
    public:
    // Creating value type constructor for type: SequentialSearchPrimeGeneratorBase
    SequentialSearchPrimeGeneratorBase() noexcept {}
    // protected Mono.Math.BigInteger GenerateSearchBase(System.Int32 bits, System.Object context)
    // Offset: 0x1D6EFF0
    Mono::Math::BigInteger* GenerateSearchBase(int bits, ::Il2CppObject* context);
    // public Mono.Math.BigInteger GenerateNewPrime(System.Int32 bits, System.Object context)
    // Offset: 0x1D6F084
    Mono::Math::BigInteger* GenerateNewPrime(int bits, ::Il2CppObject* context);
    // protected System.Boolean IsPrimeAcceptable(Mono.Math.BigInteger bi, System.Object context)
    // Offset: 0x1D6F798
    bool IsPrimeAcceptable(Mono::Math::BigInteger* bi, ::Il2CppObject* context);
    // public override Mono.Math.BigInteger GenerateNewPrime(System.Int32 bits)
    // Offset: 0x1D6F074
    // Implemented from: Mono.Math.Prime.Generator.PrimeGeneratorBase
    // Base method: Mono.Math.BigInteger PrimeGeneratorBase::GenerateNewPrime(System.Int32 bits)
    Mono::Math::BigInteger* GenerateNewPrime(int bits);
    // public System.Void .ctor()
    // Offset: 0x1D6DEEC
    // Implemented from: Mono.Math.Prime.Generator.PrimeGeneratorBase
    // Base method: System.Void PrimeGeneratorBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SequentialSearchPrimeGeneratorBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SequentialSearchPrimeGeneratorBase*, creationType>()));
    }
  }; // Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*, "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateSearchBase
// Il2CppName: GenerateSearchBase
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime
// Il2CppName: GenerateNewPrime
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable
// Il2CppName: IsPrimeAcceptable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime
// Il2CppName: GenerateNewPrime
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
