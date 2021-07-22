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
  // Forward declaring type: RectangleFakeGlow
  class RectangleFakeGlow;
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
  // Autogenerated type: RectangleFakeGlowLightWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class RectangleFakeGlowLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x2C
    char ___base_padding[0x3] = {};
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x2C
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _alphaMul
    // Size: 0x4
    // Offset: 0x30
    float alphaMul;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: alphaMul and: rectangleFakeGlow
    char __padding1[0x4] = {};
    // private RectangleFakeGlow _rectangleFakeGlow
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::RectangleFakeGlow* rectangleFakeGlow;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RectangleFakeGlow*) == 0x8);
    // Creating value type constructor for type: RectangleFakeGlowLightWithId
    RectangleFakeGlowLightWithId(float minAlpha_ = {}, float alphaMul_ = {}, GlobalNamespace::RectangleFakeGlow* rectangleFakeGlow_ = {}) noexcept : minAlpha{minAlpha_}, alphaMul{alphaMul_}, rectangleFakeGlow{rectangleFakeGlow_} {}
    // public UnityEngine.Color get_color()
    // Offset: 0x1142B14
    UnityEngine::Color get_color();
    // public System.Void .ctor()
    // Offset: 0x1142B60
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RectangleFakeGlowLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RectangleFakeGlowLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RectangleFakeGlowLightWithId*, creationType>()));
    }
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1142B34
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
  }; // RectangleFakeGlowLightWithId
  #pragma pack(pop)
  static check_size<sizeof(RectangleFakeGlowLightWithId), 56 + sizeof(GlobalNamespace::RectangleFakeGlow*)> __GlobalNamespace_RectangleFakeGlowLightWithIdSizeCheck;
  static_assert(sizeof(RectangleFakeGlowLightWithId) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RectangleFakeGlowLightWithId*, "", "RectangleFakeGlowLightWithId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlowLightWithId::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::RectangleFakeGlowLightWithId::*)()>(&GlobalNamespace::RectangleFakeGlowLightWithId::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectangleFakeGlowLightWithId*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlowLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlowLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RectangleFakeGlowLightWithId::*)(UnityEngine::Color)>(&GlobalNamespace::RectangleFakeGlowLightWithId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectangleFakeGlowLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
