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
    // Offset: 0x1AAE7E0
    void Start();
    // private System.Void Update()
    // Offset: 0x1AAE838
    void Update();
    // private System.Int32 GetLODLevel()
    // Offset: 0x1AAE86C
    int GetLODLevel();
    // public System.Void .ctor()
    // Offset: 0x1AAE9F4
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
  #pragma pack(pop)
  static check_size<sizeof(VRIKLODController), 40 + sizeof(RootMotion::FinalIK::VRIK*)> __RootMotion_FinalIK_VRIKLODControllerSizeCheck;
  static_assert(sizeof(VRIKLODController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKLODController*, "RootMotion.FinalIK", "VRIKLODController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKLODController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKLODController::*)()>(&RootMotion::FinalIK::VRIKLODController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKLODController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKLODController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKLODController::*)()>(&RootMotion::FinalIK::VRIKLODController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKLODController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKLODController::GetLODLevel
// Il2CppName: GetLODLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (RootMotion::FinalIK::VRIKLODController::*)()>(&RootMotion::FinalIK::VRIKLODController::GetLODLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKLODController*), "GetLODLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKLODController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
