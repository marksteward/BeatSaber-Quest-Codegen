// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayServerConfiguration
  struct GameplayServerConfiguration : public System::ValueType/*, public System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>*/ {
    public:
    // public readonly BeatmapDifficultyMask difficulties
    // Offset: 0x0
    GlobalNamespace::BeatmapDifficultyMask difficulties;
    // public readonly GameplayModifierMask modifiers
    // Offset: 0x2
    GlobalNamespace::GameplayModifierMask modifiers;
    // public readonly SongPackMask songPacks
    // Offset: 0x8
    GlobalNamespace::SongPackMask songPacks;
    // Creating value type constructor for type: GameplayServerConfiguration
    constexpr GameplayServerConfiguration(GlobalNamespace::BeatmapDifficultyMask difficulties_ = {}, GlobalNamespace::GameplayModifierMask modifiers_ = {}, GlobalNamespace::SongPackMask songPacks_ = {}) noexcept : difficulties{difficulties_}, modifiers{modifiers_}, songPacks{songPacks_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>
    operator System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>*>(this);
    }
    // public System.Void .ctor(BeatmapDifficultyMask difficulties, GameplayModifierMask modifiers, SongPackMask songPacks)
    // Offset: 0xE4EE70
    // ABORTED: conflicts with another method.  GameplayServerConfiguration(GlobalNamespace::BeatmapDifficultyMask difficulties, GlobalNamespace::GameplayModifierMask modifiers, GlobalNamespace::SongPackMask songPacks);
    // static public GameplayServerConfiguration Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x215F954
    static GlobalNamespace::GameplayServerConfiguration Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE4EE80
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(GameplayServerConfiguration other)
    // Offset: 0xE4EE88
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(GameplayServerConfiguration other)
    bool Equals(GlobalNamespace::GameplayServerConfiguration other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE4EEC0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xE4EEF4
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: System.Void INetImmutableSerializable_1::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public GameplayServerConfiguration CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xE4EEFC
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: T INetImmutableSerializable_1::CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    GlobalNamespace::GameplayServerConfiguration CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData
    // Maps to method: CreateFromSerializedData
    GlobalNamespace::GameplayServerConfiguration LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
  }; // GameplayServerConfiguration
  // static public System.Boolean op_Equality(GameplayServerConfiguration l, GameplayServerConfiguration r)
  // Offset: 0x215F9BC
  bool operator ==(const GlobalNamespace::GameplayServerConfiguration& l, const GlobalNamespace::GameplayServerConfiguration& r);
  // static public System.Boolean op_Inequality(GameplayServerConfiguration l, GameplayServerConfiguration r)
  // Offset: 0x215F9FC
  bool operator !=(const GlobalNamespace::GameplayServerConfiguration& l, const GlobalNamespace::GameplayServerConfiguration& r);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerConfiguration, "", "GameplayServerConfiguration");
#pragma pack(pop)