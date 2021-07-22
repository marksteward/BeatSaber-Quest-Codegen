// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: INoteMirrorable
#include "GlobalNamespace/INoteMirrorable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: GameNoteType
  struct GameNoteController_GameNoteType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ICubeNoteMirrorable
  // [TokenAttribute] Offset: FFFFFFFF
  class ICubeNoteMirrorable : public ::Il2CppObject/*, public GlobalNamespace::INoteMirrorable*/ {
    public:
    // Creating value type constructor for type: ICubeNoteMirrorable
    ICubeNoteMirrorable() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::INoteMirrorable
    operator GlobalNamespace::INoteMirrorable() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteMirrorable*>(this);
    }
    // public NoteMovement get_noteMovement()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteMovement* get_noteMovement();
    // public GameNoteController/GameNoteType get_gameNoteType()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::GameNoteController_GameNoteType get_gameNoteType();
  }; // ICubeNoteMirrorable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICubeNoteMirrorable*, "", "ICubeNoteMirrorable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ICubeNoteMirrorable::get_noteMovement
// Il2CppName: get_noteMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteMovement* (GlobalNamespace::ICubeNoteMirrorable::*)()>(&GlobalNamespace::ICubeNoteMirrorable::get_noteMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ICubeNoteMirrorable*), "get_noteMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ICubeNoteMirrorable::get_gameNoteType
// Il2CppName: get_gameNoteType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameNoteController_GameNoteType (GlobalNamespace::ICubeNoteMirrorable::*)()>(&GlobalNamespace::ICubeNoteMirrorable::get_gameNoteType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ICubeNoteMirrorable*), "get_gameNoteType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
