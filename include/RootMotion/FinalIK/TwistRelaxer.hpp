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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.TwistRelaxer
  // [TokenAttribute] Offset: FFFFFFFF
  class TwistRelaxer : public UnityEngine::MonoBehaviour {
    public:
    // public RootMotion.FinalIK.IK ik
    // Size: 0x8
    // Offset: 0x18
    RootMotion::FinalIK::IK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IK*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF4404
    // public UnityEngine.Transform parent
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* parent;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF443C
    // public UnityEngine.Transform child
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* child;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF4474
    // [RangeAttribute] Offset: 0xDF4474
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x30
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF44C8
    // [RangeAttribute] Offset: 0xDF44C8
    // public System.Single parentChildCrossfade
    // Size: 0x4
    // Offset: 0x34
    float parentChildCrossfade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF451C
    // [RangeAttribute] Offset: 0xDF451C
    // public System.Single twistAngleOffset
    // Size: 0x4
    // Offset: 0x38
    float twistAngleOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 twistAxis
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 twistAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 axis
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 axis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 axisRelativeToParentDefault
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 axisRelativeToParentDefault;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 axisRelativeToChildDefault
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 axisRelativeToChildDefault;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: TwistRelaxer
    TwistRelaxer(RootMotion::FinalIK::IK* ik_ = {}, UnityEngine::Transform* parent_ = {}, UnityEngine::Transform* child_ = {}, float weight_ = {}, float parentChildCrossfade_ = {}, float twistAngleOffset_ = {}, UnityEngine::Vector3 twistAxis_ = {}, UnityEngine::Vector3 axis_ = {}, UnityEngine::Vector3 axisRelativeToParentDefault_ = {}, UnityEngine::Vector3 axisRelativeToChildDefault_ = {}) noexcept : ik{ik_}, parent{parent_}, child{child_}, weight{weight_}, parentChildCrossfade{parentChildCrossfade_}, twistAngleOffset{twistAngleOffset_}, twistAxis{twistAxis_}, axis{axis_}, axisRelativeToParentDefault{axisRelativeToParentDefault_}, axisRelativeToChildDefault{axisRelativeToChildDefault_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public RootMotion.FinalIK.IK ik
    RootMotion::FinalIK::IK* _get_ik();
    // Set instance field: public RootMotion.FinalIK.IK ik
    void _set_ik(RootMotion::FinalIK::IK* value);
    // Get instance field: public UnityEngine.Transform parent
    UnityEngine::Transform* _get_parent();
    // Set instance field: public UnityEngine.Transform parent
    void _set_parent(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform child
    UnityEngine::Transform* _get_child();
    // Set instance field: public UnityEngine.Transform child
    void _set_child(UnityEngine::Transform* value);
    // Get instance field: public System.Single weight
    float _get_weight();
    // Set instance field: public System.Single weight
    void _set_weight(float value);
    // Get instance field: public System.Single parentChildCrossfade
    float _get_parentChildCrossfade();
    // Set instance field: public System.Single parentChildCrossfade
    void _set_parentChildCrossfade(float value);
    // Get instance field: public System.Single twistAngleOffset
    float _get_twistAngleOffset();
    // Set instance field: public System.Single twistAngleOffset
    void _set_twistAngleOffset(float value);
    // Get instance field: private UnityEngine.Vector3 twistAxis
    UnityEngine::Vector3 _get_twistAxis();
    // Set instance field: private UnityEngine.Vector3 twistAxis
    void _set_twistAxis(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 axis
    UnityEngine::Vector3 _get_axis();
    // Set instance field: private UnityEngine.Vector3 axis
    void _set_axis(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 axisRelativeToParentDefault
    UnityEngine::Vector3 _get_axisRelativeToParentDefault();
    // Set instance field: private UnityEngine.Vector3 axisRelativeToParentDefault
    void _set_axisRelativeToParentDefault(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 axisRelativeToChildDefault
    UnityEngine::Vector3 _get_axisRelativeToChildDefault();
    // Set instance field: private UnityEngine.Vector3 axisRelativeToChildDefault
    void _set_axisRelativeToChildDefault(UnityEngine::Vector3 value);
    // public System.Void Relax()
    // Offset: 0x1ABE880
    void Relax();
    // private System.Void Start()
    // Offset: 0x1ABEC60
    void Start();
    // private System.Void OnPostUpdate()
    // Offset: 0x1ABF0D4
    void OnPostUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1ABF15C
    void LateUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x1ABF1E4
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1ABF2E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TwistRelaxer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::TwistRelaxer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TwistRelaxer*, creationType>()));
    }
  }; // RootMotion.FinalIK.TwistRelaxer
  #pragma pack(pop)
  static check_size<sizeof(TwistRelaxer), 96 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_TwistRelaxerSizeCheck;
  static_assert(sizeof(TwistRelaxer) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::TwistRelaxer*, "RootMotion.FinalIK", "TwistRelaxer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::Relax
// Il2CppName: Relax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::Relax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "Relax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::OnPostUpdate
// Il2CppName: OnPostUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::OnPostUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "OnPostUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
