// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystemStopBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystemStopBehavior/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ParticleSystemStopBehavior
    constexpr ParticleSystemStopBehavior(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ParticleSystemStopBehavior StopEmittingAndClear
    static constexpr const int StopEmittingAndClear = 0;
    // Get static field: static public UnityEngine.ParticleSystemStopBehavior StopEmittingAndClear
    static UnityEngine::ParticleSystemStopBehavior _get_StopEmittingAndClear();
    // Set static field: static public UnityEngine.ParticleSystemStopBehavior StopEmittingAndClear
    static void _set_StopEmittingAndClear(UnityEngine::ParticleSystemStopBehavior value);
    // static field const value: static public UnityEngine.ParticleSystemStopBehavior StopEmitting
    static constexpr const int StopEmitting = 1;
    // Get static field: static public UnityEngine.ParticleSystemStopBehavior StopEmitting
    static UnityEngine::ParticleSystemStopBehavior _get_StopEmitting();
    // Set static field: static public UnityEngine.ParticleSystemStopBehavior StopEmitting
    static void _set_StopEmitting(UnityEngine::ParticleSystemStopBehavior value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // UnityEngine.ParticleSystemStopBehavior
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemStopBehavior), 0 + sizeof(int)> __UnityEngine_ParticleSystemStopBehaviorSizeCheck;
  static_assert(sizeof(ParticleSystemStopBehavior) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemStopBehavior, "UnityEngine", "ParticleSystemStopBehavior");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
