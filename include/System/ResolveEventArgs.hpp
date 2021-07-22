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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ResolveEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D68A84
  class ResolveEventArgs : public System::EventArgs {
    public:
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Reflection.Assembly m_Requesting
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::Assembly* m_Requesting;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // Creating value type constructor for type: ResolveEventArgs
    ResolveEventArgs(::Il2CppString* m_Name_ = {}, System::Reflection::Assembly* m_Requesting_ = {}) noexcept : m_Name{m_Name_}, m_Requesting{m_Requesting_} {}
    // public System.Void .ctor(System.String name)
    // Offset: 0x13E7810
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResolveEventArgs* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ResolveEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResolveEventArgs*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.Reflection.Assembly requestingAssembly)
    // Offset: 0x13E788C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResolveEventArgs* New_ctor(::Il2CppString* name, System::Reflection::Assembly* requestingAssembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ResolveEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResolveEventArgs*, creationType>(name, requestingAssembly)));
    }
  }; // System.ResolveEventArgs
  #pragma pack(pop)
  static check_size<sizeof(ResolveEventArgs), 24 + sizeof(System::Reflection::Assembly*)> __System_ResolveEventArgsSizeCheck;
  static_assert(sizeof(ResolveEventArgs) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::ResolveEventArgs*, "System", "ResolveEventArgs");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ResolveEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ResolveEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
