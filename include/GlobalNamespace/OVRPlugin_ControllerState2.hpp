// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Including type: OVRPlugin/ControllerState
#include "GlobalNamespace/OVRPlugin_ControllerState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/ControllerState2
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::ControllerState2/*, public System::ValueType*/ {
    public:
    // public System.UInt32 ConnectedControllers
    // Size: 0x4
    // Offset: 0x0
    uint ConnectedControllers;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 Buttons
    // Size: 0x4
    // Offset: 0x4
    uint Buttons;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 Touches
    // Size: 0x4
    // Offset: 0x8
    uint Touches;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 NearTouches
    // Size: 0x4
    // Offset: 0xC
    uint NearTouches;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Single LIndexTrigger
    // Size: 0x4
    // Offset: 0x10
    float LIndexTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RIndexTrigger
    // Size: 0x4
    // Offset: 0x14
    float RIndexTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LHandTrigger
    // Size: 0x4
    // Offset: 0x18
    float LHandTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RHandTrigger
    // Size: 0x4
    // Offset: 0x1C
    float RHandTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVRPlugin/Vector2f LThumbstick
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OVRPlugin::Vector2f LThumbstick;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f RThumbstick
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::Vector2f RThumbstick;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f LTouchpad
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::OVRPlugin::Vector2f LTouchpad;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f RTouchpad
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::OVRPlugin::Vector2f RTouchpad;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // Creating value type constructor for type: ControllerState2
    constexpr ControllerState2(uint ConnectedControllers_ = {}, uint Buttons_ = {}, uint Touches_ = {}, uint NearTouches_ = {}, float LIndexTrigger_ = {}, float RIndexTrigger_ = {}, float LHandTrigger_ = {}, float RHandTrigger_ = {}, GlobalNamespace::OVRPlugin::Vector2f LThumbstick_ = {}, GlobalNamespace::OVRPlugin::Vector2f RThumbstick_ = {}, GlobalNamespace::OVRPlugin::Vector2f LTouchpad_ = {}, GlobalNamespace::OVRPlugin::Vector2f RTouchpad_ = {}) noexcept : ConnectedControllers{ConnectedControllers_}, Buttons{Buttons_}, Touches{Touches_}, NearTouches{NearTouches_}, LIndexTrigger{LIndexTrigger_}, RIndexTrigger{RIndexTrigger_}, LHandTrigger{LHandTrigger_}, RHandTrigger{RHandTrigger_}, LThumbstick{LThumbstick_}, RThumbstick{RThumbstick_}, LTouchpad{LTouchpad_}, RTouchpad{RTouchpad_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.UInt32 ConnectedControllers
    uint _get_ConnectedControllers();
    // Set instance field: public System.UInt32 ConnectedControllers
    void _set_ConnectedControllers(uint value);
    // Get instance field: public System.UInt32 Buttons
    uint _get_Buttons();
    // Set instance field: public System.UInt32 Buttons
    void _set_Buttons(uint value);
    // Get instance field: public System.UInt32 Touches
    uint _get_Touches();
    // Set instance field: public System.UInt32 Touches
    void _set_Touches(uint value);
    // Get instance field: public System.UInt32 NearTouches
    uint _get_NearTouches();
    // Set instance field: public System.UInt32 NearTouches
    void _set_NearTouches(uint value);
    // Get instance field: public System.Single LIndexTrigger
    float _get_LIndexTrigger();
    // Set instance field: public System.Single LIndexTrigger
    void _set_LIndexTrigger(float value);
    // Get instance field: public System.Single RIndexTrigger
    float _get_RIndexTrigger();
    // Set instance field: public System.Single RIndexTrigger
    void _set_RIndexTrigger(float value);
    // Get instance field: public System.Single LHandTrigger
    float _get_LHandTrigger();
    // Set instance field: public System.Single LHandTrigger
    void _set_LHandTrigger(float value);
    // Get instance field: public System.Single RHandTrigger
    float _get_RHandTrigger();
    // Set instance field: public System.Single RHandTrigger
    void _set_RHandTrigger(float value);
    // Get instance field: public OVRPlugin/Vector2f LThumbstick
    GlobalNamespace::OVRPlugin::Vector2f _get_LThumbstick();
    // Set instance field: public OVRPlugin/Vector2f LThumbstick
    void _set_LThumbstick(GlobalNamespace::OVRPlugin::Vector2f value);
    // Get instance field: public OVRPlugin/Vector2f RThumbstick
    GlobalNamespace::OVRPlugin::Vector2f _get_RThumbstick();
    // Set instance field: public OVRPlugin/Vector2f RThumbstick
    void _set_RThumbstick(GlobalNamespace::OVRPlugin::Vector2f value);
    // Get instance field: public OVRPlugin/Vector2f LTouchpad
    GlobalNamespace::OVRPlugin::Vector2f _get_LTouchpad();
    // Set instance field: public OVRPlugin/Vector2f LTouchpad
    void _set_LTouchpad(GlobalNamespace::OVRPlugin::Vector2f value);
    // Get instance field: public OVRPlugin/Vector2f RTouchpad
    GlobalNamespace::OVRPlugin::Vector2f _get_RTouchpad();
    // Set instance field: public OVRPlugin/Vector2f RTouchpad
    void _set_RTouchpad(GlobalNamespace::OVRPlugin::Vector2f value);
    // public System.Void .ctor(OVRPlugin/ControllerState cs)
    // Offset: 0xEE0150
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ControllerState2(GlobalNamespace::OVRPlugin::ControllerState cs) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRPlugin::ControllerState2::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(cs)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, cs);
    }
  }; // OVRPlugin/ControllerState2
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::ControllerState2), 56 + sizeof(GlobalNamespace::OVRPlugin::Vector2f)> __GlobalNamespace_OVRPlugin_ControllerState2SizeCheck;
  static_assert(sizeof(OVRPlugin::ControllerState2) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::ControllerState2, "", "OVRPlugin/ControllerState2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::ControllerState2::ControllerState2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
