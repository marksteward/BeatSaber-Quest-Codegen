// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Tweening.Tween`1
#include "Tweening/Tween_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: StaticMemoryPool`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
  class StaticMemoryPool_7;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // WARNING Size may be invalid!
  // Autogenerated type: Tweening.ColorTween
  class ColorTween : public Tweening::Tween_1<UnityEngine::Color> {
    public:
    // Creating value type constructor for type: ColorTween
    ColorTween() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE297F4
    // Get static field: static public readonly Zenject.StaticMemoryPool`7<UnityEngine.Color,UnityEngine.Color,System.Action`1<UnityEngine.Color>,System.Single,Tweening.EaseType,System.Single,Tweening.ColorTween> Pool
    static Zenject::StaticMemoryPool_7<UnityEngine::Color, UnityEngine::Color, System::Action_1<UnityEngine::Color>*, float, Tweening::EaseType, float, Tweening::ColorTween*>* _get_Pool();
    // Set static field: static public readonly Zenject.StaticMemoryPool`7<UnityEngine.Color,UnityEngine.Color,System.Action`1<UnityEngine.Color>,System.Single,Tweening.EaseType,System.Single,Tweening.ColorTween> Pool
    static void _set_Pool(Zenject::StaticMemoryPool_7<UnityEngine::Color, UnityEngine::Color, System::Action_1<UnityEngine::Color>*, float, Tweening::EaseType, float, Tweening::ColorTween*>* value);
    // public System.Void .ctor(UnityEngine.Color fromValue, UnityEngine.Color toValue, System.Action`1<UnityEngine.Color> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0x11206C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTween* New_ctor(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::ColorTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTween*, creationType>(fromValue, toValue, onUpdate, duration, easeType, delay)));
    }
    // public System.Void .ctor(UnityEngine.Color fromValue, UnityEngine.Color toValue, System.Action`1<UnityEngine.Color> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0x11207A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTween* New_ctor(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::ColorTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTween*, creationType>(fromValue, toValue, onUpdate, duration, animationCurve, delay)));
    }
    // public UnityEngine.Color GetValue(System.Single t)
    // Offset: 0x1120878
    UnityEngine::Color GetValue(float t);
    // static private System.Void .cctor()
    // Offset: 0x1120A44
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1120678
    // Implemented from: Tweening.Tween`1
    // Base method: System.Void Tween_1::.ctor()
    // Base method: System.Void Tween::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::ColorTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTween*, creationType>()));
    }
  }; // Tweening.ColorTween
}
DEFINE_IL2CPP_ARG_TYPE(Tweening::ColorTween*, "Tweening", "ColorTween");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tweening::ColorTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::ColorTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::ColorTween::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (Tweening::ColorTween::*)(float)>(&Tweening::ColorTween::GetValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::ColorTween*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Tweening::ColorTween::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Tweening::ColorTween::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::ColorTween*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::ColorTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
