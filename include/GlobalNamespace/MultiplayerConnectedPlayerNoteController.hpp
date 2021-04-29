// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x81
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerNoteController
  class MultiplayerConnectedPlayerNoteController : public GlobalNamespace::NoteController {
    public:
    // private UnityEngine.GameObject _visualsWrapperGo
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::GameObject* visualsWrapperGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Boolean _hidden
    // Size: 0x1
    // Offset: 0x80
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerConnectedPlayerNoteController
    MultiplayerConnectedPlayerNoteController(UnityEngine::GameObject* visualsWrapperGo_ = {}, bool hidden_ = {}) noexcept : visualsWrapperGo{visualsWrapperGo_}, hidden{hidden_} {}
    // public override System.Void set_hide(System.Boolean value)
    // Offset: 0xFC7C94
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_hide(System.Boolean value)
    void set_hide(bool value);
    // public override System.Boolean get_hide()
    // Offset: 0xFC7CD8
    // Implemented from: NoteController
    // Base method: System.Boolean NoteController::get_hide()
    bool get_hide();
    // public override System.Void set_pause(System.Boolean value)
    // Offset: 0xFC7CE0
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_pause(System.Boolean value)
    void set_pause(bool value);
    // public System.Void .ctor()
    // Offset: 0xFC4C98
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerNoteController*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerNoteController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerNoteController), 128 + sizeof(bool)> __GlobalNamespace_MultiplayerConnectedPlayerNoteControllerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerNoteController) == 0x81);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteController*, "", "MultiplayerConnectedPlayerNoteController");
