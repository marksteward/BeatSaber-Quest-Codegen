// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EulaViewController
#include "GlobalNamespace/EulaViewController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EulaViewController/InitData
  class EulaViewController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean showDoNotAgreeButton
    // Offset: 0x10
    bool showDoNotAgreeButton;
    // Creating conversion operator: operator bool
    constexpr operator bool() const {
      return showDoNotAgreeButton;
    }
    // public System.Void .ctor(System.Boolean showDoNotAgreeButton)
    // Offset: 0xBEC02C
    static EulaViewController::InitData* New_ctor(bool showDoNotAgreeButton);
  }; // EulaViewController/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EulaViewController::InitData*, "", "EulaViewController/InitData");
#pragma pack(pop)
