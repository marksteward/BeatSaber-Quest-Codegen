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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.PureAttribute
  // [AttributeUsageAttribute] Offset: DCAB08
  class PureAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: PureAttribute
    PureAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23DB6DC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PureAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::PureAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PureAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.PureAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PureAttribute*, "JetBrains.Annotations", "PureAttribute");
// Writing MetadataGetter for method: JetBrains::Annotations::PureAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
