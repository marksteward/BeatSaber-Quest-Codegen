// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractF2mPoint
#include "Org/BouncyCastle/Math/EC/AbstractF2mPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECPoint because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT131R2Point
  class SecT131R2Point : public Org::BouncyCastle::Math::EC::AbstractF2mPoint {
    public:
    // Creating value type constructor for type: SecT131R2Point
    SecT131R2Point() noexcept {}
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1E8E2FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT131R2Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT131R2Point*, creationType>(curve, x, y)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x1E8E45C
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mPoint
    // Base method: System.Void AbstractF2mPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT131R2Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT131R2Point*, creationType>(curve, x, y, withCompression)));
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x1E8E5C0
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mPoint
    // Base method: System.Void AbstractF2mPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT131R2Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT131R2Point*, creationType>(curve, x, y, zs, withCompression)));
    }
    // public override Org.BouncyCastle.Math.EC.ECFieldElement get_YCoord()
    // Offset: 0x1E8EBC8
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECPoint::get_YCoord()
    Org::BouncyCastle::Math::EC::ECFieldElement* get_YCoord();
    // protected internal override System.Boolean get_CompressionYTilde()
    // Offset: 0x1E8ECB0
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Boolean ECPoint::get_CompressionYTilde()
    bool get_CompressionYTilde();
    // public override Org.BouncyCastle.Math.EC.ECPoint Add(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x1E8ED30
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Add(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* Add(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint Twice()
    // Offset: 0x1E8F410
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Twice()
    Org::BouncyCastle::Math::EC::ECPoint* Twice();
    // public override Org.BouncyCastle.Math.EC.ECPoint TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x1E8F780
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint Negate()
    // Offset: 0x1E8FC90
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Negate()
    Org::BouncyCastle::Math::EC::ECPoint* Negate();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT131R2Point
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT131R2Point");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::get_YCoord
// Il2CppName: get_YCoord
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::get_CompressionYTilde
// Il2CppName: get_CompressionYTilde
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::Twice
// Il2CppName: Twice
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::TwicePlus
// Il2CppName: TwicePlus
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point::Negate
// Il2CppName: Negate
// Cannot perform method pointer template specialization from operators!
