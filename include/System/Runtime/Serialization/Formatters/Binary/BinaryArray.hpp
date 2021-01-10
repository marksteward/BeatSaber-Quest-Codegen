// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryArrayTypeEnum.hpp"
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
  // Size: 0x44
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryArray
  // [] Offset: FFFFFFFF
  class BinaryArray : public ::Il2CppObject {
    public:
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x10
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 rank
    // Size: 0x4
    // Offset: 0x14
    int rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32[] lengthA
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* lengthA;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] lowerBoundA
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* lowerBoundA;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum
    // Size: 0x4
    // Offset: 0x28
    System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum) == 0x4);
    // Padding between fields: binaryTypeEnum and: typeInformation
    char __padding4[0x4] = {};
    // System.Object typeInformation
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* typeInformation;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 assemId
    // Size: 0x4
    // Offset: 0x38
    int assemId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Size: 0x4
    // Offset: 0x3C
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum
    // Size: 0x4
    // Offset: 0x40
    System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum) == 0x4);
    // Creating value type constructor for type: BinaryArray
    BinaryArray(int objectId_ = {}, int rank_ = {}, ::Array<int>* lengthA_ = {}, ::Array<int>* lowerBoundA_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum_ = {}, ::Il2CppObject* typeInformation_ = {}, int assemId_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum_ = {}) noexcept : objectId{objectId_}, rank{rank_}, lengthA{lengthA_}, lowerBoundA{lowerBoundA_}, binaryTypeEnum{binaryTypeEnum_}, typeInformation{typeInformation_}, assemId{assemId_}, binaryHeaderEnum{binaryHeaderEnum_}, binaryArrayTypeEnum{binaryArrayTypeEnum_} {}
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x133FDE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryArray* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryArray*, creationType>(binaryHeaderEnum)));
    }
    // System.Void Set(System.Int32 objectId, System.Int32 rank, System.Int32[] lengthA, System.Int32[] lowerBoundA, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Object typeInformation, System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum, System.Int32 assemId)
    // Offset: 0x133FE10
    void Set(int objectId, int rank, ::Array<int>* lengthA, ::Array<int>* lowerBoundA, System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::Il2CppObject* typeInformation, System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum, int assemId);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x133FEC4
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x134033C
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // System.Void .ctor()
    // Offset: 0x133FDDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryArray*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryArray
  static check_size<sizeof(BinaryArray), 64 + sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum)> __System_Runtime_Serialization_Formatters_Binary_BinaryArraySizeCheck;
  static_assert(sizeof(BinaryArray) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryArray*, "System.Runtime.Serialization.Formatters.Binary", "BinaryArray");
#pragma pack(pop)
