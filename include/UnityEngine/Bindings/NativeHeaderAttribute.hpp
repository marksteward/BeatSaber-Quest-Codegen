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
  // Autogenerated type: UnityEngine.Bindings.NativeHeaderAttribute
  class NativeHeaderAttribute : public System::Attribute {
    public:
    // private System.String <Header>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Header;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const {
      return Header;
    }
    // public System.Void set_Header(System.String value)
    // Offset: 0x1974D50
    void set_Header(::Il2CppString* value);
    // public System.Void .ctor(System.String header)
    // Offset: 0x1974D58
    static NativeHeaderAttribute* New_ctor(::Il2CppString* header);
  }; // UnityEngine.Bindings.NativeHeaderAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeHeaderAttribute*, "UnityEngine.Bindings", "NativeHeaderAttribute");
#pragma pack(pop)
