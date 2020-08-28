// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Tracker
  struct OVRPlugin::Tracker : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: Tracker
    constexpr Tracker(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public OVRPlugin/Tracker None
    static constexpr const int None = -1;
    // Get static field: static public OVRPlugin/Tracker None
    static GlobalNamespace::OVRPlugin::Tracker _get_None();
    // Set static field: static public OVRPlugin/Tracker None
    static void _set_None(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker Zero
    static constexpr const int Zero = 0;
    // Get static field: static public OVRPlugin/Tracker Zero
    static GlobalNamespace::OVRPlugin::Tracker _get_Zero();
    // Set static field: static public OVRPlugin/Tracker Zero
    static void _set_Zero(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker One
    static constexpr const int One = 1;
    // Get static field: static public OVRPlugin/Tracker One
    static GlobalNamespace::OVRPlugin::Tracker _get_One();
    // Set static field: static public OVRPlugin/Tracker One
    static void _set_One(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker Two
    static constexpr const int Two = 2;
    // Get static field: static public OVRPlugin/Tracker Two
    static GlobalNamespace::OVRPlugin::Tracker _get_Two();
    // Set static field: static public OVRPlugin/Tracker Two
    static void _set_Two(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker Three
    static constexpr const int Three = 3;
    // Get static field: static public OVRPlugin/Tracker Three
    static GlobalNamespace::OVRPlugin::Tracker _get_Three();
    // Set static field: static public OVRPlugin/Tracker Three
    static void _set_Three(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker Count
    static constexpr const int Count = 4;
    // Get static field: static public OVRPlugin/Tracker Count
    static GlobalNamespace::OVRPlugin::Tracker _get_Count();
    // Set static field: static public OVRPlugin/Tracker Count
    static void _set_Count(GlobalNamespace::OVRPlugin::Tracker value);
  }; // OVRPlugin/Tracker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Tracker, "", "OVRPlugin/Tracker");
#pragma pack(pop)
