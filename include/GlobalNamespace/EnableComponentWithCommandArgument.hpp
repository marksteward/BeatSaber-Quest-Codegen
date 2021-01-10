// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Behaviour because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: EnableComponentWithCommandArgument
  // [] Offset: FFFFFFFF
  class EnableComponentWithCommandArgument : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _argument
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* argument;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Behaviour _component
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Behaviour* component;
    // Field size check
    static_assert(sizeof(UnityEngine::Behaviour*) == 0x8);
    // Creating value type constructor for type: EnableComponentWithCommandArgument
    EnableComponentWithCommandArgument(::Il2CppString* argument_ = {}, UnityEngine::Behaviour* component_ = {}) noexcept : argument{argument_}, component{component_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Awake()
    // Offset: 0x102E6C8
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x102E764
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableComponentWithCommandArgument* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnableComponentWithCommandArgument::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableComponentWithCommandArgument*, creationType>()));
    }
  }; // EnableComponentWithCommandArgument
  static check_size<sizeof(EnableComponentWithCommandArgument), 32 + sizeof(UnityEngine::Behaviour*)> __GlobalNamespace_EnableComponentWithCommandArgumentSizeCheck;
  static_assert(sizeof(EnableComponentWithCommandArgument) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableComponentWithCommandArgument*, "", "EnableComponentWithCommandArgument");
#pragma pack(pop)
