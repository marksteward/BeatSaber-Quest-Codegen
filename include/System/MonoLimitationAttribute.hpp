// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MonoTODOAttribute
#include "System/MonoTODOAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.MonoLimitationAttribute
  // [AttributeUsageAttribute] Offset: CA3CE4
  class MonoLimitationAttribute : public System::MonoTODOAttribute {
    public:
    // Creating value type constructor for type: MonoLimitationAttribute
    MonoLimitationAttribute() noexcept {}
    // public System.Void .ctor(System.String comment)
    // Offset: 0x16A058C
    // Implemented from: System.MonoTODOAttribute
    // Base method: System.Void MonoTODOAttribute::.ctor(System.String comment)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoLimitationAttribute* New_ctor(::Il2CppString* comment) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MonoLimitationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoLimitationAttribute*, creationType>(comment)));
    }
  }; // System.MonoLimitationAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::MonoLimitationAttribute*, "System", "MonoLimitationAttribute");
