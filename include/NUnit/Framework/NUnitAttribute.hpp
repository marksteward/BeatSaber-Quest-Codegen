// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.NUnitAttribute
  // [] Offset: FFFFFFFF
  class NUnitAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: NUnitAttribute
    NUnitAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1964C5C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NUnitAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::NUnitAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NUnitAttribute*, creationType>()));
    }
  }; // NUnit.Framework.NUnitAttribute
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::NUnitAttribute*, "NUnit.Framework", "NUnitAttribute");
