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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.StringConverter
  class StringConverter : public System::ComponentModel::TypeConverter {
    public:
    // Creating value type constructor for type: StringConverter
    StringConverter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1867F1C
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::StringConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringConverter*, creationType>()));
    }
  }; // System.ComponentModel.StringConverter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::StringConverter*, "System.ComponentModel", "StringConverter");
// Writing MetadataGetter for method: System::ComponentModel::StringConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
