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
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
  class MemberPrimitiveUnTyped : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE) == 0x4);
    // Padding between fields: typeInformation and: value
    char __padding0[0x4] = {};
    // System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: MemberPrimitiveUnTyped
    MemberPrimitiveUnTyped(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation_ = {}, ::Il2CppObject* value_ = {}) noexcept : typeInformation{typeInformation_}, value{value_} {}
    // System.Void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation, System.Object value)
    // Offset: 0x146E744
    void Set(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation, ::Il2CppObject* value);
    // System.Void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation)
    // Offset: 0x146E750
    void Set(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x146E758
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x146E780
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x146E7B8
    void Dump();
    // System.Void .ctor()
    // Offset: 0x146E73C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberPrimitiveUnTyped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberPrimitiveUnTyped*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
  #pragma pack(pop)
  static check_size<sizeof(MemberPrimitiveUnTyped), 24 + sizeof(::Il2CppObject*)> __System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveUnTypedSizeCheck;
  static_assert(sizeof(MemberPrimitiveUnTyped) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveUnTyped");
