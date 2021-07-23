// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
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
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xF0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKEffector
  // [TokenAttribute] Offset: FFFFFFFF
  class IKEffector : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform bone
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* bone;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0xDF3EAC
    // public System.Single positionWeight
    // Size: 0x4
    // Offset: 0x20
    float positionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDF3EC4
    // public System.Single rotationWeight
    // Size: 0x4
    // Offset: 0x24
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x34
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 positionOffset
    // Size: 0xC
    // Offset: 0x44
    UnityEngine::Vector3 positionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean <isEndEffector>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool isEndEffector;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean effectChildNodes
    // Size: 0x1
    // Offset: 0x51
    bool effectChildNodes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: effectChildNodes and: maintainRelativePositionWeight
    char __padding8[0x2] = {};
    // [RangeAttribute] Offset: 0xDF3EEC
    // public System.Single maintainRelativePositionWeight
    // Size: 0x4
    // Offset: 0x54
    float maintainRelativePositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Transform[] childBones
    // Size: 0x8
    // Offset: 0x58
    ::Array<UnityEngine::Transform*>* childBones;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // public UnityEngine.Transform planeBone1
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* planeBone1;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform planeBone2
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* planeBone2;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform planeBone3
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* planeBone3;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Quaternion planeRotationOffset
    // Size: 0x10
    // Offset: 0x78
    UnityEngine::Quaternion planeRotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single posW
    // Size: 0x4
    // Offset: 0x88
    float posW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rotW
    // Size: 0x4
    // Offset: 0x8C
    float rotW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3[] localPositions
    // Size: 0x8
    // Offset: 0x90
    ::Array<UnityEngine::Vector3>* localPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private System.Boolean usePlaneNodes
    // Size: 0x1
    // Offset: 0x98
    bool usePlaneNodes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usePlaneNodes and: animatedPlaneRotation
    char __padding18[0x3] = {};
    // private UnityEngine.Quaternion animatedPlaneRotation
    // Size: 0x10
    // Offset: 0x9C
    UnityEngine::Quaternion animatedPlaneRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 animatedPosition
    // Size: 0xC
    // Offset: 0xAC
    UnityEngine::Vector3 animatedPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstUpdate
    // Size: 0x1
    // Offset: 0xB8
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: firstUpdate and: chainIndex
    char __padding21[0x3] = {};
    // private System.Int32 chainIndex
    // Size: 0x4
    // Offset: 0xBC
    int chainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nodeIndex
    // Size: 0x4
    // Offset: 0xC0
    int nodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane1ChainIndex
    // Size: 0x4
    // Offset: 0xC4
    int plane1ChainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane1NodeIndex
    // Size: 0x4
    // Offset: 0xC8
    int plane1NodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane2ChainIndex
    // Size: 0x4
    // Offset: 0xCC
    int plane2ChainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane2NodeIndex
    // Size: 0x4
    // Offset: 0xD0
    int plane2NodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane3ChainIndex
    // Size: 0x4
    // Offset: 0xD4
    int plane3ChainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane3NodeIndex
    // Size: 0x4
    // Offset: 0xD8
    int plane3NodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: plane3NodeIndex and: childChainIndexes
    char __padding29[0x4] = {};
    // private System.Int32[] childChainIndexes
    // Size: 0x8
    // Offset: 0xE0
    ::Array<int>* childChainIndexes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] childNodeIndexes
    // Size: 0x8
    // Offset: 0xE8
    ::Array<int>* childNodeIndexes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: IKEffector
    IKEffector(UnityEngine::Transform* bone_ = {}, UnityEngine::Transform* target_ = {}, float positionWeight_ = {}, float rotationWeight_ = {}, UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion rotation_ = {}, UnityEngine::Vector3 positionOffset_ = {}, bool isEndEffector_ = {}, bool effectChildNodes_ = {}, float maintainRelativePositionWeight_ = {}, ::Array<UnityEngine::Transform*>* childBones_ = {}, UnityEngine::Transform* planeBone1_ = {}, UnityEngine::Transform* planeBone2_ = {}, UnityEngine::Transform* planeBone3_ = {}, UnityEngine::Quaternion planeRotationOffset_ = {}, float posW_ = {}, float rotW_ = {}, ::Array<UnityEngine::Vector3>* localPositions_ = {}, bool usePlaneNodes_ = {}, UnityEngine::Quaternion animatedPlaneRotation_ = {}, UnityEngine::Vector3 animatedPosition_ = {}, bool firstUpdate_ = {}, int chainIndex_ = {}, int nodeIndex_ = {}, int plane1ChainIndex_ = {}, int plane1NodeIndex_ = {}, int plane2ChainIndex_ = {}, int plane2NodeIndex_ = {}, int plane3ChainIndex_ = {}, int plane3NodeIndex_ = {}, ::Array<int>* childChainIndexes_ = {}, ::Array<int>* childNodeIndexes_ = {}) noexcept : bone{bone_}, target{target_}, positionWeight{positionWeight_}, rotationWeight{rotationWeight_}, position{position_}, rotation{rotation_}, positionOffset{positionOffset_}, isEndEffector{isEndEffector_}, effectChildNodes{effectChildNodes_}, maintainRelativePositionWeight{maintainRelativePositionWeight_}, childBones{childBones_}, planeBone1{planeBone1_}, planeBone2{planeBone2_}, planeBone3{planeBone3_}, planeRotationOffset{planeRotationOffset_}, posW{posW_}, rotW{rotW_}, localPositions{localPositions_}, usePlaneNodes{usePlaneNodes_}, animatedPlaneRotation{animatedPlaneRotation_}, animatedPosition{animatedPosition_}, firstUpdate{firstUpdate_}, chainIndex{chainIndex_}, nodeIndex{nodeIndex_}, plane1ChainIndex{plane1ChainIndex_}, plane1NodeIndex{plane1NodeIndex_}, plane2ChainIndex{plane2ChainIndex_}, plane2NodeIndex{plane2NodeIndex_}, plane3ChainIndex{plane3ChainIndex_}, plane3NodeIndex{plane3NodeIndex_}, childChainIndexes{childChainIndexes_}, childNodeIndexes{childNodeIndexes_} {}
    // Get instance field: public UnityEngine.Transform bone
    UnityEngine::Transform* _get_bone();
    // Set instance field: public UnityEngine.Transform bone
    void _set_bone(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform target
    UnityEngine::Transform* _get_target();
    // Set instance field: public UnityEngine.Transform target
    void _set_target(UnityEngine::Transform* value);
    // Get instance field: public System.Single positionWeight
    float _get_positionWeight();
    // Set instance field: public System.Single positionWeight
    void _set_positionWeight(float value);
    // Get instance field: public System.Single rotationWeight
    float _get_rotationWeight();
    // Set instance field: public System.Single rotationWeight
    void _set_rotationWeight(float value);
    // Get instance field: public UnityEngine.Vector3 position
    UnityEngine::Vector3 _get_position();
    // Set instance field: public UnityEngine.Vector3 position
    void _set_position(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Quaternion rotation
    UnityEngine::Quaternion _get_rotation();
    // Set instance field: public UnityEngine.Quaternion rotation
    void _set_rotation(UnityEngine::Quaternion value);
    // Get instance field: public UnityEngine.Vector3 positionOffset
    UnityEngine::Vector3 _get_positionOffset();
    // Set instance field: public UnityEngine.Vector3 positionOffset
    void _set_positionOffset(UnityEngine::Vector3 value);
    // Get instance field: private System.Boolean <isEndEffector>k__BackingField
    bool _get_$isEndEffector$k__BackingField();
    // Set instance field: private System.Boolean <isEndEffector>k__BackingField
    void _set_$isEndEffector$k__BackingField(bool value);
    // Get instance field: public System.Boolean effectChildNodes
    bool _get_effectChildNodes();
    // Set instance field: public System.Boolean effectChildNodes
    void _set_effectChildNodes(bool value);
    // Get instance field: public System.Single maintainRelativePositionWeight
    float _get_maintainRelativePositionWeight();
    // Set instance field: public System.Single maintainRelativePositionWeight
    void _set_maintainRelativePositionWeight(float value);
    // Get instance field: public UnityEngine.Transform[] childBones
    ::Array<UnityEngine::Transform*>* _get_childBones();
    // Set instance field: public UnityEngine.Transform[] childBones
    void _set_childBones(::Array<UnityEngine::Transform*>* value);
    // Get instance field: public UnityEngine.Transform planeBone1
    UnityEngine::Transform* _get_planeBone1();
    // Set instance field: public UnityEngine.Transform planeBone1
    void _set_planeBone1(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform planeBone2
    UnityEngine::Transform* _get_planeBone2();
    // Set instance field: public UnityEngine.Transform planeBone2
    void _set_planeBone2(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform planeBone3
    UnityEngine::Transform* _get_planeBone3();
    // Set instance field: public UnityEngine.Transform planeBone3
    void _set_planeBone3(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Quaternion planeRotationOffset
    UnityEngine::Quaternion _get_planeRotationOffset();
    // Set instance field: public UnityEngine.Quaternion planeRotationOffset
    void _set_planeRotationOffset(UnityEngine::Quaternion value);
    // Get instance field: private System.Single posW
    float _get_posW();
    // Set instance field: private System.Single posW
    void _set_posW(float value);
    // Get instance field: private System.Single rotW
    float _get_rotW();
    // Set instance field: private System.Single rotW
    void _set_rotW(float value);
    // Get instance field: private UnityEngine.Vector3[] localPositions
    ::Array<UnityEngine::Vector3>* _get_localPositions();
    // Set instance field: private UnityEngine.Vector3[] localPositions
    void _set_localPositions(::Array<UnityEngine::Vector3>* value);
    // Get instance field: private System.Boolean usePlaneNodes
    bool _get_usePlaneNodes();
    // Set instance field: private System.Boolean usePlaneNodes
    void _set_usePlaneNodes(bool value);
    // Get instance field: private UnityEngine.Quaternion animatedPlaneRotation
    UnityEngine::Quaternion _get_animatedPlaneRotation();
    // Set instance field: private UnityEngine.Quaternion animatedPlaneRotation
    void _set_animatedPlaneRotation(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Vector3 animatedPosition
    UnityEngine::Vector3 _get_animatedPosition();
    // Set instance field: private UnityEngine.Vector3 animatedPosition
    void _set_animatedPosition(UnityEngine::Vector3 value);
    // Get instance field: private System.Boolean firstUpdate
    bool _get_firstUpdate();
    // Set instance field: private System.Boolean firstUpdate
    void _set_firstUpdate(bool value);
    // Get instance field: private System.Int32 chainIndex
    int _get_chainIndex();
    // Set instance field: private System.Int32 chainIndex
    void _set_chainIndex(int value);
    // Get instance field: private System.Int32 nodeIndex
    int _get_nodeIndex();
    // Set instance field: private System.Int32 nodeIndex
    void _set_nodeIndex(int value);
    // Get instance field: private System.Int32 plane1ChainIndex
    int _get_plane1ChainIndex();
    // Set instance field: private System.Int32 plane1ChainIndex
    void _set_plane1ChainIndex(int value);
    // Get instance field: private System.Int32 plane1NodeIndex
    int _get_plane1NodeIndex();
    // Set instance field: private System.Int32 plane1NodeIndex
    void _set_plane1NodeIndex(int value);
    // Get instance field: private System.Int32 plane2ChainIndex
    int _get_plane2ChainIndex();
    // Set instance field: private System.Int32 plane2ChainIndex
    void _set_plane2ChainIndex(int value);
    // Get instance field: private System.Int32 plane2NodeIndex
    int _get_plane2NodeIndex();
    // Set instance field: private System.Int32 plane2NodeIndex
    void _set_plane2NodeIndex(int value);
    // Get instance field: private System.Int32 plane3ChainIndex
    int _get_plane3ChainIndex();
    // Set instance field: private System.Int32 plane3ChainIndex
    void _set_plane3ChainIndex(int value);
    // Get instance field: private System.Int32 plane3NodeIndex
    int _get_plane3NodeIndex();
    // Set instance field: private System.Int32 plane3NodeIndex
    void _set_plane3NodeIndex(int value);
    // Get instance field: private System.Int32[] childChainIndexes
    ::Array<int>* _get_childChainIndexes();
    // Set instance field: private System.Int32[] childChainIndexes
    void _set_childChainIndexes(::Array<int>* value);
    // Get instance field: private System.Int32[] childNodeIndexes
    ::Array<int>* _get_childNodeIndexes();
    // Set instance field: private System.Int32[] childNodeIndexes
    void _set_childNodeIndexes(::Array<int>* value);
    // public System.Boolean get_isEndEffector()
    // Offset: 0x1C97D60
    bool get_isEndEffector();
    // private System.Void set_isEndEffector(System.Boolean value)
    // Offset: 0x1C97D68
    void set_isEndEffector(bool value);
    // public System.Void .ctor(UnityEngine.Transform bone, UnityEngine.Transform[] childBones)
    // Offset: 0x1C97F84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKEffector* New_ctor(UnityEngine::Transform* bone, ::Array<UnityEngine::Transform*>* childBones) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKEffector*, creationType>(bone, childBones)));
    }
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Node GetNode(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C97CF8
    RootMotion::FinalIK::IKSolver::Node* GetNode(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void PinToBone(System.Single positionWeight, System.Single rotationWeight)
    // Offset: 0x1C97D74
    void PinToBone(float positionWeight, float rotationWeight);
    // public System.Boolean IsValid(RootMotion.FinalIK.IKSolver solver, ref System.String message)
    // Offset: 0x1C980DC
    bool IsValid(RootMotion::FinalIK::IKSolver* solver, ::Il2CppString*& message);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C983CC
    void Initiate(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void ResetOffset(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C9866C
    void ResetOffset(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void SetToTarget()
    // Offset: 0x1C987AC
    void SetToTarget();
    // public System.Void OnPreSolve(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C98858
    void OnPreSolve(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void OnPostWrite()
    // Offset: 0x1C98EAC
    void OnPostWrite();
    // private UnityEngine.Quaternion GetPlaneRotation(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C98F1C
    UnityEngine::Quaternion GetPlaneRotation(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void Update(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C99134
    void Update(RootMotion::FinalIK::IKSolverFullBody* solver);
    // private UnityEngine.Vector3 GetPosition(RootMotion.FinalIK.IKSolverFullBody solver, out UnityEngine.Quaternion planeRotationOffset)
    // Offset: 0x1C9947C
    UnityEngine::Vector3 GetPosition(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Quaternion& planeRotationOffset);
    // public System.Void .ctor()
    // Offset: 0x1C97E48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKEffector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKEffector*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKEffector
  #pragma pack(pop)
  static check_size<sizeof(IKEffector), 232 + sizeof(::Array<int>*)> __RootMotion_FinalIK_IKEffectorSizeCheck;
  static_assert(sizeof(IKEffector) == 0xF0);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKEffector*, "RootMotion.FinalIK", "IKEffector");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::get_isEndEffector
// Il2CppName: get_isEndEffector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKEffector::*)()>(&RootMotion::FinalIK::IKEffector::get_isEndEffector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "get_isEndEffector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::set_isEndEffector
// Il2CppName: set_isEndEffector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(bool)>(&RootMotion::FinalIK::IKEffector::set_isEndEffector)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "set_isEndEffector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::GetNode
// Il2CppName: GetNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Node* (RootMotion::FinalIK::IKEffector::*)(RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::GetNode)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "GetNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::PinToBone
// Il2CppName: PinToBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(float, float)>(&RootMotion::FinalIK::IKEffector::PinToBone)> {
  static const MethodInfo* get() {
    static auto* positionWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotationWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "PinToBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positionWeight, rotationWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKEffector::*)(RootMotion::FinalIK::IKSolver*, ::Il2CppString*&)>(&RootMotion::FinalIK::IKEffector::IsValid)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::Initiate)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::ResetOffset
// Il2CppName: ResetOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::ResetOffset)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "ResetOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::SetToTarget
// Il2CppName: SetToTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)()>(&RootMotion::FinalIK::IKEffector::SetToTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "SetToTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::OnPreSolve
// Il2CppName: OnPreSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::OnPreSolve)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "OnPreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::OnPostWrite
// Il2CppName: OnPostWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)()>(&RootMotion::FinalIK::IKEffector::OnPostWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "OnPostWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::GetPlaneRotation
// Il2CppName: GetPlaneRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKEffector::*)(RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::GetPlaneRotation)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "GetPlaneRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::Update)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::GetPosition
// Il2CppName: GetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKEffector::*)(RootMotion::FinalIK::IKSolverFullBody*, UnityEngine::Quaternion&)>(&RootMotion::FinalIK::IKEffector::GetPosition)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* planeRotationOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "GetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, planeRotationOffset});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
