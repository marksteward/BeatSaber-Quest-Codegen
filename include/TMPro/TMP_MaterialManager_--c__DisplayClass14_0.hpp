// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_MaterialManager/<>c__DisplayClass14_0
  // [CompilerGeneratedAttribute] Offset: DD59F4
  class TMP_MaterialManager::$$c__DisplayClass14_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.Material baseMaterial
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Material* baseMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass14_0
    $$c__DisplayClass14_0(UnityEngine::Material* baseMaterial_ = {}) noexcept : baseMaterial{baseMaterial_} {}
    // Creating conversion operator: operator UnityEngine::Material*
    constexpr operator UnityEngine::Material*() const noexcept {
      return baseMaterial;
    }
    // System.Boolean <ReleaseBaseMaterial>b__0(TMPro.TMP_MaterialManager/MaskingMaterial item)
    // Offset: 0x116B20C
    bool $ReleaseBaseMaterial$b__0(TMPro::TMP_MaterialManager::MaskingMaterial* item);
    // public System.Void .ctor()
    // Offset: 0x1169DCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_MaterialManager::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_MaterialManager::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_MaterialManager::$$c__DisplayClass14_0*, creationType>()));
    }
  }; // TMPro.TMP_MaterialManager/<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(TMP_MaterialManager::$$c__DisplayClass14_0), 16 + sizeof(UnityEngine::Material*)> __TMPro_TMP_MaterialManager_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(TMP_MaterialManager::$$c__DisplayClass14_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_MaterialManager::$$c__DisplayClass14_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass14_0");
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::$$c__DisplayClass14_0::$ReleaseBaseMaterial$b__0
// Il2CppName: <ReleaseBaseMaterial>b__0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
