// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelSearchViewController
#include "GlobalNamespace/LevelSearchViewController.hpp"
// Including type: IAnnotatedBeatmapLevelCollection
#include "GlobalNamespace/IAnnotatedBeatmapLevelCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LevelSearchViewController/BeatmapLevelPackCollection
  class LevelSearchViewController::BeatmapLevelPackCollection : public ::Il2CppObject/*, public GlobalNamespace::IAnnotatedBeatmapLevelCollection*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE2A61C
    // private IBeatmapLevelCollection <beatmapLevelCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelCollection*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelPackCollection
    BeatmapLevelPackCollection(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection_ = {}) noexcept : beatmapLevelCollection{beatmapLevelCollection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IAnnotatedBeatmapLevelCollection
    operator GlobalNamespace::IAnnotatedBeatmapLevelCollection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IBeatmapLevelCollection*
    constexpr operator GlobalNamespace::IBeatmapLevelCollection*() const noexcept {
      return beatmapLevelCollection;
    }
    // public System.String get_collectionName()
    // Offset: 0x11FF87C
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x11FF884
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x11FF88C
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // private System.Void set_beatmapLevelCollection(IBeatmapLevelCollection value)
    // Offset: 0x11FF894
    void set_beatmapLevelCollection(GlobalNamespace::IBeatmapLevelCollection* value);
    // public System.Void .ctor(IBeatmapLevelCollection beatmapLevelCollection)
    // Offset: 0x11FF844
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelSearchViewController::BeatmapLevelPackCollection* New_ctor(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelSearchViewController::BeatmapLevelPackCollection*, creationType>(beatmapLevelCollection)));
    }
  }; // LevelSearchViewController/BeatmapLevelPackCollection
  #pragma pack(pop)
  static check_size<sizeof(LevelSearchViewController::BeatmapLevelPackCollection), 16 + sizeof(GlobalNamespace::IBeatmapLevelCollection*)> __GlobalNamespace_LevelSearchViewController_BeatmapLevelPackCollectionSizeCheck;
  static_assert(sizeof(LevelSearchViewController::BeatmapLevelPackCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection*, "", "LevelSearchViewController/BeatmapLevelPackCollection");
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::get_collectionName
// Il2CppName: get_collectionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::*)()>(&GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::get_collectionName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection*), "get_collectionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::get_coverImage
// Il2CppName: get_coverImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::*)()>(&GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::get_coverImage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection*), "get_coverImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::get_beatmapLevelCollection
// Il2CppName: get_beatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelCollection* (GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::*)()>(&GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::get_beatmapLevelCollection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection*), "get_beatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::set_beatmapLevelCollection
// Il2CppName: set_beatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::*)(GlobalNamespace::IBeatmapLevelCollection*)>(&GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::set_beatmapLevelCollection)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection*), "set_beatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
