// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // [TokenAttribute] Offset: FFFFFFFF
  class GenericBaker : public RootMotion::Baker {
    public:
    // [TooltipAttribute] Offset: 0xE9F118
    // public System.Boolean markAsLegacy
    // Size: 0x1
    // Offset: 0x74
    bool markAsLegacy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: markAsLegacy and: root
    char __padding0[0x3] = {};
    // [TooltipAttribute] Offset: 0xE9F150
    // public UnityEngine.Transform root
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE9F188
    // public UnityEngine.Transform rootNode
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* rootNode;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE9F1C0
    // public UnityEngine.Transform[] ignoreList
    // Size: 0x8
    // Offset: 0x88
    ::Array<UnityEngine::Transform*>* ignoreList;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE9F1F8
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
    // Get instance field: public System.Boolean markAsLegacy
    bool _get_markAsLegacy();
    // Set instance field: public System.Boolean markAsLegacy
    void _set_markAsLegacy(bool value);
    // Get instance field: public UnityEngine.Transform root
    UnityEngine::Transform* _get_root();
    // Set instance field: public UnityEngine.Transform root
    void _set_root(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform rootNode
    UnityEngine::Transform* _get_rootNode();
    // Set instance field: public UnityEngine.Transform rootNode
    void _set_rootNode(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform[] ignoreList
    ::Array<UnityEngine::Transform*>* _get_ignoreList();
    // Set instance field: public UnityEngine.Transform[] ignoreList
    void _set_ignoreList(::Array<UnityEngine::Transform*>* value);
    // Get instance field: public UnityEngine.Transform[] bakePositionList
    ::Array<UnityEngine::Transform*>* _get_bakePositionList();
    // Set instance field: public UnityEngine.Transform[] bakePositionList
    void _set_bakePositionList(::Array<UnityEngine::Transform*>* value);
    // Get instance field: private RootMotion.BakerTransform[] children
    ::Array<RootMotion::BakerTransform*>* _get_children();
    // Set instance field: private RootMotion.BakerTransform[] children
    void _set_children(::Array<RootMotion::BakerTransform*>* value);
    // Get instance field: private RootMotion.BakerTransform rootChild
    RootMotion::BakerTransform* _get_rootChild();
    // Set instance field: private RootMotion.BakerTransform rootChild
    void _set_rootChild(RootMotion::BakerTransform* value);
    // Get instance field: private System.Int32 rootChildIndex
    int _get_rootChildIndex();
    // Set instance field: private System.Int32 rootChildIndex
    void _set_rootChildIndex(int value);
    // private System.Void Awake()
    // Offset: 0x173B8E0
    void Awake();
    // private System.Boolean IsIgnored(UnityEngine.Transform t)
    // Offset: 0x173BAFC
    bool IsIgnored(UnityEngine::Transform* t);
    // private System.Boolean BakePosition(UnityEngine.Transform t)
    // Offset: 0x173BBD4
    bool BakePosition(UnityEngine::Transform* t);
    // public System.Void .ctor()
    // Offset: 0x173BF38
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
    // protected override UnityEngine.Transform GetCharacterRoot()
    // Offset: 0x173BCAC
    // Implemented from: RootMotion.Baker
    // Base method: UnityEngine.Transform Baker::GetCharacterRoot()
    UnityEngine::Transform* GetCharacterRoot();
    // protected override System.Void OnStartBaking()
    // Offset: 0x173BCB4
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnStartBaking()
    void OnStartBaking();
    // protected override System.Void OnSetLoopFrame(System.Single time)
    // Offset: 0x173BDC4
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetLoopFrame(System.Single time)
    void OnSetLoopFrame(float time);
    // protected override System.Void OnSetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x173BE40
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetCurves(ref UnityEngine.AnimationClip clip)
    void OnSetCurves(ByRef<UnityEngine::AnimationClip*> clip);
    // protected override System.Void OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    // Offset: 0x173BEBC
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    void OnSetKeyframes(float time, bool lastFrame);
  }; // RootMotion.GenericBaker
  #pragma pack(pop)
  static check_size<sizeof(GenericBaker), 168 + sizeof(int)> __RootMotion_GenericBakerSizeCheck;
  static_assert(sizeof(GenericBaker) == 0xAC);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::GenericBaker*, "RootMotion", "GenericBaker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::GenericBaker::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::GenericBaker::*)()>(&RootMotion::GenericBaker::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::GenericBaker*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::GenericBaker::IsIgnored
// Il2CppName: IsIgnored
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::GenericBaker::*)(UnityEngine::Transform*)>(&RootMotion::GenericBaker::IsIgnored)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::GenericBaker*), "IsIgnored", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: RootMotion::GenericBaker::BakePosition
// Il2CppName: BakePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::GenericBaker::*)(UnityEngine::Transform*)>(&RootMotion::GenericBaker::BakePosition)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::GenericBaker*), "BakePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: RootMotion::GenericBaker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::GenericBaker::GetCharacterRoot
// Il2CppName: GetCharacterRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (RootMotion::GenericBaker::*)()>(&RootMotion::GenericBaker::GetCharacterRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::GenericBaker*), "GetCharacterRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::GenericBaker::OnStartBaking
// Il2CppName: OnStartBaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::GenericBaker::*)()>(&RootMotion::GenericBaker::OnStartBaking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::GenericBaker*), "OnStartBaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::GenericBaker::OnSetLoopFrame
// Il2CppName: OnSetLoopFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::GenericBaker::*)(float)>(&RootMotion::GenericBaker::OnSetLoopFrame)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::GenericBaker*), "OnSetLoopFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: RootMotion::GenericBaker::OnSetCurves
// Il2CppName: OnSetCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::GenericBaker::*)(ByRef<UnityEngine::AnimationClip*>)>(&RootMotion::GenericBaker::OnSetCurves)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::GenericBaker*), "OnSetCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: RootMotion::GenericBaker::OnSetKeyframes
// Il2CppName: OnSetKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::GenericBaker::*)(float, bool)>(&RootMotion::GenericBaker::OnSetKeyframes)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lastFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::GenericBaker*), "OnSetKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, lastFrame});
  }
};
