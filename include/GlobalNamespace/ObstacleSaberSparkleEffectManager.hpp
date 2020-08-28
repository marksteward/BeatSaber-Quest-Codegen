// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleSaberSparkleEffect
  class ObstacleSaberSparkleEffect;
  // Forward declaring type: PlayerController
  class PlayerController;
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
  // Skipping declaration: Bounds because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ObstacleSaberSparkleEffectManager
  class ObstacleSaberSparkleEffectManager : public UnityEngine::MonoBehaviour {
    public:
    // private ObstacleSaberSparkleEffect _obstacleSaberSparkleEffectPefab
    // Offset: 0x18
    GlobalNamespace::ObstacleSaberSparkleEffect* obstacleSaberSparkleEffectPefab;
    // private ObstacleController/Pool _obstaclePool
    // Offset: 0x20
    GlobalNamespace::ObstacleController::Pool* obstaclePool;
    // private PlayerController _playerController
    // Offset: 0x28
    GlobalNamespace::PlayerController* playerController;
    // private HapticFeedbackController _hapticFeedbackController
    // Offset: 0x30
    GlobalNamespace::HapticFeedbackController* hapticFeedbackController;
    // private ColorManager _colorManager
    // Offset: 0x38
    GlobalNamespace::ColorManager* colorManager;
    // private System.Action`1<SaberType> sparkleEffectDidStartEvent
    // Offset: 0x40
    System::Action_1<GlobalNamespace::SaberType>* sparkleEffectDidStartEvent;
    // private System.Action`1<SaberType> sparkleEffectDidEndEvent
    // Offset: 0x48
    System::Action_1<GlobalNamespace::SaberType>* sparkleEffectDidEndEvent;
    // private Saber[] _sabers
    // Offset: 0x50
    ::Array<GlobalNamespace::Saber*>* sabers;
    // private ObstacleSaberSparkleEffect[] _effects
    // Offset: 0x58
    ::Array<GlobalNamespace::ObstacleSaberSparkleEffect*>* effects;
    // private UnityEngine.Transform[] _effectsTransforms
    // Offset: 0x60
    ::Array<UnityEngine::Transform*>* effectsTransforms;
    // private System.Boolean[] _isSystemActive
    // Offset: 0x68
    ::Array<bool>* isSystemActive;
    // private System.Boolean[] _wasSystemActive
    // Offset: 0x70
    ::Array<bool>* wasSystemActive;
    // private UnityEngine.Vector3[] _burnMarkPositions
    // Offset: 0x78
    ::Array<UnityEngine::Vector3>* burnMarkPositions;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void add_sparkleEffectDidStartEvent(System.Action`1<SaberType> value)
    // Offset: 0xC345FC
    void add_sparkleEffectDidStartEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // public System.Void remove_sparkleEffectDidStartEvent(System.Action`1<SaberType> value)
    // Offset: 0xC34860
    void remove_sparkleEffectDidStartEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // public System.Void add_sparkleEffectDidEndEvent(System.Action`1<SaberType> value)
    // Offset: 0xC346A0
    void add_sparkleEffectDidEndEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // public System.Void remove_sparkleEffectDidEndEvent(System.Action`1<SaberType> value)
    // Offset: 0xC34904
    void remove_sparkleEffectDidEndEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // protected System.Void Start()
    // Offset: 0xC34FAC
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0xC352B8
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0xC35374
    void Update();
    // private UnityEngine.Quaternion GetEffectRotation(UnityEngine.Vector3 pos, UnityEngine.Transform transform, UnityEngine.Bounds bounds)
    // Offset: 0xC35C40
    UnityEngine::Quaternion GetEffectRotation(UnityEngine::Vector3 pos, UnityEngine::Transform* transform, UnityEngine::Bounds bounds);
    // public UnityEngine.Vector3 BurnMarkPosForSaberType(SaberType saberType)
    // Offset: 0xC34AEC
    UnityEngine::Vector3 BurnMarkPosForSaberType(GlobalNamespace::SaberType saberType);
    // private System.Boolean GetBurnMarkPos(UnityEngine.Bounds bounds, UnityEngine.Transform transform, UnityEngine.Vector3 bladeBottomPos, UnityEngine.Vector3 bladeTopPos, UnityEngine.Vector3 burnMarkPos)
    // Offset: 0xC359E8
    bool GetBurnMarkPos(UnityEngine::Bounds bounds, UnityEngine::Transform* transform, UnityEngine::Vector3 bladeBottomPos, UnityEngine::Vector3 bladeTopPos, UnityEngine::Vector3& burnMarkPos);
    // public System.Void .ctor()
    // Offset: 0xC35DF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ObstacleSaberSparkleEffectManager* New_ctor();
  }; // ObstacleSaberSparkleEffectManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleSaberSparkleEffectManager*, "", "ObstacleSaberSparkleEffectManager");
#pragma pack(pop)
