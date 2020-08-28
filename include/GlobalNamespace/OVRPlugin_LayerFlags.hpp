// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/LayerFlags
  struct OVRPlugin::LayerFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: LayerFlags
    constexpr LayerFlags(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public OVRPlugin/LayerFlags Static
    static constexpr const int Static = 1;
    // Get static field: static public OVRPlugin/LayerFlags Static
    static GlobalNamespace::OVRPlugin::LayerFlags _get_Static();
    // Set static field: static public OVRPlugin/LayerFlags Static
    static void _set_Static(GlobalNamespace::OVRPlugin::LayerFlags value);
    // static field const value: static public OVRPlugin/LayerFlags LoadingScreen
    static constexpr const int LoadingScreen = 2;
    // Get static field: static public OVRPlugin/LayerFlags LoadingScreen
    static GlobalNamespace::OVRPlugin::LayerFlags _get_LoadingScreen();
    // Set static field: static public OVRPlugin/LayerFlags LoadingScreen
    static void _set_LoadingScreen(GlobalNamespace::OVRPlugin::LayerFlags value);
    // static field const value: static public OVRPlugin/LayerFlags SymmetricFov
    static constexpr const int SymmetricFov = 4;
    // Get static field: static public OVRPlugin/LayerFlags SymmetricFov
    static GlobalNamespace::OVRPlugin::LayerFlags _get_SymmetricFov();
    // Set static field: static public OVRPlugin/LayerFlags SymmetricFov
    static void _set_SymmetricFov(GlobalNamespace::OVRPlugin::LayerFlags value);
    // static field const value: static public OVRPlugin/LayerFlags TextureOriginAtBottomLeft
    static constexpr const int TextureOriginAtBottomLeft = 8;
    // Get static field: static public OVRPlugin/LayerFlags TextureOriginAtBottomLeft
    static GlobalNamespace::OVRPlugin::LayerFlags _get_TextureOriginAtBottomLeft();
    // Set static field: static public OVRPlugin/LayerFlags TextureOriginAtBottomLeft
    static void _set_TextureOriginAtBottomLeft(GlobalNamespace::OVRPlugin::LayerFlags value);
    // static field const value: static public OVRPlugin/LayerFlags ChromaticAberrationCorrection
    static constexpr const int ChromaticAberrationCorrection = 16;
    // Get static field: static public OVRPlugin/LayerFlags ChromaticAberrationCorrection
    static GlobalNamespace::OVRPlugin::LayerFlags _get_ChromaticAberrationCorrection();
    // Set static field: static public OVRPlugin/LayerFlags ChromaticAberrationCorrection
    static void _set_ChromaticAberrationCorrection(GlobalNamespace::OVRPlugin::LayerFlags value);
    // static field const value: static public OVRPlugin/LayerFlags NoAllocation
    static constexpr const int NoAllocation = 32;
    // Get static field: static public OVRPlugin/LayerFlags NoAllocation
    static GlobalNamespace::OVRPlugin::LayerFlags _get_NoAllocation();
    // Set static field: static public OVRPlugin/LayerFlags NoAllocation
    static void _set_NoAllocation(GlobalNamespace::OVRPlugin::LayerFlags value);
    // static field const value: static public OVRPlugin/LayerFlags ProtectedContent
    static constexpr const int ProtectedContent = 64;
    // Get static field: static public OVRPlugin/LayerFlags ProtectedContent
    static GlobalNamespace::OVRPlugin::LayerFlags _get_ProtectedContent();
    // Set static field: static public OVRPlugin/LayerFlags ProtectedContent
    static void _set_ProtectedContent(GlobalNamespace::OVRPlugin::LayerFlags value);
    // static field const value: static public OVRPlugin/LayerFlags AndroidSurfaceSwapChain
    static constexpr const int AndroidSurfaceSwapChain = 128;
    // Get static field: static public OVRPlugin/LayerFlags AndroidSurfaceSwapChain
    static GlobalNamespace::OVRPlugin::LayerFlags _get_AndroidSurfaceSwapChain();
    // Set static field: static public OVRPlugin/LayerFlags AndroidSurfaceSwapChain
    static void _set_AndroidSurfaceSwapChain(GlobalNamespace::OVRPlugin::LayerFlags value);
  }; // OVRPlugin/LayerFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::LayerFlags, "", "OVRPlugin/LayerFlags");
#pragma pack(pop)
