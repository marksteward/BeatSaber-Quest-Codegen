// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: BeatmapLevelPack
  // [] Offset: FFFFFFFF
  class BeatmapLevelPack : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelPack*/ {
    public:
    // private System.String _levelPackID
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* levelPackID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _packName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* packName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _shortPackName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* shortPackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private IBeatmapLevelCollection _beatmapLevelCollection
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelCollection*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelPack
    BeatmapLevelPack(::Il2CppString* levelPackID_ = {}, ::Il2CppString* packName_ = {}, ::Il2CppString* shortPackName_ = {}, UnityEngine::Sprite* coverImage_ = {}, GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection_ = {}) noexcept : levelPackID{levelPackID_}, packName{packName_}, shortPackName{shortPackName_}, coverImage{coverImage_}, beatmapLevelCollection{beatmapLevelCollection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelPack
    operator GlobalNamespace::IBeatmapLevelPack() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelPack*>(this);
    }
    // public System.Void .ctor(System.String levelPackID, System.String packName, System.String shortPackName, UnityEngine.Sprite coverImage, IBeatmapLevelCollection levelCollection)
    // Offset: 0x1A88C80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelPack* New_ctor(::Il2CppString* levelPackID, ::Il2CppString* packName, ::Il2CppString* shortPackName, UnityEngine::Sprite* coverImage, GlobalNamespace::IBeatmapLevelCollection* levelCollection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelPack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelPack*, creationType>(levelPackID, packName, shortPackName, coverImage, levelCollection)));
    }
    // static public BeatmapLevelPack CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering(IBeatmapLevelPack beatmapLevelPack, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1A88D14
    static GlobalNamespace::BeatmapLevelPack* CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.String get_packID()
    // Offset: 0x1A88C50
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packID()
    ::Il2CppString* get_packID();
    // public System.String get_packName()
    // Offset: 0x1A88C58
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packName()
    ::Il2CppString* get_packName();
    // public System.String get_shortPackName()
    // Offset: 0x1A88C60
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_shortPackName()
    ::Il2CppString* get_shortPackName();
    // public System.String get_collectionName()
    // Offset: 0x1A88C68
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: System.String IAnnotatedBeatmapLevelCollection::get_collectionName()
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x1A88C70
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: UnityEngine.Sprite IAnnotatedBeatmapLevelCollection::get_coverImage()
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x1A88C78
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: IBeatmapLevelCollection IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection()
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
  }; // BeatmapLevelPack
  static check_size<sizeof(BeatmapLevelPack), 48 + sizeof(GlobalNamespace::IBeatmapLevelCollection*)> __GlobalNamespace_BeatmapLevelPackSizeCheck;
  static_assert(sizeof(BeatmapLevelPack) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPack*, "", "BeatmapLevelPack");
#pragma pack(pop)
