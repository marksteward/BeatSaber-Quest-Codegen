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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.LightEvent
  struct LightEvent : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: LightEvent
    constexpr LightEvent(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.LightEvent BeforeShadowMap
    static constexpr const int BeforeShadowMap = 0;
    // Get static field: static public UnityEngine.Rendering.LightEvent BeforeShadowMap
    static UnityEngine::Rendering::LightEvent _get_BeforeShadowMap();
    // Set static field: static public UnityEngine.Rendering.LightEvent BeforeShadowMap
    static void _set_BeforeShadowMap(UnityEngine::Rendering::LightEvent value);
    // static field const value: static public UnityEngine.Rendering.LightEvent AfterShadowMap
    static constexpr const int AfterShadowMap = 1;
    // Get static field: static public UnityEngine.Rendering.LightEvent AfterShadowMap
    static UnityEngine::Rendering::LightEvent _get_AfterShadowMap();
    // Set static field: static public UnityEngine.Rendering.LightEvent AfterShadowMap
    static void _set_AfterShadowMap(UnityEngine::Rendering::LightEvent value);
    // static field const value: static public UnityEngine.Rendering.LightEvent BeforeScreenspaceMask
    static constexpr const int BeforeScreenspaceMask = 2;
    // Get static field: static public UnityEngine.Rendering.LightEvent BeforeScreenspaceMask
    static UnityEngine::Rendering::LightEvent _get_BeforeScreenspaceMask();
    // Set static field: static public UnityEngine.Rendering.LightEvent BeforeScreenspaceMask
    static void _set_BeforeScreenspaceMask(UnityEngine::Rendering::LightEvent value);
    // static field const value: static public UnityEngine.Rendering.LightEvent AfterScreenspaceMask
    static constexpr const int AfterScreenspaceMask = 3;
    // Get static field: static public UnityEngine.Rendering.LightEvent AfterScreenspaceMask
    static UnityEngine::Rendering::LightEvent _get_AfterScreenspaceMask();
    // Set static field: static public UnityEngine.Rendering.LightEvent AfterScreenspaceMask
    static void _set_AfterScreenspaceMask(UnityEngine::Rendering::LightEvent value);
    // static field const value: static public UnityEngine.Rendering.LightEvent BeforeShadowMapPass
    static constexpr const int BeforeShadowMapPass = 4;
    // Get static field: static public UnityEngine.Rendering.LightEvent BeforeShadowMapPass
    static UnityEngine::Rendering::LightEvent _get_BeforeShadowMapPass();
    // Set static field: static public UnityEngine.Rendering.LightEvent BeforeShadowMapPass
    static void _set_BeforeShadowMapPass(UnityEngine::Rendering::LightEvent value);
    // static field const value: static public UnityEngine.Rendering.LightEvent AfterShadowMapPass
    static constexpr const int AfterShadowMapPass = 5;
    // Get static field: static public UnityEngine.Rendering.LightEvent AfterShadowMapPass
    static UnityEngine::Rendering::LightEvent _get_AfterShadowMapPass();
    // Set static field: static public UnityEngine.Rendering.LightEvent AfterShadowMapPass
    static void _set_AfterShadowMapPass(UnityEngine::Rendering::LightEvent value);
  }; // UnityEngine.Rendering.LightEvent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::LightEvent, "UnityEngine.Rendering", "LightEvent");
#pragma pack(pop)
