// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerDataFileManagerSO/<>c
#include "GlobalNamespace/PlayerDataFileManagerSO_--c.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly PlayerDataFileManagerSO/<>c <>9
GlobalNamespace::PlayerDataFileManagerSO::$$c* GlobalNamespace::PlayerDataFileManagerSO::$$c::_get_$$9() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_get_$$9");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<GlobalNamespace::PlayerDataFileManagerSO::$$c*>("", "PlayerDataFileManagerSO/<>c", "<>9")));
}
// Autogenerated static field setter
// Set static field: static public readonly PlayerDataFileManagerSO/<>c <>9
void GlobalNamespace::PlayerDataFileManagerSO::$$c::_set_$$9(GlobalNamespace::PlayerDataFileManagerSO::$$c* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_set_$$9");
  THROW_UNLESS((il2cpp_utils::SetFieldValue("", "PlayerDataFileManagerSO/<>c", "<>9", value)));
}
// Autogenerated static field getter
// Get static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__19_0
System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* GlobalNamespace::PlayerDataFileManagerSO::$$c::_get_$$9__19_0() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_get_$$9__19_0");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>*>("", "PlayerDataFileManagerSO/<>c", "<>9__19_0")));
}
// Autogenerated static field setter
// Set static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__19_0
void GlobalNamespace::PlayerDataFileManagerSO::$$c::_set_$$9__19_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("_set_$$9__19_0");
  THROW_UNLESS((il2cpp_utils::SetFieldValue("", "PlayerDataFileManagerSO/<>c", "<>9__19_0", value)));
}
// Autogenerated method: PlayerDataFileManagerSO/<>c..cctor
void GlobalNamespace::PlayerDataFileManagerSO::$$c::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "PlayerDataFileManagerSO/<>c", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: PlayerDataFileManagerSO/<>c.<LoadCorrectedSongPackMask>b__19_0
::Il2CppString* GlobalNamespace::PlayerDataFileManagerSO::$$c::$LoadCorrectedSongPackMask$b__19_0(GlobalNamespace::IBeatmapLevelPack* pack) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c").WithContext("<LoadCorrectedSongPackMask>b__19_0");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<LoadCorrectedSongPackMask>b__19_0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(pack))));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, pack);
}
