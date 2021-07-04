// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PS4LevelProductsModelSO
#include "GlobalNamespace/PS4LevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PS4LevelProductsModelSO/LevelProductData
  class PS4LevelProductsModelSO::LevelProductData : public ::Il2CppObject {
    public:
    // private System.String _entitlementLabel
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* entitlementLabel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _productLabel
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* productLabel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _levelId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LevelProductData
    LevelProductData(::Il2CppString* entitlementLabel_ = {}, ::Il2CppString* productLabel_ = {}, ::Il2CppString* levelId_ = {}) noexcept : entitlementLabel{entitlementLabel_}, productLabel{productLabel_}, levelId{levelId_} {}
    // public System.String get_entitlementLabel()
    // Offset: 0x104A848
    ::Il2CppString* get_entitlementLabel();
    // public System.String get_productLabel()
    // Offset: 0x104A850
    ::Il2CppString* get_productLabel();
    // public System.String get_levelId()
    // Offset: 0x104A858
    ::Il2CppString* get_levelId();
    // public System.Void .ctor()
    // Offset: 0x104A860
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4LevelProductsModelSO::LevelProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4LevelProductsModelSO::LevelProductData*, creationType>()));
    }
  }; // PS4LevelProductsModelSO/LevelProductData
  #pragma pack(pop)
  static check_size<sizeof(PS4LevelProductsModelSO::LevelProductData), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_PS4LevelProductsModelSO_LevelProductDataSizeCheck;
  static_assert(sizeof(PS4LevelProductsModelSO::LevelProductData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*, "", "PS4LevelProductsModelSO/LevelProductData");
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::get_entitlementLabel
// Il2CppName: get_entitlementLabel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::get_productLabel
// Il2CppName: get_productLabel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::get_levelId
// Il2CppName: get_levelId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
