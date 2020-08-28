// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AutomaticSFXVolume
#include "GlobalNamespace/AutomaticSFXVolume.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AutomaticSFXVolume/InitData
  class AutomaticSFXVolume::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single volumeOffset
    // Offset: 0x10
    float volumeOffset;
    // Creating conversion operator: operator float
    constexpr operator float() const {
      return volumeOffset;
    }
    // public System.Void .ctor(System.Single volumeOffset)
    // Offset: 0xB8B5E4
    static AutomaticSFXVolume::InitData* New_ctor(float volumeOffset);
  }; // AutomaticSFXVolume/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutomaticSFXVolume::InitData*, "", "AutomaticSFXVolume/InitData");
#pragma pack(pop)
