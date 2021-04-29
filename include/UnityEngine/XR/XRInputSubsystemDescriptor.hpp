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
  // Forward declaring type: XRInputSubsystem
  class XRInputSubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRInputSubsystemDescriptor
  // [NativeHeaderAttribute] Offset: CDD12C
  // [UsedByNativeCodeAttribute] Offset: CDD12C
  // [NativeConditionalAttribute] Offset: CDD12C
  // [NativeTypeAttribute] Offset: CDD12C
  class XRInputSubsystemDescriptor : public UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRInputSubsystem*> {
    public:
    // Creating value type constructor for type: XRInputSubsystemDescriptor
    XRInputSubsystemDescriptor() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x21A0CA4
    // Implemented from: UnityEngine.IntegratedSubsystemDescriptor`1
    // Base method: System.Void IntegratedSubsystemDescriptor_1::.ctor()
    // Base method: System.Void IntegratedSubsystemDescriptor::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRInputSubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::XR::XRInputSubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRInputSubsystemDescriptor*, creationType>()));
    }
  }; // UnityEngine.XR.XRInputSubsystemDescriptor
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRInputSubsystemDescriptor*, "UnityEngine.XR", "XRInputSubsystemDescriptor");
