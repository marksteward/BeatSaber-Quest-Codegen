// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRSkeleton/IOVRSkeletonDataProvider
#include "GlobalNamespace/OVRSkeleton_IOVRSkeletonDataProvider.hpp"
// Including type: OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider
#include "GlobalNamespace/OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider.hpp"
// Including type: OVRMesh/IOVRMeshDataProvider
#include "GlobalNamespace/OVRMesh_IOVRMeshDataProvider.hpp"
// Including type: OVRMeshRenderer/IOVRMeshRendererDataProvider
#include "GlobalNamespace/OVRMeshRenderer_IOVRMeshRendererDataProvider.hpp"
// Including type: OVRPlugin/HandState
#include "GlobalNamespace/OVRPlugin_HandState.hpp"
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
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: TrackingConfidence because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: OVRHand
  // [DefaultExecutionOrder] Offset: CF257C
  class OVRHand : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider, public GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider, public GlobalNamespace::OVRMesh::IOVRMeshDataProvider, public GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider*/ {
    public:
    // Nested type: GlobalNamespace::OVRHand::Hand
    struct Hand;
    // Nested type: GlobalNamespace::OVRHand::HandFinger
    struct HandFinger;
    // Nested type: GlobalNamespace::OVRHand::TrackingConfidence
    struct TrackingConfidence;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRHand/Hand
    struct Hand/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Hand
      constexpr Hand(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRHand/Hand None
      static constexpr const int None = -1;
      // Get static field: static public OVRHand/Hand None
      static GlobalNamespace::OVRHand::Hand _get_None();
      // Set static field: static public OVRHand/Hand None
      static void _set_None(GlobalNamespace::OVRHand::Hand value);
      // static field const value: static public OVRHand/Hand HandLeft
      static constexpr const int HandLeft = 0;
      // Get static field: static public OVRHand/Hand HandLeft
      static GlobalNamespace::OVRHand::Hand _get_HandLeft();
      // Set static field: static public OVRHand/Hand HandLeft
      static void _set_HandLeft(GlobalNamespace::OVRHand::Hand value);
      // static field const value: static public OVRHand/Hand HandRight
      static constexpr const int HandRight = 1;
      // Get static field: static public OVRHand/Hand HandRight
      static GlobalNamespace::OVRHand::Hand _get_HandRight();
      // Set static field: static public OVRHand/Hand HandRight
      static void _set_HandRight(GlobalNamespace::OVRHand::Hand value);
    }; // OVRHand/Hand
    #pragma pack(pop)
    static check_size<sizeof(OVRHand::Hand), 0 + sizeof(int)> __GlobalNamespace_OVRHand_HandSizeCheck;
    static_assert(sizeof(OVRHand::Hand) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRHand/TrackingConfidence
    struct TrackingConfidence/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: TrackingConfidence
      constexpr TrackingConfidence(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRHand/TrackingConfidence Low
      static constexpr const int Low = 0;
      // Get static field: static public OVRHand/TrackingConfidence Low
      static GlobalNamespace::OVRHand::TrackingConfidence _get_Low();
      // Set static field: static public OVRHand/TrackingConfidence Low
      static void _set_Low(GlobalNamespace::OVRHand::TrackingConfidence value);
      // static field const value: static public OVRHand/TrackingConfidence High
      static constexpr const int High = 1065353216;
      // Get static field: static public OVRHand/TrackingConfidence High
      static GlobalNamespace::OVRHand::TrackingConfidence _get_High();
      // Set static field: static public OVRHand/TrackingConfidence High
      static void _set_High(GlobalNamespace::OVRHand::TrackingConfidence value);
    }; // OVRHand/TrackingConfidence
    #pragma pack(pop)
    static check_size<sizeof(OVRHand::TrackingConfidence), 0 + sizeof(int)> __GlobalNamespace_OVRHand_TrackingConfidenceSizeCheck;
    static_assert(sizeof(OVRHand::TrackingConfidence) == 0x4);
    // private OVRHand/Hand HandType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRHand::Hand HandType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRHand::Hand) == 0x4);
    // Padding between fields: HandType and: pointerPoseRoot
    char __padding0[0x4] = {};
    // private UnityEngine.Transform _pointerPoseRoot
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* pointerPoseRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.GameObject _pointerPoseGO
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* pointerPoseGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private OVRPlugin/HandState _handState
    // Size: 0x78
    // Offset: 0x30
    GlobalNamespace::OVRPlugin::HandState handState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::HandState) == 0x78);
    // [CompilerGeneratedAttribute] Offset: 0xCF56A4
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0xA8
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCF56B4
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0xA9
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCF56C4
    // private System.Boolean <IsTracked>k__BackingField
    // Size: 0x1
    // Offset: 0xAA
    bool IsTracked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCF56D4
    // private System.Boolean <IsSystemGestureInProgress>k__BackingField
    // Size: 0x1
    // Offset: 0xAB
    bool IsSystemGestureInProgress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCF56E4
    // private System.Boolean <IsPointerPoseValid>k__BackingField
    // Size: 0x1
    // Offset: 0xAC
    bool IsPointerPoseValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsPointerPoseValid and: PointerPose
    char __padding8[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xCF56F4
    // private UnityEngine.Transform <PointerPose>k__BackingField
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Transform* PointerPose;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCF5704
    // private System.Single <HandScale>k__BackingField
    // Size: 0x4
    // Offset: 0xB8
    float HandScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCF5714
    // private OVRHand/TrackingConfidence <HandConfidence>k__BackingField
    // Size: 0x4
    // Offset: 0xBC
    GlobalNamespace::OVRHand::TrackingConfidence HandConfidence;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRHand::TrackingConfidence) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCF5724
    // private System.Boolean <IsDominantHand>k__BackingField
    // Size: 0x1
    // Offset: 0xC0
    bool IsDominantHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRHand
    OVRHand(GlobalNamespace::OVRHand::Hand HandType_ = {}, UnityEngine::Transform* pointerPoseRoot_ = {}, UnityEngine::GameObject* pointerPoseGO_ = {}, GlobalNamespace::OVRPlugin::HandState handState_ = {}, bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, bool IsTracked_ = {}, bool IsSystemGestureInProgress_ = {}, bool IsPointerPoseValid_ = {}, UnityEngine::Transform* PointerPose_ = {}, float HandScale_ = {}, GlobalNamespace::OVRHand::TrackingConfidence HandConfidence_ = {}, bool IsDominantHand_ = {}) noexcept : HandType{HandType_}, pointerPoseRoot{pointerPoseRoot_}, pointerPoseGO{pointerPoseGO_}, handState{handState_}, IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, IsTracked{IsTracked_}, IsSystemGestureInProgress{IsSystemGestureInProgress_}, IsPointerPoseValid{IsPointerPoseValid_}, PointerPose{PointerPose_}, HandScale{HandScale_}, HandConfidence{HandConfidence_}, IsDominantHand{IsDominantHand_} {}
    // Creating interface conversion operator: operator GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider
    operator GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider
    operator GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::OVRMesh::IOVRMeshDataProvider
    operator GlobalNamespace::OVRMesh::IOVRMeshDataProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::OVRMesh::IOVRMeshDataProvider*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider
    operator GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::OVRMeshRenderer::IOVRMeshRendererDataProvider*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_IsDataValid()
    // Offset: 0x173DE48
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x173DE50
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x173DE5C
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x173DE64
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_IsTracked()
    // Offset: 0x173DE70
    bool get_IsTracked();
    // private System.Void set_IsTracked(System.Boolean value)
    // Offset: 0x173DE78
    void set_IsTracked(bool value);
    // public System.Boolean get_IsSystemGestureInProgress()
    // Offset: 0x173DE84
    bool get_IsSystemGestureInProgress();
    // private System.Void set_IsSystemGestureInProgress(System.Boolean value)
    // Offset: 0x173DE8C
    void set_IsSystemGestureInProgress(bool value);
    // public System.Boolean get_IsPointerPoseValid()
    // Offset: 0x173DE98
    bool get_IsPointerPoseValid();
    // private System.Void set_IsPointerPoseValid(System.Boolean value)
    // Offset: 0x173DEA0
    void set_IsPointerPoseValid(bool value);
    // public UnityEngine.Transform get_PointerPose()
    // Offset: 0x173DEAC
    UnityEngine::Transform* get_PointerPose();
    // private System.Void set_PointerPose(UnityEngine.Transform value)
    // Offset: 0x173DEB4
    void set_PointerPose(UnityEngine::Transform* value);
    // public System.Single get_HandScale()
    // Offset: 0x173DEBC
    float get_HandScale();
    // private System.Void set_HandScale(System.Single value)
    // Offset: 0x173DEC4
    void set_HandScale(float value);
    // public OVRHand/TrackingConfidence get_HandConfidence()
    // Offset: 0x173DECC
    GlobalNamespace::OVRHand::TrackingConfidence get_HandConfidence();
    // private System.Void set_HandConfidence(OVRHand/TrackingConfidence value)
    // Offset: 0x173DED4
    void set_HandConfidence(GlobalNamespace::OVRHand::TrackingConfidence value);
    // public System.Boolean get_IsDominantHand()
    // Offset: 0x173DEDC
    bool get_IsDominantHand();
    // private System.Void set_IsDominantHand(System.Boolean value)
    // Offset: 0x173DEE4
    void set_IsDominantHand(bool value);
    // private System.Void Awake()
    // Offset: 0x173DEF0
    void Awake();
    // private System.Void Update()
    // Offset: 0x173E180
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x173E188
    void FixedUpdate();
    // private System.Void GetHandState(OVRPlugin/Step step)
    // Offset: 0x173DFC0
    void GetHandState(GlobalNamespace::OVRPlugin::Step step);
    // public System.Boolean GetFingerIsPinching(OVRHand/HandFinger finger)
    // Offset: 0x173E190
    bool GetFingerIsPinching(GlobalNamespace::OVRHand::HandFinger finger);
    // public System.Single GetFingerPinchStrength(OVRHand/HandFinger finger)
    // Offset: 0x173E1B8
    float GetFingerPinchStrength(GlobalNamespace::OVRHand::HandFinger finger);
    // public OVRHand/TrackingConfidence GetFingerConfidence(OVRHand/HandFinger finger)
    // Offset: 0x173E200
    GlobalNamespace::OVRHand::TrackingConfidence GetFingerConfidence(GlobalNamespace::OVRHand::HandFinger finger);
    // private OVRSkeleton/SkeletonType OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType()
    // Offset: 0x173E24C
    GlobalNamespace::OVRSkeleton::SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType();
    // private OVRSkeleton/SkeletonPoseData OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData()
    // Offset: 0x173E264
    GlobalNamespace::OVRSkeleton::SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData();
    // private OVRSkeletonRenderer/SkeletonRendererData OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData()
    // Offset: 0x173E2D0
    GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData();
    // private OVRMesh/MeshType OVRMesh.IOVRMeshDataProvider.GetMeshType()
    // Offset: 0x173E31C
    GlobalNamespace::OVRMesh::MeshType OVRMesh_IOVRMeshDataProvider_GetMeshType();
    // private OVRMeshRenderer/MeshRendererData OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData()
    // Offset: 0x173E334
    GlobalNamespace::OVRMeshRenderer::MeshRendererData OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData();
    // public System.Void .ctor()
    // Offset: 0x173E384
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHand*, creationType>()));
    }
  }; // OVRHand
  #pragma pack(pop)
  static check_size<sizeof(OVRHand), 192 + sizeof(bool)> __GlobalNamespace_OVRHandSizeCheck;
  static_assert(sizeof(OVRHand) == 0xC1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHand*, "", "OVRHand");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHand::Hand, "", "OVRHand/Hand");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHand::TrackingConfidence, "", "OVRHand/TrackingConfidence");
