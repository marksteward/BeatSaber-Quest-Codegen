// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MasterServer.AuthenticateUserRequest
#include "MasterServer/AuthenticateUserRequest.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.AuthenticateUserRequest.get_pool
GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserRequest*>* MasterServer::AuthenticateUserRequest::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserRequest*>*>("MasterServer", "AuthenticateUserRequest", "get_pool"));
}
// Autogenerated method: MasterServer.AuthenticateUserRequest.Init
MasterServer::AuthenticateUserRequest* MasterServer::AuthenticateUserRequest::Init(GlobalNamespace::AuthenticationToken authenticationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::AuthenticateUserRequest*>(this, "Init", authenticationToken));
}
// Autogenerated method: MasterServer.AuthenticateUserRequest.Serialize
void MasterServer::AuthenticateUserRequest::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::AuthenticateUserRequest::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::AuthenticateUserRequest::Serialize(writer);
}
// Autogenerated method: MasterServer.AuthenticateUserRequest.Deserialize
void MasterServer::AuthenticateUserRequest::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::AuthenticateUserRequest::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::AuthenticateUserRequest::Deserialize(reader);
}
// Autogenerated method: MasterServer.AuthenticateUserRequest.Release
void MasterServer::AuthenticateUserRequest::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.AuthenticateUserRequest..ctor
MasterServer::AuthenticateUserRequest* MasterServer::AuthenticateUserRequest::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AuthenticateUserRequest*>());
}