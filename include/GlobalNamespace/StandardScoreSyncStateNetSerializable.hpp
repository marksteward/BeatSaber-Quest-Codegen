// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: ISyncStateSerializable`1
#include "GlobalNamespace/ISyncStateSerializable_1.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardScoreSyncStateNetSerializable
  class StandardScoreSyncStateNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket, public GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::StandardScoreSyncState>*/ {
    public:
    // public System.Single time
    // Offset: 0x10
    float time;
    // public StandardScoreSyncState score
    // Offset: 0x14
    GlobalNamespace::StandardScoreSyncState score;
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::StandardScoreSyncState>
    operator GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::StandardScoreSyncState>() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::StandardScoreSyncState>*>(this);
    }
    // Get static field: static public readonly PacketPool`1<StandardScoreSyncStateNetSerializable> pool
    static GlobalNamespace::PacketPool_1<GlobalNamespace::StandardScoreSyncStateNetSerializable*>* _get_pool();
    // Set static field: static public readonly PacketPool`1<StandardScoreSyncStateNetSerializable> pool
    static void _set_pool(GlobalNamespace::PacketPool_1<GlobalNamespace::StandardScoreSyncStateNetSerializable*>* value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1F93490
    static void NoDomainReloadInit();
    // static private System.Void .cctor()
    // Offset: 0x1F93618
    static void _cctor();
    // private System.Single ISyncStateSerializable<StandardScoreSyncState>.get_time()
    // Offset: 0x1F93458
    // Implemented from: ISyncStateSerializable`1
    // Base method: System.Single ISyncStateSerializable_1::get_time()
    float GlobalNamespace_ISyncStateSerializable_1_get_time();
    // private System.Void ISyncStateSerializable<StandardScoreSyncState>.set_time(System.Single value)
    // Offset: 0x1F93460
    // Implemented from: ISyncStateSerializable`1
    // Base method: System.Void ISyncStateSerializable_1::set_time(System.Single value)
    void GlobalNamespace_ISyncStateSerializable_1_set_time(float value);
    // private StandardScoreSyncState ISyncStateSerializable<StandardScoreSyncState>.get_state()
    // Offset: 0x1F93468
    // Implemented from: ISyncStateSerializable`1
    // Base method: T ISyncStateSerializable_1::get_state()
    GlobalNamespace::StandardScoreSyncState GlobalNamespace_ISyncStateSerializable_1_get_state();
    // private System.Void ISyncStateSerializable<StandardScoreSyncState>.set_state(StandardScoreSyncState value)
    // Offset: 0x1F9347C
    // Implemented from: ISyncStateSerializable`1
    // Base method: System.Void ISyncStateSerializable_1::set_state(StandardScoreSyncState value)
    void GlobalNamespace_ISyncStateSerializable_1_set_state(GlobalNamespace::StandardScoreSyncState value);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1F9350C
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1F9354C
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x1F9358C
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1F93610
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static StandardScoreSyncStateNetSerializable* New_ctor();
  }; // StandardScoreSyncStateNetSerializable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardScoreSyncStateNetSerializable*, "", "StandardScoreSyncStateNetSerializable");
#pragma pack(pop)
