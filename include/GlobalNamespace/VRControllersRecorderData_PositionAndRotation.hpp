// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorderData
#include "GlobalNamespace/VRControllersRecorderData.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorderData/PositionAndRotation
  struct VRControllersRecorderData::PositionAndRotation : public System::ValueType {
    public:
    // public readonly UnityEngine.Vector3 pos
    // Offset: 0x0
    UnityEngine::Vector3 pos;
    // public readonly UnityEngine.Quaternion rot
    // Offset: 0xC
    UnityEngine::Quaternion rot;
    // Creating value type constructor for type: PositionAndRotation
    constexpr PositionAndRotation(UnityEngine::Vector3 pos_ = {}, UnityEngine::Quaternion rot_ = {}) noexcept : pos{pos_}, rot{rot_} {}
    // public System.Void .ctor(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0xA2CBF4
    // ABORTED: conflicts with another method.  PositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // static public VRControllersRecorderData/PositionAndRotation Lerp(VRControllersRecorderData/PositionAndRotation a, VRControllersRecorderData/PositionAndRotation b, System.Single t)
    // Offset: 0xC52434
    static GlobalNamespace::VRControllersRecorderData::PositionAndRotation Lerp(GlobalNamespace::VRControllersRecorderData::PositionAndRotation a, GlobalNamespace::VRControllersRecorderData::PositionAndRotation b, float t);
  }; // VRControllersRecorderData/PositionAndRotation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderData::PositionAndRotation, "", "VRControllersRecorderData/PositionAndRotation");
#pragma pack(pop)
