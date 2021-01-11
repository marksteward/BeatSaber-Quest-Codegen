// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum
#include "System/Runtime/Serialization/Formatters/Binary/ValueFixupEnum.hpp"
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
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ReadObjectInfo
  class ReadObjectInfo;
  // Forward declaring type: ParseRecord
  class ParseRecord;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ValueFixup
  // [] Offset: FFFFFFFF
  class ValueFixup : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum valueFixupEnum
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum valueFixupEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum) == 0x4);
    // Padding between fields: valueFixupEnum and: arrayObj
    char __padding0[0x4] = {};
    // System.Array arrayObj
    // Size: 0x8
    // Offset: 0x18
    System::Array* arrayObj;
    // Field size check
    static_assert(sizeof(System::Array*) == 0x8);
    // System.Int32[] indexMap
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* indexMap;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Object header
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* header;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Object memberObject
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* memberObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*) == 0x8);
    // System.String memberName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* memberName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ValueFixup
    ValueFixup(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum valueFixupEnum_ = {}, System::Array* arrayObj_ = {}, ::Array<int>* indexMap_ = {}, ::Il2CppObject* header_ = {}, ::Il2CppObject* memberObject_ = {}, System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo_ = {}, ::Il2CppString* memberName_ = {}) noexcept : valueFixupEnum{valueFixupEnum_}, arrayObj{arrayObj_}, indexMap{indexMap_}, header{header_}, memberObject{memberObject_}, objectInfo{objectInfo_}, memberName{memberName_} {}
    // Get static field: static System.Reflection.MemberInfo valueInfo
    static System::Reflection::MemberInfo* _get_valueInfo();
    // Set static field: static System.Reflection.MemberInfo valueInfo
    static void _set_valueInfo(System::Reflection::MemberInfo* value);
    // System.Void .ctor(System.Array arrayObj, System.Int32[] indexMap)
    // Offset: 0x12F8408
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueFixup* New_ctor(System::Array* arrayObj, ::Array<int>* indexMap) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::ValueFixup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueFixup*, creationType>(arrayObj, indexMap)));
    }
    // System.Void .ctor(System.Object memberObject, System.String memberName, System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo)
    // Offset: 0x12F8B6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueFixup* New_ctor(::Il2CppObject* memberObject, ::Il2CppString* memberName, System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::ValueFixup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueFixup*, creationType>(memberObject, memberName, objectInfo)));
    }
    // System.Void Fixup(System.Runtime.Serialization.Formatters.Binary.ParseRecord record, System.Runtime.Serialization.Formatters.Binary.ParseRecord parent)
    // Offset: 0x12F7838
    void Fixup(System::Runtime::Serialization::Formatters::Binary::ParseRecord* record, System::Runtime::Serialization::Formatters::Binary::ParseRecord* parent);
  }; // System.Runtime.Serialization.Formatters.Binary.ValueFixup
  static check_size<sizeof(ValueFixup), 64 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_Formatters_Binary_ValueFixupSizeCheck;
  static_assert(sizeof(ValueFixup) == 0x48);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ValueFixup*, "System.Runtime.Serialization.Formatters.Binary", "ValueFixup");
