// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECPointMap
#include "Org/BouncyCastle/Math/EC/ECPointMap.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ScaleXPointMap
  class ScaleXPointMap : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::ECPointMap*/ {
    public:
    // protected readonly Org.BouncyCastle.Math.EC.ECFieldElement scale
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECFieldElement* scale;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECFieldElement*) == 0x8);
    // Creating value type constructor for type: ScaleXPointMap
    ScaleXPointMap(Org::BouncyCastle::Math::EC::ECFieldElement* scale_ = {}) noexcept : scale{scale_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::ECPointMap
    operator Org::BouncyCastle::Math::EC::ECPointMap() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::ECPointMap*>(this);
    }
    // Creating conversion operator: operator Org::BouncyCastle::Math::EC::ECFieldElement*
    constexpr operator Org::BouncyCastle::Math::EC::ECFieldElement*() const noexcept {
      return scale;
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECFieldElement scale)
    // Offset: 0x1D32E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleXPointMap* New_ctor(Org::BouncyCastle::Math::EC::ECFieldElement* scale) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::ScaleXPointMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleXPointMap*, creationType>(scale)));
    }
    // public Org.BouncyCastle.Math.EC.ECPoint Map(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x1D32E38
    Org::BouncyCastle::Math::EC::ECPoint* Map(Org::BouncyCastle::Math::EC::ECPoint* p);
  }; // Org.BouncyCastle.Math.EC.ScaleXPointMap
  #pragma pack(pop)
  static check_size<sizeof(ScaleXPointMap), 16 + sizeof(Org::BouncyCastle::Math::EC::ECFieldElement*)> __Org_BouncyCastle_Math_EC_ScaleXPointMapSizeCheck;
  static_assert(sizeof(ScaleXPointMap) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ScaleXPointMap*, "Org.BouncyCastle.Math.EC", "ScaleXPointMap");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ScaleXPointMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ScaleXPointMap::Map
// Il2CppName: Map
// Cannot perform method pointer template specialization from operators!
