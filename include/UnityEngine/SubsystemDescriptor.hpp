// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ISubsystemDescriptor
#include "UnityEngine/ISubsystemDescriptor.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SubsystemDescriptor
  class SubsystemDescriptor : public ::Il2CppObject/*, public UnityEngine::ISubsystemDescriptor*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xDA61A8
    // [CompilerGeneratedAttribute] Offset: 0xDA61A8
    // private System.String <id>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SubsystemDescriptor
    SubsystemDescriptor(::Il2CppString* id_ = {}) noexcept : id{id_} {}
    // Creating interface conversion operator: operator UnityEngine::ISubsystemDescriptor
    operator UnityEngine::ISubsystemDescriptor() noexcept {
      return *reinterpret_cast<UnityEngine::ISubsystemDescriptor*>(this);
    }
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return id;
    }
    // public System.String get_id()
    // Offset: 0x23EFAB4
    ::Il2CppString* get_id();
    // protected System.Void .ctor()
    // Offset: 0x23EFABC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubsystemDescriptor*, creationType>()));
    }
  }; // UnityEngine.SubsystemDescriptor
  #pragma pack(pop)
  static check_size<sizeof(SubsystemDescriptor), 16 + sizeof(::Il2CppString*)> __UnityEngine_SubsystemDescriptorSizeCheck;
  static_assert(sizeof(SubsystemDescriptor) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SubsystemDescriptor*, "UnityEngine", "SubsystemDescriptor");
// Writing MetadataGetter for method: UnityEngine::SubsystemDescriptor::get_id
// Il2CppName: get_id
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::SubsystemDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
