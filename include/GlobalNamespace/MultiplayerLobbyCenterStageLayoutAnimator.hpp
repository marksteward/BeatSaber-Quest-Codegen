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
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyCenterStageLayoutAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyCenterStageLayoutAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _nextLevelTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* nextLevelTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xE0DC88
    // private UnityEngine.RectTransform _nextLevelBasePosition
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* nextLevelBasePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _nextLevelCountdownPosition
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::RectTransform* nextLevelCountdownPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xE0DCD0
    // private System.Single _transitionDuration
    // Size: 0x4
    // Offset: 0x30
    float transitionDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: transitionDuration and: tweeningManager
    char __padding3[0x4] = {};
    // [InjectAttribute] Offset: 0xE0DD08
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x38
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerLobbyCenterStageLayoutAnimator
    MultiplayerLobbyCenterStageLayoutAnimator(UnityEngine::RectTransform* nextLevelTransform_ = {}, UnityEngine::RectTransform* nextLevelBasePosition_ = {}, UnityEngine::RectTransform* nextLevelCountdownPosition_ = {}, float transitionDuration_ = {}, Tweening::TweeningManager* tweeningManager_ = {}) noexcept : nextLevelTransform{nextLevelTransform_}, nextLevelBasePosition{nextLevelBasePosition_}, nextLevelCountdownPosition{nextLevelCountdownPosition_}, transitionDuration{transitionDuration_}, tweeningManager{tweeningManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.RectTransform _nextLevelTransform
    UnityEngine::RectTransform* _get__nextLevelTransform();
    // Set instance field: private UnityEngine.RectTransform _nextLevelTransform
    void _set__nextLevelTransform(UnityEngine::RectTransform* value);
    // Get instance field: private UnityEngine.RectTransform _nextLevelBasePosition
    UnityEngine::RectTransform* _get__nextLevelBasePosition();
    // Set instance field: private UnityEngine.RectTransform _nextLevelBasePosition
    void _set__nextLevelBasePosition(UnityEngine::RectTransform* value);
    // Get instance field: private UnityEngine.RectTransform _nextLevelCountdownPosition
    UnityEngine::RectTransform* _get__nextLevelCountdownPosition();
    // Set instance field: private UnityEngine.RectTransform _nextLevelCountdownPosition
    void _set__nextLevelCountdownPosition(UnityEngine::RectTransform* value);
    // Get instance field: private System.Single _transitionDuration
    float _get__transitionDuration();
    // Set instance field: private System.Single _transitionDuration
    void _set__transitionDuration(float value);
    // Get instance field: private readonly Tweening.TweeningManager _tweeningManager
    Tweening::TweeningManager* _get__tweeningManager();
    // Set instance field: private readonly Tweening.TweeningManager _tweeningManager
    void _set__tweeningManager(Tweening::TweeningManager* value);
    // public System.Void StartCountdown()
    // Offset: 0x23CF4F8
    void StartCountdown();
    // public System.Void StopCountdown(System.Boolean instant)
    // Offset: 0x23CF724
    void StopCountdown(bool instant);
    // private System.Void Move(UnityEngine.Vector3 from, UnityEngine.Vector3 to, System.Single duration)
    // Offset: 0x23CF5F8
    void Move(UnityEngine::Vector3 from, UnityEngine::Vector3 to, float duration);
    // private System.Void <Move>b__7_0(UnityEngine.Vector3 pos)
    // Offset: 0x23CF854
    void $Move$b__7_0(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0x23CF84C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyCenterStageLayoutAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyCenterStageLayoutAnimator*, creationType>()));
    }
  }; // MultiplayerLobbyCenterStageLayoutAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyCenterStageLayoutAnimator), 56 + sizeof(Tweening::TweeningManager*)> __GlobalNamespace_MultiplayerLobbyCenterStageLayoutAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLobbyCenterStageLayoutAnimator) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*, "", "MultiplayerLobbyCenterStageLayoutAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StartCountdown
// Il2CppName: StartCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)()>(&GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StartCountdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*), "StartCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StopCountdown
// Il2CppName: StopCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)(bool)>(&GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StopCountdown)> {
  static const MethodInfo* get() {
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*), "StopCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instant});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::Move
// Il2CppName: Move
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::Move)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*), "Move", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::$Move$b__7_0
// Il2CppName: <Move>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)(UnityEngine::Vector3)>(&GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::$Move$b__7_0)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*), "<Move>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
