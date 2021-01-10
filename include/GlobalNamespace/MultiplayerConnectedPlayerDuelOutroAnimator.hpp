// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerConnectedPlayerOutroAnimator
#include "GlobalNamespace/IMultiplayerConnectedPlayerOutroAnimator.hpp"
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
  // Forward declaring type: LightsAnimator
  class LightsAnimator;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  // Autogenerated type: MultiplayerConnectedPlayerDuelOutroAnimator
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerDuelOutroAnimator : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator*/ {
    public:
    // private ColorSO _offLightsColor
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* offLightsColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private UnityEngine.Vector3 _targetPosition
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 targetPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: targetPosition and: connectedPlayerContainerTransform
    char __padding1[0x4] = {};
    // [SpaceAttribute] Offset: 0xDC891C
    // private UnityEngine.Transform _connectedPlayerContainerTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* connectedPlayerContainerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC8954
    // private LightsAnimator[] _lightsAnimators
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LightsAnimator*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDC898C
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x40
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC899C
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _platformPositionTween
    // Size: 0x8
    // Offset: 0x50
    Tweening::Tween_1<UnityEngine::Vector3>* platformPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x58
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerConnectedPlayerDuelOutroAnimator
    MultiplayerConnectedPlayerDuelOutroAnimator(GlobalNamespace::ColorSO* offLightsColor_ = {}, UnityEngine::Vector3 targetPosition_ = {}, UnityEngine::Transform* connectedPlayerContainerTransform_ = {}, ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* platformPositionTween_ = {}, bool initialized_ = {}) noexcept : offLightsColor{offLightsColor_}, targetPosition{targetPosition_}, connectedPlayerContainerTransform{connectedPlayerContainerTransform_}, lightsAnimators{lightsAnimators_}, tweeningManager{tweeningManager_}, multiplayerPlayersManager{multiplayerPlayersManager_}, platformPositionTween{platformPositionTween_}, initialized{initialized_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator
    operator GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0xFA9574
    void OnDestroy();
    // private System.Void InitIfNeeded()
    // Offset: 0xFA960C
    void InitIfNeeded();
    // private System.Void <InitIfNeeded>b__9_0(UnityEngine.Vector3 val)
    // Offset: 0xFA98A0
    void $InitIfNeeded$b__9_0(UnityEngine::Vector3 val);
    // public System.Void Animate(System.Single duration)
    // Offset: 0xFA9758
    // Implemented from: IMultiplayerConnectedPlayerOutroAnimator
    // Base method: System.Void IMultiplayerConnectedPlayerOutroAnimator::Animate(System.Single duration)
    void Animate(float duration);
    // public System.Void .ctor()
    // Offset: 0xFA9898
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerDuelOutroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerDuelOutroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerDuelOutroAnimator*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerDuelOutroAnimator
  static check_size<sizeof(MultiplayerConnectedPlayerDuelOutroAnimator), 88 + sizeof(bool)> __GlobalNamespace_MultiplayerConnectedPlayerDuelOutroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerDuelOutroAnimator) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerDuelOutroAnimator*, "", "MultiplayerConnectedPlayerDuelOutroAnimator");
#pragma pack(pop)
