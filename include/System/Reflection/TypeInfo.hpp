// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  // Autogenerated type: System.Reflection.TypeInfo
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D38B90
  class TypeInfo : public System::Type {
    public:
    // Creating value type constructor for type: TypeInfo
    TypeInfo() noexcept {}
    // System.Void .ctor()
    // Offset: 0x15D21B0
    // Implemented from: System.Type
    // Base method: System.Void Type::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::TypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInfo*, creationType>()));
    }
  }; // System.Reflection.TypeInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TypeInfo*, "System.Reflection", "TypeInfo");
#pragma pack(pop)
