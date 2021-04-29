// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IBeatmapLevelPackCollection
#include "GlobalNamespace/IBeatmapLevelPackCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelPackCollectionSO
  class BeatmapLevelPackCollectionSO : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::IBeatmapLevelPackCollection*/ {
    public:
    // private BeatmapLevelPackSO[] _beatmapLevelPacks
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelPackSO*>* beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelPackSO*>*) == 0x8);
    // private PreviewBeatmapLevelPackSO[] _previewBeatmapLevelPack
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::PreviewBeatmapLevelPackSO*>* previewBeatmapLevelPack;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PreviewBeatmapLevelPackSO*>*) == 0x8);
    // private IBeatmapLevelPack[] _allBeatmapLevelPacks
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* allBeatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelPackCollectionSO
    BeatmapLevelPackCollectionSO(::Array<GlobalNamespace::BeatmapLevelPackSO*>* beatmapLevelPacks_ = {}, ::Array<GlobalNamespace::PreviewBeatmapLevelPackSO*>* previewBeatmapLevelPack_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* allBeatmapLevelPacks_ = {}) noexcept : beatmapLevelPacks{beatmapLevelPacks_}, previewBeatmapLevelPack{previewBeatmapLevelPack_}, allBeatmapLevelPacks{allBeatmapLevelPacks_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelPackCollection
    operator GlobalNamespace::IBeatmapLevelPackCollection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelPackCollection*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public IBeatmapLevelPack[] get_beatmapLevelPacks()
    // Offset: 0x10B8768
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* get_beatmapLevelPacks();
    // private System.Void LoadAllBeatmapLevelPacks()
    // Offset: 0x10B8798
    void LoadAllBeatmapLevelPacks();
    // public System.Void .ctor()
    // Offset: 0x10B88EC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelPackCollectionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelPackCollectionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelPackCollectionSO*, creationType>()));
    }
  }; // BeatmapLevelPackCollectionSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelPackCollectionSO), 40 + sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*)> __GlobalNamespace_BeatmapLevelPackCollectionSOSizeCheck;
  static_assert(sizeof(BeatmapLevelPackCollectionSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackCollectionSO*, "", "BeatmapLevelPackCollectionSO");
