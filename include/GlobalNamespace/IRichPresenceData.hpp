// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IRichPresenceData
  // [TokenAttribute] Offset: FFFFFFFF
  class IRichPresenceData : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IRichPresenceData
    IRichPresenceData() noexcept {}
    // public System.String get_apiName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_localizedDescription();
  }; // IRichPresenceData
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IRichPresenceData*, "", "IRichPresenceData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IRichPresenceData::get_apiName
// Il2CppName: get_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IRichPresenceData::*)()>(&GlobalNamespace::IRichPresenceData::get_apiName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRichPresenceData*), "get_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IRichPresenceData::get_localizedDescription
// Il2CppName: get_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IRichPresenceData::*)()>(&GlobalNamespace::IRichPresenceData::get_localizedDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRichPresenceData*), "get_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
