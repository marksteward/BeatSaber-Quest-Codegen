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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VFXAnimationEvents
  // [] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: D98930
  class VFXAnimationEvents : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent
    class VFXAnimationEvent;
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // private VFXAnimationEvents/VFXAnimationEvent[] _animationEvents
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>* animationEvents;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99118
    // private System.Action animationDidPauseEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* animationDidPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99128
    // private System.Action spawnCharacterEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* spawnCharacterEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99138
    // private System.Action despawnCharacterEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* despawnCharacterEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: VFXAnimationEvents
    VFXAnimationEvents(UnityEngine::Animation* animation_ = {}, ::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>* animationEvents_ = {}, System::Action* animationDidPauseEvent_ = {}, System::Action* spawnCharacterEvent_ = {}, System::Action* despawnCharacterEvent_ = {}) noexcept : animation{animation_}, animationEvents{animationEvents_}, animationDidPauseEvent{animationDidPauseEvent_}, spawnCharacterEvent{spawnCharacterEvent_}, despawnCharacterEvent{despawnCharacterEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_animationDidPauseEvent(System.Action value)
    // Offset: 0x19CF6A4
    void add_animationDidPauseEvent(System::Action* value);
    // public System.Void remove_animationDidPauseEvent(System.Action value)
    // Offset: 0x19CF748
    void remove_animationDidPauseEvent(System::Action* value);
    // public System.Void add_spawnCharacterEvent(System.Action value)
    // Offset: 0x19CF7EC
    void add_spawnCharacterEvent(System::Action* value);
    // public System.Void remove_spawnCharacterEvent(System.Action value)
    // Offset: 0x19CF890
    void remove_spawnCharacterEvent(System::Action* value);
    // public System.Void add_despawnCharacterEvent(System.Action value)
    // Offset: 0x19CF934
    void add_despawnCharacterEvent(System::Action* value);
    // public System.Void remove_despawnCharacterEvent(System.Action value)
    // Offset: 0x19CF9D8
    void remove_despawnCharacterEvent(System::Action* value);
    // private System.Void PlayEvent(System.String eventName)
    // Offset: 0x19CFA7C
    void PlayEvent(::Il2CppString* eventName);
    // private System.Void PauseAnimation()
    // Offset: 0x19CFB54
    void PauseAnimation();
    // private System.Void SpawnCharacterEvent()
    // Offset: 0x19CFDB0
    void SpawnCharacterEvent();
    // private System.Void DeSpawnCharacterEvent()
    // Offset: 0x19CFDC4
    void DeSpawnCharacterEvent();
    // public System.Void ResumeAnimation()
    // Offset: 0x19CFDD8
    void ResumeAnimation();
    // public System.Void .ctor()
    // Offset: 0x19D0018
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VFXAnimationEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VFXAnimationEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VFXAnimationEvents*, creationType>()));
    }
  }; // VFXAnimationEvents
  static check_size<sizeof(VFXAnimationEvents), 56 + sizeof(System::Action*)> __GlobalNamespace_VFXAnimationEventsSizeCheck;
  static_assert(sizeof(VFXAnimationEvents) == 0x40);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VFXAnimationEvents*, "", "VFXAnimationEvents");
