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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SceneSetupData
  class SceneSetupData : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SceneSetupData
    SceneSetupData() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1252C18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSetupData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSetupData*, creationType>()));
    }
  }; // SceneSetupData
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneSetupData*, "", "SceneSetupData");
// Writing MetadataGetter for method: GlobalNamespace::SceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
