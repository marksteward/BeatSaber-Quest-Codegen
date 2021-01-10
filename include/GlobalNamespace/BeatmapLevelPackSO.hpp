// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
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
  // Forward declaring type: BeatmapLevelCollectionSO
  class BeatmapLevelCollectionSO;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: BeatmapLevelPackSO
  // [] Offset: FFFFFFFF
  class BeatmapLevelPackSO : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::IBeatmapLevelPack*/ {
    public:
    // private System.String _packID
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* packID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _packName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* packName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _shortPackName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* shortPackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC30CC
    // private BeatmapLevelCollectionSO _beatmapLevelCollection
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapLevelCollectionSO* beatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelCollectionSO*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelPackSO
    BeatmapLevelPackSO(::Il2CppString* packID_ = {}, ::Il2CppString* packName_ = {}, ::Il2CppString* shortPackName_ = {}, UnityEngine::Sprite* coverImage_ = {}, GlobalNamespace::BeatmapLevelCollectionSO* beatmapLevelCollection_ = {}) noexcept : packID{packID_}, packName{packName_}, shortPackName{shortPackName_}, coverImage{coverImage_}, beatmapLevelCollection{beatmapLevelCollection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelPack
    operator GlobalNamespace::IBeatmapLevelPack() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelPack*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_packID()
    // Offset: 0x1A891C4
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packID()
    ::Il2CppString* get_packID();
    // public System.String get_packName()
    // Offset: 0x1A891CC
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packName()
    ::Il2CppString* get_packName();
    // public System.String get_shortPackName()
    // Offset: 0x1A891D4
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_shortPackName()
    ::Il2CppString* get_shortPackName();
    // public System.String get_collectionName()
    // Offset: 0x1A891DC
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: System.String IAnnotatedBeatmapLevelCollection::get_collectionName()
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x1A891E4
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: UnityEngine.Sprite IAnnotatedBeatmapLevelCollection::get_coverImage()
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x1A891EC
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: IBeatmapLevelCollection IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection()
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // public System.Void .ctor()
    // Offset: 0x1A891F4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelPackSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelPackSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelPackSO*, creationType>()));
    }
  }; // BeatmapLevelPackSO
  static check_size<sizeof(BeatmapLevelPackSO), 56 + sizeof(GlobalNamespace::BeatmapLevelCollectionSO*)> __GlobalNamespace_BeatmapLevelPackSOSizeCheck;
  static_assert(sizeof(BeatmapLevelPackSO) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackSO*, "", "BeatmapLevelPackSO");
#pragma pack(pop)
