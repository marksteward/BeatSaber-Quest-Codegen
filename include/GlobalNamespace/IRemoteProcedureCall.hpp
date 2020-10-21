// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IRemoteProcedureCall
  class IRemoteProcedureCall : public LiteNetLib::Utils::INetSerializable/*, public GlobalNamespace::IPoolablePacket*/ {
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // public System.Single get_syncTime()
    // Offset: 0xFFFFFFFF
    float get_syncTime();
  }; // IRemoteProcedureCall
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IRemoteProcedureCall*, "", "IRemoteProcedureCall");
#pragma pack(pop)