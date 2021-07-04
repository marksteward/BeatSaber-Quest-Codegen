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
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FBBIKArmBending
  class FBBIKArmBending : public UnityEngine::MonoBehaviour {
    public:
    // public RootMotion.FinalIK.FullBodyBipedIK ik
    // Size: 0x8
    // Offset: 0x18
    RootMotion::FinalIK::FullBodyBipedIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedIK*) == 0x8);
    // public UnityEngine.Vector3 bendDirectionOffsetLeft
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 bendDirectionOffsetLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 bendDirectionOffsetRight
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 bendDirectionOffsetRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 characterSpaceBendOffsetLeft
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 characterSpaceBendOffsetLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 characterSpaceBendOffsetRight
    // Size: 0xC
    // Offset: 0x44
    UnityEngine::Vector3 characterSpaceBendOffsetRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion leftHandTargetRotation
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Quaternion leftHandTargetRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion rightHandTargetRotation
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Quaternion rightHandTargetRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x70
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FBBIKArmBending
    FBBIKArmBending(RootMotion::FinalIK::FullBodyBipedIK* ik_ = {}, UnityEngine::Vector3 bendDirectionOffsetLeft_ = {}, UnityEngine::Vector3 bendDirectionOffsetRight_ = {}, UnityEngine::Vector3 characterSpaceBendOffsetLeft_ = {}, UnityEngine::Vector3 characterSpaceBendOffsetRight_ = {}, UnityEngine::Quaternion leftHandTargetRotation_ = {}, UnityEngine::Quaternion rightHandTargetRotation_ = {}, bool initiated_ = {}) noexcept : ik{ik_}, bendDirectionOffsetLeft{bendDirectionOffsetLeft_}, bendDirectionOffsetRight{bendDirectionOffsetRight_}, characterSpaceBendOffsetLeft{characterSpaceBendOffsetLeft_}, characterSpaceBendOffsetRight{characterSpaceBendOffsetRight_}, leftHandTargetRotation{leftHandTargetRotation_}, rightHandTargetRotation{rightHandTargetRotation_}, initiated{initiated_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void LateUpdate()
    // Offset: 0x1CB1BDC
    void LateUpdate();
    // private System.Void OnPostFBBIK()
    // Offset: 0x1CB2144
    void OnPostFBBIK();
    // private System.Void OnDestroy()
    // Offset: 0x1CB2304
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1CB23FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBBIKArmBending* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FBBIKArmBending::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBBIKArmBending*, creationType>()));
    }
  }; // RootMotion.FinalIK.FBBIKArmBending
  #pragma pack(pop)
  static check_size<sizeof(FBBIKArmBending), 112 + sizeof(bool)> __RootMotion_FinalIK_FBBIKArmBendingSizeCheck;
  static_assert(sizeof(FBBIKArmBending) == 0x71);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBBIKArmBending*, "RootMotion.FinalIK", "FBBIKArmBending");
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKArmBending::LateUpdate
// Il2CppName: LateUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKArmBending::OnPostFBBIK
// Il2CppName: OnPostFBBIK
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKArmBending::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKArmBending::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
