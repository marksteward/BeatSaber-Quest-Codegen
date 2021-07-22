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
  // Autogenerated type: MultiplayerLobbyCenterScreenLayoutAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyCenterScreenLayoutAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _nextLevelTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* nextLevelTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xE0DBE8
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
    // [SpaceAttribute] Offset: 0xE0DC30
    // private System.Single _transitionDuration
    // Size: 0x4
    // Offset: 0x30
    float transitionDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: transitionDuration and: tweeningManager
    char __padding3[0x4] = {};
    // [InjectAttribute] Offset: 0xE0DC68
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x38
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerLobbyCenterScreenLayoutAnimator
    MultiplayerLobbyCenterScreenLayoutAnimator(UnityEngine::RectTransform* nextLevelTransform_ = {}, UnityEngine::RectTransform* nextLevelBasePosition_ = {}, UnityEngine::RectTransform* nextLevelCountdownPosition_ = {}, float transitionDuration_ = {}, Tweening::TweeningManager* tweeningManager_ = {}) noexcept : nextLevelTransform{nextLevelTransform_}, nextLevelBasePosition{nextLevelBasePosition_}, nextLevelCountdownPosition{nextLevelCountdownPosition_}, transitionDuration{transitionDuration_}, tweeningManager{tweeningManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void StartCountdown()
    // Offset: 0x23CF0F0
    void StartCountdown();
    // public System.Void StopCountdown(System.Boolean instant)
    // Offset: 0x23CF31C
    void StopCountdown(bool instant);
    // private System.Void Move(UnityEngine.Vector3 from, UnityEngine.Vector3 to, System.Single duration)
    // Offset: 0x23CF1F0
    void Move(UnityEngine::Vector3 from, UnityEngine::Vector3 to, float duration);
    // private System.Void <Move>b__7_0(UnityEngine.Vector3 pos)
    // Offset: 0x23CF44C
    void $Move$b__7_0(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0x23CF444
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyCenterScreenLayoutAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyCenterScreenLayoutAnimator*, creationType>()));
    }
  }; // MultiplayerLobbyCenterScreenLayoutAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyCenterScreenLayoutAnimator), 56 + sizeof(Tweening::TweeningManager*)> __GlobalNamespace_MultiplayerLobbyCenterScreenLayoutAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLobbyCenterScreenLayoutAnimator) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*, "", "MultiplayerLobbyCenterScreenLayoutAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StartCountdown
// Il2CppName: StartCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)()>(&GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StartCountdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*), "StartCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StopCountdown
// Il2CppName: StopCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(bool)>(&GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StopCountdown)> {
  static const MethodInfo* get() {
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*), "StopCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instant});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::Move
// Il2CppName: Move
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::Move)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*), "Move", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::$Move$b__7_0
// Il2CppName: <Move>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(UnityEngine::Vector3)>(&GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::$Move$b__7_0)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*), "<Move>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
