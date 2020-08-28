// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnvironmentLightSimpleController
  class EnvironmentLightSimpleController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Color _color
    // Offset: 0x18
    UnityEngine::Color color;
    // private System.Int32 _colorId
    // Offset: 0x28
    int colorId;
    // private LightWithIdManager _lightManager
    // Offset: 0x30
    GlobalNamespace::LightWithIdManager* lightManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void LateUpdate()
    // Offset: 0xBEA714
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xBEA740
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnvironmentLightSimpleController* New_ctor();
  }; // EnvironmentLightSimpleController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentLightSimpleController*, "", "EnvironmentLightSimpleController");
#pragma pack(pop)
