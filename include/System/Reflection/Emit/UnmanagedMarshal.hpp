// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.UnmanagedMarshal
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3DC30
  // [ObsoleteAttribute] Offset: D3DC30
  class UnmanagedMarshal : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UnmanagedMarshal
    UnmanagedMarshal() noexcept {}
    // System.Void .ctor()
    // Offset: 0x15C67DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmanagedMarshal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::Emit::UnmanagedMarshal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmanagedMarshal*, creationType>()));
    }
  }; // System.Reflection.Emit.UnmanagedMarshal
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::UnmanagedMarshal*, "System.Reflection.Emit", "UnmanagedMarshal");
