// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundle
  class AssetBundle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: BeatmapLevelDataLoaderSO/<>c__DisplayClass6_1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBEEA4
  class BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.AssetBundle assetBundle
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AssetBundle* assetBundle;
    // Field size check
    static_assert(sizeof(UnityEngine::AssetBundle*) == 0x8);
    // public BeatmapLevelDataLoaderSO/<>c__DisplayClass6_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_1
    $$c__DisplayClass6_1(UnityEngine::AssetBundle* assetBundle_ = {}, GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0* CS$$$8__locals1_ = {}) noexcept : assetBundle{assetBundle_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // public System.Void .ctor()
    // Offset: 0x1A849B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1*, creationType>()));
    }
  }; // BeatmapLevelDataLoaderSO/<>c__DisplayClass6_1
  static check_size<sizeof(BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1), 24 + sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0*)> __GlobalNamespace_BeatmapLevelDataLoaderSO_$$c__DisplayClass6_1SizeCheck;
  static_assert(sizeof(BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1*, "", "BeatmapLevelDataLoaderSO/<>c__DisplayClass6_1");
#pragma pack(pop)
