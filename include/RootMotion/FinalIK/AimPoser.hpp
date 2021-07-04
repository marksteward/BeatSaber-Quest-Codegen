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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.AimPoser
  class AimPoser : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::AimPoser::Pose
    class Pose;
    // public System.Single angleBuffer
    // Size: 0x4
    // Offset: 0x18
    float angleBuffer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: angleBuffer and: poses
    char __padding0[0x4] = {};
    // public RootMotion.FinalIK.AimPoser/Pose[] poses
    // Size: 0x8
    // Offset: 0x20
    ::Array<RootMotion::FinalIK::AimPoser::Pose*>* poses;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::AimPoser::Pose*>*) == 0x8);
    // Creating value type constructor for type: AimPoser
    AimPoser(float angleBuffer_ = {}, ::Array<RootMotion::FinalIK::AimPoser::Pose*>* poses_ = {}) noexcept : angleBuffer{angleBuffer_}, poses{poses_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public RootMotion.FinalIK.AimPoser/Pose GetPose(UnityEngine.Vector3 localDirection)
    // Offset: 0x1CAE4EC
    RootMotion::FinalIK::AimPoser::Pose* GetPose(UnityEngine::Vector3 localDirection);
    // public System.Void SetPoseActive(RootMotion.FinalIK.AimPoser/Pose pose)
    // Offset: 0x1CAE860
    void SetPoseActive(RootMotion::FinalIK::AimPoser::Pose* pose);
    // public System.Void .ctor()
    // Offset: 0x1CAE8CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AimPoser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::AimPoser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AimPoser*, creationType>()));
    }
  }; // RootMotion.FinalIK.AimPoser
  #pragma pack(pop)
  static check_size<sizeof(AimPoser), 32 + sizeof(::Array<RootMotion::FinalIK::AimPoser::Pose*>*)> __RootMotion_FinalIK_AimPoserSizeCheck;
  static_assert(sizeof(AimPoser) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::AimPoser*, "RootMotion.FinalIK", "AimPoser");
// Writing MetadataGetter for method: RootMotion::FinalIK::AimPoser::GetPose
// Il2CppName: GetPose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::AimPoser::SetPoseActive
// Il2CppName: SetPoseActive
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::AimPoser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
