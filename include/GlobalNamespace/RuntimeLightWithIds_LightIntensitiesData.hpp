// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RuntimeLightWithIds
#include "GlobalNamespace/RuntimeLightWithIds.hpp"
// Including type: LightWithIds/LightData
#include "GlobalNamespace/LightWithIds_LightData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: RuntimeLightWithIds/LightIntensitiesData
  class RuntimeLightWithIds::LightIntensitiesData : public GlobalNamespace::LightWithIds::LightData {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x28
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: LightIntensitiesData
    LightIntensitiesData(float intensity_ = {}) noexcept : intensity{intensity_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return intensity;
    }
    // public System.Single get_intensity()
    // Offset: 0x1D92394
    float get_intensity();
    // public System.Void set_intensity(System.Single value)
    // Offset: 0x1D9239C
    void set_intensity(float value);
    // protected override UnityEngine.Color ProcessColor(UnityEngine.Color newColor)
    // Offset: 0x1D923A4
    // Implemented from: LightWithIds/LightData
    // Base method: UnityEngine.Color LightData::ProcessColor(UnityEngine.Color newColor)
    UnityEngine::Color ProcessColor(UnityEngine::Color newColor);
    // public System.Void .ctor()
    // Offset: 0x1D923BC
    // Implemented from: LightWithIds/LightData
    // Base method: System.Void LightData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeLightWithIds::LightIntensitiesData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeLightWithIds::LightIntensitiesData*, creationType>()));
    }
  }; // RuntimeLightWithIds/LightIntensitiesData
  #pragma pack(pop)
  static check_size<sizeof(RuntimeLightWithIds::LightIntensitiesData), 40 + sizeof(float)> __GlobalNamespace_RuntimeLightWithIds_LightIntensitiesDataSizeCheck;
  static_assert(sizeof(RuntimeLightWithIds::LightIntensitiesData) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData*, "", "RuntimeLightWithIds/LightIntensitiesData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::get_intensity
// Il2CppName: get_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::*)()>(&GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::get_intensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData*), "get_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::set_intensity
// Il2CppName: set_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::*)(float)>(&GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::set_intensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData*), "set_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::ProcessColor
// Il2CppName: ProcessColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::*)(UnityEngine::Color)>(&GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::ProcessColor)> {
  static const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData*), "ProcessColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::LightIntensitiesData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
