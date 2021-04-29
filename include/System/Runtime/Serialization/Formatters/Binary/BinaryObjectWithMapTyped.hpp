// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
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
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
  class BinaryObjectWithMapTyped : public ::Il2CppObject {
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
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    // Size: 0x8
    // Offset: 0x30
    ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA;
    // Field size check
    static_assert(sizeof(::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*) == 0x8);
    // System.Object[] typeInformationA
    // Size: 0x8
    // Offset: 0x38
    ::Array<::Il2CppObject*>* typeInformationA;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // System.Int32[] memberAssemIds
    // Size: 0x8
    // Offset: 0x40
    ::Array<int>* memberAssemIds;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32 assemId
    // Size: 0x4
    // Offset: 0x48
    int assemId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BinaryObjectWithMapTyped
    BinaryObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum_ = {}, int objectId_ = {}, ::Il2CppString* name_ = {}, int numMembers_ = {}, ::Array<::Il2CppString*>* memberNames_ = {}, ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA_ = {}, ::Array<::Il2CppObject*>* typeInformationA_ = {}, ::Array<int>* memberAssemIds_ = {}, int assemId_ = {}) noexcept : binaryHeaderEnum{binaryHeaderEnum_}, objectId{objectId_}, name{name_}, numMembers{numMembers_}, memberNames{memberNames_}, binaryTypeEnumA{binaryTypeEnumA_}, typeInformationA{typeInformationA_}, memberAssemIds{memberAssemIds_}, assemId{assemId_} {}
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x146C124
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectWithMapTyped* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectWithMapTyped*, creationType>(binaryHeaderEnum)));
    }
    // System.Void Set(System.Int32 objectId, System.String name, System.Int32 numMembers, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, System.Object[] typeInformationA, System.Int32[] memberAssemIds, System.Int32 assemId)
    // Offset: 0x146C150
    void Set(int objectId, ::Il2CppString* name, int numMembers, ::Array<::Il2CppString*>* memberNames, ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, ::Array<::Il2CppObject*>* typeInformationA, ::Array<int>* memberAssemIds, int assemId);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x146C17C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x146C320
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // System.Void .ctor()
    // Offset: 0x146C11C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectWithMapTyped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectWithMapTyped*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
  #pragma pack(pop)
  static check_size<sizeof(BinaryObjectWithMapTyped), 72 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTypedSizeCheck;
  static_assert(sizeof(BinaryObjectWithMapTyped) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMapTyped");
