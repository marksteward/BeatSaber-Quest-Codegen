// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  // Autogenerated type: System.Reflection.Assembly/ResolveEventHolder
  // [] Offset: FFFFFFFF
  class Assembly::ResolveEventHolder : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ResolveEventHolder
    ResolveEventHolder() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x171EBF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Assembly::ResolveEventHolder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::Assembly::ResolveEventHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Assembly::ResolveEventHolder*, creationType>()));
    }
  }; // System.Reflection.Assembly/ResolveEventHolder
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Assembly::ResolveEventHolder*, "System.Reflection", "Assembly/ResolveEventHolder");
#pragma pack(pop)
