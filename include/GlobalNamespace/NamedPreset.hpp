// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NamedPreset
  class NamedPreset : public ::Il2CppObject {
    public:
    // private System.String _presetNameLocalizationKey
    // Offset: 0x10
    ::Il2CppString* presetNameLocalizationKey;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const {
      return presetNameLocalizationKey;
    }
    // public System.String get_presetNameLocalizationKey()
    // Offset: 0xC1070C
    ::Il2CppString* get_presetNameLocalizationKey();
    // public System.Void .ctor()
    // Offset: 0xC10714
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NamedPreset* New_ctor();
  }; // NamedPreset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedPreset*, "", "NamedPreset");
#pragma pack(pop)
