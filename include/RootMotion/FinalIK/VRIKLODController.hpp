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
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.VRIKLODController
  // [] Offset: FFFFFFFF
  class VRIKLODController : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Renderer LODRenderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Renderer* LODRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // public System.Single LODDistance
    // Size: 0x4
    // Offset: 0x20
    float LODDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean allowCulled
    // Size: 0x1
    // Offset: 0x24
    bool allowCulled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: allowCulled and: ik
    char __padding2[0x3] = {};
    // private RootMotion.FinalIK.VRIK ik
    // Size: 0x8
    // Offset: 0x28
    RootMotion::FinalIK::VRIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIK*) == 0x8);
    // Creating value type constructor for type: VRIKLODController
    VRIKLODController(UnityEngine::Renderer* LODRenderer_ = {}, float LODDistance_ = {}, bool allowCulled_ = {}, RootMotion::FinalIK::VRIK* ik_ = {}) noexcept : LODRenderer{LODRenderer_}, LODDistance{LODDistance_}, allowCulled{allowCulled_}, ik{ik_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x15EF20C
    void Start();
    // private System.Void Update()
    // Offset: 0x15EF26C
    void Update();
    // private System.Int32 GetLODLevel()
    // Offset: 0x15EF2A0
    int GetLODLevel();
    // public System.Void .ctor()
    // Offset: 0x15EF428
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIKLODController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::VRIKLODController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIKLODController*, creationType>()));
    }
  }; // RootMotion.FinalIK.VRIKLODController
  static check_size<sizeof(VRIKLODController), 40 + sizeof(RootMotion::FinalIK::VRIK*)> __RootMotion_FinalIK_VRIKLODControllerSizeCheck;
  static_assert(sizeof(VRIKLODController) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKLODController*, "RootMotion.FinalIK", "VRIKLODController");
