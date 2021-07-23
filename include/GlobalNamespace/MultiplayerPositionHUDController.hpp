// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPositionHUDController
  // [TokenAttribute] Offset: FFFFFFFF
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
    // [InjectAttribute] Offset: 0xE060B8
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xE060C8
    // private readonly MultiplayerPlayersManager _playersManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MultiplayerPlayersManager* playersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE060D8
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
    // Get instance field: private TMPro.TextMeshProUGUI _playerCountText
    TMPro::TextMeshProUGUI* _get__playerCountText();
    // Set instance field: private TMPro.TextMeshProUGUI _playerCountText
    void _set__playerCountText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private TMPro.TextMeshProUGUI _positionText
    TMPro::TextMeshProUGUI* _get__positionText();
    // Set instance field: private TMPro.TextMeshProUGUI _positionText
    void _set__positionText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private UnityEngine.CanvasGroup _canvasGroup
    UnityEngine::CanvasGroup* _get__canvasGroup();
    // Set instance field: private UnityEngine.CanvasGroup _canvasGroup
    void _set__canvasGroup(UnityEngine::CanvasGroup* value);
    // Get instance field: private UnityEngine.GameObject _firstPlayerAnimationGo
    UnityEngine::GameObject* _get__firstPlayerAnimationGo();
    // Set instance field: private UnityEngine.GameObject _firstPlayerAnimationGo
    void _set__firstPlayerAnimationGo(UnityEngine::GameObject* value);
    // Get instance field: private readonly MultiplayerScoreProvider _scoreProvider
    GlobalNamespace::MultiplayerScoreProvider* _get__scoreProvider();
    // Set instance field: private readonly MultiplayerScoreProvider _scoreProvider
    void _set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider* value);
    // Get instance field: private readonly MultiplayerPlayersManager _playersManager
    GlobalNamespace::MultiplayerPlayersManager* _get__playersManager();
    // Set instance field: private readonly MultiplayerPlayersManager _playersManager
    void _set__playersManager(GlobalNamespace::MultiplayerPlayersManager* value);
    // Get instance field: private readonly CoreGameHUDController/InitData _initData
    GlobalNamespace::CoreGameHUDController::InitData* _get__initData();
    // Set instance field: private readonly CoreGameHUDController/InitData _initData
    void _set__initData(GlobalNamespace::CoreGameHUDController::InitData* value);
    // Get instance field: private System.Int32 _prevPosition
    int _get__prevPosition();
    // Set instance field: private System.Int32 _prevPosition
    void _set__prevPosition(int value);
    // public System.Void set_alpha(System.Single value)
    // Offset: 0x100440C
    void set_alpha(float value);
    // protected System.Void Start()
    // Offset: 0x1004428
    void Start();
    // protected System.Void Update()
    // Offset: 0x1004574
    void Update();
    // public System.Void .ctor()
    // Offset: 0x10047EC
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
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerPositionHUDController), 80 + sizeof(int)> __GlobalNamespace_MultiplayerPositionHUDControllerSizeCheck;
  static_assert(sizeof(MultiplayerPositionHUDController) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPositionHUDController*, "", "MultiplayerPositionHUDController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionHUDController::set_alpha
// Il2CppName: set_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionHUDController::*)(float)>(&GlobalNamespace::MultiplayerPositionHUDController::set_alpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionHUDController*), "set_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionHUDController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionHUDController::*)()>(&GlobalNamespace::MultiplayerPositionHUDController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionHUDController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionHUDController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionHUDController::*)()>(&GlobalNamespace::MultiplayerPositionHUDController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionHUDController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionHUDController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
