// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: System.ComponentModel.Int32Converter
  // [] Offset: FFFFFFFF
  class Int32Converter : public System::ComponentModel::BaseNumberConverter {
    public:
    // Creating value type constructor for type: Int32Converter
    Int32Converter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1481AEC
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Void BaseNumberConverter::.ctor()
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Int32Converter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::Int32Converter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Int32Converter*, creationType>()));
    }
  }; // System.ComponentModel.Int32Converter
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Int32Converter*, "System.ComponentModel", "Int32Converter");
#pragma pack(pop)
