// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "System/Runtime/Serialization/Formatters/Binary/ObjectReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeNAssembly
  class ObjectReader::TypeNAssembly : public ::Il2CppObject {
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.String assemblyName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* assemblyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TypeNAssembly
    TypeNAssembly(System::Type* type_ = {}, ::Il2CppString* assemblyName_ = {}) noexcept : type{type_}, assemblyName{assemblyName_} {}
    // public System.Void .ctor()
    // Offset: 0x16119DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectReader::TypeNAssembly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::ObjectReader::TypeNAssembly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectReader::TypeNAssembly*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeNAssembly
  #pragma pack(pop)
  static check_size<sizeof(ObjectReader::TypeNAssembly), 24 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssemblySizeCheck;
  static_assert(sizeof(ObjectReader::TypeNAssembly) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectReader::TypeNAssembly*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TypeNAssembly");
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectReader::TypeNAssembly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
