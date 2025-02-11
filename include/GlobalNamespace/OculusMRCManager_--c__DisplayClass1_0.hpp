// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusMRCManager
#include "GlobalNamespace/OculusMRCManager.hpp"
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
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MrcCameraType
  struct OVRManager_MrcCameraType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusMRCManager/<>c__DisplayClass1_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusMRCManager::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject
    // Size: 0x8
    // Offset: 0x10
    System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject;
    // Field size check
    static_assert(sizeof(System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>*) == 0x8);
    // public System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject
    // Size: 0x8
    // Offset: 0x18
    System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject;
    // Field size check
    static_assert(sizeof(System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass1_0
    $$c__DisplayClass1_0(System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject_ = {}, System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject_ = {}) noexcept : instantiateMixedRealityBackgroundCameraGameObject{instantiateMixedRealityBackgroundCameraGameObject_}, instantiateMixedRealityForegroundCameraGameObject{instantiateMixedRealityForegroundCameraGameObject_} {}
    // Get instance field: public System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject
    System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* _get_instantiateMixedRealityBackgroundCameraGameObject();
    // Set instance field: public System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject
    void _set_instantiateMixedRealityBackgroundCameraGameObject(System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* value);
    // Get instance field: public System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject
    System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* _get_instantiateMixedRealityForegroundCameraGameObject();
    // Set instance field: public System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject
    void _set_instantiateMixedRealityForegroundCameraGameObject(System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* value);
    // UnityEngine.GameObject <Init>b__0(UnityEngine.GameObject mainCameraGameObject, OVRManager/MrcCameraType cameraType)
    // Offset: 0x2048D80
    UnityEngine::GameObject* $Init$b__0(UnityEngine::GameObject* mainCameraGameObject, GlobalNamespace::OVRManager_MrcCameraType cameraType);
    // public System.Void .ctor()
    // Offset: 0x2048D70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusMRCManager::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusMRCManager::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusMRCManager::$$c__DisplayClass1_0*, creationType>()));
    }
  }; // OculusMRCManager/<>c__DisplayClass1_0
  #pragma pack(pop)
  static check_size<sizeof(OculusMRCManager::$$c__DisplayClass1_0), 24 + sizeof(System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>*)> __GlobalNamespace_OculusMRCManager_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(OculusMRCManager::$$c__DisplayClass1_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusMRCManager::$$c__DisplayClass1_0*, "", "OculusMRCManager/<>c__DisplayClass1_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusMRCManager::$$c__DisplayClass1_0::$Init$b__0
// Il2CppName: <Init>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::OculusMRCManager::$$c__DisplayClass1_0::*)(UnityEngine::GameObject*, GlobalNamespace::OVRManager_MrcCameraType)>(&GlobalNamespace::OculusMRCManager::$$c__DisplayClass1_0::$Init$b__0)> {
  static const MethodInfo* get() {
    static auto* mainCameraGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* cameraType = &::il2cpp_utils::GetClassFromName("", "OVRManager/MrcCameraType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusMRCManager::$$c__DisplayClass1_0*), "<Init>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainCameraGameObject, cameraType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusMRCManager::$$c__DisplayClass1_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
