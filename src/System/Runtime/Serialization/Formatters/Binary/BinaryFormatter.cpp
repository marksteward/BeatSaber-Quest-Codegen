// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "System/Runtime/Serialization/Formatters/Binary/BinaryFormatter.hpp"
// Including type: System.Runtime.Serialization.ISurrogateSelector
#include "System/Runtime/Serialization/ISurrogateSelector.hpp"
// Including type: System.Runtime.Serialization.SerializationBinder
#include "System/Runtime/Serialization/SerializationBinder.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.TypeInformation
#include "System/Runtime/Serialization/Formatters/Binary/TypeInformation.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Runtime.Remoting.Messaging.HeaderHandler
#include "System/Runtime/Remoting/Messaging/HeaderHandler.hpp"
// Including type: System.Runtime.Remoting.Messaging.Header
#include "System/Runtime/Remoting/Messaging/Header.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache
System::Collections::Generic::Dictionary_2<System::Type*, System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_get_typeNameCache() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("_get_typeNameCache");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<System::Type*, System::Runtime::Serialization::Formatters::Binary::TypeInformation*>*>("System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", "typeNameCache")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_set_typeNameCache(System::Collections::Generic::Dictionary_2<System::Type*, System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("_set_typeNameCache");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", "typeNameCache", value));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.set_AssemblyFormat
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_AssemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("set_AssemblyFormat");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_AssemblyFormat", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.set_SurrogateSelector
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_SurrogateSelector(System::Runtime::Serialization::ISurrogateSelector* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("set_SurrogateSelector");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_SurrogateSelector", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.set_Binder
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_Binder(System::Runtime::Serialization::SerializationBinder* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("set_Binder");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_Binder", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Deserialize
::Il2CppObject* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(System::IO::Stream* serializationStream) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Deserialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(serializationStream)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, serializationStream);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Deserialize
::Il2CppObject* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(System::IO::Stream* serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler* handler, bool fCheck) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Deserialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(serializationStream, handler, fCheck)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, serializationStream, handler, fCheck);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Deserialize
::Il2CppObject* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(System::IO::Stream* serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler* handler) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Deserialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(serializationStream, handler)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, serializationStream, handler);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Serialize
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Serialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(serializationStream, graph)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, serializationStream, graph);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Serialize
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* headers) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Serialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(serializationStream, graph, headers)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, serializationStream, graph, headers);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Serialize
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* headers, bool fCheck) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Serialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(serializationStream, graph, headers, fCheck)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, serializationStream, graph, headers, fCheck);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.GetTypeInformation
System::Runtime::Serialization::Formatters::Binary::TypeInformation* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::GetTypeInformation(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext("GetTypeInformation");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", "GetTypeInformation", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<System::Runtime::Serialization::Formatters::Binary::TypeInformation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter..cctor
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("BinaryFormatter").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
