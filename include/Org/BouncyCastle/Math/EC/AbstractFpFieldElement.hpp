// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractFpFieldElement
  // [TokenAttribute] Offset: FFFFFFFF
  class AbstractFpFieldElement : public Org::BouncyCastle::Math::EC::ECFieldElement {
    public:
    // Creating value type constructor for type: AbstractFpFieldElement
    AbstractFpFieldElement() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x1D3075C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Void ECFieldElement::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractFpFieldElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::AbstractFpFieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractFpFieldElement*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.AbstractFpFieldElement
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractFpFieldElement*, "Org.BouncyCastle.Math.EC", "AbstractFpFieldElement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpFieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
