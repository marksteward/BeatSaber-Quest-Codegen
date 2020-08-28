// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.CAPI/ovrNetSyncVec3
  struct CAPI::ovrNetSyncVec3 : public System::ValueType {
    public:
    // public System.Single x
    // Offset: 0x0
    float x;
    // public System.Single y
    // Offset: 0x4
    float y;
    // public System.Single z
    // Offset: 0x8
    float z;
    // Creating value type constructor for type: ovrNetSyncVec3
    constexpr ovrNetSyncVec3(float x_ = {}, float y_ = {}, float z_ = {}) : x{x_}, y{y_}, z{z_} {}
  }; // Oculus.Platform.CAPI/ovrNetSyncVec3
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI::ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");
#pragma pack(pop)
