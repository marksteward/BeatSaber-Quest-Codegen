// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteControllerNoteDidPassJumpThreeQuartersEvent
  class INoteControllerNoteDidPassJumpThreeQuartersEvent {
    public:
    // Creating value type constructor for type: INoteControllerNoteDidPassJumpThreeQuartersEvent
    INoteControllerNoteDidPassJumpThreeQuartersEvent() noexcept {}
    // public System.Void HandleNoteControllerNoteDidPassJumpThreeQuarters(NoteControllerBase noteController)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerNoteDidPassJumpThreeQuarters(GlobalNamespace::NoteControllerBase* noteController);
  }; // INoteControllerNoteDidPassJumpThreeQuartersEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*, "", "INoteControllerNoteDidPassJumpThreeQuartersEvent");
// Writing MetadataGetter for method: GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent::HandleNoteControllerNoteDidPassJumpThreeQuarters
// Il2CppName: HandleNoteControllerNoteDidPassJumpThreeQuarters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent::*)(GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent::HandleNoteControllerNoteDidPassJumpThreeQuarters)> {
  const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*), "HandleNoteControllerNoteDidPassJumpThreeQuarters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
