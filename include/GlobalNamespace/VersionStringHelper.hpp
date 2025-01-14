// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VersionStringHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class VersionStringHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: VersionStringHelper
    VersionStringHelper() noexcept {}
    // static public System.Int32 GetMajorVersionNumber(System.String versionString)
    // Offset: 0x1DE65B8
    static int GetMajorVersionNumber(::Il2CppString* versionString);
  }; // VersionStringHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VersionStringHelper*, "", "VersionStringHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VersionStringHelper::GetMajorVersionNumber
// Il2CppName: GetMajorVersionNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&GlobalNamespace::VersionStringHelper::GetMajorVersionNumber)> {
  static const MethodInfo* get() {
    static auto* versionString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VersionStringHelper*), "GetMajorVersionNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{versionString});
  }
};
