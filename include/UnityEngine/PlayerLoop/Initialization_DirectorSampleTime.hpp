// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.PlayerLoop.Initialization
#include "UnityEngine/PlayerLoop/Initialization.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.Initialization/DirectorSampleTime
  // [RequiredByNativeCodeAttribute] Offset: CBBB20
  struct Initialization::DirectorSampleTime/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: DirectorSampleTime
    constexpr DirectorSampleTime() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.Initialization/DirectorSampleTime
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::Initialization::DirectorSampleTime, "UnityEngine.PlayerLoop", "Initialization/DirectorSampleTime");
