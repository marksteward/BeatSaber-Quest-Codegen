// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IRichPresencePlatformHandler
  class IRichPresencePlatformHandler {
    public:
    // Creating value type constructor for type: IRichPresencePlatformHandler
    IRichPresencePlatformHandler() noexcept {}
    // public System.Void SetPresence(IRichPresenceData richPresenceData)
    // Offset: 0xFFFFFFFF
    void SetPresence(GlobalNamespace::IRichPresenceData* richPresenceData);
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear();
  }; // IRichPresencePlatformHandler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IRichPresencePlatformHandler*, "", "IRichPresencePlatformHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IRichPresencePlatformHandler::SetPresence
// Il2CppName: SetPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IRichPresencePlatformHandler::*)(GlobalNamespace::IRichPresenceData*)>(&GlobalNamespace::IRichPresencePlatformHandler::SetPresence)> {
  static const MethodInfo* get() {
    static auto* richPresenceData = &::il2cpp_utils::GetClassFromName("", "IRichPresenceData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRichPresencePlatformHandler*), "SetPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{richPresenceData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IRichPresencePlatformHandler::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IRichPresencePlatformHandler::*)()>(&GlobalNamespace::IRichPresencePlatformHandler::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRichPresencePlatformHandler*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
