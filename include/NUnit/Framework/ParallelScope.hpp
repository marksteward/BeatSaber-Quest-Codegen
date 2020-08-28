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
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.ParallelScope
  struct ParallelScope : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ParallelScope
    constexpr ParallelScope(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public NUnit.Framework.ParallelScope None
    static constexpr const int None = 0;
    // Get static field: static public NUnit.Framework.ParallelScope None
    static NUnit::Framework::ParallelScope _get_None();
    // Set static field: static public NUnit.Framework.ParallelScope None
    static void _set_None(NUnit::Framework::ParallelScope value);
    // static field const value: static public NUnit.Framework.ParallelScope Self
    static constexpr const int Self = 1;
    // Get static field: static public NUnit.Framework.ParallelScope Self
    static NUnit::Framework::ParallelScope _get_Self();
    // Set static field: static public NUnit.Framework.ParallelScope Self
    static void _set_Self(NUnit::Framework::ParallelScope value);
    // static field const value: static public NUnit.Framework.ParallelScope Children
    static constexpr const int Children = 2;
    // Get static field: static public NUnit.Framework.ParallelScope Children
    static NUnit::Framework::ParallelScope _get_Children();
    // Set static field: static public NUnit.Framework.ParallelScope Children
    static void _set_Children(NUnit::Framework::ParallelScope value);
    // static field const value: static public NUnit.Framework.ParallelScope Fixtures
    static constexpr const int Fixtures = 4;
    // Get static field: static public NUnit.Framework.ParallelScope Fixtures
    static NUnit::Framework::ParallelScope _get_Fixtures();
    // Set static field: static public NUnit.Framework.ParallelScope Fixtures
    static void _set_Fixtures(NUnit::Framework::ParallelScope value);
  }; // NUnit.Framework.ParallelScope
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::ParallelScope, "NUnit.Framework", "ParallelScope");
#pragma pack(pop)
