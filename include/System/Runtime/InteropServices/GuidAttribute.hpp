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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.GuidAttribute
  class GuidAttribute : public System::Attribute {
    public:
    // System.String _val
    // Offset: 0x10
    ::Il2CppString* val;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const {
      return val;
    }
    // public System.Void .ctor(System.String guid)
    // Offset: 0x10514F4
    static GuidAttribute* New_ctor(::Il2CppString* guid);
  }; // System.Runtime.InteropServices.GuidAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GuidAttribute*, "System.Runtime.InteropServices", "GuidAttribute");
#pragma pack(pop)
