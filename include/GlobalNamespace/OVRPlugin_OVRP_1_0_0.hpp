// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_0_0
  class OVRPlugin::OVRP_1_0_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_0_0
    OVRP_1_0_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/TrackingOrigin ovrp_GetTrackingOriginType()
    // Offset: 0x161D4B4
    static GlobalNamespace::OVRPlugin::TrackingOrigin ovrp_GetTrackingOriginType();
    // static public OVRPlugin/Bool ovrp_SetTrackingOriginType(OVRPlugin/TrackingOrigin originType)
    // Offset: 0x161D528
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingOriginType(GlobalNamespace::OVRPlugin::TrackingOrigin originType);
    // static public OVRPlugin/Posef ovrp_GetTrackingCalibratedOrigin()
    // Offset: 0x161D5A8
    static GlobalNamespace::OVRPlugin::Posef ovrp_GetTrackingCalibratedOrigin();
    // static public OVRPlugin/Bool ovrp_RecenterTrackingOrigin(System.UInt32 flags)
    // Offset: 0x161D620
    static GlobalNamespace::OVRPlugin::Bool ovrp_RecenterTrackingOrigin(uint flags);
    // static private System.Void .cctor()
    // Offset: 0x161D6A0
    static void _cctor();
  }; // OVRPlugin/OVRP_1_0_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_0_0*, "", "OVRPlugin/OVRP_1_0_0");
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_GetTrackingOriginType
// Il2CppName: ovrp_GetTrackingOriginType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_SetTrackingOriginType
// Il2CppName: ovrp_SetTrackingOriginType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_GetTrackingCalibratedOrigin
// Il2CppName: ovrp_GetTrackingCalibratedOrigin
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_RecenterTrackingOrigin
// Il2CppName: ovrp_RecenterTrackingOrigin
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
