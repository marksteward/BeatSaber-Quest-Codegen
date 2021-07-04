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
  // Forward declaring type: CenterStageScreenController
  class CenterStageScreenController;
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyCenterStageManager
  class MultiplayerLobbyCenterStageManager : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _centerObjectTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* centerObjectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [SpaceAttribute] Offset: 0xE23CBC
    // private CenterStageScreenController _centerStageScreenController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::CenterStageScreenController* centerStageScreenController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CenterStageScreenController*) == 0x8);
    // [InjectAttribute] Offset: 0xE23CF4
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyStateDataModel*) == 0x8);
    // private System.Single _innerCircleRadius
    // Size: 0x4
    // Offset: 0x30
    float innerCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minOuterCircleRadius
    // Size: 0x4
    // Offset: 0x34
    float minOuterCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MultiplayerLobbyCenterStageManager
    MultiplayerLobbyCenterStageManager(UnityEngine::Transform* centerObjectTransform_ = {}, GlobalNamespace::CenterStageScreenController* centerStageScreenController_ = {}, GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel_ = {}, float innerCircleRadius_ = {}, float minOuterCircleRadius_ = {}) noexcept : centerObjectTransform{centerObjectTransform_}, centerStageScreenController{centerStageScreenController_}, lobbyStateDataModel{lobbyStateDataModel_}, innerCircleRadius{innerCircleRadius_}, minOuterCircleRadius{minOuterCircleRadius_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init(System.Single innerCircleRadius, System.Single minOuterCircleRadius)
    // Offset: 0x1026778
    void Init(float innerCircleRadius, float minOuterCircleRadius);
    // public System.Void ActivateCenterStageManager()
    // Offset: 0x1026780
    void ActivateCenterStageManager();
    // public System.Void DeactivateCenterStageManager()
    // Offset: 0x1026904
    void DeactivateCenterStageManager();
    // private System.Void RecalculateCenterPosition()
    // Offset: 0x10267B0
    void RecalculateCenterPosition();
    // public System.Void .ctor()
    // Offset: 0x1026934
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyCenterStageManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyCenterStageManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyCenterStageManager*, creationType>()));
    }
  }; // MultiplayerLobbyCenterStageManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyCenterStageManager), 52 + sizeof(float)> __GlobalNamespace_MultiplayerLobbyCenterStageManagerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyCenterStageManager) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyCenterStageManager*, "", "MultiplayerLobbyCenterStageManager");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::ActivateCenterStageManager
// Il2CppName: ActivateCenterStageManager
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::DeactivateCenterStageManager
// Il2CppName: DeactivateCenterStageManager
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::RecalculateCenterPosition
// Il2CppName: RecalculateCenterPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
