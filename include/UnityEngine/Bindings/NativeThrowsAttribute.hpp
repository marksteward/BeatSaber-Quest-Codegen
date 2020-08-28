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
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Autogenerated type: UnityEngine.Bindings.NativeThrowsAttribute
  class NativeThrowsAttribute : public System::Attribute {
    public:
    // private System.Boolean <ThrowsException>k__BackingField
    // Offset: 0x10
    bool ThrowsException;
    // Creating conversion operator: operator bool
    constexpr operator bool() const {
      return ThrowsException;
    }
    // public System.Void set_ThrowsException(System.Boolean value)
    // Offset: 0x19750D0
    void set_ThrowsException(bool value);
    // public System.Void .ctor()
    // Offset: 0x19750DC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static NativeThrowsAttribute* New_ctor();
  }; // UnityEngine.Bindings.NativeThrowsAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeThrowsAttribute*, "UnityEngine.Bindings", "NativeThrowsAttribute");
#pragma pack(pop)
