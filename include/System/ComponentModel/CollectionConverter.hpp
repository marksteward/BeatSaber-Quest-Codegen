// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: System.ComponentModel.CollectionConverter
  // [] Offset: FFFFFFFF
  class CollectionConverter : public System::ComponentModel::TypeConverter {
    public:
    // Creating value type constructor for type: CollectionConverter
    CollectionConverter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x147FFF0
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::CollectionConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionConverter*, creationType>()));
    }
  }; // System.ComponentModel.CollectionConverter
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::CollectionConverter*, "System.ComponentModel", "CollectionConverter");
#pragma pack(pop)
