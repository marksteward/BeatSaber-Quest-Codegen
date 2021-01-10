// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.VRControllerAxis_t
#include "OVR/OpenVR/VRControllerAxis_t.hpp"
// Including type: OVR.OpenVR.VRControllerState_t
#include "OVR/OpenVR/VRControllerState_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x3C
  // Autogenerated type: OVR.OpenVR.VRControllerState_t_Packed
  // [] Offset: FFFFFFFF
  struct VRControllerState_t_Packed/*, public System::ValueType*/ {
    public:
    // public System.UInt32 unPacketNum
    // Size: 0x4
    // Offset: 0x0
    uint unPacketNum;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt64 ulButtonPressed
    // Size: 0x8
    // Offset: 0x4
    uint64_t ulButtonPressed;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 ulButtonTouched
    // Size: 0x8
    // Offset: 0xC
    uint64_t ulButtonTouched;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis0
    // Size: 0x8
    // Offset: 0x14
    OVR::OpenVR::VRControllerAxis_t rAxis0;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis1
    // Size: 0x8
    // Offset: 0x1C
    OVR::OpenVR::VRControllerAxis_t rAxis1;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis2
    // Size: 0x8
    // Offset: 0x24
    OVR::OpenVR::VRControllerAxis_t rAxis2;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis3
    // Size: 0x8
    // Offset: 0x2C
    OVR::OpenVR::VRControllerAxis_t rAxis3;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis4
    // Size: 0x8
    // Offset: 0x34
    OVR::OpenVR::VRControllerAxis_t rAxis4;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // Creating value type constructor for type: VRControllerState_t_Packed
    constexpr VRControllerState_t_Packed(uint unPacketNum_ = {}, uint64_t ulButtonPressed_ = {}, uint64_t ulButtonTouched_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis0_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis1_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis2_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis3_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis4_ = {}) noexcept : unPacketNum{unPacketNum_}, ulButtonPressed{ulButtonPressed_}, ulButtonTouched{ulButtonTouched_}, rAxis0{rAxis0_}, rAxis1{rAxis1_}, rAxis2{rAxis2_}, rAxis3{rAxis3_}, rAxis4{rAxis4_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(OVR.OpenVR.VRControllerState_t unpacked)
    // Offset: 0xC938D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    VRControllerState_t_Packed(OVR::OpenVR::VRControllerState_t unpacked) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::VRControllerState_t_Packed::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(unpacked)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, unpacked);
    }
    // public System.Void Unpack(ref OVR.OpenVR.VRControllerState_t unpacked)
    // Offset: 0xC93900
    void Unpack(OVR::OpenVR::VRControllerState_t& unpacked);
  }; // OVR.OpenVR.VRControllerState_t_Packed
  static check_size<sizeof(VRControllerState_t_Packed), 52 + sizeof(OVR::OpenVR::VRControllerAxis_t)> __OVR_OpenVR_VRControllerState_t_PackedSizeCheck;
  static_assert(sizeof(VRControllerState_t_Packed) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRControllerState_t_Packed, "OVR.OpenVR", "VRControllerState_t_Packed");
#pragma pack(pop)
