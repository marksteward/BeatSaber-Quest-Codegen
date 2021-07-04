// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusMRCManager
  class OculusMRCManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ExternalCamerasManager
  class ExternalCamerasManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ExternalCamerasManager::InitData
    class InitData;
    // private OculusMRCManager _oculusMRCManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OculusMRCManager* oculusMRCManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusMRCManager*) == 0x8);
    // private UnityEngine.Camera _mrcBackgroundCameraPrefab
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* mrcBackgroundCameraPrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Camera _mrcForegroundCameraPrefab
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Camera* mrcForegroundCameraPrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // Creating value type constructor for type: ExternalCamerasManager
    ExternalCamerasManager(GlobalNamespace::OculusMRCManager* oculusMRCManager_ = {}, UnityEngine::Camera* mrcBackgroundCameraPrefab_ = {}, UnityEngine::Camera* mrcForegroundCameraPrefab_ = {}) noexcept : oculusMRCManager{oculusMRCManager_}, mrcBackgroundCameraPrefab{mrcBackgroundCameraPrefab_}, mrcForegroundCameraPrefab{mrcForegroundCameraPrefab_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Init(ExternalCamerasManager/InitData initData)
    // Offset: 0x235EA5C
    void Init(GlobalNamespace::ExternalCamerasManager::InitData* initData);
    // private UnityEngine.GameObject InstantiateMixedRealityBackgroundCameraGameObject(UnityEngine.GameObject mainCameraGameObject)
    // Offset: 0x235EB44
    UnityEngine::GameObject* InstantiateMixedRealityBackgroundCameraGameObject(UnityEngine::GameObject* mainCameraGameObject);
    // private UnityEngine.GameObject InstantiateMixedRealityForegroundCameraGameObject(UnityEngine.GameObject mainCameraGameObject)
    // Offset: 0x235EBC8
    UnityEngine::GameObject* InstantiateMixedRealityForegroundCameraGameObject(UnityEngine::GameObject* mainCameraGameObject);
    // public System.Void .ctor()
    // Offset: 0x235EC4C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalCamerasManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExternalCamerasManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalCamerasManager*, creationType>()));
    }
  }; // ExternalCamerasManager
  #pragma pack(pop)
  static check_size<sizeof(ExternalCamerasManager), 40 + sizeof(UnityEngine::Camera*)> __GlobalNamespace_ExternalCamerasManagerSizeCheck;
  static_assert(sizeof(ExternalCamerasManager) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExternalCamerasManager*, "", "ExternalCamerasManager");
// Writing MetadataGetter for method: GlobalNamespace::ExternalCamerasManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ExternalCamerasManager::*)(GlobalNamespace::ExternalCamerasManager::InitData*)>(&GlobalNamespace::ExternalCamerasManager::Init)> {
  const MethodInfo* get() {
    static auto* initData = &::il2cpp_utils::GetClassFromName("", "ExternalCamerasManager/InitData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExternalCamerasManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject
// Il2CppName: InstantiateMixedRealityBackgroundCameraGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::ExternalCamerasManager::*)(UnityEngine::GameObject*)>(&GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject)> {
  const MethodInfo* get() {
    static auto* mainCameraGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExternalCamerasManager*), "InstantiateMixedRealityBackgroundCameraGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainCameraGameObject});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject
// Il2CppName: InstantiateMixedRealityForegroundCameraGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::ExternalCamerasManager::*)(UnityEngine::GameObject*)>(&GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject)> {
  const MethodInfo* get() {
    static auto* mainCameraGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExternalCamerasManager*), "InstantiateMixedRealityForegroundCameraGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainCameraGameObject});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExternalCamerasManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
