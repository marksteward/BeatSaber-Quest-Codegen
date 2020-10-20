// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: IPlaylist
#include "GlobalNamespace/IPlaylist.hpp"
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
  // Autogenerated type: PlaylistSO
  class PlaylistSO : public UnityEngine::ScriptableObject/*, public GlobalNamespace::IPlaylist*/ {
    public:
    // private System.String _playListLocalizedName
    // Offset: 0x18
    ::Il2CppString* playListLocalizedName;
    // private UnityEngine.Sprite _coverImage
    // Offset: 0x20
    UnityEngine::Sprite* coverImage;
    // private BeatmapLevelCollectionSO _beatmapLevelCollection
    // Offset: 0x28
    GlobalNamespace::BeatmapLevelCollectionSO* beatmapLevelCollection;
    // Creating interface conversion operator: operator GlobalNamespace::IPlaylist
    operator GlobalNamespace::IPlaylist() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPlaylist*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_collectionName()
    // Offset: 0x208FB3C
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: System.String IAnnotatedBeatmapLevelCollection::get_collectionName()
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x208FB48
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: UnityEngine.Sprite IAnnotatedBeatmapLevelCollection::get_coverImage()
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x208FB50
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: IBeatmapLevelCollection IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection()
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // public System.Void .ctor()
    // Offset: 0x208FB58
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlaylistSO* New_ctor();
  }; // PlaylistSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlaylistSO*, "", "PlaylistSO");
#pragma pack(pop)
