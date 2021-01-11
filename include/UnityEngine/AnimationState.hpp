// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TrackedReference
#include "UnityEngine/TrackedReference.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimationState
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: D624AC
  class AnimationState : public UnityEngine::TrackedReference {
    public:
    // Creating value type constructor for type: AnimationState
    AnimationState() noexcept {}
    // public System.Void set_normalizedTime(System.Single value)
    // Offset: 0x19C7724
    void set_normalizedTime(float value);
    // public System.Void set_speed(System.Single value)
    // Offset: 0x19C7774
    void set_speed(float value);
    // public System.Void set_layer(System.Int32 value)
    // Offset: 0x19C77C4
    void set_layer(int value);
    // public System.Void .ctor()
    // Offset: 0x19C7814
    // Implemented from: UnityEngine.TrackedReference
    // Base method: System.Void TrackedReference::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimationState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationState*, creationType>()));
    }
  }; // UnityEngine.AnimationState
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationState*, "UnityEngine", "AnimationState");
