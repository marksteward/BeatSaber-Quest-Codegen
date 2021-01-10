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
  // Forward declaring type: OculusDeeplinkManager
  class OculusDeeplinkManager;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: OculusInit
  // [] Offset: FFFFFFFF
  class OculusInit : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OculusInit::$$c
    class $$c;
    // [InjectOptionalAttribute] Offset: 0xDC14E4
    // private OculusDeeplinkManager _oculusDeeplinkManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OculusDeeplinkManager* oculusDeeplinkManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusDeeplinkManager*) == 0x8);
    // Creating value type constructor for type: OculusInit
    OculusInit(GlobalNamespace::OculusDeeplinkManager* oculusDeeplinkManager_ = {}) noexcept : oculusDeeplinkManager{oculusDeeplinkManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init()
    // Offset: 0x100A4FC
    void Init();
    // private System.Void InitCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize> msg)
    // Offset: 0x100A6BC
    void InitCallback(Oculus::Platform::Message_1<Oculus::Platform::Models::PlatformInitialize*>* msg);
    // public System.Void .ctor()
    // Offset: 0x100A854
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusInit*, creationType>()));
    }
  }; // OculusInit
  static check_size<sizeof(OculusInit), 24 + sizeof(GlobalNamespace::OculusDeeplinkManager*)> __GlobalNamespace_OculusInitSizeCheck;
  static_assert(sizeof(OculusInit) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusInit*, "", "OculusInit");
#pragma pack(pop)
