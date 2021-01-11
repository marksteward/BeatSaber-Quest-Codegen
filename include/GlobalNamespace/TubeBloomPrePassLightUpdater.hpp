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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TubeBloomPrePassLightUpdater
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: DA4208
  class TubeBloomPrePassLightUpdater : public UnityEngine::MonoBehaviour {
    public:
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // Creating value type constructor for type: TubeBloomPrePassLightUpdater
    TubeBloomPrePassLightUpdater(GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight_ = {}) noexcept : tubeBloomPrePassLight{tubeBloomPrePassLight_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void LateUpdate()
    // Offset: 0x1882CDC
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x1882CF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TubeBloomPrePassLightUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TubeBloomPrePassLightUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TubeBloomPrePassLightUpdater*, creationType>()));
    }
  }; // TubeBloomPrePassLightUpdater
  static check_size<sizeof(TubeBloomPrePassLightUpdater), 24 + sizeof(GlobalNamespace::TubeBloomPrePassLight*)> __GlobalNamespace_TubeBloomPrePassLightUpdaterSizeCheck;
  static_assert(sizeof(TubeBloomPrePassLightUpdater) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeBloomPrePassLightUpdater*, "", "TubeBloomPrePassLightUpdater");
