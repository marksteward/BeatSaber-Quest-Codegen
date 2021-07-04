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
  // Forward declaring type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelLoader
  class StandardLevelLoader : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StandardLevelLoader
    StandardLevelLoader() noexcept {}
    // static public StandardLevelInfoSaveData LoadStandardLevelSaveData(System.String levelInfoFilenamePath)
    // Offset: 0x1161D58
    static GlobalNamespace::StandardLevelInfoSaveData* LoadStandardLevelSaveData(::Il2CppString* levelInfoFilenamePath);
  }; // StandardLevelLoader
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelLoader*, "", "StandardLevelLoader");
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelLoader::LoadStandardLevelSaveData
// Il2CppName: LoadStandardLevelSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardLevelInfoSaveData* (*)(::Il2CppString*)>(&GlobalNamespace::StandardLevelLoader::LoadStandardLevelSaveData)> {
  const MethodInfo* get() {
    static auto* levelInfoFilenamePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelLoader*), "LoadStandardLevelSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelInfoFilenamePath});
  }
};
