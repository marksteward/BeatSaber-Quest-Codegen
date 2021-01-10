// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_MaterialManager
#include "TMPro/TMP_MaterialManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  // Autogenerated type: TMPro.TMP_MaterialManager/<>c__DisplayClass13_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D8B440
  class TMP_MaterialManager::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.Material stencilMaterial
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Material* stencilMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass13_0
    $$c__DisplayClass13_0(UnityEngine::Material* stencilMaterial_ = {}) noexcept : stencilMaterial{stencilMaterial_} {}
    // Creating conversion operator: operator UnityEngine::Material*
    constexpr operator UnityEngine::Material*() const noexcept {
      return stencilMaterial;
    }
    // System.Boolean <RemoveStencilMaterial>b__0(TMPro.TMP_MaterialManager/MaskingMaterial item)
    // Offset: 0xF86308
    bool $RemoveStencilMaterial$b__0(TMPro::TMP_MaterialManager::MaskingMaterial* item);
    // public System.Void .ctor()
    // Offset: 0xF84814
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_MaterialManager::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_MaterialManager::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_MaterialManager::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // TMPro.TMP_MaterialManager/<>c__DisplayClass13_0
  static check_size<sizeof(TMP_MaterialManager::$$c__DisplayClass13_0), 16 + sizeof(UnityEngine::Material*)> __TMPro_TMP_MaterialManager_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(TMP_MaterialManager::$$c__DisplayClass13_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_MaterialManager::$$c__DisplayClass13_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass13_0");
#pragma pack(pop)
