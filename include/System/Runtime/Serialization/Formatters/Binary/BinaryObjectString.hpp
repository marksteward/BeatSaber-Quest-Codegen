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
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
  class BinaryObjectString : public ::Il2CppObject {
    public:
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x10
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectId and: value
    char __padding0[0x4] = {};
    // System.String value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: BinaryObjectString
    BinaryObjectString(int objectId_ = {}, ::Il2CppString* value_ = {}) noexcept : objectId{objectId_}, value{value_} {}
    // System.Void Set(System.Int32 objectId, System.String value)
    // Offset: 0x146BD90
    void Set(int objectId, ::Il2CppString* value);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x146BD9C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x146BDF0
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x146BE50
    void Dump();
    // System.Void .ctor()
    // Offset: 0x146BD88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectString* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectString*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
  #pragma pack(pop)
  static check_size<sizeof(BinaryObjectString), 24 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_Formatters_Binary_BinaryObjectStringSizeCheck;
  static_assert(sizeof(BinaryObjectString) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectString");
