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
  // Autogenerated type: JetBrains.Annotations.TerminatesProgramAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D82A14
  // [ObsoleteAttribute] Offset: D82A14
  class TerminatesProgramAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: TerminatesProgramAttribute
    TerminatesProgramAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x19EEAB4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerminatesProgramAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::TerminatesProgramAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerminatesProgramAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.TerminatesProgramAttribute
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::TerminatesProgramAttribute*, "JetBrains.Annotations", "TerminatesProgramAttribute");
