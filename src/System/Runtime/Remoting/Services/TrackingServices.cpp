// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Services.TrackingServices
#include "System/Runtime/Remoting/Services/TrackingServices.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Runtime.Remoting.ObjRef
#include "System/Runtime/Remoting/ObjRef.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.ArrayList _handlers
System::Collections::ArrayList* System::Runtime::Remoting::Services::TrackingServices::_get__handlers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Services").WithContext("TrackingServices").WithContext("_get__handlers");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::ArrayList*>("System.Runtime.Remoting.Services", "TrackingServices", "_handlers"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.ArrayList _handlers
void System::Runtime::Remoting::Services::TrackingServices::_set__handlers(System::Collections::ArrayList* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Services").WithContext("TrackingServices").WithContext("_set__handlers");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Services", "TrackingServices", "_handlers", value));
}
// Autogenerated method: System.Runtime.Remoting.Services.TrackingServices.NotifyMarshaledObject
void System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject(::Il2CppObject* obj, System::Runtime::Remoting::ObjRef* _or) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Services").WithContext("TrackingServices").WithContext("NotifyMarshaledObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.Remoting.Services", "TrackingServices", "NotifyMarshaledObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj, _or)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, obj, _or);
}
// Autogenerated method: System.Runtime.Remoting.Services.TrackingServices.NotifyUnmarshaledObject
void System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject(::Il2CppObject* obj, System::Runtime::Remoting::ObjRef* _or) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Services").WithContext("TrackingServices").WithContext("NotifyUnmarshaledObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.Remoting.Services", "TrackingServices", "NotifyUnmarshaledObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj, _or)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, obj, _or);
}
// Autogenerated method: System.Runtime.Remoting.Services.TrackingServices.NotifyDisconnectedObject
void System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Services").WithContext("TrackingServices").WithContext("NotifyDisconnectedObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.Remoting.Services", "TrackingServices", "NotifyDisconnectedObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, obj);
}
// Autogenerated method: System.Runtime.Remoting.Services.TrackingServices..cctor
void System::Runtime::Remoting::Services::TrackingServices::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Services").WithContext("TrackingServices").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.Remoting.Services", "TrackingServices", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
