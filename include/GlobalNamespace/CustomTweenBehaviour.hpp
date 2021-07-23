// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: CustomTweenBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomTweenBehaviour : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: GlobalNamespace::CustomTweenBehaviour::$$c
    class $$c;
    // [NullAllowed] Offset: 0xE1288C
    // public UnityEngine.Transform[] _transforms
    // Size: 0x8
    // Offset: 0x10
    ::Array<UnityEngine::Transform*>* transforms;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // public System.Boolean startLocationCurrentPosition
    // Size: 0x1
    // Offset: 0x18
    bool startLocationCurrentPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: startLocationCurrentPosition and: startLocalPos
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0xE128C4
    // public UnityEngine.Vector3 startLocalPos
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 startLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 endLocalPos
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 endLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public Tweening.EaseType easeType
    // Size: 0x4
    // Offset: 0x34
    Tweening::EaseType easeType;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // public System.Boolean endXRelativeToSelfRotation
    // Size: 0x1
    // Offset: 0x38
    bool endXRelativeToSelfRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: endXRelativeToSelfRotation and: elementDelay
    char __padding5[0x3] = {};
    // public System.Single elementDelay
    // Size: 0x4
    // Offset: 0x3C
    float elementDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xE12968
    // public System.Boolean _lockX
    // Size: 0x1
    // Offset: 0x40
    bool lockX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _lockY
    // Size: 0x1
    // Offset: 0x41
    bool lockY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _lockZ
    // Size: 0x1
    // Offset: 0x42
    bool lockZ;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _randomizeOrder
    // Size: 0x1
    // Offset: 0x43
    bool randomizeOrder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single _randomizedMinDurationMultiplier
    // Size: 0x4
    // Offset: 0x44
    float randomizedMinDurationMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x48
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _perItemDuration
    // Size: 0x4
    // Offset: 0x4C
    float perItemDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3[] _originalLocalPos
    // Size: 0x8
    // Offset: 0x50
    ::Array<UnityEngine::Vector3>* originalLocalPos;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x58
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: randomizedOrder
    char __padding15[0x7] = {};
    // private System.Int32[] _randomizedOrder
    // Size: 0x8
    // Offset: 0x60
    ::Array<int>* randomizedOrder;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Single[] _randomizedDuration
    // Size: 0x8
    // Offset: 0x68
    ::Array<float>* randomizedDuration;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // Creating value type constructor for type: CustomTweenBehaviour
    CustomTweenBehaviour(::Array<UnityEngine::Transform*>* transforms_ = {}, bool startLocationCurrentPosition_ = {}, UnityEngine::Vector3 startLocalPos_ = {}, UnityEngine::Vector3 endLocalPos_ = {}, Tweening::EaseType easeType_ = {}, bool endXRelativeToSelfRotation_ = {}, float elementDelay_ = {}, bool lockX_ = {}, bool lockY_ = {}, bool lockZ_ = {}, bool randomizeOrder_ = {}, float randomizedMinDurationMultiplier_ = {}, float duration_ = {}, float perItemDuration_ = {}, ::Array<UnityEngine::Vector3>* originalLocalPos_ = {}, bool initialized_ = {}, ::Array<int>* randomizedOrder_ = {}, ::Array<float>* randomizedDuration_ = {}) noexcept : transforms{transforms_}, startLocationCurrentPosition{startLocationCurrentPosition_}, startLocalPos{startLocalPos_}, endLocalPos{endLocalPos_}, easeType{easeType_}, endXRelativeToSelfRotation{endXRelativeToSelfRotation_}, elementDelay{elementDelay_}, lockX{lockX_}, lockY{lockY_}, lockZ{lockZ_}, randomizeOrder{randomizeOrder_}, randomizedMinDurationMultiplier{randomizedMinDurationMultiplier_}, duration{duration_}, perItemDuration{perItemDuration_}, originalLocalPos{originalLocalPos_}, initialized{initialized_}, randomizedOrder{randomizedOrder_}, randomizedDuration{randomizedDuration_} {}
    // Get instance field: public UnityEngine.Transform[] _transforms
    ::Array<UnityEngine::Transform*>* _get__transforms();
    // Set instance field: public UnityEngine.Transform[] _transforms
    void _set__transforms(::Array<UnityEngine::Transform*>* value);
    // Get instance field: public System.Boolean startLocationCurrentPosition
    bool _get_startLocationCurrentPosition();
    // Set instance field: public System.Boolean startLocationCurrentPosition
    void _set_startLocationCurrentPosition(bool value);
    // Get instance field: public UnityEngine.Vector3 startLocalPos
    UnityEngine::Vector3 _get_startLocalPos();
    // Set instance field: public UnityEngine.Vector3 startLocalPos
    void _set_startLocalPos(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Vector3 endLocalPos
    UnityEngine::Vector3 _get_endLocalPos();
    // Set instance field: public UnityEngine.Vector3 endLocalPos
    void _set_endLocalPos(UnityEngine::Vector3 value);
    // Get instance field: public Tweening.EaseType easeType
    Tweening::EaseType _get_easeType();
    // Set instance field: public Tweening.EaseType easeType
    void _set_easeType(Tweening::EaseType value);
    // Get instance field: public System.Boolean endXRelativeToSelfRotation
    bool _get_endXRelativeToSelfRotation();
    // Set instance field: public System.Boolean endXRelativeToSelfRotation
    void _set_endXRelativeToSelfRotation(bool value);
    // Get instance field: public System.Single elementDelay
    float _get_elementDelay();
    // Set instance field: public System.Single elementDelay
    void _set_elementDelay(float value);
    // Get instance field: public System.Boolean _lockX
    bool _get__lockX();
    // Set instance field: public System.Boolean _lockX
    void _set__lockX(bool value);
    // Get instance field: public System.Boolean _lockY
    bool _get__lockY();
    // Set instance field: public System.Boolean _lockY
    void _set__lockY(bool value);
    // Get instance field: public System.Boolean _lockZ
    bool _get__lockZ();
    // Set instance field: public System.Boolean _lockZ
    void _set__lockZ(bool value);
    // Get instance field: public System.Boolean _randomizeOrder
    bool _get__randomizeOrder();
    // Set instance field: public System.Boolean _randomizeOrder
    void _set__randomizeOrder(bool value);
    // Get instance field: public System.Single _randomizedMinDurationMultiplier
    float _get__randomizedMinDurationMultiplier();
    // Set instance field: public System.Single _randomizedMinDurationMultiplier
    void _set__randomizedMinDurationMultiplier(float value);
    // Get instance field: private System.Single _duration
    float _get__duration();
    // Set instance field: private System.Single _duration
    void _set__duration(float value);
    // Get instance field: private System.Single _perItemDuration
    float _get__perItemDuration();
    // Set instance field: private System.Single _perItemDuration
    void _set__perItemDuration(float value);
    // Get instance field: private UnityEngine.Vector3[] _originalLocalPos
    ::Array<UnityEngine::Vector3>* _get__originalLocalPos();
    // Set instance field: private UnityEngine.Vector3[] _originalLocalPos
    void _set__originalLocalPos(::Array<UnityEngine::Vector3>* value);
    // Get instance field: private System.Boolean _initialized
    bool _get__initialized();
    // Set instance field: private System.Boolean _initialized
    void _set__initialized(bool value);
    // Get instance field: private System.Int32[] _randomizedOrder
    ::Array<int>* _get__randomizedOrder();
    // Set instance field: private System.Int32[] _randomizedOrder
    void _set__randomizedOrder(::Array<int>* value);
    // Get instance field: private System.Single[] _randomizedDuration
    ::Array<float>* _get__randomizedDuration();
    // Set instance field: private System.Single[] _randomizedDuration
    void _set__randomizedDuration(::Array<float>* value);
    // public System.Void .ctor()
    // Offset: 0x108637C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomTweenBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomTweenBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomTweenBehaviour*, creationType>()));
    }
    // public override System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x1085A14
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x1085B58
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x1086084
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x10861A0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
  }; // CustomTweenBehaviour
  #pragma pack(pop)
  static check_size<sizeof(CustomTweenBehaviour), 104 + sizeof(::Array<float>*)> __GlobalNamespace_CustomTweenBehaviourSizeCheck;
  static_assert(sizeof(CustomTweenBehaviour) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomTweenBehaviour*, "", "CustomTweenBehaviour");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::OnGraphStart
// Il2CppName: OnGraphStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTweenBehaviour::*)(UnityEngine::Playables::Playable)>(&GlobalNamespace::CustomTweenBehaviour::OnGraphStart)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour*), "OnGraphStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTweenBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&GlobalNamespace::CustomTweenBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTweenBehaviour::*)(UnityEngine::Playables::Playable)>(&GlobalNamespace::CustomTweenBehaviour::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTweenBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&GlobalNamespace::CustomTweenBehaviour::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
