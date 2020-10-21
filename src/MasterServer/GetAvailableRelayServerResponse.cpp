// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.GetAvailableRelayServerResponse
#include "MasterServer/GetAvailableRelayServerResponse.hpp"
// Including type: ByteArrayNetSerializable
#include "GlobalNamespace/ByteArrayNetSerializable.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.get_pool
GlobalNamespace::PacketPool_1<MasterServer::GetAvailableRelayServerResponse*>* MasterServer::GetAvailableRelayServerResponse::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::GetAvailableRelayServerResponse*>*>("MasterServer", "GetAvailableRelayServerResponse", "get_pool"));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.set_dedicatedServerId
void MasterServer::GetAvailableRelayServerResponse::set_dedicatedServerId(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_dedicatedServerId", value));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.set_dedicatedServerCreationTime
void MasterServer::GetAvailableRelayServerResponse::set_dedicatedServerCreationTime(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_dedicatedServerCreationTime", value));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.InitForFailure
MasterServer::GetAvailableRelayServerResponse* MasterServer::GetAvailableRelayServerResponse::InitForFailure(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, MasterServer::GetAvailableRelayServerResponse::Result result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::GetAvailableRelayServerResponse*>(this, "InitForFailure", dedicatedServerId, dedicatedServerCreationTime, result));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.InitForSuccess
MasterServer::GetAvailableRelayServerResponse* MasterServer::GetAvailableRelayServerResponse::InitForSuccess(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, int port, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::GetAvailableRelayServerResponse*>(this, "InitForSuccess", dedicatedServerId, dedicatedServerCreationTime, id, port, random, publicKey));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.get_resultCode
uint8_t MasterServer::GetAvailableRelayServerResponse::get_resultCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(this, "get_resultCode"));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.get_resultCodeString
::Il2CppString* MasterServer::GetAvailableRelayServerResponse::get_resultCodeString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_resultCodeString"));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.get_dedicatedServerId
::Il2CppString* MasterServer::GetAvailableRelayServerResponse::get_dedicatedServerId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_dedicatedServerId"));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.get_dedicatedServerCreationTime
int64_t MasterServer::GetAvailableRelayServerResponse::get_dedicatedServerCreationTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_dedicatedServerCreationTime"));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.Serialize
void MasterServer::GetAvailableRelayServerResponse::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::GetAvailableRelayServerResponse::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::GetAvailableRelayServerResponse::Serialize(writer);
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.Deserialize
void MasterServer::GetAvailableRelayServerResponse::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::GetAvailableRelayServerResponse::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::GetAvailableRelayServerResponse::Deserialize(reader);
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse.Release
void MasterServer::GetAvailableRelayServerResponse::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.GetAvailableRelayServerResponse..ctor
MasterServer::GetAvailableRelayServerResponse* MasterServer::GetAvailableRelayServerResponse::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<GetAvailableRelayServerResponse*>());
}