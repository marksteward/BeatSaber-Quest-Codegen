// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "System/Runtime/Remoting/Messaging/RemotingSurrogateSelector.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "System/Runtime/Remoting/Messaging/ObjRefSurrogate.hpp"
// Including type: System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "System/Runtime/Remoting/Messaging/RemotingSurrogate.hpp"
// Including type: System.Runtime.Serialization.ISerializationSurrogate
#include "System/Runtime/Serialization/ISerializationSurrogate.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Type s_cachedTypeObjRef
System::Type* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_get_s_cachedTypeObjRef() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("RemotingSurrogateSelector").WithContext("_get_s_cachedTypeObjRef");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", "s_cachedTypeObjRef"));
}
// Autogenerated static field setter
// Set static field: static private System.Type s_cachedTypeObjRef
void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_set_s_cachedTypeObjRef(System::Type* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("RemotingSurrogateSelector").WithContext("_set_s_cachedTypeObjRef");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", "s_cachedTypeObjRef", value));
}
// Autogenerated static field getter
// Get static field: static private System.Runtime.Remoting.Messaging.ObjRefSurrogate _objRefSurrogate
System::Runtime::Remoting::Messaging::ObjRefSurrogate* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_get__objRefSurrogate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("RemotingSurrogateSelector").WithContext("_get__objRefSurrogate");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Runtime::Remoting::Messaging::ObjRefSurrogate*>("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", "_objRefSurrogate"));
}
// Autogenerated static field setter
// Set static field: static private System.Runtime.Remoting.Messaging.ObjRefSurrogate _objRefSurrogate
void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_set__objRefSurrogate(System::Runtime::Remoting::Messaging::ObjRefSurrogate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("RemotingSurrogateSelector").WithContext("_set__objRefSurrogate");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", "_objRefSurrogate", value));
}
// Autogenerated static field getter
// Get static field: static private System.Runtime.Remoting.Messaging.RemotingSurrogate _objRemotingSurrogate
System::Runtime::Remoting::Messaging::RemotingSurrogate* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_get__objRemotingSurrogate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("RemotingSurrogateSelector").WithContext("_get__objRemotingSurrogate");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Runtime::Remoting::Messaging::RemotingSurrogate*>("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", "_objRemotingSurrogate"));
}
// Autogenerated static field setter
// Set static field: static private System.Runtime.Remoting.Messaging.RemotingSurrogate _objRemotingSurrogate
void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_set__objRemotingSurrogate(System::Runtime::Remoting::Messaging::RemotingSurrogate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("RemotingSurrogateSelector").WithContext("_set__objRemotingSurrogate");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", "_objRemotingSurrogate", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.RemotingSurrogateSelector..cctor
void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("RemotingSurrogateSelector").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.RemotingSurrogateSelector.GetSurrogate
System::Runtime::Serialization::ISerializationSurrogate* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate(System::Type* type, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ISurrogateSelector*& ssout) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("RemotingSurrogateSelector").WithContext("GetSurrogate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetSurrogate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type, context, ssout)));
  return ::il2cpp_utils::RunMethodThrow<System::Runtime::Serialization::ISerializationSurrogate*, false>(this, ___internal__method, type, context, ssout);
}
