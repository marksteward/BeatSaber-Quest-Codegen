// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.EnumConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumConverter : public System::ComponentModel::TypeConverter {
    public:
    // private System.ComponentModel.TypeConverter/System.ComponentModel.StandardValuesCollection values
    // Size: 0x8
    // Offset: 0x10
    System::ComponentModel::TypeConverter::StandardValuesCollection* values;
    // Field size check
    static_assert(sizeof(System::ComponentModel::TypeConverter::StandardValuesCollection*) == 0x8);
    // private System.Type type
    // Size: 0x8
    // Offset: 0x18
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: EnumConverter
    EnumConverter(System::ComponentModel::TypeConverter::StandardValuesCollection* values_ = {}, System::Type* type_ = {}) noexcept : values{values_}, type{type_} {}
    // Get instance field: private System.ComponentModel.TypeConverter/System.ComponentModel.StandardValuesCollection values
    System::ComponentModel::TypeConverter::StandardValuesCollection* _get_values();
    // Set instance field: private System.ComponentModel.TypeConverter/System.ComponentModel.StandardValuesCollection values
    void _set_values(System::ComponentModel::TypeConverter::StandardValuesCollection* value);
    // Get instance field: private System.Type type
    System::Type* _get_type();
    // Set instance field: private System.Type type
    void _set_type(System::Type* value);
    // public System.Void .ctor(System.Type type)
    // Offset: 0x1848D2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumConverter* New_ctor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::EnumConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumConverter*, creationType>(type)));
    }
  }; // System.ComponentModel.EnumConverter
  #pragma pack(pop)
  static check_size<sizeof(EnumConverter), 24 + sizeof(System::Type*)> __System_ComponentModel_EnumConverterSizeCheck;
  static_assert(sizeof(EnumConverter) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EnumConverter*, "System.ComponentModel", "EnumConverter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
