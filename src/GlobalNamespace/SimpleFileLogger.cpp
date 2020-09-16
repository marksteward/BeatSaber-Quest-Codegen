// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleFileLogger
#include "GlobalNamespace/SimpleFileLogger.hpp"
// Including type: SimpleFileLogger/MonoLogger
#include "GlobalNamespace/SimpleFileLogger_MonoLogger.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kFilename
::Il2CppString* GlobalNamespace::SimpleFileLogger::_get_kFilename() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "SimpleFileLogger", "kFilename"));
}
// Autogenerated static field setter
// Set static field: static private System.String kFilename
void GlobalNamespace::SimpleFileLogger::_set_kFilename(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SimpleFileLogger", "kFilename", value));
}
// Autogenerated static field getter
// Get static field: static private SimpleFileLogger/MonoLogger _monoLogger
GlobalNamespace::SimpleFileLogger::MonoLogger* GlobalNamespace::SimpleFileLogger::_get__monoLogger() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<GlobalNamespace::SimpleFileLogger::MonoLogger*>("", "SimpleFileLogger", "_monoLogger"));
}
// Autogenerated static field setter
// Set static field: static private SimpleFileLogger/MonoLogger _monoLogger
void GlobalNamespace::SimpleFileLogger::_set__monoLogger(GlobalNamespace::SimpleFileLogger::MonoLogger* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SimpleFileLogger", "_monoLogger", value));
}
// Autogenerated method: SimpleFileLogger.NoDomainReloadInit
void GlobalNamespace::SimpleFileLogger::NoDomainReloadInit() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SimpleFileLogger", "NoDomainReloadInit"));
}
// Autogenerated method: SimpleFileLogger.get_monoLogger
GlobalNamespace::SimpleFileLogger::MonoLogger* GlobalNamespace::SimpleFileLogger::get_monoLogger() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::SimpleFileLogger::MonoLogger*>("", "SimpleFileLogger", "get_monoLogger"));
}
// Autogenerated method: SimpleFileLogger.Log
void GlobalNamespace::SimpleFileLogger::Log(::Il2CppString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SimpleFileLogger", "Log", text));
}
// Autogenerated method: SimpleFileLogger.LogVector
void GlobalNamespace::SimpleFileLogger::LogVector(::Il2CppString* description, UnityEngine::Vector3 vec) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SimpleFileLogger", "LogVector", description, vec));
}
// Autogenerated method: SimpleFileLogger.Clear
void GlobalNamespace::SimpleFileLogger::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SimpleFileLogger", "Clear"));
}
// Autogenerated method: SimpleFileLogger..ctor
GlobalNamespace::SimpleFileLogger* GlobalNamespace::SimpleFileLogger::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SimpleFileLogger*>());
}
