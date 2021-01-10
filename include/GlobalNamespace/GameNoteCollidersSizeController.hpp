// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: GameNoteController
  class GameNoteController;
  // Forward declaring type: BoxCuttableBySaber
  class BoxCuttableBySaber;
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  // Autogenerated type: GameNoteCollidersSizeController
  // [] Offset: FFFFFFFF
  class GameNoteCollidersSizeController : public UnityEngine::MonoBehaviour {
    public:
    // private GameNoteController _gameNoteController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameNoteController* gameNoteController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameNoteController*) == 0x8);
    // private BoxCuttableBySaber _bigCuttableBySaber
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BoxCuttableBySaber* bigCuttableBySaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoxCuttableBySaber*) == 0x8);
    // private NoteMovement _noteMovement
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NoteMovement* noteMovement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteMovement*) == 0x8);
    // private UnityEngine.Vector3 _prevPos
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 prevPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean _prevPosIsValid
    // Size: 0x1
    // Offset: 0x3C
    bool prevPosIsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: prevPosIsValid and: initColliderSize
    char __padding4[0x3] = {};
    // private UnityEngine.Vector3 _initColliderSize
    // Size: 0xC
    // Offset: 0x40
    UnityEngine::Vector3 initColliderSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: GameNoteCollidersSizeController
    GameNoteCollidersSizeController(GlobalNamespace::GameNoteController* gameNoteController_ = {}, GlobalNamespace::BoxCuttableBySaber* bigCuttableBySaber_ = {}, GlobalNamespace::NoteMovement* noteMovement_ = {}, UnityEngine::Vector3 prevPos_ = {}, bool prevPosIsValid_ = {}, UnityEngine::Vector3 initColliderSize_ = {}) noexcept : gameNoteController{gameNoteController_}, bigCuttableBySaber{bigCuttableBySaber_}, noteMovement{noteMovement_}, prevPos{prevPos_}, prevPosIsValid{prevPosIsValid_}, initColliderSize{initColliderSize_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1A19598
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1A19688
    void OnDestroy();
    // private System.Void HandleGameNoteControllerDidInit(NoteController noteController)
    // Offset: 0x1A197AC
    void HandleGameNoteControllerDidInit(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleGameNoteControllerNoteDidStartJump(NoteController noteController)
    // Offset: 0x1A197BC
    void HandleGameNoteControllerNoteDidStartJump(GlobalNamespace::NoteController* noteController);
    // protected System.Void Update()
    // Offset: 0x1A197CC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1A198C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameNoteCollidersSizeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameNoteCollidersSizeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameNoteCollidersSizeController*, creationType>()));
    }
  }; // GameNoteCollidersSizeController
  static check_size<sizeof(GameNoteCollidersSizeController), 64 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_GameNoteCollidersSizeControllerSizeCheck;
  static_assert(sizeof(GameNoteCollidersSizeController) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameNoteCollidersSizeController*, "", "GameNoteCollidersSizeController");
#pragma pack(pop)
