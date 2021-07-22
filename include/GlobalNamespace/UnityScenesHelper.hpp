// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityScenesHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityScenesHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UnityScenesHelper
    UnityScenesHelper() noexcept {}
    // static public System.Void SetActiveRootObjectsInScene(UnityEngine.SceneManagement.Scene scene, System.Boolean active)
    // Offset: 0x235C404
    static void SetActiveRootObjectsInScene(UnityEngine::SceneManagement::Scene scene, bool active);
  }; // UnityScenesHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityScenesHelper*, "", "UnityScenesHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene
// Il2CppName: SetActiveRootObjectsInScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::SceneManagement::Scene, bool)>(&GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnityScenesHelper*), "SetActiveRootObjectsInScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, active});
  }
};
