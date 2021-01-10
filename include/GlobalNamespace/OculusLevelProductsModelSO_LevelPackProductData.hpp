// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusLevelProductsModelSO
#include "GlobalNamespace/OculusLevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: OculusLevelProductsModelSO/LevelPackProductData
  // [] Offset: FFFFFFFF
  class OculusLevelProductsModelSO::LevelPackProductData : public ::Il2CppObject {
    public:
    // private System.String _sku
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* sku;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _levelPackId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelPackId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private OculusLevelProductsModelSO/LevelProductData[] _levelProductsData
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* levelProductsData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>*) == 0x8);
    // Creating value type constructor for type: LevelPackProductData
    LevelPackProductData(::Il2CppString* sku_ = {}, ::Il2CppString* levelPackId_ = {}, ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* levelProductsData_ = {}) noexcept : sku{sku_}, levelPackId{levelPackId_}, levelProductsData{levelProductsData_} {}
    // public System.String get_sku()
    // Offset: 0x100AD38
    ::Il2CppString* get_sku();
    // public System.String get_levelPackId()
    // Offset: 0x100AD40
    ::Il2CppString* get_levelPackId();
    // public OculusLevelProductsModelSO/LevelProductData[] get_levelProductsData()
    // Offset: 0x100AD48
    ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* get_levelProductsData();
    // public System.Void .ctor()
    // Offset: 0x100AD50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusLevelProductsModelSO::LevelPackProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusLevelProductsModelSO::LevelPackProductData*, creationType>()));
    }
  }; // OculusLevelProductsModelSO/LevelPackProductData
  static check_size<sizeof(OculusLevelProductsModelSO::LevelPackProductData), 32 + sizeof(::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>*)> __GlobalNamespace_OculusLevelProductsModelSO_LevelPackProductDataSizeCheck;
  static_assert(sizeof(OculusLevelProductsModelSO::LevelPackProductData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*, "", "OculusLevelProductsModelSO/LevelPackProductData");
#pragma pack(pop)
