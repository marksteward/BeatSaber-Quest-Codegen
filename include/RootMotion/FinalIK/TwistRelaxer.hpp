// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: RootMotion.FinalIK.TwistRelaxer
  // [] Offset: FFFFFFFF
  class TwistRelaxer : public UnityEngine::MonoBehaviour {
    public:
    // public RootMotion.FinalIK.IK ik
    // Size: 0x8
    // Offset: 0x18
    RootMotion::FinalIK::IK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IK*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB7194
    // public UnityEngine.Transform parent
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* parent;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB71CC
    // public UnityEngine.Transform child
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* child;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB7204
    // [RangeAttribute] Offset: 0xDB7204
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x30
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB7258
    // [RangeAttribute] Offset: 0xDB7258
    // public System.Single parentChildCrossfade
    // Size: 0x4
    // Offset: 0x34
    float parentChildCrossfade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB72AC
    // [RangeAttribute] Offset: 0xDB72AC
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
    // public System.Void Relax()
    // Offset: 0x15E9ED0
    void Relax();
    // private System.Void Start()
    // Offset: 0x15EA2B0
    void Start();
    // private System.Void OnPostUpdate()
    // Offset: 0x15EA75C
    void OnPostUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x15EA7E4
    void LateUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x15EA86C
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x15EA994
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
  static check_size<sizeof(TwistRelaxer), 96 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_TwistRelaxerSizeCheck;
  static_assert(sizeof(TwistRelaxer) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::TwistRelaxer*, "RootMotion.FinalIK", "TwistRelaxer");
#pragma pack(pop)
