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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityLightWithId
  class UnityLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private UnityEngine.Light _light
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Light* light;
    // Field size check
    static_assert(sizeof(UnityEngine::Light*) == 0x8);
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x38
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x3C
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: UnityLightWithId
    UnityLightWithId(UnityEngine::Light* light_ = {}, float intensity_ = {}, float minAlpha_ = {}) noexcept : light{light_}, intensity{intensity_}, minAlpha{minAlpha_} {}
    // public UnityEngine.Color get_color()
    // Offset: 0x1D9402C
    UnityEngine::Color get_color();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1D94048
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1D94118
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnityLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityLightWithId*, creationType>()));
    }
  }; // UnityLightWithId
  #pragma pack(pop)
  static check_size<sizeof(UnityLightWithId), 60 + sizeof(float)> __GlobalNamespace_UnityLightWithIdSizeCheck;
  static_assert(sizeof(UnityLightWithId) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityLightWithId*, "", "UnityLightWithId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnityLightWithId::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::UnityLightWithId::*)()>(&GlobalNamespace::UnityLightWithId::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnityLightWithId*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnityLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityLightWithId::*)(UnityEngine::Color)>(&GlobalNamespace::UnityLightWithId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnityLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnityLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
