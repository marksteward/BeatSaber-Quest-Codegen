// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteControllerNoteDidDissolveEvent
  class INoteControllerNoteDidDissolveEvent {
    public:
    // Creating value type constructor for type: INoteControllerNoteDidDissolveEvent
    INoteControllerNoteDidDissolveEvent() noexcept {}
    // public System.Void HandleNoteControllerNoteDidDissolve(NoteController noteController)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerNoteDidDissolve(GlobalNamespace::NoteController* noteController);
  }; // INoteControllerNoteDidDissolveEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteDidDissolveEvent*, "", "INoteControllerNoteDidDissolveEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INoteControllerNoteDidDissolveEvent::HandleNoteControllerNoteDidDissolve
// Il2CppName: HandleNoteControllerNoteDidDissolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerNoteDidDissolveEvent::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::INoteControllerNoteDidDissolveEvent::HandleNoteControllerNoteDidDissolve)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteControllerNoteDidDissolveEvent*), "HandleNoteControllerNoteDidDissolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
