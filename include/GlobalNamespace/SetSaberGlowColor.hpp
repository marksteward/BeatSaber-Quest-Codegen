// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SetSaberGlowColor
  class SetSaberGlowColor : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SetSaberGlowColor::PropertyTintColorPair
    class PropertyTintColorPair;
    // private SaberTypeObject _saberTypeObject
    // Offset: 0x18
    GlobalNamespace::SaberTypeObject* saberTypeObject;
    // private UnityEngine.MeshRenderer _meshRenderer
    // Offset: 0x20
    UnityEngine::MeshRenderer* meshRenderer;
    // private SetSaberGlowColor/PropertyTintColorPair[] _propertyTintColorPairs
    // Offset: 0x28
    ::Array<GlobalNamespace::SetSaberGlowColor::PropertyTintColorPair*>* propertyTintColorPairs;
    // private ColorManager _colorManager
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    // Offset: 0x38
    UnityEngine::MaterialPropertyBlock* materialPropertyBlock;
    // private SaberType _saberType
    // Offset: 0x40
    GlobalNamespace::SaberType saberType;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void set_saberType(SaberType value)
    // Offset: 0xC2E498
    void set_saberType(GlobalNamespace::SaberType value);
    // protected System.Void Start()
    // Offset: 0xC2E620
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC2E6FC
    void OnDestroy();
    // private System.Void HandleColorManagerColorsDidChange()
    // Offset: 0xC2E7D0
    void HandleColorManagerColorsDidChange();
    // private System.Void SetColors()
    // Offset: 0xC2E4CC
    void SetColors();
    // public System.Void .ctor()
    // Offset: 0xC2E7D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SetSaberGlowColor* New_ctor();
  }; // SetSaberGlowColor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberGlowColor*, "", "SetSaberGlowColor");
#pragma pack(pop)
