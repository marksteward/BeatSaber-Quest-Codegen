// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryAssembly
  class BinaryAssembly : public ::Il2CppObject {
    public:
    // System.Int32 assemId
    // Size: 0x4
    // Offset: 0x10
    int assemId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: assemId and: assemblyString
    char __padding0[0x4] = {};
    // System.String assemblyString
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* assemblyString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: BinaryAssembly
    BinaryAssembly(int assemId_ = {}, ::Il2CppString* assemblyString_ = {}) noexcept : assemId{assemId_}, assemblyString{assemblyString_} {}
    // System.Void Set(System.Int32 assemId, System.String assemblyString)
    // Offset: 0x1606A2C
    void Set(int assemId, ::Il2CppString* assemblyString);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x1606A38
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x1606A8C
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x1606B10
    void Dump();
    // System.Void .ctor()
    // Offset: 0x1606A24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryAssembly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryAssembly*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryAssembly
  #pragma pack(pop)
  static check_size<sizeof(BinaryAssembly), 24 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_Formatters_Binary_BinaryAssemblySizeCheck;
  static_assert(sizeof(BinaryAssembly) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssembly");
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Set
// Il2CppName: Set
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Write
// Il2CppName: Write
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Read
// Il2CppName: Read
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Dump
// Il2CppName: Dump
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
