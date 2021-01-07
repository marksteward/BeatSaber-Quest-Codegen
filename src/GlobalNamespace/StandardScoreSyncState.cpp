// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kIntSize
int GlobalNamespace::StandardScoreSyncState::_get_kIntSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("StandardScoreSyncState").WithContext("_get_kIntSize");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "StandardScoreSyncState", "kIntSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kIntSize
void GlobalNamespace::StandardScoreSyncState::_set_kIntSize(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("StandardScoreSyncState").WithContext("_set_kIntSize");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "StandardScoreSyncState", "kIntSize", value));
}
// Autogenerated method: StandardScoreSyncState.Equals
bool GlobalNamespace::StandardScoreSyncState::Equals(GlobalNamespace::StandardScoreSyncState& other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("StandardScoreSyncState").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, other);
}
// Autogenerated method: StandardScoreSyncState.SetState
void GlobalNamespace::StandardScoreSyncState::SetState(GlobalNamespace::StandardScoreSyncState_Score s, int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("StandardScoreSyncState").WithContext("SetState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "SetState", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, s, value);
}
// Autogenerated method: StandardScoreSyncState.GetState
int GlobalNamespace::StandardScoreSyncState::GetState(GlobalNamespace::StandardScoreSyncState_Score s) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("StandardScoreSyncState").WithContext("GetState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetState", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, s);
}
// Autogenerated method: StandardScoreSyncState.Serialize
void GlobalNamespace::StandardScoreSyncState::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("StandardScoreSyncState").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Serialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(writer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, writer);
}
void GlobalNamespace::StandardScoreSyncState::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::StandardScoreSyncState::Serialize(writer);
}
// Autogenerated method: StandardScoreSyncState.Deserialize
void GlobalNamespace::StandardScoreSyncState::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("StandardScoreSyncState").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Deserialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
}
void GlobalNamespace::StandardScoreSyncState::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::StandardScoreSyncState::Deserialize(reader);
}
