// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.UnityUtil/<>c
  // [CompilerGeneratedAttribute] Offset: DDD59C
  class UnityUtil::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly ModestTree.Util.UnityUtil/<>c <>9
    static ModestTree::Util::UnityUtil::$$c* _get_$$9();
    // Set static field: static public readonly ModestTree.Util.UnityUtil/<>c <>9
    static void _set_$$9(ModestTree::Util::UnityUtil::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean> <>9__3_0
    static System::Func_2<UnityEngine::SceneManagement::Scene, bool>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::SceneManagement::Scene, bool>* value);
    // Get static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__15_0
    static System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* _get_$$9__15_0();
    // Set static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__15_0
    static void _set_$$9__15_0(System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* value);
    // Get static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__18_0
    static System::Func_2<UnityEngine::Component*, int>* _get_$$9__18_0();
    // Set static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__18_0
    static void _set_$$9__18_0(System::Func_2<UnityEngine::Component*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__19_0
    static System::Func_2<UnityEngine::Component*, int>* _get_$$9__19_0();
    // Set static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__19_0
    static void _set_$$9__19_0(System::Func_2<UnityEngine::Component*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__22_0
    static System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* _get_$$9__22_0();
    // Set static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__22_0
    static void _set_$$9__22_0(System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__23_0
    static System::Func_2<UnityEngine::GameObject*, bool>* _get_$$9__23_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__23_0
    static void _set_$$9__23_0(System::Func_2<UnityEngine::GameObject*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x1385AA0
    static void _cctor();
    // System.Boolean <get_AllLoadedScenes>b__3_0(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1385B0C
    bool $get_AllLoadedScenes$b__3_0(UnityEngine::SceneManagement::Scene scene);
    // UnityEngine.GameObject <GetRootParentOrSelf>b__15_0(UnityEngine.Transform x)
    // Offset: 0x1385B38
    UnityEngine::GameObject* $GetRootParentOrSelf$b__15_0(UnityEngine::Transform* x);
    // System.Int32 <GetComponentsInChildrenTopDown>b__18_0(UnityEngine.Component x)
    // Offset: 0x1385B54
    int $GetComponentsInChildrenTopDown$b__18_0(UnityEngine::Component* x);
    // System.Int32 <GetComponentsInChildrenBottomUp>b__19_0(UnityEngine.Component x)
    // Offset: 0x1385BEC
    int $GetComponentsInChildrenBottomUp$b__19_0(UnityEngine::Component* x);
    // UnityEngine.GameObject <GetAllGameObjects>b__22_0(UnityEngine.Transform x)
    // Offset: 0x1385C84
    UnityEngine::GameObject* $GetAllGameObjects$b__22_0(UnityEngine::Transform* x);
    // System.Boolean <GetAllRootGameObjects>b__23_0(UnityEngine.GameObject x)
    // Offset: 0x1385CA0
    bool $GetAllRootGameObjects$b__23_0(UnityEngine::GameObject* x);
    // public System.Void .ctor()
    // Offset: 0x1385B04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::UnityUtil::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$$c*, creationType>()));
    }
  }; // ModestTree.Util.UnityUtil/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$$c*, "ModestTree.Util", "UnityUtil/<>c");
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ModestTree::Util::UnityUtil::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$$c::$get_AllLoadedScenes$b__3_0
// Il2CppName: <get_AllLoadedScenes>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::Util::UnityUtil::$$c::*)(UnityEngine::SceneManagement::Scene)>(&ModestTree::Util::UnityUtil::$$c::$get_AllLoadedScenes$b__3_0)> {
  const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$$c*), "<get_AllLoadedScenes>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$$c::$GetRootParentOrSelf$b__15_0
// Il2CppName: <GetRootParentOrSelf>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (ModestTree::Util::UnityUtil::$$c::*)(UnityEngine::Transform*)>(&ModestTree::Util::UnityUtil::$$c::$GetRootParentOrSelf$b__15_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$$c*), "<GetRootParentOrSelf>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$$c::$GetComponentsInChildrenTopDown$b__18_0
// Il2CppName: <GetComponentsInChildrenTopDown>b__18_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ModestTree::Util::UnityUtil::$$c::*)(UnityEngine::Component*)>(&ModestTree::Util::UnityUtil::$$c::$GetComponentsInChildrenTopDown$b__18_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$$c*), "<GetComponentsInChildrenTopDown>b__18_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$$c::$GetComponentsInChildrenBottomUp$b__19_0
// Il2CppName: <GetComponentsInChildrenBottomUp>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ModestTree::Util::UnityUtil::$$c::*)(UnityEngine::Component*)>(&ModestTree::Util::UnityUtil::$$c::$GetComponentsInChildrenBottomUp$b__19_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$$c*), "<GetComponentsInChildrenBottomUp>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$$c::$GetAllGameObjects$b__22_0
// Il2CppName: <GetAllGameObjects>b__22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (ModestTree::Util::UnityUtil::$$c::*)(UnityEngine::Transform*)>(&ModestTree::Util::UnityUtil::$$c::$GetAllGameObjects$b__22_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$$c*), "<GetAllGameObjects>b__22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$$c::$GetAllRootGameObjects$b__23_0
// Il2CppName: <GetAllRootGameObjects>b__23_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::Util::UnityUtil::$$c::*)(UnityEngine::GameObject*)>(&ModestTree::Util::UnityUtil::$$c::$GetAllRootGameObjects$b__23_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$$c*), "<GetAllRootGameObjects>b__23_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
