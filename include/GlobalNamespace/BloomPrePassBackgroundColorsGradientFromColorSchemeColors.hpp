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
  // Forward declaring type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient;
  // Forward declaring type: EnvironmentColorManager
  class EnvironmentColorManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradientFromColorSchemeColors
  // [] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradientFromColorSchemeColors : public UnityEngine::MonoBehaviour {
    public:
    // private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassBackgroundColorsGradient*) == 0x8);
    // [SpaceAttribute] Offset: 0xD311E4
    // private System.Single _skyColorIntensity
    // Size: 0x4
    // Offset: 0x20
    float skyColorIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _groundColorIntensity
    // Size: 0x4
    // Offset: 0x24
    float groundColorIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xD3122C
    // private readonly EnvironmentColorManager _colorManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentColorManager*) == 0x8);
    // Creating value type constructor for type: BloomPrePassBackgroundColorsGradientFromColorSchemeColors
    BloomPrePassBackgroundColorsGradientFromColorSchemeColors(GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient_ = {}, float skyColorIntensity_ = {}, float groundColorIntensity_ = {}, GlobalNamespace::EnvironmentColorManager* colorManager_ = {}) noexcept : bloomPrePassBackgroundColorsGradient{bloomPrePassBackgroundColorsGradient_}, skyColorIntensity{skyColorIntensity_}, groundColorIntensity{groundColorIntensity_}, colorManager{colorManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF08490
    void Start();
    // public System.Void .ctor()
    // Offset: 0xF0866C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradientFromColorSchemeColors* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientFromColorSchemeColors*, creationType>()));
    }
  }; // BloomPrePassBackgroundColorsGradientFromColorSchemeColors
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientFromColorSchemeColors), 40 + sizeof(GlobalNamespace::EnvironmentColorManager*)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientFromColorSchemeColorsSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientFromColorSchemeColors) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors");