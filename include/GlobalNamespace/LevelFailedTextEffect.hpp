// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LevelFailedTextEffect
  class LevelFailedTextEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // Creating value type constructor for type: LevelFailedTextEffect
    LevelFailedTextEffect(UnityEngine::Animator* animator_ = {}) noexcept : animator{animator_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void ShowEffect()
    // Offset: 0x1121AE0
    void ShowEffect();
    // public System.Void .ctor()
    // Offset: 0x1121B28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelFailedTextEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelFailedTextEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelFailedTextEffect*, creationType>()));
    }
  }; // LevelFailedTextEffect
  #pragma pack(pop)
  static check_size<sizeof(LevelFailedTextEffect), 24 + sizeof(UnityEngine::Animator*)> __GlobalNamespace_LevelFailedTextEffectSizeCheck;
  static_assert(sizeof(LevelFailedTextEffect) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelFailedTextEffect*, "", "LevelFailedTextEffect");
