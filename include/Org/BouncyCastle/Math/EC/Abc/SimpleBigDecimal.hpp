// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Size: 0x1C
  // Autogenerated type: Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal
  // [] Offset: FFFFFFFF
  class SimpleBigDecimal : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger bigInt
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* bigInt;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly System.Int32 scale
    // Size: 0x4
    // Offset: 0x18
    int scale;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SimpleBigDecimal
    SimpleBigDecimal(Org::BouncyCastle::Math::BigInteger* bigInt_ = {}, int scale_ = {}) noexcept : bigInt{bigInt_}, scale{scale_} {}
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger bigInt, System.Int32 scale)
    // Offset: 0x1769588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleBigDecimal* New_ctor(Org::BouncyCastle::Math::BigInteger* bigInt, int scale) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleBigDecimal*, creationType>(bigInt, scale)));
    }
    // private System.Void CheckScale(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal b)
    // Offset: 0x1769638
    void CheckScale(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal AdjustScale(System.Int32 newScale)
    // Offset: 0x17696D8
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* AdjustScale(int newScale);
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Add(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal b)
    // Offset: 0x17697B4
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Negate()
    // Offset: 0x1769858
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Negate();
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Subtract(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal b)
    // Offset: 0x17698E4
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Subtract(Org.BouncyCastle.Math.BigInteger b)
    // Offset: 0x1769918
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(Org::BouncyCastle::Math::BigInteger* b);
    // public System.Int32 CompareTo(Org.BouncyCastle.Math.BigInteger val)
    // Offset: 0x17699C4
    int CompareTo(Org::BouncyCastle::Math::BigInteger* val);
    // public Org.BouncyCastle.Math.BigInteger Floor()
    // Offset: 0x1769A0C
    Org::BouncyCastle::Math::BigInteger* Floor();
    // public Org.BouncyCastle.Math.BigInteger Round()
    // Offset: 0x1769A30
    Org::BouncyCastle::Math::BigInteger* Round();
    // public System.Int32 get_Scale()
    // Offset: 0x1769AE8
    int get_Scale();
    // public override System.String ToString()
    // Offset: 0x1769AF0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1769DF8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1769ECC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal
  static check_size<sizeof(SimpleBigDecimal), 24 + sizeof(int)> __Org_BouncyCastle_Math_EC_Abc_SimpleBigDecimalSizeCheck;
  static_assert(sizeof(SimpleBigDecimal) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, "Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal");
#pragma pack(pop)
