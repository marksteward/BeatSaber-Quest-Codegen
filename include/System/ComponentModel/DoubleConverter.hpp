// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.BaseNumberConverter
#include "System/ComponentModel/BaseNumberConverter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DoubleConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class DoubleConverter : public System::ComponentModel::BaseNumberConverter {
    public:
    // Creating value type constructor for type: DoubleConverter
    DoubleConverter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1848C54
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Void BaseNumberConverter::.ctor()
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DoubleConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DoubleConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DoubleConverter*, creationType>()));
    }
  }; // System.ComponentModel.DoubleConverter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DoubleConverter*, "System.ComponentModel", "DoubleConverter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DoubleConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
