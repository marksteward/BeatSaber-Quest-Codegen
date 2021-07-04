// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
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
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
  class BinaryObjectWithMap : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum) == 0x4);
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x14
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.String name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int32 numMembers
    // Size: 0x4
    // Offset: 0x20
    int numMembers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numMembers and: memberNames
    char __padding3[0x4] = {};
    // System.String[] memberNames
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* memberNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Int32 assemId
    // Size: 0x4
    // Offset: 0x30
    int assemId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BinaryObjectWithMap
    BinaryObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum_ = {}, int objectId_ = {}, ::Il2CppString* name_ = {}, int numMembers_ = {}, ::Array<::Il2CppString*>* memberNames_ = {}, int assemId_ = {}) noexcept : binaryHeaderEnum{binaryHeaderEnum_}, objectId{objectId_}, name{name_}, numMembers{numMembers_}, memberNames{memberNames_}, assemId{assemId_} {}
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x160981C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectWithMap* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectWithMap*, creationType>(binaryHeaderEnum)));
    }
    // System.Void Set(System.Int32 objectId, System.String name, System.Int32 numMembers, System.String[] memberNames, System.Int32 assemId)
    // Offset: 0x1609848
    void Set(int objectId, ::Il2CppString* name, int numMembers, ::Array<::Il2CppString*>* memberNames, int assemId);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x160986C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x1609954
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x1609AD8
    void Dump();
    // System.Void .ctor()
    // Offset: 0x1609814
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectWithMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectWithMap*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
  #pragma pack(pop)
  static check_size<sizeof(BinaryObjectWithMap), 48 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapSizeCheck;
  static_assert(sizeof(BinaryObjectWithMap) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMap");
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Set
// Il2CppName: Set
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Write
// Il2CppName: Write
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Read
// Il2CppName: Read
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::Dump
// Il2CppName: Dump
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
