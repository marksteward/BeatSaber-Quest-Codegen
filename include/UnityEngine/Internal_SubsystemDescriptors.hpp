// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystemDescriptorImpl
  class ISubsystemDescriptorImpl;
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
  // Forward declaring type: SubsystemDescriptor
  class SubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Internal_SubsystemDescriptors
  class Internal_SubsystemDescriptors : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Internal_SubsystemDescriptors
    Internal_SubsystemDescriptors() noexcept {}
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl> s_IntegratedSubsystemDescriptors
    static System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptorImpl*>* _get_s_IntegratedSubsystemDescriptors();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl> s_IntegratedSubsystemDescriptors
    static void _set_s_IntegratedSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptorImpl*>* value);
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor> s_StandaloneSubsystemDescriptors
    static System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptor*>* _get_s_StandaloneSubsystemDescriptors();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor> s_StandaloneSubsystemDescriptors
    static void _set_s_StandaloneSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptor*>* value);
    // static System.Boolean Internal_AddDescriptor(UnityEngine.SubsystemDescriptor descriptor)
    // Offset: 0x21B1EFC
    static bool Internal_AddDescriptor(UnityEngine::SubsystemDescriptor* descriptor);
    // static System.Void Internal_InitializeManagedDescriptor(System.IntPtr ptr, UnityEngine.ISubsystemDescriptorImpl desc)
    // Offset: 0x21B20FC
    static void Internal_InitializeManagedDescriptor(System::IntPtr ptr, UnityEngine::ISubsystemDescriptorImpl* desc);
    // static System.Void Internal_ClearManagedDescriptors()
    // Offset: 0x21B21FC
    static void Internal_ClearManagedDescriptors();
    // static private System.Void .cctor()
    // Offset: 0x21B23BC
    static void _cctor();
  }; // UnityEngine.Internal_SubsystemDescriptors
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Internal_SubsystemDescriptors*, "UnityEngine", "Internal_SubsystemDescriptors");
