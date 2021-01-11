// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Forward declaring type: CustomBeatmapLevelCollection
  class CustomBeatmapLevelCollection;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CustomBeatmapLevelPack
  // [] Offset: FFFFFFFF
  class CustomBeatmapLevelPack : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelPack*/ {
    public:
    // private System.String _packID
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* packID;
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
    // private CustomBeatmapLevelCollection _customBeatmapLevelCollection
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::CustomBeatmapLevelCollection* customBeatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CustomBeatmapLevelCollection*) == 0x8);
    // Creating value type constructor for type: CustomBeatmapLevelPack
    CustomBeatmapLevelPack(::Il2CppString* packID_ = {}, ::Il2CppString* packName_ = {}, ::Il2CppString* shortPackName_ = {}, UnityEngine::Sprite* coverImage_ = {}, GlobalNamespace::CustomBeatmapLevelCollection* customBeatmapLevelCollection_ = {}) noexcept : packID{packID_}, packName{packName_}, shortPackName{shortPackName_}, coverImage{coverImage_}, customBeatmapLevelCollection{customBeatmapLevelCollection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelPack
    operator GlobalNamespace::IBeatmapLevelPack() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelPack*>(this);
    }
    // public System.Boolean get_isPackAlwaysOwned()
    // Offset: 0x1A566E4
    bool get_isPackAlwaysOwned();
    // public System.Void .ctor(System.String packID, System.String packName, System.String shortPackName, UnityEngine.Sprite coverImage, CustomBeatmapLevelCollection customBeatmapLevelCollection)
    // Offset: 0x1A566EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomBeatmapLevelPack* New_ctor(::Il2CppString* packID, ::Il2CppString* packName, ::Il2CppString* shortPackName, UnityEngine::Sprite* coverImage, GlobalNamespace::CustomBeatmapLevelCollection* customBeatmapLevelCollection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomBeatmapLevelPack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomBeatmapLevelPack*, creationType>(packID, packName, shortPackName, coverImage, customBeatmapLevelCollection)));
    }
    // public System.String get_packID()
    // Offset: 0x1A566B4
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packID()
    ::Il2CppString* get_packID();
    // public System.String get_packName()
    // Offset: 0x1A566BC
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packName()
    ::Il2CppString* get_packName();
    // public System.String get_shortPackName()
    // Offset: 0x1A566C4
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_shortPackName()
    ::Il2CppString* get_shortPackName();
    // public System.String get_collectionName()
    // Offset: 0x1A566CC
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: System.String IAnnotatedBeatmapLevelCollection::get_collectionName()
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x1A566D4
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: UnityEngine.Sprite IAnnotatedBeatmapLevelCollection::get_coverImage()
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x1A566DC
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: IBeatmapLevelCollection IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection()
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
  }; // CustomBeatmapLevelPack
  static check_size<sizeof(CustomBeatmapLevelPack), 48 + sizeof(GlobalNamespace::CustomBeatmapLevelCollection*)> __GlobalNamespace_CustomBeatmapLevelPackSizeCheck;
  static_assert(sizeof(CustomBeatmapLevelPack) == 0x38);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevelPack*, "", "CustomBeatmapLevelPack");
