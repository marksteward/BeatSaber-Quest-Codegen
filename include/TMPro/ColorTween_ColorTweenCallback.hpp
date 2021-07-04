// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.ColorTween
#include "TMPro/ColorTween.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // WARNING Size may be invalid!
  // Autogenerated type: TMPro.ColorTween/ColorTweenCallback
  class ColorTween::ColorTweenCallback : public UnityEngine::Events::UnityEvent_1<UnityEngine::Color> {
    public:
    // Creating value type constructor for type: ColorTweenCallback
    ColorTweenCallback() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x10E2F64
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTween::ColorTweenCallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::ColorTween::ColorTweenCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTween::ColorTweenCallback*, creationType>()));
    }
  }; // TMPro.ColorTween/ColorTweenCallback
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::ColorTween::ColorTweenCallback*, "TMPro", "ColorTween/ColorTweenCallback");
// Writing MetadataGetter for method: TMPro::ColorTween::ColorTweenCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
