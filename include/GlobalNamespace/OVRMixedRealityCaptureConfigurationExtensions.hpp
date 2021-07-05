// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRMixedRealityCaptureConfiguration
  class OVRMixedRealityCaptureConfiguration;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRMixedRealityCaptureConfigurationExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class OVRMixedRealityCaptureConfigurationExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRMixedRealityCaptureConfigurationExtensions
    OVRMixedRealityCaptureConfigurationExtensions() noexcept {}
    // static public System.Void ApplyTo(OVRMixedRealityCaptureConfiguration dest, OVRMixedRealityCaptureConfiguration source)
    // Offset: 0x12EB6BC
    static void ApplyTo(GlobalNamespace::OVRMixedRealityCaptureConfiguration* dest, GlobalNamespace::OVRMixedRealityCaptureConfiguration* source);
    // static public System.Void ReadFrom(OVRMixedRealityCaptureConfiguration dest, OVRMixedRealityCaptureConfiguration source)
    // Offset: 0x12EB6C0
    static void ReadFrom(GlobalNamespace::OVRMixedRealityCaptureConfiguration* dest, GlobalNamespace::OVRMixedRealityCaptureConfiguration* source);
  }; // OVRMixedRealityCaptureConfigurationExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions*, "", "OVRMixedRealityCaptureConfigurationExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions::ApplyTo
// Il2CppName: ApplyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::OVRMixedRealityCaptureConfiguration*, GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions::ApplyTo)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("", "OVRMixedRealityCaptureConfiguration")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("", "OVRMixedRealityCaptureConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions*), "ApplyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions::ReadFrom
// Il2CppName: ReadFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::OVRMixedRealityCaptureConfiguration*, GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions::ReadFrom)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("", "OVRMixedRealityCaptureConfiguration")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("", "OVRMixedRealityCaptureConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions*), "ReadFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, source});
  }
};
