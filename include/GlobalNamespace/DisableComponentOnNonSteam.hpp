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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: DisableComponentOnNonSteam
  // [] Offset: FFFFFFFF
  class DisableComponentOnNonSteam : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.MonoBehaviour _component
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MonoBehaviour* component;
    // Field size check
    static_assert(sizeof(UnityEngine::MonoBehaviour*) == 0x8);
    // Creating value type constructor for type: DisableComponentOnNonSteam
    DisableComponentOnNonSteam(UnityEngine::MonoBehaviour* component_ = {}) noexcept : component{component_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Awake()
    // Offset: 0x1A5B5F8
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1A5B618
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableComponentOnNonSteam* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisableComponentOnNonSteam::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableComponentOnNonSteam*, creationType>()));
    }
  }; // DisableComponentOnNonSteam
  static check_size<sizeof(DisableComponentOnNonSteam), 24 + sizeof(UnityEngine::MonoBehaviour*)> __GlobalNamespace_DisableComponentOnNonSteamSizeCheck;
  static_assert(sizeof(DisableComponentOnNonSteam) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableComponentOnNonSteam*, "", "DisableComponentOnNonSteam");
#pragma pack(pop)
