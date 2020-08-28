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
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.PersistentListenerMode
  struct PersistentListenerMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: PersistentListenerMode
    constexpr PersistentListenerMode(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.Events.PersistentListenerMode EventDefined
    static constexpr const int EventDefined = 0;
    // Get static field: static public UnityEngine.Events.PersistentListenerMode EventDefined
    static UnityEngine::Events::PersistentListenerMode _get_EventDefined();
    // Set static field: static public UnityEngine.Events.PersistentListenerMode EventDefined
    static void _set_EventDefined(UnityEngine::Events::PersistentListenerMode value);
    // static field const value: static public UnityEngine.Events.PersistentListenerMode Void
    static constexpr const int Void = 1;
    // Get static field: static public UnityEngine.Events.PersistentListenerMode Void
    static UnityEngine::Events::PersistentListenerMode _get_Void();
    // Set static field: static public UnityEngine.Events.PersistentListenerMode Void
    static void _set_Void(UnityEngine::Events::PersistentListenerMode value);
    // static field const value: static public UnityEngine.Events.PersistentListenerMode Object
    static constexpr const int Object = 2;
    // Get static field: static public UnityEngine.Events.PersistentListenerMode Object
    static UnityEngine::Events::PersistentListenerMode _get_Object();
    // Set static field: static public UnityEngine.Events.PersistentListenerMode Object
    static void _set_Object(UnityEngine::Events::PersistentListenerMode value);
    // static field const value: static public UnityEngine.Events.PersistentListenerMode Int
    static constexpr const int Int = 3;
    // Get static field: static public UnityEngine.Events.PersistentListenerMode Int
    static UnityEngine::Events::PersistentListenerMode _get_Int();
    // Set static field: static public UnityEngine.Events.PersistentListenerMode Int
    static void _set_Int(UnityEngine::Events::PersistentListenerMode value);
    // static field const value: static public UnityEngine.Events.PersistentListenerMode Float
    static constexpr const int Float = 4;
    // Get static field: static public UnityEngine.Events.PersistentListenerMode Float
    static UnityEngine::Events::PersistentListenerMode _get_Float();
    // Set static field: static public UnityEngine.Events.PersistentListenerMode Float
    static void _set_Float(UnityEngine::Events::PersistentListenerMode value);
    // static field const value: static public UnityEngine.Events.PersistentListenerMode String
    static constexpr const int String = 5;
    // Get static field: static public UnityEngine.Events.PersistentListenerMode String
    static UnityEngine::Events::PersistentListenerMode _get_String();
    // Set static field: static public UnityEngine.Events.PersistentListenerMode String
    static void _set_String(UnityEngine::Events::PersistentListenerMode value);
    // static field const value: static public UnityEngine.Events.PersistentListenerMode Bool
    static constexpr const int Bool = 6;
    // Get static field: static public UnityEngine.Events.PersistentListenerMode Bool
    static UnityEngine::Events::PersistentListenerMode _get_Bool();
    // Set static field: static public UnityEngine.Events.PersistentListenerMode Bool
    static void _set_Bool(UnityEngine::Events::PersistentListenerMode value);
  }; // UnityEngine.Events.PersistentListenerMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::PersistentListenerMode, "UnityEngine.Events", "PersistentListenerMode");
#pragma pack(pop)
