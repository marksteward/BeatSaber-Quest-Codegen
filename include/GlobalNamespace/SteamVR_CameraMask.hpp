// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_CameraMask
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: D88A10
  class SteamVR_CameraMask : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: SteamVR_CameraMask
    SteamVR_CameraMask() noexcept {}
    // private System.Void Awake()
    // Offset: 0x11034A8
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1103544
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_CameraMask* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_CameraMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_CameraMask*, creationType>()));
    }
  }; // SteamVR_CameraMask
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_CameraMask*, "", "SteamVR_CameraMask");
