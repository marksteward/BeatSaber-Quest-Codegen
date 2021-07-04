// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT233R1Curve
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT233R1Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractECLookupTable
#include "Org/BouncyCastle/Math/EC/AbstractECLookupTable.hpp"
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
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT233R1Curve/SecT233R1LookupTable
  class SecT233R1Curve::SecT233R1LookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    // private readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecT233R1Curve m_outer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve* m_outer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve*) == 0x8);
    // private readonly System.UInt64[] m_table
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint64_t>* m_table;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // private readonly System.Int32 m_size
    // Size: 0x4
    // Offset: 0x20
    int m_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SecT233R1LookupTable
    SecT233R1LookupTable(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve* m_outer_ = {}, ::Array<uint64_t>* m_table_ = {}, int m_size_ = {}) noexcept : m_outer{m_outer_}, m_table{m_table_}, m_size{m_size_} {}
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Custom.Sec.SecT233R1Curve outer, System.UInt64[] table, System.Int32 size)
    // Offset: 0x1EA17C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT233R1Curve::SecT233R1LookupTable* New_ctor(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve* outer, ::Array<uint64_t>* table, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve::SecT233R1LookupTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT233R1Curve::SecT233R1LookupTable*, creationType>(outer, table, size)));
    }
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x1EA1A50
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Array<uint64_t>* x, ::Array<uint64_t>* y);
    // public override System.Int32 get_Size()
    // Offset: 0x1EA190C
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x1EA1914
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x1EA1B34
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT233R1Curve/SecT233R1LookupTable
  #pragma pack(pop)
  static check_size<sizeof(SecT233R1Curve::SecT233R1LookupTable), 32 + sizeof(int)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecT233R1Curve_SecT233R1LookupTableSizeCheck;
  static_assert(sizeof(SecT233R1Curve::SecT233R1LookupTable) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve::SecT233R1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT233R1Curve/SecT233R1LookupTable");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve::SecT233R1LookupTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve::SecT233R1LookupTable::CreatePoint
// Il2CppName: CreatePoint
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve::SecT233R1LookupTable::get_Size
// Il2CppName: get_Size
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve::SecT233R1LookupTable::Lookup
// Il2CppName: Lookup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT233R1Curve::SecT233R1LookupTable::LookupVar
// Il2CppName: LookupVar
// Cannot perform method pointer template specialization from operators!
