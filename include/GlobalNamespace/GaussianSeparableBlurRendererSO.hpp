// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GaussianSeparableBlurRendererSO
  class GaussianSeparableBlurRendererSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Creating value type constructor for type: GaussianSeparableBlurRendererSO
    GaussianSeparableBlurRendererSO() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1D1082C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GaussianSeparableBlurRendererSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GaussianSeparableBlurRendererSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GaussianSeparableBlurRendererSO*, creationType>()));
    }
  }; // GaussianSeparableBlurRendererSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GaussianSeparableBlurRendererSO*, "", "GaussianSeparableBlurRendererSO");
