// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECLookupTable
#include "Org/BouncyCastle/Math/EC/ECLookupTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x10
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractECLookupTable
  // [] Offset: FFFFFFFF
  class AbstractECLookupTable : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::ECLookupTable*/ {
    public:
    // Creating value type constructor for type: AbstractECLookupTable
    AbstractECLookupTable() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::ECLookupTable
    operator Org::BouncyCastle::Math::EC::ECLookupTable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::ECLookupTable*>(this);
    }
    // public Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: Org.BouncyCastle.Math.EC.ECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECLookupTable::Lookup(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public System.Int32 get_Size()
    // Offset: 0xFFFFFFFF
    // Implemented from: Org.BouncyCastle.Math.EC.ECLookupTable
    // Base method: System.Int32 ECLookupTable::get_Size()
    int get_Size();
    // public Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x176C00C
    // Implemented from: Org.BouncyCastle.Math.EC.ECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECLookupTable::LookupVar(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
    // protected System.Void .ctor()
    // Offset: 0x176C018
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractECLookupTable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::AbstractECLookupTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractECLookupTable*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.AbstractECLookupTable
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractECLookupTable*, "Org.BouncyCastle.Math.EC", "AbstractECLookupTable");
#pragma pack(pop)
