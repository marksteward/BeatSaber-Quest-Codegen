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
  // Forward declaring type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient;
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
  // Autogenerated type: BloomPrePassBackgroundColorsGradientElementWithLightId
  class BloomPrePassBackgroundColorsGradientElementWithLightId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // Nested type: GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements
    class Elements;
    // private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassBackgroundColorsGradient*) == 0x8);
    // private BloomPrePassBackgroundColorsGradientElementWithLightId/Elements[] _elements
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*>* elements;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*>*) == 0x8);
    // Creating value type constructor for type: BloomPrePassBackgroundColorsGradientElementWithLightId
    BloomPrePassBackgroundColorsGradientElementWithLightId(GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient_ = {}, ::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*>* elements_ = {}) noexcept : bloomPrePassBackgroundColorsGradient{bloomPrePassBackgroundColorsGradient_}, elements{elements_} {}
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1D85EC4
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1D860A8
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradientElementWithLightId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientElementWithLightId*, creationType>()));
    }
  }; // BloomPrePassBackgroundColorsGradientElementWithLightId
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientElementWithLightId), 56 + sizeof(::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*>*)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientElementWithLightIdSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientElementWithLightId) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId*, "", "BloomPrePassBackgroundColorsGradientElementWithLightId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::*)(UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
