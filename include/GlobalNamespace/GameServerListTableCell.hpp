// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedTextMeshPro
  class CurvedTextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SongPackMasksModel
  class SongPackMasksModel;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: GameServerListTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServerListTableCell : public HMUI::TableCell {
    public:
    // private HMUI.CurvedTextMeshPro _serverName
    // Size: 0x8
    // Offset: 0x50
    HMUI::CurvedTextMeshPro* serverName;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // private HMUI.CurvedTextMeshPro _difficultiesText
    // Size: 0x8
    // Offset: 0x58
    HMUI::CurvedTextMeshPro* difficultiesText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // private HMUI.CurvedTextMeshPro _musicPackText
    // Size: 0x8
    // Offset: 0x60
    HMUI::CurvedTextMeshPro* musicPackText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // private HMUI.CurvedTextMeshPro _playerCount
    // Size: 0x8
    // Offset: 0x68
    HMUI::CurvedTextMeshPro* playerCount;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // private UnityEngine.GameObject _passwordProtected
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::GameObject* passwordProtected;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xE0B730
    // private readonly SongPackMasksModel _songPackMasksModel
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::SongPackMasksModel* songPackMasksModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMasksModel*) == 0x8);
    // Creating value type constructor for type: GameServerListTableCell
    GameServerListTableCell(HMUI::CurvedTextMeshPro* serverName_ = {}, HMUI::CurvedTextMeshPro* difficultiesText_ = {}, HMUI::CurvedTextMeshPro* musicPackText_ = {}, HMUI::CurvedTextMeshPro* playerCount_ = {}, UnityEngine::GameObject* passwordProtected_ = {}, GlobalNamespace::SongPackMasksModel* songPackMasksModel_ = {}) noexcept : serverName{serverName_}, difficultiesText{difficultiesText_}, musicPackText{musicPackText_}, playerCount{playerCount_}, passwordProtected{passwordProtected_}, songPackMasksModel{songPackMasksModel_} {}
    // Get instance field: private HMUI.CurvedTextMeshPro _serverName
    HMUI::CurvedTextMeshPro* _get__serverName();
    // Set instance field: private HMUI.CurvedTextMeshPro _serverName
    void _set__serverName(HMUI::CurvedTextMeshPro* value);
    // Get instance field: private HMUI.CurvedTextMeshPro _difficultiesText
    HMUI::CurvedTextMeshPro* _get__difficultiesText();
    // Set instance field: private HMUI.CurvedTextMeshPro _difficultiesText
    void _set__difficultiesText(HMUI::CurvedTextMeshPro* value);
    // Get instance field: private HMUI.CurvedTextMeshPro _musicPackText
    HMUI::CurvedTextMeshPro* _get__musicPackText();
    // Set instance field: private HMUI.CurvedTextMeshPro _musicPackText
    void _set__musicPackText(HMUI::CurvedTextMeshPro* value);
    // Get instance field: private HMUI.CurvedTextMeshPro _playerCount
    HMUI::CurvedTextMeshPro* _get__playerCount();
    // Set instance field: private HMUI.CurvedTextMeshPro _playerCount
    void _set__playerCount(HMUI::CurvedTextMeshPro* value);
    // Get instance field: private UnityEngine.GameObject _passwordProtected
    UnityEngine::GameObject* _get__passwordProtected();
    // Set instance field: private UnityEngine.GameObject _passwordProtected
    void _set__passwordProtected(UnityEngine::GameObject* value);
    // Get instance field: private readonly SongPackMasksModel _songPackMasksModel
    GlobalNamespace::SongPackMasksModel* _get__songPackMasksModel();
    // Set instance field: private readonly SongPackMasksModel _songPackMasksModel
    void _set__songPackMasksModel(GlobalNamespace::SongPackMasksModel* value);
    // public System.Void SetData(INetworkPlayer player)
    // Offset: 0x10A4280
    void SetData(GlobalNamespace::INetworkPlayer* player);
    // public System.Void .ctor()
    // Offset: 0x10A4600
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerListTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerListTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerListTableCell*, creationType>()));
    }
  }; // GameServerListTableCell
  #pragma pack(pop)
  static check_size<sizeof(GameServerListTableCell), 120 + sizeof(GlobalNamespace::SongPackMasksModel*)> __GlobalNamespace_GameServerListTableCellSizeCheck;
  static_assert(sizeof(GameServerListTableCell) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerListTableCell*, "", "GameServerListTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerListTableCell::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerListTableCell::*)(GlobalNamespace::INetworkPlayer*)>(&GlobalNamespace::GameServerListTableCell::SetData)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "INetworkPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerListTableCell*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerListTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
