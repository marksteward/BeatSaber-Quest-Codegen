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
  // Size: 0x18
  // Autogenerated type: MultiplayerLobbyCenterScreenSystem
  // [] Offset: FFFFFFFF
  class MultiplayerLobbyCenterScreenSystem : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: MultiplayerLobbyCenterScreenSystem
    MultiplayerLobbyCenterScreenSystem() noexcept {}
    // public System.Void .ctor()
    // Offset: 0xFB9FA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyCenterScreenSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyCenterScreenSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyCenterScreenSystem*, creationType>()));
    }
  }; // MultiplayerLobbyCenterScreenSystem
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyCenterScreenSystem*, "", "MultiplayerLobbyCenterScreenSystem");
#pragma pack(pop)
