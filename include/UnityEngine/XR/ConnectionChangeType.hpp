// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.ConnectionChangeType
  // [] Offset: FFFFFFFF
  struct ConnectionChangeType/*, public System::Enum*/ {
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: ConnectionChangeType
    constexpr ConnectionChangeType(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.ConnectionChangeType Connected
    static constexpr const uint Connected = 0u;
    // Get static field: static public UnityEngine.XR.ConnectionChangeType Connected
    static UnityEngine::XR::ConnectionChangeType _get_Connected();
    // Set static field: static public UnityEngine.XR.ConnectionChangeType Connected
    static void _set_Connected(UnityEngine::XR::ConnectionChangeType value);
    // static field const value: static public UnityEngine.XR.ConnectionChangeType Disconnected
    static constexpr const uint Disconnected = 1u;
    // Get static field: static public UnityEngine.XR.ConnectionChangeType Disconnected
    static UnityEngine::XR::ConnectionChangeType _get_Disconnected();
    // Set static field: static public UnityEngine.XR.ConnectionChangeType Disconnected
    static void _set_Disconnected(UnityEngine::XR::ConnectionChangeType value);
    // static field const value: static public UnityEngine.XR.ConnectionChangeType ConfigChange
    static constexpr const uint ConfigChange = 2u;
    // Get static field: static public UnityEngine.XR.ConnectionChangeType ConfigChange
    static UnityEngine::XR::ConnectionChangeType _get_ConfigChange();
    // Set static field: static public UnityEngine.XR.ConnectionChangeType ConfigChange
    static void _set_ConfigChange(UnityEngine::XR::ConnectionChangeType value);
  }; // UnityEngine.XR.ConnectionChangeType
  static check_size<sizeof(ConnectionChangeType), 0 + sizeof(uint)> __UnityEngine_XR_ConnectionChangeTypeSizeCheck;
  static_assert(sizeof(ConnectionChangeType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::ConnectionChangeType, "UnityEngine.XR", "ConnectionChangeType");
