// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.Baker
#include "RootMotion/Baker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BakerTransform
  class BakerTransform;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0xAC
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.GenericBaker
  // [] Offset: FFFFFFFF
  class GenericBaker : public RootMotion::Baker {
    public:
    // [TooltipAttribute] Offset: 0xDB528C
    // public System.Boolean markAsLegacy
    // Size: 0x1
    // Offset: 0x74
    bool markAsLegacy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: markAsLegacy and: root
    char __padding0[0x3] = {};
    // [TooltipAttribute] Offset: 0xDB52C4
    // public UnityEngine.Transform root
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB52FC
    // public UnityEngine.Transform rootNode
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* rootNode;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB5334
    // public UnityEngine.Transform[] ignoreList
    // Size: 0x8
    // Offset: 0x88
    ::Array<UnityEngine::Transform*>* ignoreList;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB536C
    // public UnityEngine.Transform[] bakePositionList
    // Size: 0x8
    // Offset: 0x90
    ::Array<UnityEngine::Transform*>* bakePositionList;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private RootMotion.BakerTransform[] children
    // Size: 0x8
    // Offset: 0x98
    ::Array<RootMotion::BakerTransform*>* children;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::BakerTransform*>*) == 0x8);
    // private RootMotion.BakerTransform rootChild
    // Size: 0x8
    // Offset: 0xA0
    RootMotion::BakerTransform* rootChild;
    // Field size check
    static_assert(sizeof(RootMotion::BakerTransform*) == 0x8);
    // private System.Int32 rootChildIndex
    // Size: 0x4
    // Offset: 0xA8
    int rootChildIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GenericBaker
    GenericBaker(bool markAsLegacy_ = {}, UnityEngine::Transform* root_ = {}, UnityEngine::Transform* rootNode_ = {}, ::Array<UnityEngine::Transform*>* ignoreList_ = {}, ::Array<UnityEngine::Transform*>* bakePositionList_ = {}, ::Array<RootMotion::BakerTransform*>* children_ = {}, RootMotion::BakerTransform* rootChild_ = {}, int rootChildIndex_ = {}) noexcept : markAsLegacy{markAsLegacy_}, root{root_}, rootNode{rootNode_}, ignoreList{ignoreList_}, bakePositionList{bakePositionList_}, children{children_}, rootChild{rootChild_}, rootChildIndex{rootChildIndex_} {}
    // private System.Void Awake()
    // Offset: 0x15EFB1C
    void Awake();
    // private System.Boolean IsIgnored(UnityEngine.Transform t)
    // Offset: 0x15EFD4C
    bool IsIgnored(UnityEngine::Transform* t);
    // private System.Boolean BakePosition(UnityEngine.Transform t)
    // Offset: 0x15EFE24
    bool BakePosition(UnityEngine::Transform* t);
    // protected override UnityEngine.Transform GetCharacterRoot()
    // Offset: 0x15EFEFC
    // Implemented from: RootMotion.Baker
    // Base method: UnityEngine.Transform Baker::GetCharacterRoot()
    UnityEngine::Transform* GetCharacterRoot();
    // protected override System.Void OnStartBaking()
    // Offset: 0x15EFF04
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnStartBaking()
    void OnStartBaking();
    // protected override System.Void OnSetLoopFrame(System.Single time)
    // Offset: 0x15F0014
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetLoopFrame(System.Single time)
    void OnSetLoopFrame(float time);
    // protected override System.Void OnSetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x15F0090
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetCurves(ref UnityEngine.AnimationClip clip)
    void OnSetCurves(UnityEngine::AnimationClip*& clip);
    // protected override System.Void OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    // Offset: 0x15F010C
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    void OnSetKeyframes(float time, bool lastFrame);
    // public System.Void .ctor()
    // Offset: 0x15F0188
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericBaker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::GenericBaker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericBaker*, creationType>()));
    }
  }; // RootMotion.GenericBaker
  static check_size<sizeof(GenericBaker), 168 + sizeof(int)> __RootMotion_GenericBakerSizeCheck;
  static_assert(sizeof(GenericBaker) == 0xAC);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(RootMotion::GenericBaker*, "RootMotion", "GenericBaker");
