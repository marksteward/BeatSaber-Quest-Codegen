// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.ISubsystemDescriptor
#include "UnityEngine/ISubsystemDescriptor.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ISubsystemDescriptorImpl
  class ISubsystemDescriptorImpl/*, public UnityEngine::ISubsystemDescriptor*/ {
    public:
    // Creating value type constructor for type: ISubsystemDescriptorImpl
    ISubsystemDescriptorImpl() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::ISubsystemDescriptor
    operator UnityEngine::ISubsystemDescriptor() noexcept {
      return *reinterpret_cast<UnityEngine::ISubsystemDescriptor*>(this);
    }
    // public System.Void set_ptr(System.IntPtr value)
    // Offset: 0xFFFFFFFF
    void set_ptr(System::IntPtr value);
  }; // UnityEngine.ISubsystemDescriptorImpl
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ISubsystemDescriptorImpl*, "UnityEngine", "ISubsystemDescriptorImpl");
// Writing MetadataGetter for method: UnityEngine::ISubsystemDescriptorImpl::set_ptr
// Il2CppName: set_ptr
// Cannot perform method pointer template specialization from operators!
