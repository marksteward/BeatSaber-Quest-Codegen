// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.ParticleSystem/MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: ParticleSystemEventEffect
  // [] Offset: FFFFFFFF
  class ParticleSystemEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSO _lightColor0
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* lightColor0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _lightColor1
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSO* lightColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor0
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ColorSO* highlightColor0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor1
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSO* highlightColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private System.Boolean _lightOnStart
    // Size: 0x1
    // Offset: 0x38
    bool lightOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lightOnStart and: colorEvent
    char __padding4[0x3] = {};
    // private BeatmapEventType _colorEvent
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::BeatmapEventType colorEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0xDC70AC
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // [InjectAttribute] Offset: 0xDC70E4
    // private readonly BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController*) == 0x8);
    // private System.Boolean _lightIsOn
    // Size: 0x1
    // Offset: 0x50
    bool lightIsOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lightIsOn and: offColor
    char __padding8[0x3] = {};
    // private UnityEngine.Color _offColor
    // Size: 0x10
    // Offset: 0x54
    UnityEngine::Color offColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _highlightValue
    // Size: 0x4
    // Offset: 0x64
    float highlightValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _afterHighlightColor
    // Size: 0x10
    // Offset: 0x68
    UnityEngine::Color afterHighlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highlightColor
    // Size: 0x10
    // Offset: 0x78
    UnityEngine::Color highlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single kFadeSpeed
    // Size: 0x4
    // Offset: 0x88
    float kFadeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _particleSpeedMultiplier
    // Size: 0x4
    // Offset: 0x8C
    float particleSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.ParticleSystem/MainModule _mainModule
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::ParticleSystem::MainModule mainModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::MainModule) == 0x8);
    // private UnityEngine.ParticleSystem/Particle[] _particles
    // Size: 0x8
    // Offset: 0x98
    ::Array<UnityEngine::ParticleSystem::Particle>* particles;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem::Particle>*) == 0x8);
    // private UnityEngine.Color _particleColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color particleColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _particleSpeed
    // Size: 0x4
    // Offset: 0xB0
    float particleSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ParticleSystemEventEffect
    ParticleSystemEventEffect(GlobalNamespace::ColorSO* lightColor0_ = {}, GlobalNamespace::ColorSO* lightColor1_ = {}, GlobalNamespace::ColorSO* highlightColor0_ = {}, GlobalNamespace::ColorSO* highlightColor1_ = {}, bool lightOnStart_ = {}, GlobalNamespace::BeatmapEventType colorEvent_ = {}, UnityEngine::ParticleSystem* particleSystem_ = {}, GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, bool lightIsOn_ = {}, UnityEngine::Color offColor_ = {}, float highlightValue_ = {}, UnityEngine::Color afterHighlightColor_ = {}, UnityEngine::Color highlightColor_ = {}, float kFadeSpeed_ = {}, float particleSpeedMultiplier_ = {}, UnityEngine::ParticleSystem::MainModule mainModule_ = {}, ::Array<UnityEngine::ParticleSystem::Particle>* particles_ = {}, UnityEngine::Color particleColor_ = {}, float particleSpeed_ = {}) noexcept : lightColor0{lightColor0_}, lightColor1{lightColor1_}, highlightColor0{highlightColor0_}, highlightColor1{highlightColor1_}, lightOnStart{lightOnStart_}, colorEvent{colorEvent_}, particleSystem{particleSystem_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, lightIsOn{lightIsOn_}, offColor{offColor_}, highlightValue{highlightValue_}, afterHighlightColor{afterHighlightColor_}, highlightColor{highlightColor_}, kFadeSpeed{kFadeSpeed_}, particleSpeedMultiplier{particleSpeedMultiplier_}, mainModule{mainModule_}, particles{particles_}, particleColor{particleColor_}, particleSpeed{particleSpeed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF03660
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0xF03914
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xF039F0
    void Update();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0xF03B14
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void RefreshParticles()
    // Offset: 0xF037D8
    void RefreshParticles();
    // public System.Void .ctor()
    // Offset: 0xF03CFC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleSystemEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ParticleSystemEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleSystemEventEffect*, creationType>()));
    }
  }; // ParticleSystemEventEffect
  static check_size<sizeof(ParticleSystemEventEffect), 176 + sizeof(float)> __GlobalNamespace_ParticleSystemEventEffectSizeCheck;
  static_assert(sizeof(ParticleSystemEventEffect) == 0xB4);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemEventEffect*, "", "ParticleSystemEventEffect");
