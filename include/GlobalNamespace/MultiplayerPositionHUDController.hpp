// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerScoreProvider
  class MultiplayerScoreProvider;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  // Autogenerated type: MultiplayerPositionHUDController
  // [] Offset: FFFFFFFF
  class MultiplayerPositionHUDController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _playerCountText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* playerCountText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _positionText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* positionText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.CanvasGroup _canvasGroup
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private UnityEngine.GameObject _firstPlayerAnimationGo
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* firstPlayerAnimationGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xDC7B60
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xDC7B70
    // private readonly MultiplayerPlayersManager _playersManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MultiplayerPlayersManager* playersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC7B80
    // private readonly CoreGameHUDController/InitData _initData
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::CoreGameHUDController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CoreGameHUDController::InitData*) == 0x8);
    // private System.Int32 _prevPosition
    // Size: 0x4
    // Offset: 0x50
    int prevPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerPositionHUDController
    MultiplayerPositionHUDController(TMPro::TextMeshProUGUI* playerCountText_ = {}, TMPro::TextMeshProUGUI* positionText_ = {}, UnityEngine::CanvasGroup* canvasGroup_ = {}, UnityEngine::GameObject* firstPlayerAnimationGo_ = {}, GlobalNamespace::MultiplayerScoreProvider* scoreProvider_ = {}, GlobalNamespace::MultiplayerPlayersManager* playersManager_ = {}, GlobalNamespace::CoreGameHUDController::InitData* initData_ = {}, int prevPosition_ = {}) noexcept : playerCountText{playerCountText_}, positionText{positionText_}, canvasGroup{canvasGroup_}, firstPlayerAnimationGo{firstPlayerAnimationGo_}, scoreProvider{scoreProvider_}, playersManager{playersManager_}, initData{initData_}, prevPosition{prevPosition_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_alpha(System.Single value)
    // Offset: 0xF6DBD8
    void set_alpha(float value);
    // protected System.Void Start()
    // Offset: 0xF7D56C
    void Start();
    // protected System.Void Update()
    // Offset: 0xF7D6B8
    void Update();
    // public System.Void .ctor()
    // Offset: 0xF7D86C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerPositionHUDController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerPositionHUDController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerPositionHUDController*, creationType>()));
    }
  }; // MultiplayerPositionHUDController
  static check_size<sizeof(MultiplayerPositionHUDController), 80 + sizeof(int)> __GlobalNamespace_MultiplayerPositionHUDControllerSizeCheck;
  static_assert(sizeof(MultiplayerPositionHUDController) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPositionHUDController*, "", "MultiplayerPositionHUDController");
#pragma pack(pop)
