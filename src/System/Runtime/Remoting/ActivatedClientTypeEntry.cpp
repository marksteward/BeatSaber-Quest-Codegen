// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.ActivatedClientTypeEntry
#include "System/Runtime/Remoting/ActivatedClientTypeEntry.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Remoting.Contexts.IContextAttribute
#include "System/Runtime/Remoting/Contexts/IContextAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.ActivatedClientTypeEntry..ctor
System::Runtime::Remoting::ActivatedClientTypeEntry* System::Runtime::Remoting::ActivatedClientTypeEntry::New_ctor(::Il2CppString* typeName, ::Il2CppString* assemblyName, ::Il2CppString* appUrl) {
  return THROW_UNLESS(il2cpp_utils::New<ActivatedClientTypeEntry*>(typeName, assemblyName, appUrl));
}
// Autogenerated method: System.Runtime.Remoting.ActivatedClientTypeEntry.get_ApplicationUrl
::Il2CppString* System::Runtime::Remoting::ActivatedClientTypeEntry::get_ApplicationUrl() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_ApplicationUrl"));
}
// Autogenerated method: System.Runtime.Remoting.ActivatedClientTypeEntry.get_ContextAttributes
::Array<System::Runtime::Remoting::Contexts::IContextAttribute*>* System::Runtime::Remoting::ActivatedClientTypeEntry::get_ContextAttributes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Runtime::Remoting::Contexts::IContextAttribute*>*>(this, "get_ContextAttributes"));
}
// Autogenerated method: System.Runtime.Remoting.ActivatedClientTypeEntry.get_ObjectType
System::Type* System::Runtime::Remoting::ActivatedClientTypeEntry::get_ObjectType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ObjectType"));
}
// Autogenerated method: System.Runtime.Remoting.ActivatedClientTypeEntry.ToString
::Il2CppString* System::Runtime::Remoting::ActivatedClientTypeEntry::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
