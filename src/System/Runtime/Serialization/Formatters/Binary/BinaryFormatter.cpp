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
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<System::Type*, System::Runtime::Serialization::Formatters::Binary::TypeInformation*>*>("System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", "typeNameCache")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_set_typeNameCache(System::Collections::Generic::Dictionary_2<System::Type*, System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", "typeNameCache", value));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.set_AssemblyFormat
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_AssemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_AssemblyFormat", value));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.set_SurrogateSelector
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_SurrogateSelector(System::Runtime::Serialization::ISurrogateSelector* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_SurrogateSelector", value));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.set_Binder
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_Binder(System::Runtime::Serialization::SerializationBinder* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Binder", value));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter..ctor
System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::New_ctor(System::Runtime::Serialization::ISurrogateSelector* selector, System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(il2cpp_utils::New<BinaryFormatter*>(selector, context));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Deserialize
::Il2CppObject* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(System::IO::Stream* serializationStream) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Deserialize", serializationStream));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Deserialize
::Il2CppObject* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(System::IO::Stream* serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler* handler, bool fCheck) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Deserialize", serializationStream, handler, fCheck));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Deserialize
::Il2CppObject* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(System::IO::Stream* serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler* handler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Deserialize", serializationStream, handler));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Serialize
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", serializationStream, graph));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Serialize
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* headers) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", serializationStream, graph, headers));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.Serialize
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* headers, bool fCheck) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", serializationStream, graph, headers, fCheck));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter.GetTypeInformation
System::Runtime::Serialization::Formatters::Binary::TypeInformation* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::GetTypeInformation(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::Formatters::Binary::TypeInformation*>("System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", "GetTypeInformation", type));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter..cctor
void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", ".cctor"));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter..ctor
System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BinaryFormatter*>());
}
