// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/Media
#include "GlobalNamespace/OVRPlugin_Media.hpp"
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
  // Autogenerated type: OVRPlugin/OVRP_1_57_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_57_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_57_0
    OVRP_1_57_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x15F58EC
    static void _cctor();
    // static public OVRPlugin/Result ovrp_Media_GetPlatformCameraMode(out OVRPlugin/Media/PlatformCameraMode platformCameraMode)
    // Offset: 0x15EC33C
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetPlatformCameraMode(GlobalNamespace::OVRPlugin::Media::PlatformCameraMode& platformCameraMode);
    // static public OVRPlugin/Result ovrp_Media_SetPlatformCameraMode(OVRPlugin/Media/PlatformCameraMode platformCameraMode)
    // Offset: 0x15EC4C4
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetPlatformCameraMode(GlobalNamespace::OVRPlugin::Media::PlatformCameraMode platformCameraMode);
    // static public OVRPlugin/Result ovrp_SetEyeFovPremultipliedAlphaMode(OVRPlugin/Bool enabled)
    // Offset: 0x15F575C
    static GlobalNamespace::OVRPlugin::Result ovrp_SetEyeFovPremultipliedAlphaMode(GlobalNamespace::OVRPlugin::Bool enabled);
    // static public OVRPlugin/Result ovrp_GetEyeFovPremultipliedAlphaMode(ref OVRPlugin/Bool enabled)
    // Offset: 0x15F57DC
    static GlobalNamespace::OVRPlugin::Result ovrp_GetEyeFovPremultipliedAlphaMode(GlobalNamespace::OVRPlugin::Bool& enabled);
    // static public OVRPlugin/Result ovrp_SetKeyboardOverlayUV(OVRPlugin/Vector2f uv)
    // Offset: 0x15F585C
    static GlobalNamespace::OVRPlugin::Result ovrp_SetKeyboardOverlayUV(GlobalNamespace::OVRPlugin::Vector2f uv);
  }; // OVRPlugin/OVRP_1_57_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_57_0*, "", "OVRPlugin/OVRP_1_57_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_57_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_57_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_57_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_Media_GetPlatformCameraMode
// Il2CppName: ovrp_Media_GetPlatformCameraMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Media::PlatformCameraMode&)>(&GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_Media_GetPlatformCameraMode)> {
  static const MethodInfo* get() {
    static auto* platformCameraMode = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Media/PlatformCameraMode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_57_0*), "ovrp_Media_GetPlatformCameraMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{platformCameraMode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_Media_SetPlatformCameraMode
// Il2CppName: ovrp_Media_SetPlatformCameraMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Media::PlatformCameraMode)>(&GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_Media_SetPlatformCameraMode)> {
  static const MethodInfo* get() {
    static auto* platformCameraMode = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Media/PlatformCameraMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_57_0*), "ovrp_Media_SetPlatformCameraMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{platformCameraMode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_SetEyeFovPremultipliedAlphaMode
// Il2CppName: ovrp_SetEyeFovPremultipliedAlphaMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_SetEyeFovPremultipliedAlphaMode)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_57_0*), "ovrp_SetEyeFovPremultipliedAlphaMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_GetEyeFovPremultipliedAlphaMode
// Il2CppName: ovrp_GetEyeFovPremultipliedAlphaMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Bool&)>(&GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_GetEyeFovPremultipliedAlphaMode)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_57_0*), "ovrp_GetEyeFovPremultipliedAlphaMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_SetKeyboardOverlayUV
// Il2CppName: ovrp_SetKeyboardOverlayUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Vector2f)>(&GlobalNamespace::OVRPlugin::OVRP_1_57_0::ovrp_SetKeyboardOverlayUV)> {
  static const MethodInfo* get() {
    static auto* uv = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector2f")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_57_0*), "ovrp_SetKeyboardOverlayUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uv});
  }
};
