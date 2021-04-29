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
    // [InjectAttribute] Offset: 0xD40E64
    // private readonly SongPackMasksModel _songPackMasksModel
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::SongPackMasksModel* songPackMasksModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMasksModel*) == 0x8);
    // Creating value type constructor for type: GameServerListTableCell
    GameServerListTableCell(HMUI::CurvedTextMeshPro* serverName_ = {}, HMUI::CurvedTextMeshPro* difficultiesText_ = {}, HMUI::CurvedTextMeshPro* musicPackText_ = {}, HMUI::CurvedTextMeshPro* playerCount_ = {}, UnityEngine::GameObject* passwordProtected_ = {}, GlobalNamespace::SongPackMasksModel* songPackMasksModel_ = {}) noexcept : serverName{serverName_}, difficultiesText{difficultiesText_}, musicPackText{musicPackText_}, playerCount{playerCount_}, passwordProtected{passwordProtected_}, songPackMasksModel{songPackMasksModel_} {}
    // public System.Void SetData(INetworkPlayer player)
    // Offset: 0xF5DD4C
    void SetData(GlobalNamespace::INetworkPlayer* player);
    // public System.Void .ctor()
    // Offset: 0xF5E114
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
