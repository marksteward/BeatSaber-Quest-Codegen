// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Tweening.Tween`1
#include "Tweening/Tween_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
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
  // Autogenerated type: Tweening.Vector2Tween
  class Vector2Tween : public Tweening::Tween_1<UnityEngine::Vector2> {
    public:
    // Creating value type constructor for type: Vector2Tween
    Vector2Tween() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE297D4
    // Get static field: static public readonly Zenject.StaticMemoryPool`7<UnityEngine.Vector2,UnityEngine.Vector2,System.Action`1<UnityEngine.Vector2>,System.Single,Tweening.EaseType,System.Single,Tweening.Vector2Tween> Pool
    static Zenject::StaticMemoryPool_7<UnityEngine::Vector2, UnityEngine::Vector2, System::Action_1<UnityEngine::Vector2>*, float, Tweening::EaseType, float, Tweening::Vector2Tween*>* _get_Pool();
    // Set static field: static public readonly Zenject.StaticMemoryPool`7<UnityEngine.Vector2,UnityEngine.Vector2,System.Action`1<UnityEngine.Vector2>,System.Single,Tweening.EaseType,System.Single,Tweening.Vector2Tween> Pool
    static void _set_Pool(Zenject::StaticMemoryPool_7<UnityEngine::Vector2, UnityEngine::Vector2, System::Action_1<UnityEngine::Vector2>*, float, Tweening::EaseType, float, Tweening::Vector2Tween*>* value);
    // public System.Void .ctor(UnityEngine.Vector2 fromValue, UnityEngine.Vector2 toValue, System.Action`1<UnityEngine.Vector2> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0x11219F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Tween* New_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector2Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Tween*, creationType>(fromValue, toValue, onUpdate, duration, easeType, delay)));
    }
    // public System.Void .ctor(UnityEngine.Vector2 fromValue, UnityEngine.Vector2 toValue, System.Action`1<UnityEngine.Vector2> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0x1121AA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Tween* New_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector2Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Tween*, creationType>(fromValue, toValue, onUpdate, duration, animationCurve, delay)));
    }
    // public UnityEngine.Vector2 GetValue(System.Single t)
    // Offset: 0x1121B50
    UnityEngine::Vector2 GetValue(float t);
    // static private System.Void .cctor()
    // Offset: 0x1121C28
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x11219A0
    // Implemented from: Tweening.Tween`1
    // Base method: System.Void Tween_1::.ctor()
    // Base method: System.Void Tween::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Tween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector2Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Tween*, creationType>()));
    }
  }; // Tweening.Vector2Tween
}
DEFINE_IL2CPP_ARG_TYPE(Tweening::Vector2Tween*, "Tweening", "Vector2Tween");
// Writing MetadataGetter for method: Tweening::Vector2Tween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::Vector2Tween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::Vector2Tween::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (Tweening::Vector2Tween::*)(float)>(&Tweening::Vector2Tween::GetValue)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Vector2Tween*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Tweening::Vector2Tween::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Tweening::Vector2Tween::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Vector2Tween*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Vector2Tween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
