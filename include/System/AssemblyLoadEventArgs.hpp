// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.AssemblyLoadEventArgs
  // [ComVisibleAttribute] Offset: CA5000
  class AssemblyLoadEventArgs : public System::EventArgs {
    public:
    // private System.Reflection.Assembly m_loadedAssembly
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::Assembly* m_loadedAssembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // Creating value type constructor for type: AssemblyLoadEventArgs
    AssemblyLoadEventArgs(System::Reflection::Assembly* m_loadedAssembly_ = {}) noexcept : m_loadedAssembly{m_loadedAssembly_} {}
    // Creating conversion operator: operator System::Reflection::Assembly*
    constexpr operator System::Reflection::Assembly*() const noexcept {
      return m_loadedAssembly;
    }
    // public System.Void .ctor(System.Reflection.Assembly loadedAssembly)
    // Offset: 0x163A424
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyLoadEventArgs* New_ctor(System::Reflection::Assembly* loadedAssembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::AssemblyLoadEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyLoadEventArgs*, creationType>(loadedAssembly)));
    }
  }; // System.AssemblyLoadEventArgs
  #pragma pack(pop)
  static check_size<sizeof(AssemblyLoadEventArgs), 16 + sizeof(System::Reflection::Assembly*)> __System_AssemblyLoadEventArgsSizeCheck;
  static_assert(sizeof(AssemblyLoadEventArgs) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::AssemblyLoadEventArgs*, "System", "AssemblyLoadEventArgs");
