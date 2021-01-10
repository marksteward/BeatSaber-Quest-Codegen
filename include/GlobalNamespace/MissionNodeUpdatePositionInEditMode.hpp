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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: MissionNodeUpdatePositionInEditMode
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: DBE8BC
  class MissionNodeUpdatePositionInEditMode : public UnityEngine::MonoBehaviour {
    public:
    // private MissionNodeConnection _missionNodeConnection
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionNodeConnection* missionNodeConnection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodeConnection*) == 0x8);
    // Creating value type constructor for type: MissionNodeUpdatePositionInEditMode
    MissionNodeUpdatePositionInEditMode(GlobalNamespace::MissionNodeConnection* missionNodeConnection_ = {}) noexcept : missionNodeConnection{missionNodeConnection_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x101CEC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeUpdatePositionInEditMode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionNodeUpdatePositionInEditMode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeUpdatePositionInEditMode*, creationType>()));
    }
  }; // MissionNodeUpdatePositionInEditMode
  static check_size<sizeof(MissionNodeUpdatePositionInEditMode), 24 + sizeof(GlobalNamespace::MissionNodeConnection*)> __GlobalNamespace_MissionNodeUpdatePositionInEditModeSizeCheck;
  static_assert(sizeof(MissionNodeUpdatePositionInEditMode) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeUpdatePositionInEditMode*, "", "MissionNodeUpdatePositionInEditMode");
#pragma pack(pop)
