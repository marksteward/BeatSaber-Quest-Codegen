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
    // [SpaceAttribute] Offset: 0xE199AC
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
    // protected System.Void Awake()
    // Offset: 0x11DF318
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11DF4FC
    void OnDestroy();
    // private System.Void UpdateScale(System.Single progress)
    // Offset: 0x11DF3B4
    void UpdateScale(float progress);
    // private System.Void HandleObstacleControllerDidUpdateProgress(ObstacleController obstacleController, System.Single time)
    // Offset: 0x11DF61C
    void HandleObstacleControllerDidUpdateProgress(GlobalNamespace::ObstacleController* obstacleController, float time);
    // private System.Void HandleObstacleControllerDidInit(ObstacleControllerBase obstacleController)
    // Offset: 0x11DF6C0
    void HandleObstacleControllerDidInit(GlobalNamespace::ObstacleControllerBase* obstacleController);
    // public System.Void .ctor()
    // Offset: 0x11DF794
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
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::UpdateScale
// Il2CppName: UpdateScale
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidUpdateProgress
// Il2CppName: HandleObstacleControllerDidUpdateProgress
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidInit
// Il2CppName: HandleObstacleControllerDidInit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleScaleUp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
