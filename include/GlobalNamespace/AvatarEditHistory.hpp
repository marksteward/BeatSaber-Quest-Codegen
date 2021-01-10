// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EditAvatarViewController
#include "GlobalNamespace/EditAvatarViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Menu::ViewControllers
namespace Menu::ViewControllers {
  // Forward declaring type: EditAvatarHistorySnapshot
  class EditAvatarHistorySnapshot;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarData
  class AvatarData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  // Autogenerated type: AvatarEditHistory
  // [] Offset: FFFFFFFF
  class AvatarEditHistory : public ::Il2CppObject {
    public:
    // public System.Boolean disableNextSnapshotOverride
    // Size: 0x1
    // Offset: 0x10
    bool disableNextSnapshotOverride;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableNextSnapshotOverride and: snapShots
    char __padding0[0x7] = {};
    // private System.Collections.Generic.List`1<Menu.ViewControllers.EditAvatarHistorySnapshot> _snapShots
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Menu::ViewControllers::EditAvatarHistorySnapshot*>* snapShots;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Menu::ViewControllers::EditAvatarHistorySnapshot*>*) == 0x8);
    // private System.Int32 _currentDataId
    // Size: 0x4
    // Offset: 0x20
    int currentDataId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AvatarEditHistory
    AvatarEditHistory(bool disableNextSnapshotOverride_ = {}, System::Collections::Generic::List_1<Menu::ViewControllers::EditAvatarHistorySnapshot*>* snapShots_ = {}, int currentDataId_ = {}) noexcept : disableNextSnapshotOverride{disableNextSnapshotOverride_}, snapShots{snapShots_}, currentDataId{currentDataId_} {}
    // public System.Boolean get_undoAvailable()
    // Offset: 0x1A44358
    bool get_undoAvailable();
    // public System.Boolean get_redoAvailable()
    // Offset: 0x1A44368
    bool get_redoAvailable();
    // public Menu.ViewControllers.EditAvatarHistorySnapshot get_currentSnapShot()
    // Offset: 0x1A443C8
    Menu::ViewControllers::EditAvatarHistorySnapshot* get_currentSnapShot();
    // public EditAvatarViewController/AvatarEditPart get_lastEditedPart()
    // Offset: 0x1A44438
    GlobalNamespace::EditAvatarViewController::AvatarEditPart get_lastEditedPart();
    // public System.Void Clear()
    // Offset: 0x1A44458
    void Clear();
    // public System.Void Undo()
    // Offset: 0x1A444B8
    void Undo();
    // public System.Void Redo()
    // Offset: 0x1A444D4
    void Redo();
    // public System.Void UpdateEditHistory(AvatarData avatarData, EditAvatarViewController/AvatarEditPart avatarEditPart)
    // Offset: 0x1A44544
    void UpdateEditHistory(GlobalNamespace::AvatarData* avatarData, GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart);
    // public System.Void .ctor()
    // Offset: 0x1A446AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarEditHistory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarEditHistory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarEditHistory*, creationType>()));
    }
  }; // AvatarEditHistory
  static check_size<sizeof(AvatarEditHistory), 32 + sizeof(int)> __GlobalNamespace_AvatarEditHistorySizeCheck;
  static_assert(sizeof(AvatarEditHistory) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarEditHistory*, "", "AvatarEditHistory");
#pragma pack(pop)
