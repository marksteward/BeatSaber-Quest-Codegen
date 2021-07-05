// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x140
  #pragma pack(push, 1)
  // Autogenerated type: AvatarTweenController
  class AvatarTweenController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AvatarTweenController::$$c__DisplayClass52_0
    class $$c__DisplayClass52_0;
    // Nested type: GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53
    class $AppearAnimation$d__53;
    // Nested type: GlobalNamespace::AvatarTweenController::$DisappearAnimation$d__58
    class $DisappearAnimation$d__58;
    // [HeaderAttribute] Offset: 0xE15524
    // private UnityEngine.Transform _avatarTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* avatarTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _headParent
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* headParent;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _leftHandTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* leftHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightHandTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* rightHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _bodyTransform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* bodyTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [HeaderAttribute] Offset: 0xE155B0
    // private UnityEngine.Transform _headInnerTransform
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* headInnerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _leftHandInnerTransform
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* leftHandInnerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightHandInnerTransform
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* rightHandInnerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _bodyInnerTransform
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* bodyInnerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [HeaderAttribute] Offset: 0xE1562C
    // [RangeAttribute] Offset: 0xE1562C
    // private System.Single _popDuration
    // Size: 0x4
    // Offset: 0x60
    float popDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Tweening.EaseType _popEaseType
    // Size: 0x4
    // Offset: 0x64
    Tweening::EaseType popEaseType;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // private System.Single _headPopAmount
    // Size: 0x4
    // Offset: 0x68
    float headPopAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _handsPopAmount
    // Size: 0x4
    // Offset: 0x6C
    float handsPopAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _clothesPopAmount
    // Size: 0x4
    // Offset: 0x70
    float clothesPopAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _allPopAmount
    // Size: 0x4
    // Offset: 0x74
    float allPopAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE156E0
    // [RangeAttribute] Offset: 0xE156E0
    // private System.Single _appearDuration
    // Size: 0x4
    // Offset: 0x78
    float appearDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE15744
    // private System.Single _appearSpacing
    // Size: 0x4
    // Offset: 0x7C
    float appearSpacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _appearHeight
    // Size: 0x4
    // Offset: 0x80
    float appearHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0xE15794
    // private UnityEngine.Vector3 _squashFactor
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 squashFactor;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [HeaderAttribute] Offset: 0xE157D0
    // [RangeAttribute] Offset: 0xE157D0
    // private System.Single _disappearDuration
    // Size: 0x4
    // Offset: 0x90
    float disappearDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disappearHeight
    // Size: 0x4
    // Offset: 0x94
    float disappearHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _disappearSquash
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 disappearSquash;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private Tweening.EaseType _disappearScaleEase
    // Size: 0x4
    // Offset: 0xA4
    Tweening::EaseType disappearScaleEase;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // private Tweening.EaseType _disappearPositionEase
    // Size: 0x4
    // Offset: 0xA8
    Tweening::EaseType disappearPositionEase;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // Padding between fields: disappearPositionEase and: tweeningManager
    char __padding23[0x4] = {};
    // [InjectAttribute] Offset: 0xE15878
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0xB0
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween`1<System.Single> _popHeadTween
    // Size: 0x8
    // Offset: 0xB8
    Tweening::Tween_1<float>* popHeadTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _popLeftHandTween
    // Size: 0x8
    // Offset: 0xC0
    Tweening::Tween_1<float>* popLeftHandTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _popRightHandTween
    // Size: 0x8
    // Offset: 0xC8
    Tweening::Tween_1<float>* popRightHandTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _popClothesTween
    // Size: 0x8
    // Offset: 0xD0
    Tweening::Tween_1<float>* popClothesTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearHeadPositionTween
    // Size: 0x8
    // Offset: 0xD8
    Tweening::Tween_1<UnityEngine::Vector3>* appearHeadPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearHeadScaleTween
    // Size: 0x8
    // Offset: 0xE0
    Tweening::Tween_1<UnityEngine::Vector3>* appearHeadScaleTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearBodyPositionTween
    // Size: 0x8
    // Offset: 0xE8
    Tweening::Tween_1<UnityEngine::Vector3>* appearBodyPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearBodyScaleTween
    // Size: 0x8
    // Offset: 0xF0
    Tweening::Tween_1<UnityEngine::Vector3>* appearBodyScaleTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearRightHandPositionTween
    // Size: 0x8
    // Offset: 0xF8
    Tweening::Tween_1<UnityEngine::Vector3>* appearRightHandPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearRightHandScaleTween
    // Size: 0x8
    // Offset: 0x100
    Tweening::Tween_1<UnityEngine::Vector3>* appearRightHandScaleTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearLeftHandPositionTween
    // Size: 0x8
    // Offset: 0x108
    Tweening::Tween_1<UnityEngine::Vector3>* appearLeftHandPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _appearLeftHandScaleTween
    // Size: 0x8
    // Offset: 0x110
    Tweening::Tween_1<UnityEngine::Vector3>* appearLeftHandScaleTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _disappearScaleTween
    // Size: 0x8
    // Offset: 0x118
    Tweening::Tween_1<UnityEngine::Vector3>* disappearScaleTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _disappearPositionTween
    // Size: 0x8
    // Offset: 0x120
    Tweening::Tween_1<UnityEngine::Vector3>* disappearPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Vector3 _avatarLocalPosition
    // Size: 0xC
    // Offset: 0x128
    UnityEngine::Vector3 avatarLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _avatarLocalScale
    // Size: 0xC
    // Offset: 0x134
    UnityEngine::Vector3 avatarLocalScale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: AvatarTweenController
    AvatarTweenController(UnityEngine::Transform* avatarTransform_ = {}, UnityEngine::Transform* headParent_ = {}, UnityEngine::Transform* leftHandTransform_ = {}, UnityEngine::Transform* rightHandTransform_ = {}, UnityEngine::Transform* bodyTransform_ = {}, UnityEngine::Transform* headInnerTransform_ = {}, UnityEngine::Transform* leftHandInnerTransform_ = {}, UnityEngine::Transform* rightHandInnerTransform_ = {}, UnityEngine::Transform* bodyInnerTransform_ = {}, float popDuration_ = {}, Tweening::EaseType popEaseType_ = {}, float headPopAmount_ = {}, float handsPopAmount_ = {}, float clothesPopAmount_ = {}, float allPopAmount_ = {}, float appearDuration_ = {}, float appearSpacing_ = {}, float appearHeight_ = {}, UnityEngine::Vector3 squashFactor_ = {}, float disappearDuration_ = {}, float disappearHeight_ = {}, UnityEngine::Vector3 disappearSquash_ = {}, Tweening::EaseType disappearScaleEase_ = {}, Tweening::EaseType disappearPositionEase_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween_1<float>* popHeadTween_ = {}, Tweening::Tween_1<float>* popLeftHandTween_ = {}, Tweening::Tween_1<float>* popRightHandTween_ = {}, Tweening::Tween_1<float>* popClothesTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* appearHeadPositionTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* appearHeadScaleTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* appearBodyPositionTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* appearBodyScaleTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* appearRightHandPositionTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* appearRightHandScaleTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* appearLeftHandPositionTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* appearLeftHandScaleTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* disappearScaleTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* disappearPositionTween_ = {}, UnityEngine::Vector3 avatarLocalPosition_ = {}, UnityEngine::Vector3 avatarLocalScale_ = {}) noexcept : avatarTransform{avatarTransform_}, headParent{headParent_}, leftHandTransform{leftHandTransform_}, rightHandTransform{rightHandTransform_}, bodyTransform{bodyTransform_}, headInnerTransform{headInnerTransform_}, leftHandInnerTransform{leftHandInnerTransform_}, rightHandInnerTransform{rightHandInnerTransform_}, bodyInnerTransform{bodyInnerTransform_}, popDuration{popDuration_}, popEaseType{popEaseType_}, headPopAmount{headPopAmount_}, handsPopAmount{handsPopAmount_}, clothesPopAmount{clothesPopAmount_}, allPopAmount{allPopAmount_}, appearDuration{appearDuration_}, appearSpacing{appearSpacing_}, appearHeight{appearHeight_}, squashFactor{squashFactor_}, disappearDuration{disappearDuration_}, disappearHeight{disappearHeight_}, disappearSquash{disappearSquash_}, disappearScaleEase{disappearScaleEase_}, disappearPositionEase{disappearPositionEase_}, tweeningManager{tweeningManager_}, popHeadTween{popHeadTween_}, popLeftHandTween{popLeftHandTween_}, popRightHandTween{popRightHandTween_}, popClothesTween{popClothesTween_}, appearHeadPositionTween{appearHeadPositionTween_}, appearHeadScaleTween{appearHeadScaleTween_}, appearBodyPositionTween{appearBodyPositionTween_}, appearBodyScaleTween{appearBodyScaleTween_}, appearRightHandPositionTween{appearRightHandPositionTween_}, appearRightHandScaleTween{appearRightHandScaleTween_}, appearLeftHandPositionTween{appearLeftHandPositionTween_}, appearLeftHandScaleTween{appearLeftHandScaleTween_}, disappearScaleTween{disappearScaleTween_}, disappearPositionTween{disappearPositionTween_}, avatarLocalPosition{avatarLocalPosition_}, avatarLocalScale{avatarLocalScale_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1137708
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x1137760
    void OnDisable();
    // public System.Void PresentAvatar()
    // Offset: 0x1137808
    void PresentAvatar();
    // public System.Void HideAvatar()
    // Offset: 0x11378AC
    void HideAvatar();
    // public System.Void PopAll()
    // Offset: 0x1137950
    void PopAll();
    // public System.Void PopHead()
    // Offset: 0x1137B14
    void PopHead();
    // public System.Void PopHands()
    // Offset: 0x1137B1C
    void PopHands();
    // public System.Void PopClothes()
    // Offset: 0x1137B24
    void PopClothes();
    // private System.Void PopHead(System.Single popAmount)
    // Offset: 0x1137988
    void PopHead(float popAmount);
    // private System.Void PopHands(System.Single popAmount)
    // Offset: 0x1137A60
    void PopHands(float popAmount);
    // private System.Void PopClothes(System.Single popAmount)
    // Offset: 0x11379F4
    void PopClothes(float popAmount);
    // private Tweening.Tween`1<System.Single> CreatePopTween(UnityEngine.Transform partTransform, System.Single popAmount)
    // Offset: 0x1137B2C
    Tweening::Tween_1<float>* CreatePopTween(UnityEngine::Transform* partTransform, float popAmount);
    // private System.Collections.IEnumerator AppearAnimation()
    // Offset: 0x113783C
    System::Collections::IEnumerator* AppearAnimation();
    // private System.Void AppearBody()
    // Offset: 0x1137C6C
    void AppearBody();
    // private System.Void AppearHead()
    // Offset: 0x1137F50
    void AppearHead();
    // private System.Void AppearLeftHand()
    // Offset: 0x1138234
    void AppearLeftHand();
    // private System.Void AppearRightHand()
    // Offset: 0x1138520
    void AppearRightHand();
    // private System.Collections.IEnumerator DisappearAnimation()
    // Offset: 0x11378E0
    System::Collections::IEnumerator* DisappearAnimation();
    // private System.Void StopAll()
    // Offset: 0x1137764
    void StopAll();
    // private System.Void <AppearBody>b__54_0(UnityEngine.Vector3 val)
    // Offset: 0x113891C
    void $AppearBody$b__54_0(UnityEngine::Vector3 val);
    // private System.Void <AppearBody>b__54_1(UnityEngine.Vector3 val)
    // Offset: 0x1138938
    void $AppearBody$b__54_1(UnityEngine::Vector3 val);
    // private System.Void <AppearHead>b__55_0(UnityEngine.Vector3 val)
    // Offset: 0x1138954
    void $AppearHead$b__55_0(UnityEngine::Vector3 val);
    // private System.Void <AppearHead>b__55_1(UnityEngine.Vector3 val)
    // Offset: 0x1138970
    void $AppearHead$b__55_1(UnityEngine::Vector3 val);
    // private System.Void <AppearLeftHand>b__56_0(UnityEngine.Vector3 val)
    // Offset: 0x113898C
    void $AppearLeftHand$b__56_0(UnityEngine::Vector3 val);
    // private System.Void <AppearLeftHand>b__56_1(UnityEngine.Vector3 val)
    // Offset: 0x11389A8
    void $AppearLeftHand$b__56_1(UnityEngine::Vector3 val);
    // private System.Void <AppearRightHand>b__57_0(UnityEngine.Vector3 val)
    // Offset: 0x11389C4
    void $AppearRightHand$b__57_0(UnityEngine::Vector3 val);
    // private System.Void <AppearRightHand>b__57_1(UnityEngine.Vector3 val)
    // Offset: 0x11389E0
    void $AppearRightHand$b__57_1(UnityEngine::Vector3 val);
    // private System.Void <DisappearAnimation>b__58_0(UnityEngine.Vector3 val)
    // Offset: 0x11389FC
    void $DisappearAnimation$b__58_0(UnityEngine::Vector3 val);
    // private System.Void <DisappearAnimation>b__58_1(UnityEngine.Vector3 val)
    // Offset: 0x1138A18
    void $DisappearAnimation$b__58_1(UnityEngine::Vector3 val);
    // public System.Void .ctor()
    // Offset: 0x1138838
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarTweenController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarTweenController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarTweenController*, creationType>()));
    }
  }; // AvatarTweenController
  #pragma pack(pop)
  static check_size<sizeof(AvatarTweenController), 308 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_AvatarTweenControllerSizeCheck;
  static_assert(sizeof(AvatarTweenController) == 0x140);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarTweenController*, "", "AvatarTweenController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::PresentAvatar
// Il2CppName: PresentAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::PresentAvatar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "PresentAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::HideAvatar
// Il2CppName: HideAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::HideAvatar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "HideAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::PopAll
// Il2CppName: PopAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::PopAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "PopAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::PopHead
// Il2CppName: PopHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::PopHead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "PopHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::PopHands
// Il2CppName: PopHands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::PopHands)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "PopHands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::PopClothes
// Il2CppName: PopClothes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::PopClothes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "PopClothes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::PopHead
// Il2CppName: PopHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(float)>(&GlobalNamespace::AvatarTweenController::PopHead)> {
  static const MethodInfo* get() {
    static auto* popAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "PopHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{popAmount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::PopHands
// Il2CppName: PopHands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(float)>(&GlobalNamespace::AvatarTweenController::PopHands)> {
  static const MethodInfo* get() {
    static auto* popAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "PopHands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{popAmount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::PopClothes
// Il2CppName: PopClothes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(float)>(&GlobalNamespace::AvatarTweenController::PopClothes)> {
  static const MethodInfo* get() {
    static auto* popAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "PopClothes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{popAmount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::CreatePopTween
// Il2CppName: CreatePopTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::Tween_1<float>* (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Transform*, float)>(&GlobalNamespace::AvatarTweenController::CreatePopTween)> {
  static const MethodInfo* get() {
    static auto* partTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* popAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "CreatePopTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{partTransform, popAmount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::AppearAnimation
// Il2CppName: AppearAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::AppearAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "AppearAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::AppearBody
// Il2CppName: AppearBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::AppearBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "AppearBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::AppearHead
// Il2CppName: AppearHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::AppearHead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "AppearHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::AppearLeftHand
// Il2CppName: AppearLeftHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::AppearLeftHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "AppearLeftHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::AppearRightHand
// Il2CppName: AppearRightHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::AppearRightHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "AppearRightHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::DisappearAnimation
// Il2CppName: DisappearAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::DisappearAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "DisappearAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::StopAll
// Il2CppName: StopAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)()>(&GlobalNamespace::AvatarTweenController::StopAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "StopAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearBody$b__54_0
// Il2CppName: <AppearBody>b__54_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$AppearBody$b__54_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<AppearBody>b__54_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearBody$b__54_1
// Il2CppName: <AppearBody>b__54_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$AppearBody$b__54_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<AppearBody>b__54_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearHead$b__55_0
// Il2CppName: <AppearHead>b__55_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$AppearHead$b__55_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<AppearHead>b__55_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearHead$b__55_1
// Il2CppName: <AppearHead>b__55_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$AppearHead$b__55_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<AppearHead>b__55_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearLeftHand$b__56_0
// Il2CppName: <AppearLeftHand>b__56_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$AppearLeftHand$b__56_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<AppearLeftHand>b__56_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearLeftHand$b__56_1
// Il2CppName: <AppearLeftHand>b__56_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$AppearLeftHand$b__56_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<AppearLeftHand>b__56_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearRightHand$b__57_0
// Il2CppName: <AppearRightHand>b__57_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$AppearRightHand$b__57_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<AppearRightHand>b__57_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearRightHand$b__57_1
// Il2CppName: <AppearRightHand>b__57_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$AppearRightHand$b__57_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<AppearRightHand>b__57_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$DisappearAnimation$b__58_0
// Il2CppName: <DisappearAnimation>b__58_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$DisappearAnimation$b__58_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<DisappearAnimation>b__58_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$DisappearAnimation$b__58_1
// Il2CppName: <DisappearAnimation>b__58_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarTweenController::$DisappearAnimation$b__58_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController*), "<DisappearAnimation>b__58_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
