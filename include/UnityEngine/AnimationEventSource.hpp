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
  // Autogenerated type: UnityEngine.AnimationEventSource
  struct AnimationEventSource : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: AnimationEventSource
    constexpr AnimationEventSource(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.AnimationEventSource NoSource
    static constexpr const int NoSource = 0;
    // Get static field: static public UnityEngine.AnimationEventSource NoSource
    static UnityEngine::AnimationEventSource _get_NoSource();
    // Set static field: static public UnityEngine.AnimationEventSource NoSource
    static void _set_NoSource(UnityEngine::AnimationEventSource value);
    // static field const value: static public UnityEngine.AnimationEventSource Legacy
    static constexpr const int Legacy = 1;
    // Get static field: static public UnityEngine.AnimationEventSource Legacy
    static UnityEngine::AnimationEventSource _get_Legacy();
    // Set static field: static public UnityEngine.AnimationEventSource Legacy
    static void _set_Legacy(UnityEngine::AnimationEventSource value);
    // static field const value: static public UnityEngine.AnimationEventSource Animator
    static constexpr const int Animator = 2;
    // Get static field: static public UnityEngine.AnimationEventSource Animator
    static UnityEngine::AnimationEventSource _get_Animator();
    // Set static field: static public UnityEngine.AnimationEventSource Animator
    static void _set_Animator(UnityEngine::AnimationEventSource value);
  }; // UnityEngine.AnimationEventSource
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationEventSource, "UnityEngine", "AnimationEventSource");
#pragma pack(pop)
