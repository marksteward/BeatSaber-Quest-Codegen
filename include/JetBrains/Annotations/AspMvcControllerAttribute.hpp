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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.AspMvcControllerAttribute
  class AspMvcControllerAttribute : public System::Attribute {
    public:
    // private System.String <AnonymousProperty>k__BackingField
    // Offset: 0x10
    ::Il2CppString* AnonymousProperty;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const {
      return AnonymousProperty;
    }
    // public System.Void .ctor(System.String anonymousProperty)
    // Offset: 0x1960F10
    static AspMvcControllerAttribute* New_ctor(::Il2CppString* anonymousProperty);
    // public System.String get_AnonymousProperty()
    // Offset: 0x1960F44
    ::Il2CppString* get_AnonymousProperty();
    // private System.Void set_AnonymousProperty(System.String value)
    // Offset: 0x1960F4C
    void set_AnonymousProperty(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1960F08
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static AspMvcControllerAttribute* New_ctor();
  }; // JetBrains.Annotations.AspMvcControllerAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcControllerAttribute*, "JetBrains.Annotations", "AspMvcControllerAttribute");
#pragma pack(pop)
