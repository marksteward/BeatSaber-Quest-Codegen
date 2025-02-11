// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRGazePointer : public GlobalNamespace::OVRCursor {
    public:
    // private UnityEngine.Transform gazeIcon
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* gazeIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE69D3C
    // public System.Boolean hideByDefault
    // Size: 0x1
    // Offset: 0x20
    bool hideByDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideByDefault and: showTimeoutPeriod
    char __padding1[0x3] = {};
    // [TooltipAttribute] Offset: 0xE69D74
    // public System.Single showTimeoutPeriod
    // Size: 0x4
    // Offset: 0x24
    float showTimeoutPeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE69DAC
    // public System.Single hideTimeoutPeriod
    // Size: 0x4
    // Offset: 0x28
    float hideTimeoutPeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE69DE4
    // public System.Boolean dimOnHideRequest
    // Size: 0x1
    // Offset: 0x2C
    bool dimOnHideRequest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dimOnHideRequest and: depthScaleMultiplier
    char __padding4[0x3] = {};
    // [TooltipAttribute] Offset: 0xE69E1C
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
    // private System.Boolean <hidden>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hidden and: currentScale
    char __padding8[0x3] = {};
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
    // Get instance field: private UnityEngine.Transform gazeIcon
    UnityEngine::Transform* _get_gazeIcon();
    // Set instance field: private UnityEngine.Transform gazeIcon
    void _set_gazeIcon(UnityEngine::Transform* value);
    // Get instance field: public System.Boolean hideByDefault
    bool _get_hideByDefault();
    // Set instance field: public System.Boolean hideByDefault
    void _set_hideByDefault(bool value);
    // Get instance field: public System.Single showTimeoutPeriod
    float _get_showTimeoutPeriod();
    // Set instance field: public System.Single showTimeoutPeriod
    void _set_showTimeoutPeriod(float value);
    // Get instance field: public System.Single hideTimeoutPeriod
    float _get_hideTimeoutPeriod();
    // Set instance field: public System.Single hideTimeoutPeriod
    void _set_hideTimeoutPeriod(float value);
    // Get instance field: public System.Boolean dimOnHideRequest
    bool _get_dimOnHideRequest();
    // Set instance field: public System.Boolean dimOnHideRequest
    void _set_dimOnHideRequest(bool value);
    // Get instance field: public System.Single depthScaleMultiplier
    float _get_depthScaleMultiplier();
    // Set instance field: public System.Single depthScaleMultiplier
    void _set_depthScaleMultiplier(float value);
    // Get instance field: public System.Boolean matchNormalOnPhysicsColliders
    bool _get_matchNormalOnPhysicsColliders();
    // Set instance field: public System.Boolean matchNormalOnPhysicsColliders
    void _set_matchNormalOnPhysicsColliders(bool value);
    // Get instance field: public UnityEngine.Transform rayTransform
    UnityEngine::Transform* _get_rayTransform();
    // Set instance field: public UnityEngine.Transform rayTransform
    void _set_rayTransform(UnityEngine::Transform* value);
    // Get instance field: private System.Boolean <hidden>k__BackingField
    bool _get_$hidden$k__BackingField();
    // Set instance field: private System.Boolean <hidden>k__BackingField
    void _set_$hidden$k__BackingField(bool value);
    // Get instance field: private System.Single <currentScale>k__BackingField
    float _get_$currentScale$k__BackingField();
    // Set instance field: private System.Single <currentScale>k__BackingField
    void _set_$currentScale$k__BackingField(float value);
    // Get instance field: private System.Single depth
    float _get_depth();
    // Set instance field: private System.Single depth
    void _set_depth(float value);
    // Get instance field: private System.Single hideUntilTime
    float _get_hideUntilTime();
    // Set instance field: private System.Single hideUntilTime
    void _set_hideUntilTime(float value);
    // Get instance field: private System.Int32 positionSetsThisFrame
    int _get_positionSetsThisFrame();
    // Set instance field: private System.Int32 positionSetsThisFrame
    void _set_positionSetsThisFrame(int value);
    // Get instance field: private System.Single lastShowRequestTime
    float _get_lastShowRequestTime();
    // Set instance field: private System.Single lastShowRequestTime
    void _set_lastShowRequestTime(float value);
    // Get instance field: private System.Single lastHideRequestTime
    float _get_lastHideRequestTime();
    // Set instance field: private System.Single lastHideRequestTime
    void _set_lastHideRequestTime(float value);
    // Get instance field: private OVRProgressIndicator progressIndicator
    GlobalNamespace::OVRProgressIndicator* _get_progressIndicator();
    // Set instance field: private OVRProgressIndicator progressIndicator
    void _set_progressIndicator(GlobalNamespace::OVRProgressIndicator* value);
    // public System.Boolean get_hidden()
    // Offset: 0x1064284
    bool get_hidden();
    // private System.Void set_hidden(System.Boolean value)
    // Offset: 0x106428C
    void set_hidden(bool value);
    // public System.Single get_currentScale()
    // Offset: 0x1064298
    float get_currentScale();
    // private System.Void set_currentScale(System.Single value)
    // Offset: 0x10642A0
    void set_currentScale(float value);
    // static public OVRGazePointer get_instance()
    // Offset: 0x10642A8
    static GlobalNamespace::OVRGazePointer* get_instance();
    // public System.Single get_visibilityStrength()
    // Offset: 0x106447C
    float get_visibilityStrength();
    // public System.Single get_SelectionProgress()
    // Offset: 0x106458C
    float get_SelectionProgress();
    // public System.Void set_SelectionProgress(System.Single value)
    // Offset: 0x1064614
    void set_SelectionProgress(float value);
    // public System.Void Awake()
    // Offset: 0x10646A4
    void Awake();
    // private System.Void Update()
    // Offset: 0x1064810
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x106522C
    void LateUpdate();
    // public System.Void RequestHide()
    // Offset: 0x10653F0
    void RequestHide();
    // public System.Void RequestShow()
    // Offset: 0x10651FC
    void RequestShow();
    // private System.Void Hide()
    // Offset: 0x1064A38
    void Hide();
    // private System.Void Show()
    // Offset: 0x1064D08
    void Show();
    // public System.Void .ctor()
    // Offset: 0x1065428
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
    // public override System.Void SetCursorStartDest(UnityEngine.Vector3 _, UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    // Offset: 0x1064FD4
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::SetCursorStartDest(UnityEngine.Vector3 _, UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    void SetCursorStartDest(UnityEngine::Vector3 _, UnityEngine::Vector3 pos, UnityEngine::Vector3 normal);
    // public override System.Void SetCursorRay(UnityEngine.Transform ray)
    // Offset: 0x1065228
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::SetCursorRay(UnityEngine.Transform ray)
    void SetCursorRay(UnityEngine::Transform* ray);
  }; // OVRGazePointer
  #pragma pack(pop)
  static check_size<sizeof(OVRGazePointer), 96 + sizeof(GlobalNamespace::OVRProgressIndicator*)> __GlobalNamespace_OVRGazePointerSizeCheck;
  static_assert(sizeof(OVRGazePointer) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGazePointer*, "", "OVRGazePointer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_hidden
// Il2CppName: get_hidden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::get_hidden)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_hidden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::set_hidden
// Il2CppName: set_hidden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(bool)>(&GlobalNamespace::OVRGazePointer::set_hidden)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "set_hidden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_currentScale
// Il2CppName: get_currentScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::get_currentScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_currentScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::set_currentScale
// Il2CppName: set_currentScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(float)>(&GlobalNamespace::OVRGazePointer::set_currentScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "set_currentScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRGazePointer* (*)()>(&GlobalNamespace::OVRGazePointer::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_visibilityStrength
// Il2CppName: get_visibilityStrength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::get_visibilityStrength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_visibilityStrength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::get_SelectionProgress
// Il2CppName: get_SelectionProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::get_SelectionProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "get_SelectionProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::set_SelectionProgress
// Il2CppName: set_SelectionProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(float)>(&GlobalNamespace::OVRGazePointer::set_SelectionProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "set_SelectionProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::RequestHide
// Il2CppName: RequestHide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::RequestHide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "RequestHide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::RequestShow
// Il2CppName: RequestShow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::RequestShow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "RequestShow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)()>(&GlobalNamespace::OVRGazePointer::Show)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::SetCursorStartDest
// Il2CppName: SetCursorStartDest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::OVRGazePointer::SetCursorStartDest)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "SetCursorStartDest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_, pos, normal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGazePointer::SetCursorRay
// Il2CppName: SetCursorRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGazePointer::*)(UnityEngine::Transform*)>(&GlobalNamespace::OVRGazePointer::SetCursorRay)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGazePointer*), "SetCursorRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray});
  }
};
