// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.IntegratedSubsystemDescriptor
#include "UnityEngine/IntegratedSubsystemDescriptor.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IntegratedSubsystem
  class IntegratedSubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.IntegratedSubsystemDescriptor`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: D935A4
  // [NativeTypeAttribute] Offset: D935A4
  template<typename TSubsystem>
  class IntegratedSubsystemDescriptor_1 : public UnityEngine::IntegratedSubsystemDescriptor {
    public:
    // Creating value type constructor for type: IntegratedSubsystemDescriptor_1
    IntegratedSubsystemDescriptor_1() noexcept {}
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.IntegratedSubsystemDescriptor
    // Base method: System.Void IntegratedSubsystemDescriptor::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntegratedSubsystemDescriptor_1<TSubsystem>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::IntegratedSubsystemDescriptor_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntegratedSubsystemDescriptor_1<TSubsystem>*, creationType>()));
    }
  }; // UnityEngine.IntegratedSubsystemDescriptor`1
  // Could not write size check! Type: UnityEngine.IntegratedSubsystemDescriptor`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::IntegratedSubsystemDescriptor_1, "UnityEngine", "IntegratedSubsystemDescriptor`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
