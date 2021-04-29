// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.LowLevelComparer
  class LowLevelComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // Creating value type constructor for type: LowLevelComparer
    LowLevelComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // Get static field: static readonly System.Collections.LowLevelComparer Default
    static System::Collections::LowLevelComparer* _get_Default();
    // Set static field: static readonly System.Collections.LowLevelComparer Default
    static void _set_Default(System::Collections::LowLevelComparer* value);
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x17EB8A0
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // static private System.Void .cctor()
    // Offset: 0x17EBA58
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x17EB898
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LowLevelComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::LowLevelComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LowLevelComparer*, creationType>()));
    }
  }; // System.Collections.LowLevelComparer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::LowLevelComparer*, "System.Collections", "LowLevelComparer");
