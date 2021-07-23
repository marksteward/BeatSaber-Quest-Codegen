// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DA3B38
  // [NativeConditionalAttribute] Offset: DA3B38
  struct InputDevice/*, public System::ValueType, public System::IEquatable_1<UnityEngine::XR::InputDevice>*/ {
    public:
    // private System.UInt64 m_DeviceId
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_DeviceId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Boolean m_Initialized
    // Size: 0x1
    // Offset: 0x8
    bool m_Initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InputDevice
    constexpr InputDevice(uint64_t m_DeviceId_ = {}, bool m_Initialized_ = {}) noexcept : m_DeviceId{m_DeviceId_}, m_Initialized{m_Initialized_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::InputDevice>
    operator System::IEquatable_1<UnityEngine::XR::InputDevice>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::InputDevice>*>(this);
    }
    // Get instance field: private System.UInt64 m_DeviceId
    uint64_t _get_m_DeviceId();
    // Set instance field: private System.UInt64 m_DeviceId
    void _set_m_DeviceId(uint64_t value);
    // Get instance field: private System.Boolean m_Initialized
    bool _get_m_Initialized();
    // Set instance field: private System.Boolean m_Initialized
    void _set_m_Initialized(bool value);
    // private System.UInt64 get_deviceId()
    // Offset: 0xF0E418
    uint64_t get_deviceId();
    // System.Void .ctor(System.UInt64 deviceId)
    // Offset: 0xF0E408
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    InputDevice(uint64_t deviceId) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::XR::InputDevice::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(deviceId)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, deviceId);
    }
    // public System.Boolean Equals(UnityEngine.XR.InputDevice other)
    // Offset: 0xF0E438
    bool Equals(UnityEngine::XR::InputDevice other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF0E430
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF0E460
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.InputDevice
  #pragma pack(pop)
  static check_size<sizeof(InputDevice), 8 + sizeof(bool)> __UnityEngine_XR_InputDeviceSizeCheck;
  static_assert(sizeof(InputDevice) == 0x9);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputDevice, "UnityEngine.XR", "InputDevice");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::get_deviceId
// Il2CppName: get_deviceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::get_deviceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "get_deviceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::InputDevice
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(UnityEngine::XR::InputDevice)>(&UnityEngine::XR::InputDevice::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputDevice::*)(::Il2CppObject*)>(&UnityEngine::XR::InputDevice::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevice::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::InputDevice::*)()>(&UnityEngine::XR::InputDevice::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevice), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
