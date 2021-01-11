// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ComponentMode
  // [] Offset: FFFFFFFF
  struct ComponentMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ComponentMode
    constexpr ComponentMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.ComponentMode Vertex
    static constexpr const int Vertex = 0;
    // Get static field: static public UnityEngine.ProBuilder.ComponentMode Vertex
    static UnityEngine::ProBuilder::ComponentMode _get_Vertex();
    // Set static field: static public UnityEngine.ProBuilder.ComponentMode Vertex
    static void _set_Vertex(UnityEngine::ProBuilder::ComponentMode value);
    // static field const value: static public UnityEngine.ProBuilder.ComponentMode Edge
    static constexpr const int Edge = 1;
    // Get static field: static public UnityEngine.ProBuilder.ComponentMode Edge
    static UnityEngine::ProBuilder::ComponentMode _get_Edge();
    // Set static field: static public UnityEngine.ProBuilder.ComponentMode Edge
    static void _set_Edge(UnityEngine::ProBuilder::ComponentMode value);
    // static field const value: static public UnityEngine.ProBuilder.ComponentMode Face
    static constexpr const int Face = 2;
    // Get static field: static public UnityEngine.ProBuilder.ComponentMode Face
    static UnityEngine::ProBuilder::ComponentMode _get_Face();
    // Set static field: static public UnityEngine.ProBuilder.ComponentMode Face
    static void _set_Face(UnityEngine::ProBuilder::ComponentMode value);
  }; // UnityEngine.ProBuilder.ComponentMode
  static check_size<sizeof(ComponentMode), 0 + sizeof(int)> __UnityEngine_ProBuilder_ComponentModeSizeCheck;
  static_assert(sizeof(ComponentMode) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ComponentMode, "UnityEngine.ProBuilder", "ComponentMode");
