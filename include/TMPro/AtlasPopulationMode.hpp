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
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.AtlasPopulationMode
  struct AtlasPopulationMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: AtlasPopulationMode
    constexpr AtlasPopulationMode(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public TMPro.AtlasPopulationMode Static
    static constexpr const int Static = 0;
    // Get static field: static public TMPro.AtlasPopulationMode Static
    static TMPro::AtlasPopulationMode _get_Static();
    // Set static field: static public TMPro.AtlasPopulationMode Static
    static void _set_Static(TMPro::AtlasPopulationMode value);
    // static field const value: static public TMPro.AtlasPopulationMode Dynamic
    static constexpr const int Dynamic = 1;
    // Get static field: static public TMPro.AtlasPopulationMode Dynamic
    static TMPro::AtlasPopulationMode _get_Dynamic();
    // Set static field: static public TMPro.AtlasPopulationMode Dynamic
    static void _set_Dynamic(TMPro::AtlasPopulationMode value);
  }; // TMPro.AtlasPopulationMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::AtlasPopulationMode, "TMPro", "AtlasPopulationMode");
#pragma pack(pop)
