// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NodePoseSyncState
#include "GlobalNamespace/NodePoseSyncState.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kFloatSize
int GlobalNamespace::NodePoseSyncState::_get_kFloatSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "NodePoseSyncState", "kFloatSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kFloatSize
void GlobalNamespace::NodePoseSyncState::_set_kFloatSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NodePoseSyncState", "kFloatSize", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kPoseSize
int GlobalNamespace::NodePoseSyncState::_get_kPoseSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "NodePoseSyncState", "kPoseSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kPoseSize
void GlobalNamespace::NodePoseSyncState::_set_kPoseSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NodePoseSyncState", "kPoseSize", value));
}
// Autogenerated method: NodePoseSyncState.Equals
bool GlobalNamespace::NodePoseSyncState::Equals(GlobalNamespace::NodePoseSyncState& other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
// Autogenerated method: NodePoseSyncState.Serialize
void GlobalNamespace::NodePoseSyncState::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Serialize", writer));
}
void GlobalNamespace::NodePoseSyncState::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::NodePoseSyncState::Serialize(writer);
}
// Autogenerated method: NodePoseSyncState.Deserialize
void GlobalNamespace::NodePoseSyncState::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Deserialize", reader));
}
void GlobalNamespace::NodePoseSyncState::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::NodePoseSyncState::Deserialize(reader);
}
// Autogenerated method: NodePoseSyncState.SetState
void GlobalNamespace::NodePoseSyncState::SetState(GlobalNamespace::NodePoseSyncState_NodePose nodePose, GlobalNamespace::PoseSerializable pose) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetState", nodePose, pose));
}
// Autogenerated method: NodePoseSyncState.GetState
GlobalNamespace::PoseSerializable GlobalNamespace::NodePoseSyncState::GetState(GlobalNamespace::NodePoseSyncState_NodePose nodePose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PoseSerializable>(*this, "GetState", nodePose));
}