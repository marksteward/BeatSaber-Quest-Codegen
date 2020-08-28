// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Autogenerated type: UnityEngine.Experimental.Rendering.DefaultFormat
  struct DefaultFormat : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: DefaultFormat
    constexpr DefaultFormat(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.Experimental.Rendering.DefaultFormat LDR
    static constexpr const int LDR = 0;
    // Get static field: static public UnityEngine.Experimental.Rendering.DefaultFormat LDR
    static UnityEngine::Experimental::Rendering::DefaultFormat _get_LDR();
    // Set static field: static public UnityEngine.Experimental.Rendering.DefaultFormat LDR
    static void _set_LDR(UnityEngine::Experimental::Rendering::DefaultFormat value);
    // static field const value: static public UnityEngine.Experimental.Rendering.DefaultFormat HDR
    static constexpr const int HDR = 1;
    // Get static field: static public UnityEngine.Experimental.Rendering.DefaultFormat HDR
    static UnityEngine::Experimental::Rendering::DefaultFormat _get_HDR();
    // Set static field: static public UnityEngine.Experimental.Rendering.DefaultFormat HDR
    static void _set_HDR(UnityEngine::Experimental::Rendering::DefaultFormat value);
  }; // UnityEngine.Experimental.Rendering.DefaultFormat
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::DefaultFormat, "UnityEngine.Experimental.Rendering", "DefaultFormat");
#pragma pack(pop)
