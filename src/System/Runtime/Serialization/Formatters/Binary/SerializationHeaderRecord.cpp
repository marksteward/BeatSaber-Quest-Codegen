// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
#include "System/Runtime/Serialization/Formatters/Binary/SerializationHeaderRecord.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
#include "System/Runtime/Serialization/Formatters/Binary/__BinaryWriter.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.__BinaryParser
#include "System/Runtime/Serialization/Formatters/Binary/__BinaryParser.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord..ctor
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int topId, int headerId, int majorVersion, int minorVersion) {
  return THROW_UNLESS(il2cpp_utils::New<SerializationHeaderRecord*>(binaryHeaderEnum, topId, headerId, majorVersion, minorVersion));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord.Write
void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", sout));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord.GetInt32
int System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::GetInt32(::Array<uint8_t>* buffer, int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord", "GetInt32", buffer, index));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord.Read
void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Read", input));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord.Dump
void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Dump() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dump"));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord..ctor
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SerializationHeaderRecord*>());
}
