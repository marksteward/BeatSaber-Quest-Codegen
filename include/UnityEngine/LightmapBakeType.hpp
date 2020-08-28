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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.LightmapBakeType
  struct LightmapBakeType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: LightmapBakeType
    constexpr LightmapBakeType(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.LightmapBakeType Realtime
    static constexpr const int Realtime = 4;
    // Get static field: static public UnityEngine.LightmapBakeType Realtime
    static UnityEngine::LightmapBakeType _get_Realtime();
    // Set static field: static public UnityEngine.LightmapBakeType Realtime
    static void _set_Realtime(UnityEngine::LightmapBakeType value);
    // static field const value: static public UnityEngine.LightmapBakeType Baked
    static constexpr const int Baked = 2;
    // Get static field: static public UnityEngine.LightmapBakeType Baked
    static UnityEngine::LightmapBakeType _get_Baked();
    // Set static field: static public UnityEngine.LightmapBakeType Baked
    static void _set_Baked(UnityEngine::LightmapBakeType value);
    // static field const value: static public UnityEngine.LightmapBakeType Mixed
    static constexpr const int Mixed = 1;
    // Get static field: static public UnityEngine.LightmapBakeType Mixed
    static UnityEngine::LightmapBakeType _get_Mixed();
    // Set static field: static public UnityEngine.LightmapBakeType Mixed
    static void _set_Mixed(UnityEngine::LightmapBakeType value);
  }; // UnityEngine.LightmapBakeType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightmapBakeType, "UnityEngine", "LightmapBakeType");
#pragma pack(pop)
