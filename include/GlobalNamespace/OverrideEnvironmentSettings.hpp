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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OverrideEnvironmentSettings
  // [] Offset: FFFFFFFF
  class OverrideEnvironmentSettings : public ::Il2CppObject {
    public:
    // public System.Boolean overrideEnvironments
    // Size: 0x1
    // Offset: 0x10
    bool overrideEnvironments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideEnvironments and: data
    char __padding0[0x7] = {};
    // private System.Collections.Generic.Dictionary`2<EnvironmentTypeSO,EnvironmentInfoSO> _data
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO*, GlobalNamespace::EnvironmentInfoSO*>* data;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO*, GlobalNamespace::EnvironmentInfoSO*>*) == 0x8);
    // Creating value type constructor for type: OverrideEnvironmentSettings
    OverrideEnvironmentSettings(bool overrideEnvironments_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO*, GlobalNamespace::EnvironmentInfoSO*>* data_ = {}) noexcept : overrideEnvironments{overrideEnvironments_}, data{data_} {}
    // public System.Void SetEnvironmentInfoForType(EnvironmentTypeSO environmentType, EnvironmentInfoSO environmentInfo)
    // Offset: 0xF01138
    void SetEnvironmentInfoForType(GlobalNamespace::EnvironmentTypeSO* environmentType, GlobalNamespace::EnvironmentInfoSO* environmentInfo);
    // public EnvironmentInfoSO GetOverrideEnvironmentInfoForType(EnvironmentTypeSO environmentType)
    // Offset: 0xF011A8
    GlobalNamespace::EnvironmentInfoSO* GetOverrideEnvironmentInfoForType(GlobalNamespace::EnvironmentTypeSO* environmentType);
    // public System.Void .ctor()
    // Offset: 0xF01228
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverrideEnvironmentSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OverrideEnvironmentSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverrideEnvironmentSettings*, creationType>()));
    }
  }; // OverrideEnvironmentSettings
  static check_size<sizeof(OverrideEnvironmentSettings), 24 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO*, GlobalNamespace::EnvironmentInfoSO*>*)> __GlobalNamespace_OverrideEnvironmentSettingsSizeCheck;
  static_assert(sizeof(OverrideEnvironmentSettings) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OverrideEnvironmentSettings*, "", "OverrideEnvironmentSettings");
