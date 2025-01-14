// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteDebrisPhysics
  class NoteDebrisPhysics;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: INoteDebrisDidFinishEvent
  class INoteDebrisDidFinishEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
  // Forward declaring type: ColorType
  struct ColorType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Mesh
  class Mesh;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebris
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteDebris : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteDebris::Pool
    class Pool;
    // private UnityEngine.Transform _meshTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* meshTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private NoteDebrisPhysics _physics
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteDebrisPhysics* physics;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebrisPhysics*) == 0x8);
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // [SpaceAttribute] Offset: 0xEB053C
    // private UnityEngine.AnimationCurve _cutoutCurve
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* cutoutCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _maxCutPointCenterDistance
    // Size: 0x4
    // Offset: 0x38
    float maxCutPointCenterDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxCutPointCenterDistance and: centroidComputationMesh
    char __padding4[0x4] = {};
    // [SpaceAttribute] Offset: 0xEB0584
    // private UnityEngine.Mesh _centroidComputationMesh
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Mesh* centroidComputationMesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // [InjectAttribute] Offset: 0xEB05BC
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private System.Single _elapsedTime
    // Size: 0x4
    // Offset: 0x50
    float elapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lifeTime
    // Size: 0x4
    // Offset: 0x54
    float lifeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly LazyCopyHashSet`1<INoteDebrisDidFinishEvent> _didFinishEvent
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>*) == 0x8);
    // Creating value type constructor for type: NoteDebris
    NoteDebris(UnityEngine::Transform* meshTransform_ = {}, GlobalNamespace::NoteDebrisPhysics* physics_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, UnityEngine::AnimationCurve* cutoutCurve_ = {}, float maxCutPointCenterDistance_ = {}, UnityEngine::Mesh* centroidComputationMesh_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, float elapsedTime_ = {}, float lifeTime_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>* didFinishEvent_ = {}) noexcept : meshTransform{meshTransform_}, physics{physics_}, materialPropertyBlockController{materialPropertyBlockController_}, cutoutCurve{cutoutCurve_}, maxCutPointCenterDistance{maxCutPointCenterDistance_}, centroidComputationMesh{centroidComputationMesh_}, colorManager{colorManager_}, elapsedTime{elapsedTime_}, lifeTime{lifeTime_}, didFinishEvent{didFinishEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEB05CC
    // Get static field: static private readonly System.Int32 _cutoutPropertyID
    static int _get__cutoutPropertyID();
    // Set static field: static private readonly System.Int32 _cutoutPropertyID
    static void _set__cutoutPropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEB05DC
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEB05EC
    // Get static field: static private readonly System.Int32 _cutPlaneID
    static int _get__cutPlaneID();
    // Set static field: static private readonly System.Int32 _cutPlaneID
    static void _set__cutPlaneID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEB05FC
    // Get static field: static private readonly System.Int32 _cutoutTexOffsetID
    static int _get__cutoutTexOffsetID();
    // Set static field: static private readonly System.Int32 _cutoutTexOffsetID
    static void _set__cutoutTexOffsetID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEB060C
    // Get static field: static private UnityEngine.Vector3[] _meshVertices
    static ::Array<UnityEngine::Vector3>* _get__meshVertices();
    // Set static field: static private UnityEngine.Vector3[] _meshVertices
    static void _set__meshVertices(::Array<UnityEngine::Vector3>* value);
    // Get instance field: private UnityEngine.Transform _meshTransform
    UnityEngine::Transform* _get__meshTransform();
    // Set instance field: private UnityEngine.Transform _meshTransform
    void _set__meshTransform(UnityEngine::Transform* value);
    // Get instance field: private NoteDebrisPhysics _physics
    GlobalNamespace::NoteDebrisPhysics* _get__physics();
    // Set instance field: private NoteDebrisPhysics _physics
    void _set__physics(GlobalNamespace::NoteDebrisPhysics* value);
    // Get instance field: private MaterialPropertyBlockController _materialPropertyBlockController
    GlobalNamespace::MaterialPropertyBlockController* _get__materialPropertyBlockController();
    // Set instance field: private MaterialPropertyBlockController _materialPropertyBlockController
    void _set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController* value);
    // Get instance field: private UnityEngine.AnimationCurve _cutoutCurve
    UnityEngine::AnimationCurve* _get__cutoutCurve();
    // Set instance field: private UnityEngine.AnimationCurve _cutoutCurve
    void _set__cutoutCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: private System.Single _maxCutPointCenterDistance
    float _get__maxCutPointCenterDistance();
    // Set instance field: private System.Single _maxCutPointCenterDistance
    void _set__maxCutPointCenterDistance(float value);
    // Get instance field: private UnityEngine.Mesh _centroidComputationMesh
    UnityEngine::Mesh* _get__centroidComputationMesh();
    // Set instance field: private UnityEngine.Mesh _centroidComputationMesh
    void _set__centroidComputationMesh(UnityEngine::Mesh* value);
    // Get instance field: private readonly ColorManager _colorManager
    GlobalNamespace::ColorManager* _get__colorManager();
    // Set instance field: private readonly ColorManager _colorManager
    void _set__colorManager(GlobalNamespace::ColorManager* value);
    // Get instance field: private System.Single _elapsedTime
    float _get__elapsedTime();
    // Set instance field: private System.Single _elapsedTime
    void _set__elapsedTime(float value);
    // Get instance field: private System.Single _lifeTime
    float _get__lifeTime();
    // Set instance field: private System.Single _lifeTime
    void _set__lifeTime(float value);
    // Get instance field: private readonly LazyCopyHashSet`1<INoteDebrisDidFinishEvent> _didFinishEvent
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>* _get__didFinishEvent();
    // Set instance field: private readonly LazyCopyHashSet`1<INoteDebrisDidFinishEvent> _didFinishEvent
    void _set__didFinishEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>* value);
    // public ILazyCopyHashSet`1<INoteDebrisDidFinishEvent> get_didFinishEvent()
    // Offset: 0x2010F14
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>* get_didFinishEvent();
    // protected System.Void Awake()
    // Offset: 0x2010F1C
    void Awake();
    // protected System.Void Update()
    // Offset: 0x2010FCC
    void Update();
    // public System.Void Init(ColorType colorType, UnityEngine.Vector3 notePos, UnityEngine.Quaternion noteRot, UnityEngine.Vector3 noteMoveVec, UnityEngine.Vector3 noteScale, UnityEngine.Vector3 positionOffset, UnityEngine.Quaternion rotationOffset, UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, UnityEngine.Vector3 force, UnityEngine.Vector3 torque, System.Single lifeTime)
    // Offset: 0x20111F0
    void Init(GlobalNamespace::ColorType colorType, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRot, UnityEngine::Vector3 noteMoveVec, UnityEngine::Vector3 noteScale, UnityEngine::Vector3 positionOffset, UnityEngine::Quaternion rotationOffset, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, UnityEngine::Vector3 force, UnityEngine::Vector3 torque, float lifeTime);
    // public System.Void .ctor()
    // Offset: 0x2011ACC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebris* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteDebris::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebris*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2011B64
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // NoteDebris
  #pragma pack(pop)
  static check_size<sizeof(NoteDebris), 88 + sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>*)> __GlobalNamespace_NoteDebrisSizeCheck;
  static_assert(sizeof(NoteDebris) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebris*, "", "NoteDebris");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteDebris::get_didFinishEvent
// Il2CppName: get_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>* (GlobalNamespace::NoteDebris::*)()>(&GlobalNamespace::NoteDebris::get_didFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebris*), "get_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebris::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebris::*)()>(&GlobalNamespace::NoteDebris::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebris*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebris::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebris::*)()>(&GlobalNamespace::NoteDebris::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebris*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebris::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebris::*)(GlobalNamespace::ColorType, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::NoteDebris::Init)> {
  static const MethodInfo* get() {
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    static auto* notePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* noteRot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* noteMoveVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* noteScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* positionOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotationOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* cutNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* torque = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lifeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebris*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorType, notePos, noteRot, noteMoveVec, noteScale, positionOffset, rotationOffset, cutPoint, cutNormal, force, torque, lifeTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebris::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteDebris::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::NoteDebris::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebris*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
