// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x110
  // Autogenerated type: OVRInput/OVRControllerRTrackedRemote
  // [] Offset: FFFFFFFF
  class OVRInput::OVRControllerRTrackedRemote : public GlobalNamespace::OVRInput::OVRControllerBase {
    public:
    // private System.Boolean emitSwipe
    // Size: 0x1
    // Offset: 0x101
    bool emitSwipe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: emitSwipe and: moveAmount
    char __padding0[0x2] = {};
    // private OVRPlugin/Vector2f moveAmount
    // Size: 0x8
    // Offset: 0x104
    GlobalNamespace::OVRPlugin::Vector2f moveAmount;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // private System.Single minMoveMagnitude
    // Size: 0x4
    // Offset: 0x10C
    float minMoveMagnitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: OVRControllerRTrackedRemote
    OVRControllerRTrackedRemote(bool emitSwipe_ = {}, GlobalNamespace::OVRPlugin::Vector2f moveAmount_ = {}, float minMoveMagnitude_ = {}) noexcept : emitSwipe{emitSwipe_}, moveAmount{moveAmount_}, minMoveMagnitude{minMoveMagnitude_} {}
    // public System.Void .ctor()
    // Offset: 0x11BB6D4
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerRTrackedRemote* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerRTrackedRemote::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerRTrackedRemote*, creationType>()));
    }
    // public override System.Void ConfigureButtonMap()
    // Offset: 0x11C3928
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureButtonMap()
    void ConfigureButtonMap();
    // public override System.Void ConfigureTouchMap()
    // Offset: 0x11C3B04
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureTouchMap()
    void ConfigureTouchMap();
    // public override System.Void ConfigureNearTouchMap()
    // Offset: 0x11C3BC0
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureNearTouchMap()
    void ConfigureNearTouchMap();
    // public override System.Void ConfigureAxis1DMap()
    // Offset: 0x11C3C10
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis1DMap()
    void ConfigureAxis1DMap();
    // public override System.Void ConfigureAxis2DMap()
    // Offset: 0x11C3C68
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis2DMap()
    void ConfigureAxis2DMap();
    // public override OVRInput/Controller Update()
    // Offset: 0x11C3CBC
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: OVRInput/Controller OVRControllerBase::Update()
    GlobalNamespace::OVRInput::Controller Update();
    // public override System.Boolean WasRecentered()
    // Offset: 0x11C3E8C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Boolean OVRControllerBase::WasRecentered()
    bool WasRecentered();
    // public override System.Byte GetRecenterCount()
    // Offset: 0x11C3EA0
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Byte OVRControllerBase::GetRecenterCount()
    uint8_t GetRecenterCount();
    // public override System.Byte GetBatteryPercentRemaining()
    // Offset: 0x11C3EA8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Byte OVRControllerBase::GetBatteryPercentRemaining()
    uint8_t GetBatteryPercentRemaining();
  }; // OVRInput/OVRControllerRTrackedRemote
  static check_size<sizeof(OVRInput::OVRControllerRTrackedRemote), 268 + sizeof(float)> __GlobalNamespace_OVRInput_OVRControllerRTrackedRemoteSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerRTrackedRemote) == 0x110);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerRTrackedRemote*, "", "OVRInput/OVRControllerRTrackedRemote");
#pragma pack(pop)
