// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IRemoteProcedureCall
  // [] Offset: FFFFFFFF
  class IRemoteProcedureCall/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket*/ {
    public:
    // Creating value type constructor for type: IRemoteProcedureCall
    IRemoteProcedureCall() noexcept {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // public System.Single get_syncTime()
    // Offset: 0xFFFFFFFF
    float get_syncTime();
  }; // IRemoteProcedureCall
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IRemoteProcedureCall*, "", "IRemoteProcedureCall");
