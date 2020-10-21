// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CreateServerFormData
  struct CreateServerFormData : public System::ValueType {
    public:
    // public System.Boolean usePassword
    // Offset: 0x0
    bool usePassword;
    // public System.String password
    // Offset: 0x8
    ::Il2CppString* password;
    // public System.Int32 maxPlayers
    // Offset: 0x10
    int maxPlayers;
    // public System.Boolean allowInviteOthers
    // Offset: 0x14
    bool allowInviteOthers;
    // public System.Boolean netDiscoverable
    // Offset: 0x15
    bool netDiscoverable;
    // public BeatmapDifficultyMask difficulties
    // Offset: 0x16
    GlobalNamespace::BeatmapDifficultyMask difficulties;
    // public GameplayModifierMask modifiers
    // Offset: 0x18
    GlobalNamespace::GameplayModifierMask modifiers;
    // public SongPackMask songPacks
    // Offset: 0x20
    GlobalNamespace::SongPackMask songPacks;
    // Creating value type constructor for type: CreateServerFormData
    constexpr CreateServerFormData(bool usePassword_ = {}, ::Il2CppString* password_ = {}, int maxPlayers_ = {}, bool allowInviteOthers_ = {}, bool netDiscoverable_ = {}, GlobalNamespace::BeatmapDifficultyMask difficulties_ = {}, GlobalNamespace::GameplayModifierMask modifiers_ = {}, GlobalNamespace::SongPackMask songPacks_ = {}) noexcept : usePassword{usePassword_}, password{password_}, maxPlayers{maxPlayers_}, allowInviteOthers{allowInviteOthers_}, netDiscoverable{netDiscoverable_}, difficulties{difficulties_}, modifiers{modifiers_}, songPacks{songPacks_} {}
  }; // CreateServerFormData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreateServerFormData, "", "CreateServerFormData");
#pragma pack(pop)