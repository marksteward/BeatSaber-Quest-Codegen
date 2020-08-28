// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Autogenerated type: UnityEngine.Scripting.UsedByNativeCodeAttribute
  class UsedByNativeCodeAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const {
      return Name;
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x197551C
    static UsedByNativeCodeAttribute* New_ctor(::Il2CppString* name);
    // public System.Void set_Name(System.String value)
    // Offset: 0x1975550
    void set_Name(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1975514
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static UsedByNativeCodeAttribute* New_ctor();
  }; // UnityEngine.Scripting.UsedByNativeCodeAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::UsedByNativeCodeAttribute*, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
#pragma pack(pop)
