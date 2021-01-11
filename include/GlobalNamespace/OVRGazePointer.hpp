// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRCursor
#include "GlobalNamespace/OVRCursor.hpp"
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
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRProgressIndicator
  class OVRProgressIndicator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: OVRGazePointer
  // [] Offset: FFFFFFFF
  class OVRGazePointer : public GlobalNamespace::OVRCursor {
    public:
    // private UnityEngine.Transform gazeIcon
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* gazeIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xD8696C
    // public System.Boolean hideByDefault
    // Size: 0x1
    // Offset: 0x20
    bool hideByDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideByDefault and: showTimeoutPeriod
    char __padding1[0x3] = {};
    // [TooltipAttribute] Offset: 0xD869A4
    // public System.Single showTimeoutPeriod
    // Size: 0x4
    // Offset: 0x24
    float showTimeoutPeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD869DC
    // public System.Single hideTimeoutPeriod
    // Size: 0x4
    // Offset: 0x28
    float hideTimeoutPeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD86A14
    // public System.Boolean dimOnHideRequest
    // Size: 0x1
    // Offset: 0x2C
    bool dimOnHideRequest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dimOnHideRequest and: depthScaleMultiplier
    char __padding4[0x3] = {};
    // [TooltipAttribute] Offset: 0xD86A4C
    // public System.Single depthScaleMultiplier
    // Size: 0x4
    // Offset: 0x30
    float depthScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean matchNormalOnPhysicsColliders
    // Size: 0x1
    // Offset: 0x34
    bool matchNormalOnPhysicsColliders;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: matchNormalOnPhysicsColliders and: rayTransform
    char __padding6[0x3] = {};
    // public UnityEngine.Transform rayTransform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* rayTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD86A84
    // private System.Boolean <hidden>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hidden and: currentScale
    char __padding8[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD86A94
    // private System.Single <currentScale>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    float currentScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single depth
    // Size: 0x4
    // Offset: 0x48
    float depth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single hideUntilTime
    // Size: 0x4
    // Offset: 0x4C
    float hideUntilTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 positionSetsThisFrame
    // Size: 0x4
    // Offset: 0x50
    int positionSetsThisFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single lastShowRequestTime
    // Size: 0x4
    // Offset: 0x54
    float lastShowRequestTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastHideRequestTime
    // Size: 0x4
    // Offset: 0x58
    float lastHideRequestTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastHideRequestTime and: progressIndicator
    char __padding14[0x4] = {};
    // private OVRProgressIndicator progressIndicator
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::OVRProgressIndicator* progressIndicator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRProgressIndicator*) == 0x8);
    // Creating value type constructor for type: OVRGazePointer
    OVRGazePointer(UnityEngine::Transform* gazeIcon_ = {}, bool hideByDefault_ = {}, float showTimeoutPeriod_ = {}, float hideTimeoutPeriod_ = {}, bool dimOnHideRequest_ = {}, float depthScaleMultiplier_ = {}, bool matchNormalOnPhysicsColliders_ = {}, UnityEngine::Transform* rayTransform_ = {}, bool hidden_ = {}, float currentScale_ = {}, float depth_ = {}, float hideUntilTime_ = {}, int positionSetsThisFrame_ = {}, float lastShowRequestTime_ = {}, float lastHideRequestTime_ = {}, GlobalNamespace::OVRProgressIndicator* progressIndicator_ = {}) noexcept : gazeIcon{gazeIcon_}, hideByDefault{hideByDefault_}, showTimeoutPeriod{showTimeoutPeriod_}, hideTimeoutPeriod{hideTimeoutPeriod_}, dimOnHideRequest{dimOnHideRequest_}, depthScaleMultiplier{depthScaleMultiplier_}, matchNormalOnPhysicsColliders{matchNormalOnPhysicsColliders_}, rayTransform{rayTransform_}, hidden{hidden_}, currentScale{currentScale_}, depth{depth_}, hideUntilTime{hideUntilTime_}, positionSetsThisFrame{positionSetsThisFrame_}, lastShowRequestTime{lastShowRequestTime_}, lastHideRequestTime{lastHideRequestTime_}, progressIndicator{progressIndicator_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private OVRGazePointer _instance
    static GlobalNamespace::OVRGazePointer* _get__instance();
    // Set static field: static private OVRGazePointer _instance
    static void _set__instance(GlobalNamespace::OVRGazePointer* value);
    // public System.Boolean get_hidden()
    // Offset: 0x1074524
    bool get_hidden();
    // private System.Void set_hidden(System.Boolean value)
    // Offset: 0x107452C
    void set_hidden(bool value);
    // public System.Single get_currentScale()
    // Offset: 0x1074538
    float get_currentScale();
    // private System.Void set_currentScale(System.Single value)
    // Offset: 0x1074540
    void set_currentScale(float value);
    // static public OVRGazePointer get_instance()
    // Offset: 0x1074548
    static GlobalNamespace::OVRGazePointer* get_instance();
    // public System.Single get_visibilityStrength()
    // Offset: 0x1074728
    float get_visibilityStrength();
    // public System.Single get_SelectionProgress()
    // Offset: 0x1074838
    float get_SelectionProgress();
    // public System.Void set_SelectionProgress(System.Single value)
    // Offset: 0x10748C0
    void set_SelectionProgress(float value);
    // public System.Void Awake()
    // Offset: 0x1074950
    void Awake();
    // private System.Void Update()
    // Offset: 0x1074AD8
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x1075534
    void LateUpdate();
    // public System.Void RequestHide()
    // Offset: 0x10756F8
    void RequestHide();
    // public System.Void RequestShow()
    // Offset: 0x1075504
    void RequestShow();
    // private System.Void Hide()
    // Offset: 0x1074D10
    void Hide();
    // private System.Void Show()
    // Offset: 0x1074FF8
    void Show();
    // public override System.Void SetCursorStartDest(UnityEngine.Vector3 _, UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    // Offset: 0x10752DC
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::SetCursorStartDest(UnityEngine.Vector3 _, UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    void SetCursorStartDest(UnityEngine::Vector3 _, UnityEngine::Vector3 pos, UnityEngine::Vector3 normal);
    // public override System.Void SetCursorRay(UnityEngine.Transform ray)
    // Offset: 0x1075530
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::SetCursorRay(UnityEngine.Transform ray)
    void SetCursorRay(UnityEngine::Transform* ray);
    // public System.Void .ctor()
    // Offset: 0x1075730
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGazePointer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRGazePointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGazePointer*, creationType>()));
    }
  }; // OVRGazePointer
  static check_size<sizeof(OVRGazePointer), 96 + sizeof(GlobalNamespace::OVRProgressIndicator*)> __GlobalNamespace_OVRGazePointerSizeCheck;
  static_assert(sizeof(OVRGazePointer) == 0x68);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGazePointer*, "", "OVRGazePointer");
