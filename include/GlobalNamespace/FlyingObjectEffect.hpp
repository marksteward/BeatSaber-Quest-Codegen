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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: IFlyingObjectEffectDidFinishEvent
  class IFlyingObjectEffectDidFinishEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: FlyingObjectEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyingObjectEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AnimationCurve _moveAnimationCurve
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AnimationCurve* moveAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _shakeFrequency
    // Size: 0x4
    // Offset: 0x20
    float shakeFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shakeStrength
    // Size: 0x4
    // Offset: 0x24
    float shakeStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _shakeStrengthAnimationCurve
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationCurve* shakeStrengthAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x30
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: shakeRotation
    char __padding4[0x3] = {};
    // private UnityEngine.Quaternion _shakeRotation
    // Size: 0x10
    // Offset: 0x34
    UnityEngine::Quaternion shakeRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion _rotation
    // Size: 0x10
    // Offset: 0x44
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single _elapsedTime
    // Size: 0x4
    // Offset: 0x54
    float elapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _startPos
    // Size: 0xC
    // Offset: 0x58
    UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _targetPos
    // Size: 0xC
    // Offset: 0x64
    UnityEngine::Vector3 targetPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x70
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _shake
    // Size: 0x1
    // Offset: 0x74
    bool shake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shake and: didFinishEvent
    char __padding11[0x3] = {};
    // private readonly LazyCopyHashSet`1<IFlyingObjectEffectDidFinishEvent> _didFinishEvent
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*) == 0x8);
    // Creating value type constructor for type: FlyingObjectEffect
    FlyingObjectEffect(UnityEngine::AnimationCurve* moveAnimationCurve_ = {}, float shakeFrequency_ = {}, float shakeStrength_ = {}, UnityEngine::AnimationCurve* shakeStrengthAnimationCurve_ = {}, bool initialized_ = {}, UnityEngine::Quaternion shakeRotation_ = {}, UnityEngine::Quaternion rotation_ = {}, float elapsedTime_ = {}, UnityEngine::Vector3 startPos_ = {}, UnityEngine::Vector3 targetPos_ = {}, float duration_ = {}, bool shake_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* didFinishEvent_ = {}) noexcept : moveAnimationCurve{moveAnimationCurve_}, shakeFrequency{shakeFrequency_}, shakeStrength{shakeStrength_}, shakeStrengthAnimationCurve{shakeStrengthAnimationCurve_}, initialized{initialized_}, shakeRotation{shakeRotation_}, rotation{rotation_}, elapsedTime{elapsedTime_}, startPos{startPos_}, targetPos{targetPos_}, duration{duration_}, shake{shake_}, didFinishEvent{didFinishEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.AnimationCurve _moveAnimationCurve
    UnityEngine::AnimationCurve* _get__moveAnimationCurve();
    // Set instance field: private UnityEngine.AnimationCurve _moveAnimationCurve
    void _set__moveAnimationCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: private System.Single _shakeFrequency
    float _get__shakeFrequency();
    // Set instance field: private System.Single _shakeFrequency
    void _set__shakeFrequency(float value);
    // Get instance field: private System.Single _shakeStrength
    float _get__shakeStrength();
    // Set instance field: private System.Single _shakeStrength
    void _set__shakeStrength(float value);
    // Get instance field: private UnityEngine.AnimationCurve _shakeStrengthAnimationCurve
    UnityEngine::AnimationCurve* _get__shakeStrengthAnimationCurve();
    // Set instance field: private UnityEngine.AnimationCurve _shakeStrengthAnimationCurve
    void _set__shakeStrengthAnimationCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: private System.Boolean _initialized
    bool _get__initialized();
    // Set instance field: private System.Boolean _initialized
    void _set__initialized(bool value);
    // Get instance field: private UnityEngine.Quaternion _shakeRotation
    UnityEngine::Quaternion _get__shakeRotation();
    // Set instance field: private UnityEngine.Quaternion _shakeRotation
    void _set__shakeRotation(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Quaternion _rotation
    UnityEngine::Quaternion _get__rotation();
    // Set instance field: private UnityEngine.Quaternion _rotation
    void _set__rotation(UnityEngine::Quaternion value);
    // Get instance field: private System.Single _elapsedTime
    float _get__elapsedTime();
    // Set instance field: private System.Single _elapsedTime
    void _set__elapsedTime(float value);
    // Get instance field: private UnityEngine.Vector3 _startPos
    UnityEngine::Vector3 _get__startPos();
    // Set instance field: private UnityEngine.Vector3 _startPos
    void _set__startPos(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 _targetPos
    UnityEngine::Vector3 _get__targetPos();
    // Set instance field: private UnityEngine.Vector3 _targetPos
    void _set__targetPos(UnityEngine::Vector3 value);
    // Get instance field: private System.Single _duration
    float _get__duration();
    // Set instance field: private System.Single _duration
    void _set__duration(float value);
    // Get instance field: private System.Boolean _shake
    bool _get__shake();
    // Set instance field: private System.Boolean _shake
    void _set__shake(bool value);
    // Get instance field: private readonly LazyCopyHashSet`1<IFlyingObjectEffectDidFinishEvent> _didFinishEvent
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* _get__didFinishEvent();
    // Set instance field: private readonly LazyCopyHashSet`1<IFlyingObjectEffectDidFinishEvent> _didFinishEvent
    void _set__didFinishEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* value);
    // public ILazyCopyHashSet`1<IFlyingObjectEffectDidFinishEvent> get_didFinishEvent()
    // Offset: 0x102A308
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* get_didFinishEvent();
    // public System.Void InitAndPresent(System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion rotation, System.Boolean shake)
    // Offset: 0x102A310
    void InitAndPresent(float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, bool shake);
    // protected System.Void Update()
    // Offset: 0x102A3FC
    void Update();
    // protected System.Void ManualUpdate(System.Single t)
    // Offset: 0xFFFFFFFF
    void ManualUpdate(float t);
    // protected System.Void .ctor()
    // Offset: 0x102A790
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingObjectEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingObjectEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingObjectEffect*, creationType>()));
    }
  }; // FlyingObjectEffect
  #pragma pack(pop)
  static check_size<sizeof(FlyingObjectEffect), 120 + sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*)> __GlobalNamespace_FlyingObjectEffectSizeCheck;
  static_assert(sizeof(FlyingObjectEffect) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingObjectEffect*, "", "FlyingObjectEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlyingObjectEffect::get_didFinishEvent
// Il2CppName: get_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* (GlobalNamespace::FlyingObjectEffect::*)()>(&GlobalNamespace::FlyingObjectEffect::get_didFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingObjectEffect*), "get_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingObjectEffect::InitAndPresent
// Il2CppName: InitAndPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingObjectEffect::*)(float, UnityEngine::Vector3, UnityEngine::Quaternion, bool)>(&GlobalNamespace::FlyingObjectEffect::InitAndPresent)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* shake = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingObjectEffect*), "InitAndPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration, targetPos, rotation, shake});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingObjectEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingObjectEffect::*)()>(&GlobalNamespace::FlyingObjectEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingObjectEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingObjectEffect::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingObjectEffect::*)(float)>(&GlobalNamespace::FlyingObjectEffect::ManualUpdate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingObjectEffect*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingObjectEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
