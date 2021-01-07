// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext/Reader
#include "System/Runtime/Remoting/Messaging/LogicalCallContext_Reader.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "System/Runtime/Remoting/Messaging/CallContextRemotingData.hpp"
// Including type: System.Runtime.Remoting.Messaging.CallContextSecurityData
#include "System/Runtime/Remoting/Messaging/CallContextSecurityData.hpp"
// Including type: System.Runtime.Remoting.Messaging.Header
#include "System/Runtime/Remoting/Messaging/Header.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Type s_callContextType
System::Type* System::Runtime::Remoting::Messaging::LogicalCallContext::_get_s_callContextType() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("_get_s_callContextType");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("System.Runtime.Remoting.Messaging", "LogicalCallContext", "s_callContextType"));
}
// Autogenerated static field setter
// Set static field: static private System.Type s_callContextType
void System::Runtime::Remoting::Messaging::LogicalCallContext::_set_s_callContextType(System::Type* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("_set_s_callContextType");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Messaging", "LogicalCallContext", "s_callContextType", value));
}
// Autogenerated static field getter
// Get static field: static private System.String s_CorrelationMgrSlotName
::Il2CppString* System::Runtime::Remoting::Messaging::LogicalCallContext::_get_s_CorrelationMgrSlotName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("_get_s_CorrelationMgrSlotName");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("System.Runtime.Remoting.Messaging", "LogicalCallContext", "s_CorrelationMgrSlotName"));
}
// Autogenerated static field setter
// Set static field: static private System.String s_CorrelationMgrSlotName
void System::Runtime::Remoting::Messaging::LogicalCallContext::_set_s_CorrelationMgrSlotName(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("_set_s_CorrelationMgrSlotName");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Messaging", "LogicalCallContext", "s_CorrelationMgrSlotName", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext.Merge
void System::Runtime::Remoting::Messaging::LogicalCallContext::Merge(System::Runtime::Remoting::Messaging::LogicalCallContext* lc) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("Merge");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Merge", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(lc)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, lc);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext.get_HasInfo
bool System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasInfo() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("get_HasInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_HasInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext.get_HasUserData
bool System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasUserData() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("get_HasUserData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_HasUserData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext.get_Datastore
System::Collections::Hashtable* System::Runtime::Remoting::Messaging::LogicalCallContext::get_Datastore() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("get_Datastore");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Datastore", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Hashtable*, false>(this, ___internal__method);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext.FreeNamedDataSlot
void System::Runtime::Remoting::Messaging::LogicalCallContext::FreeNamedDataSlot(::Il2CppString* name) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("FreeNamedDataSlot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FreeNamedDataSlot", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, name);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext.GetData
::Il2CppObject* System::Runtime::Remoting::Messaging::LogicalCallContext::GetData(::Il2CppString* name) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("GetData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, name);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext.SetData
void System::Runtime::Remoting::Messaging::LogicalCallContext::SetData(::Il2CppString* name, ::Il2CppObject* data) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("SetData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name, data)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, name, data);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext..cctor
void System::Runtime::Remoting::Messaging::LogicalCallContext::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.Remoting.Messaging", "LogicalCallContext", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext.GetObjectData
void System::Runtime::Remoting::Messaging::LogicalCallContext::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("GetObjectData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetObjectData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(info, context)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, info, context);
}
void System::Runtime::Remoting::Messaging::LogicalCallContext::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  System::Runtime::Remoting::Messaging::LogicalCallContext::GetObjectData(info, context);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.LogicalCallContext.Clone
::Il2CppObject* System::Runtime::Remoting::Messaging::LogicalCallContext::Clone() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("LogicalCallContext").WithContext("Clone");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
}
::Il2CppObject* System::Runtime::Remoting::Messaging::LogicalCallContext::System_ICloneable_Clone() {
  return System::Runtime::Remoting::Messaging::LogicalCallContext::Clone();
}
