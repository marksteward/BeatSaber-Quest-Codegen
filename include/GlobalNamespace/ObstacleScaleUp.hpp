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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: ObstacleControllerBase
  class ObstacleControllerBase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleScaleUp
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleScaleUp : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _fullScalePart
    // Size: 0x4
    // Offset: 0x18
    float fullScalePart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: fullScalePart and: targetTransform
    char __padding0[0x4] = {};
    // [SpaceAttribute] Offset: 0xE03E98
    // private UnityEngine.Transform _targetTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* targetTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private ObstacleController _obstacleController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ObstacleController* obstacleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleController*) == 0x8);
    // Creating value type constructor for type: ObstacleScaleUp
    ObstacleScaleUp(float fullScalePart_ = {}, UnityEngine::Transform* targetTransform_ = {}, GlobalNamespace::ObstacleController* obstacleController_ = {}) noexcept : fullScalePart{fullScalePart_}, targetTransform{targetTransform_}, obstacleController{obstacleController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Single _fullScalePart
    float _get__fullScalePart();
    // Set instance field: private System.Single _fullScalePart
    void _set__fullScalePart(float value);
    // Get instance field: private UnityEngine.Transform _targetTransform
    UnityEngine::Transform* _get__targetTransform();
    // Set instance field: private UnityEngine.Transform _targetTransform
    void _set__targetTransform(UnityEngine::Transform* value);
    // Get instance field: private ObstacleController _obstacleController
    GlobalNamespace::ObstacleController* _get__obstacleController();
    // Set instance field: private ObstacleController _obstacleController
    void _set__obstacleController(GlobalNamespace::ObstacleController* value);
    // protected System.Void Awake()
    // Offset: 0x11EBCAC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11EBE90
    void OnDestroy();
    // private System.Void UpdateScale(System.Single progress)
    // Offset: 0x11EBD48
    void UpdateScale(float progress);
    // private System.Void HandleObstacleControllerDidUpdateProgress(ObstacleController obstacleController, System.Single time)
    // Offset: 0x11EBFB0
    void HandleObstacleControllerDidUpdateProgress(GlobalNamespace::ObstacleController* obstacleController, float time);
    // private System.Void HandleObstacleControllerDidInit(ObstacleControllerBase obstacleController)
    // Offset: 0x11EC054
    void HandleObstacleControllerDidInit(GlobalNamespace::ObstacleControllerBase* obstacleController);
    // public System.Void .ctor()
    // Offset: 0x11EC128
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleScaleUp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleScaleUp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleScaleUp*, creationType>()));
    }
  }; // ObstacleScaleUp
  #pragma pack(pop)
  static check_size<sizeof(ObstacleScaleUp), 40 + sizeof(GlobalNamespace::ObstacleController*)> __GlobalNamespace_ObstacleScaleUpSizeCheck;
  static_assert(sizeof(ObstacleScaleUp) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleScaleUp*, "", "ObstacleScaleUp");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleScaleUp::*)()>(&GlobalNamespace::ObstacleScaleUp::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleScaleUp*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleScaleUp::*)()>(&GlobalNamespace::ObstacleScaleUp::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleScaleUp*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::UpdateScale
// Il2CppName: UpdateScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleScaleUp::*)(float)>(&GlobalNamespace::ObstacleScaleUp::UpdateScale)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleScaleUp*), "UpdateScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidUpdateProgress
// Il2CppName: HandleObstacleControllerDidUpdateProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleScaleUp::*)(GlobalNamespace::ObstacleController*, float)>(&GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidUpdateProgress)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleScaleUp*), "HandleObstacleControllerDidUpdateProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidInit
// Il2CppName: HandleObstacleControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleScaleUp::*)(GlobalNamespace::ObstacleControllerBase*)>(&GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidInit)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleScaleUp*), "HandleObstacleControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
