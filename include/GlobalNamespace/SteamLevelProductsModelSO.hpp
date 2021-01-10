// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: SteamLevelProductsModelSO
  // [] Offset: FFFFFFFF
  class SteamLevelProductsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::SteamLevelProductsModelSO::LevelProductData
    class LevelProductData;
    // Nested type: GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData
    class LevelPackProductData;
    // private SteamLevelProductsModelSO/LevelPackProductData[] _levelPackProductsData
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>* levelPackProductsData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,SteamLevelProductsModelSO/LevelProductData> _levelIdToProductData
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* levelIdToProductData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,SteamLevelProductsModelSO/LevelPackProductData> _levelPackIdToProductData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>* levelPackIdToProductData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>*) == 0x8);
    // Creating value type constructor for type: SteamLevelProductsModelSO
    SteamLevelProductsModelSO(::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>* levelPackProductsData_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* levelIdToProductData_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>* levelPackIdToProductData_ = {}) noexcept : levelPackProductsData{levelPackProductsData_}, levelIdToProductData{levelIdToProductData_}, levelPackIdToProductData{levelPackIdToProductData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public SteamLevelProductsModelSO/LevelPackProductData[] get_levelPackProductsData()
    // Offset: 0xF45798
    ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>* get_levelPackProductsData();
    // public SteamLevelProductsModelSO/LevelProductData GetLevelProductData(System.String levelId)
    // Offset: 0xF458F8
    GlobalNamespace::SteamLevelProductsModelSO::LevelProductData* GetLevelProductData(::Il2CppString* levelId);
    // public SteamLevelProductsModelSO/LevelPackProductData GetLevelPackProductData(System.String levelPackId)
    // Offset: 0xF45978
    GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData* GetLevelPackProductData(::Il2CppString* levelPackId);
    // protected override System.Void OnEnable()
    // Offset: 0xF457A0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0xF459F8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamLevelProductsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamLevelProductsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamLevelProductsModelSO*, creationType>()));
    }
  }; // SteamLevelProductsModelSO
  static check_size<sizeof(SteamLevelProductsModelSO), 40 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>*)> __GlobalNamespace_SteamLevelProductsModelSOSizeCheck;
  static_assert(sizeof(SteamLevelProductsModelSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamLevelProductsModelSO*, "", "SteamLevelProductsModelSO");
#pragma pack(pop)
