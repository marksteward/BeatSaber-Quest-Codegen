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
  // Autogenerated type: JetBrains.Annotations.AspMvcSuppressViewErrorAttribute
  // [AttributeUsageAttribute] Offset: DCAD6C
  class AspMvcSuppressViewErrorAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: AspMvcSuppressViewErrorAttribute
    AspMvcSuppressViewErrorAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23DB130
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcSuppressViewErrorAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcSuppressViewErrorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcSuppressViewErrorAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.AspMvcSuppressViewErrorAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcSuppressViewErrorAttribute*, "JetBrains.Annotations", "AspMvcSuppressViewErrorAttribute");
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcSuppressViewErrorAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
