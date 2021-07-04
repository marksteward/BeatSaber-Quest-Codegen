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
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerOffsetPositionByLocalPlayerPosition
  class MultiplayerOffsetPositionByLocalPlayerPosition : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE1E3D8
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // private UnityEngine.Vector3 _positionOffset
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 positionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _rotationOffset
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Quaternion rotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _lastParentPosition
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 lastParentPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _lastParentRotation
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Quaternion lastParentRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: MultiplayerOffsetPositionByLocalPlayerPosition
    MultiplayerOffsetPositionByLocalPlayerPosition(GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager_ = {}, UnityEngine::Vector3 positionOffset_ = {}, UnityEngine::Quaternion rotationOffset_ = {}, UnityEngine::Vector3 lastParentPosition_ = {}, UnityEngine::Quaternion lastParentRotation_ = {}) noexcept : multiplayerPlayersManager{multiplayerPlayersManager_}, positionOffset{positionOffset_}, rotationOffset{rotationOffset_}, lastParentPosition{lastParentPosition_}, lastParentRotation{lastParentRotation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1005ED0
    void Awake();
    // protected System.Void Update()
    // Offset: 0x1005F24
    void Update();
    // public System.Void SetEnabled(System.Boolean isEnabled)
    // Offset: 0x10061B0
    void SetEnabled(bool isEnabled);
    // private System.Void UpdatePositionAndRotationIfNeeded()
    // Offset: 0x1005F28
    void UpdatePositionAndRotationIfNeeded();
    // public System.Void .ctor()
    // Offset: 0x100624C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerOffsetPositionByLocalPlayerPosition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerOffsetPositionByLocalPlayerPosition*, creationType>()));
    }
  }; // MultiplayerOffsetPositionByLocalPlayerPosition
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerOffsetPositionByLocalPlayerPosition), 72 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_MultiplayerOffsetPositionByLocalPlayerPositionSizeCheck;
  static_assert(sizeof(MultiplayerOffsetPositionByLocalPlayerPosition) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*, "", "MultiplayerOffsetPositionByLocalPlayerPosition");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::SetEnabled
// Il2CppName: SetEnabled
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::UpdatePositionAndRotationIfNeeded
// Il2CppName: UpdatePositionAndRotationIfNeeded
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
