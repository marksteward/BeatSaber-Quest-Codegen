// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: ISyncStateDeltaSerializable`1
#include "GlobalNamespace/ISyncStateDeltaSerializable_1.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: StandardScoreSyncStateDeltaNetSerializable
  class StandardScoreSyncStateDeltaNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket, public GlobalNamespace::ISyncStateDeltaSerializable_1<GlobalNamespace::StandardScoreSyncState>*/ {
    public:
    // private StandardScoreSyncState _delta
    // Size: 0x14
    // Offset: 0x10
    GlobalNamespace::StandardScoreSyncState delta;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardScoreSyncState) == 0x14);
    // [CompilerGeneratedAttribute] Offset: 0xD1B2F4
    // private SyncStateId <baseId>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    GlobalNamespace::SyncStateId baseId;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SyncStateId) == 0x1);
    // Padding between fields: baseId and: timeOffsetMs
    char __padding1[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD1B304
    // private System.Int32 <timeOffsetMs>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int timeOffsetMs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StandardScoreSyncStateDeltaNetSerializable
    StandardScoreSyncStateDeltaNetSerializable(GlobalNamespace::StandardScoreSyncState delta_ = {}, GlobalNamespace::SyncStateId baseId_ = {}, int timeOffsetMs_ = {}) noexcept : delta{delta_}, baseId{baseId_}, timeOffsetMs{timeOffsetMs_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISyncStateDeltaSerializable_1<GlobalNamespace::StandardScoreSyncState>
    operator GlobalNamespace::ISyncStateDeltaSerializable_1<GlobalNamespace::StandardScoreSyncState>() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISyncStateDeltaSerializable_1<GlobalNamespace::StandardScoreSyncState>*>(this);
    }
    // Get static field: static public readonly PacketPool`1<StandardScoreSyncStateDeltaNetSerializable> pool
    static GlobalNamespace::PacketPool_1<GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* _get_pool();
    // Set static field: static public readonly PacketPool`1<StandardScoreSyncStateDeltaNetSerializable> pool
    static void _set_pool(GlobalNamespace::PacketPool_1<GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* value);
    // public SyncStateId get_baseId()
    // Offset: 0x218C94C
    GlobalNamespace::SyncStateId get_baseId();
    // public System.Void set_baseId(SyncStateId value)
    // Offset: 0x218C954
    void set_baseId(GlobalNamespace::SyncStateId value);
    // public System.Int32 get_timeOffsetMs()
    // Offset: 0x218C95C
    int get_timeOffsetMs();
    // public System.Void set_timeOffsetMs(System.Int32 value)
    // Offset: 0x218C964
    void set_timeOffsetMs(int value);
    // public StandardScoreSyncState get_delta()
    // Offset: 0x218C96C
    GlobalNamespace::StandardScoreSyncState get_delta();
    // public System.Void set_delta(StandardScoreSyncState value)
    // Offset: 0x218C980
    void set_delta(GlobalNamespace::StandardScoreSyncState value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x218C994
    static void NoDomainReloadInit();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x218CA10
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x218CAE0
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x218CB88
    void Release();
    // static private System.Void .cctor()
    // Offset: 0x218CC14
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x218CC0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardScoreSyncStateDeltaNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardScoreSyncStateDeltaNetSerializable*, creationType>()));
    }
  }; // StandardScoreSyncStateDeltaNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(StandardScoreSyncStateDeltaNetSerializable), 40 + sizeof(int)> __GlobalNamespace_StandardScoreSyncStateDeltaNetSerializableSizeCheck;
  static_assert(sizeof(StandardScoreSyncStateDeltaNetSerializable) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*, "", "StandardScoreSyncStateDeltaNetSerializable");
