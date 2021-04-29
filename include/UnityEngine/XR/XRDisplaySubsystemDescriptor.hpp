// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.IntegratedSubsystemDescriptor`1
#include "UnityEngine/IntegratedSubsystemDescriptor_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRDisplaySubsystem
  class XRDisplaySubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystemDescriptor
  // [UsedByNativeCodeAttribute] Offset: CDD06C
  // [NativeTypeAttribute] Offset: CDD06C
  class XRDisplaySubsystemDescriptor : public UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRDisplaySubsystem*> {
    public:
    // Creating value type constructor for type: XRDisplaySubsystemDescriptor
    XRDisplaySubsystemDescriptor() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x21A0A74
    // Implemented from: UnityEngine.IntegratedSubsystemDescriptor`1
    // Base method: System.Void IntegratedSubsystemDescriptor_1::.ctor()
    // Base method: System.Void IntegratedSubsystemDescriptor::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRDisplaySubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::XR::XRDisplaySubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRDisplaySubsystemDescriptor*, creationType>()));
    }
  }; // UnityEngine.XR.XRDisplaySubsystemDescriptor
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDisplaySubsystemDescriptor*, "UnityEngine.XR", "XRDisplaySubsystemDescriptor");
