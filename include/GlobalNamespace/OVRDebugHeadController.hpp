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
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVRDebugHeadController
  class OVRDebugHeadController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Boolean AllowPitchLook
    // Size: 0x1
    // Offset: 0x18
    bool AllowPitchLook;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean AllowYawLook
    // Size: 0x1
    // Offset: 0x19
    bool AllowYawLook;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean InvertPitch
    // Size: 0x1
    // Offset: 0x1A
    bool InvertPitch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: InvertPitch and: GamePad_PitchDegreesPerSec
    char __padding2[0x1] = {};
    // public System.Single GamePad_PitchDegreesPerSec
    // Size: 0x4
    // Offset: 0x1C
    float GamePad_PitchDegreesPerSec;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single GamePad_YawDegreesPerSec
    // Size: 0x4
    // Offset: 0x20
    float GamePad_YawDegreesPerSec;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean AllowMovement
    // Size: 0x1
    // Offset: 0x24
    bool AllowMovement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AllowMovement and: ForwardSpeed
    char __padding5[0x3] = {};
    // public System.Single ForwardSpeed
    // Size: 0x4
    // Offset: 0x28
    float ForwardSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single StrafeSpeed
    // Size: 0x4
    // Offset: 0x2C
    float StrafeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRCameraRig*) == 0x8);
    // Creating value type constructor for type: OVRDebugHeadController
    OVRDebugHeadController(bool AllowPitchLook_ = {}, bool AllowYawLook_ = {}, bool InvertPitch_ = {}, float GamePad_PitchDegreesPerSec_ = {}, float GamePad_YawDegreesPerSec_ = {}, bool AllowMovement_ = {}, float ForwardSpeed_ = {}, float StrafeSpeed_ = {}, GlobalNamespace::OVRCameraRig* CameraRig_ = {}) noexcept : AllowPitchLook{AllowPitchLook_}, AllowYawLook{AllowYawLook_}, InvertPitch{InvertPitch_}, GamePad_PitchDegreesPerSec{GamePad_PitchDegreesPerSec_}, GamePad_YawDegreesPerSec{GamePad_YawDegreesPerSec_}, AllowMovement{AllowMovement_}, ForwardSpeed{ForwardSpeed_}, StrafeSpeed{StrafeSpeed_}, CameraRig{CameraRig_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Awake()
    // Offset: 0x1284180
    void Awake();
    // private System.Void Start()
    // Offset: 0x1284278
    void Start();
    // private System.Void Update()
    // Offset: 0x128427C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1284808
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRDebugHeadController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRDebugHeadController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRDebugHeadController*, creationType>()));
    }
  }; // OVRDebugHeadController
  #pragma pack(pop)
  static check_size<sizeof(OVRDebugHeadController), 48 + sizeof(GlobalNamespace::OVRCameraRig*)> __GlobalNamespace_OVRDebugHeadControllerSizeCheck;
  static_assert(sizeof(OVRDebugHeadController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDebugHeadController*, "", "OVRDebugHeadController");
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
