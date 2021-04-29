// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: OVRModeParms
  class OVRModeParms : public UnityEngine::MonoBehaviour {
    public:
    // public OVRInput/RawButton resetButton
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawButton resetButton;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawButton) == 0x4);
    // Creating value type constructor for type: OVRModeParms
    OVRModeParms(GlobalNamespace::OVRInput::RawButton resetButton_ = {}) noexcept : resetButton{resetButton_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x13CD9F8
    void Start();
    // private System.Void Update()
    // Offset: 0x13CDA98
    void Update();
    // private System.Void TestPowerStateMode()
    // Offset: 0x13CDC18
    void TestPowerStateMode();
    // public System.Void .ctor()
    // Offset: 0x13CDD54
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRModeParms* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRModeParms::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRModeParms*, creationType>()));
    }
  }; // OVRModeParms
  #pragma pack(pop)
  static check_size<sizeof(OVRModeParms), 24 + sizeof(GlobalNamespace::OVRInput::RawButton)> __GlobalNamespace_OVRModeParmsSizeCheck;
  static_assert(sizeof(OVRModeParms) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRModeParms*, "", "OVRModeParms");
