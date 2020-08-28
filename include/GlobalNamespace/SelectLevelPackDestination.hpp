// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuDestination
#include "GlobalNamespace/MenuDestination.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SelectLevelPackDestination
  class SelectLevelPackDestination : public GlobalNamespace::MenuDestination {
    public:
    // public readonly IBeatmapLevelPack beatmapLevelPack
    // Offset: 0x10
    GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;
    // Creating conversion operator: operator GlobalNamespace::IBeatmapLevelPack*
    constexpr operator GlobalNamespace::IBeatmapLevelPack*() const {
      return beatmapLevelPack;
    }
    // public System.Void .ctor(IBeatmapLevelPack beatmapLevelPack)
    // Offset: 0xC2DF10
    static SelectLevelPackDestination* New_ctor(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);
  }; // SelectLevelPackDestination
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelPackDestination*, "", "SelectLevelPackDestination");
#pragma pack(pop)
