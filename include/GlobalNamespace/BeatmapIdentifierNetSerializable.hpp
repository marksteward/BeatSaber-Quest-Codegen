// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
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
  // Autogenerated type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>*/ {
    public:
    // private System.String <levelID>k__BackingField
    // Offset: 0x10
    ::Il2CppString* levelID;
    // private System.String <beatmapCharacteristicSerializedName>k__BackingField
    // Offset: 0x18
    ::Il2CppString* beatmapCharacteristicSerializedName;
    // private BeatmapDifficulty <difficulty>k__BackingField
    // Offset: 0x20
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>
    operator System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>*>(this);
    }
    // public System.String get_levelID()
    // Offset: 0x1F0BE10
    ::Il2CppString* get_levelID();
    // private System.Void set_levelID(System.String value)
    // Offset: 0x1F0BE18
    void set_levelID(::Il2CppString* value);
    // public System.String get_beatmapCharacteristicSerializedName()
    // Offset: 0x1F0BE20
    ::Il2CppString* get_beatmapCharacteristicSerializedName();
    // private System.Void set_beatmapCharacteristicSerializedName(System.String value)
    // Offset: 0x1F0BE28
    void set_beatmapCharacteristicSerializedName(::Il2CppString* value);
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x1F0BE30
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // private System.Void set_difficulty(BeatmapDifficulty value)
    // Offset: 0x1F0BE38
    void set_difficulty(GlobalNamespace::BeatmapDifficulty value);
    // public System.Void .ctor(System.String levelID, System.String beatmapCharacteristicSerializedName, BeatmapDifficulty difficulty)
    // Offset: 0x1F0BE48
    static BeatmapIdentifierNetSerializable* New_ctor(::Il2CppString* levelID, ::Il2CppString* beatmapCharacteristicSerializedName, GlobalNamespace::BeatmapDifficulty difficulty);
    // public System.Void .ctor()
    // Offset: 0x1F0BE40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatmapIdentifierNetSerializable* New_ctor();
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1F0BEA4
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1F0BF24
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Boolean Equals(BeatmapIdentifierNetSerializable other)
    // Offset: 0x1F0BF7C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(BeatmapIdentifierNetSerializable other)
    bool Equals(GlobalNamespace::BeatmapIdentifierNetSerializable* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1F0BFF0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F0C100
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1F0C168
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // BeatmapIdentifierNetSerializable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapIdentifierNetSerializable*, "", "BeatmapIdentifierNetSerializable");
#pragma pack(pop)
