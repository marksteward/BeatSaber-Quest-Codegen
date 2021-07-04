// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: DirectionalLightWithId
  class DirectionalLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private DirectionalLight _light
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::DirectionalLight* light;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DirectionalLight*) == 0x8);
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x38
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minIntensity
    // Size: 0x4
    // Offset: 0x3C
    float minIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: DirectionalLightWithId
    DirectionalLightWithId(GlobalNamespace::DirectionalLight* light_ = {}, float intensity_ = {}, float minIntensity_ = {}) noexcept : light{light_}, intensity{intensity_}, minIntensity{minIntensity_} {}
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1D898A8
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1D89964
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectionalLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DirectionalLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectionalLightWithId*, creationType>()));
    }
  }; // DirectionalLightWithId
  #pragma pack(pop)
  static check_size<sizeof(DirectionalLightWithId), 60 + sizeof(float)> __GlobalNamespace_DirectionalLightWithIdSizeCheck;
  static_assert(sizeof(DirectionalLightWithId) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalLightWithId*, "", "DirectionalLightWithId");
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
