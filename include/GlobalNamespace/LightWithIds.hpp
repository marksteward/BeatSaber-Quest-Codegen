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
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: LightWithIds
  // [] Offset: FFFFFFFF
  class LightWithIds : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::LightWithIds::LightIntensityData
    class LightIntensityData;
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x18
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxIntensity
    // Size: 0x4
    // Offset: 0x1C
    float maxIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private LightWithIds/LightIntensityData[] _lightIntensityData
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::LightWithIds::LightIntensityData*>* lightIntensityData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LightWithIds::LightIntensityData*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDA5134
    // private readonly LightWithIdManager _lightManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LightWithIdManager* lightManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LightWithIdManager*) == 0x8);
    // private System.Boolean _isRegistered
    // Size: 0x1
    // Offset: 0x30
    bool isRegistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LightWithIds
    LightWithIds(float intensity_ = {}, float maxIntensity_ = {}, ::Array<GlobalNamespace::LightWithIds::LightIntensityData*>* lightIntensityData_ = {}, GlobalNamespace::LightWithIdManager* lightManager_ = {}, bool isRegistered_ = {}) noexcept : intensity{intensity_}, maxIntensity{maxIntensity_}, lightIntensityData{lightIntensityData_}, lightManager{lightManager_}, isRegistered{isRegistered_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x187CBB0
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x187CCDC
    void OnEnable();
    // private System.Void RegisterForColorChanges()
    // Offset: 0x187CBB4
    void RegisterForColorChanges();
    // protected System.Void OnDisable()
    // Offset: 0x187CCE0
    void OnDisable();
    // protected System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0xFFFFFFFF
    void ColorWasSet(UnityEngine::Color color);
    // private System.Void HandleLightManagerDidChangeSomeColorsThisFrame()
    // Offset: 0x187CDFC
    void HandleLightManagerDidChangeSomeColorsThisFrame();
    // private UnityEngine.Color GetLightColor()
    // Offset: 0x187CE28
    UnityEngine::Color GetLightColor();
    // protected System.Void .ctor()
    // Offset: 0x18790A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightWithIds*, creationType>()));
    }
  }; // LightWithIds
  static check_size<sizeof(LightWithIds), 48 + sizeof(bool)> __GlobalNamespace_LightWithIdsSizeCheck;
  static_assert(sizeof(LightWithIds) == 0x31);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightWithIds*, "", "LightWithIds");
