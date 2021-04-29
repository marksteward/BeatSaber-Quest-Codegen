// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.PrimitiveArray
  class PrimitiveArray : public ::Il2CppObject {
    public:
    // private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE) == 0x4);
    // Padding between fields: code and: booleanA
    char __padding0[0x4] = {};
    // private System.Boolean[] booleanA
    // Size: 0x8
    // Offset: 0x18
    ::Array<bool>* booleanA;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private System.Char[] charA
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppChar>* charA;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Double[] doubleA
    // Size: 0x8
    // Offset: 0x28
    ::Array<double>* doubleA;
    // Field size check
    static_assert(sizeof(::Array<double>*) == 0x8);
    // private System.Int16[] int16A
    // Size: 0x8
    // Offset: 0x30
    ::Array<int16_t>* int16A;
    // Field size check
    static_assert(sizeof(::Array<int16_t>*) == 0x8);
    // private System.Int32[] int32A
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* int32A;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int64[] int64A
    // Size: 0x8
    // Offset: 0x40
    ::Array<int64_t>* int64A;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.SByte[] sbyteA
    // Size: 0x8
    // Offset: 0x48
    ::Array<int8_t>* sbyteA;
    // Field size check
    static_assert(sizeof(::Array<int8_t>*) == 0x8);
    // private System.Single[] singleA
    // Size: 0x8
    // Offset: 0x50
    ::Array<float>* singleA;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private System.UInt16[] uint16A
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint16_t>* uint16A;
    // Field size check
    static_assert(sizeof(::Array<uint16_t>*) == 0x8);
    // private System.UInt32[] uint32A
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint>* uint32A;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt64[] uint64A
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint64_t>* uint64A;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // Creating value type constructor for type: PrimitiveArray
    PrimitiveArray(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code_ = {}, ::Array<bool>* booleanA_ = {}, ::Array<::Il2CppChar>* charA_ = {}, ::Array<double>* doubleA_ = {}, ::Array<int16_t>* int16A_ = {}, ::Array<int>* int32A_ = {}, ::Array<int64_t>* int64A_ = {}, ::Array<int8_t>* sbyteA_ = {}, ::Array<float>* singleA_ = {}, ::Array<uint16_t>* uint16A_ = {}, ::Array<uint>* uint32A_ = {}, ::Array<uint64_t>* uint64A_ = {}) noexcept : code{code_}, booleanA{booleanA_}, charA{charA_}, doubleA{doubleA_}, int16A{int16A_}, int32A{int32A_}, int64A{int64A_}, sbyteA{sbyteA_}, singleA{singleA_}, uint16A{uint16A_}, uint32A{uint32A_}, uint64A{uint64A_} {}
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Array array)
    // Offset: 0x1472420
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrimitiveArray* New_ctor(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, System::Array* array) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrimitiveArray*, creationType>(code, array)));
    }
    // System.Void Init(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Array array)
    // Offset: 0x147652C
    void Init(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, System::Array* array);
    // System.Void SetValue(System.String value, System.Int32 index)
    // Offset: 0x1472D54
    void SetValue(::Il2CppString* value, int index);
  }; // System.Runtime.Serialization.Formatters.Binary.PrimitiveArray
  #pragma pack(pop)
  static check_size<sizeof(PrimitiveArray), 104 + sizeof(::Array<uint64_t>*)> __System_Runtime_Serialization_Formatters_Binary_PrimitiveArraySizeCheck;
  static_assert(sizeof(PrimitiveArray) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*, "System.Runtime.Serialization.Formatters.Binary", "PrimitiveArray");
