// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ISubsystem
#include "UnityEngine/ISubsystem.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.IntegratedSubsystem
  // [NativeTypeAttribute] Offset: CCCC1C
  // [UsedByNativeCodeAttribute] Offset: CCCC1C
  class IntegratedSubsystem : public ::Il2CppObject/*, public UnityEngine::ISubsystem*/ {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // UnityEngine.ISubsystemDescriptor m_subsystemDescriptor
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ISubsystemDescriptor* m_subsystemDescriptor;
    // Field size check
    static_assert(sizeof(UnityEngine::ISubsystemDescriptor*) == 0x8);
    // Creating value type constructor for type: IntegratedSubsystem
    IntegratedSubsystem(System::IntPtr m_Ptr_ = {}, UnityEngine::ISubsystemDescriptor* m_subsystemDescriptor_ = {}) noexcept : m_Ptr{m_Ptr_}, m_subsystemDescriptor{m_subsystemDescriptor_} {}
    // Creating interface conversion operator: operator UnityEngine::ISubsystem
    operator UnityEngine::ISubsystem() noexcept {
      return *reinterpret_cast<UnityEngine::ISubsystem*>(this);
    }
    // System.Void SetHandle(UnityEngine.IntegratedSubsystem inst)
    // Offset: 0x21B1E94
    void SetHandle(UnityEngine::IntegratedSubsystem* inst);
    // public System.Void .ctor()
    // Offset: 0x21B1EE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntegratedSubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::IntegratedSubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntegratedSubsystem*, creationType>()));
    }
  }; // UnityEngine.IntegratedSubsystem
  #pragma pack(pop)
  static check_size<sizeof(IntegratedSubsystem), 24 + sizeof(UnityEngine::ISubsystemDescriptor*)> __UnityEngine_IntegratedSubsystemSizeCheck;
  static_assert(sizeof(IntegratedSubsystem) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IntegratedSubsystem*, "UnityEngine", "IntegratedSubsystem");
