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
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectAllowDuringValidationAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DB86B4
  class ZenjectAllowDuringValidationAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ZenjectAllowDuringValidationAttribute
    ZenjectAllowDuringValidationAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23B3924
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectAllowDuringValidationAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectAllowDuringValidationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectAllowDuringValidationAttribute*, creationType>()));
    }
  }; // Zenject.ZenjectAllowDuringValidationAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectAllowDuringValidationAttribute*, "Zenject", "ZenjectAllowDuringValidationAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectAllowDuringValidationAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
