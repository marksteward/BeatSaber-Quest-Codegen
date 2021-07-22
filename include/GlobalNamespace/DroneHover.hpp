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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Cloth
  class Cloth;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: DroneHover
  // [TokenAttribute] Offset: FFFFFFFF
  class DroneHover : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::DroneHover::SineLayer
    class SineLayer;
    // private UnityEngine.Vector3 _hoverAreaPerAxis
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 hoverAreaPerAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _speed
    // Size: 0x4
    // Offset: 0x24
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Collections.Generic.List`1<DroneHover/SineLayer> _compoundSins
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::DroneHover::SineLayer*>* compoundSins;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::DroneHover::SineLayer*>*) == 0x8);
    // [HeaderAttribute] Offset: 0xDFE548
    // private System.Collections.Generic.List`1<UnityEngine.Transform> _tiltTransforms
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::Transform*>* tiltTransforms;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Transform*>*) == 0x8);
    // private System.Single _maxTiltAmount
    // Size: 0x4
    // Offset: 0x38
    float maxTiltAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _tiltSpeed
    // Size: 0x4
    // Offset: 0x3C
    float tiltSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _tiltAheadOfTime
    // Size: 0x4
    // Offset: 0x40
    float tiltAheadOfTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _tiltToTarget
    // Size: 0x1
    // Offset: 0x44
    bool tiltToTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: tiltToTarget and: startPos
    char __padding7[0x3] = {};
    // private UnityEngine.Vector3 _startPos
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: startPos and: cloth
    char __padding8[0x4] = {};
    // private UnityEngine.Cloth _cloth
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Cloth* cloth;
    // Field size check
    static_assert(sizeof(UnityEngine::Cloth*) == 0x8);
    // Creating value type constructor for type: DroneHover
    DroneHover(UnityEngine::Vector3 hoverAreaPerAxis_ = {}, float speed_ = {}, System::Collections::Generic::List_1<GlobalNamespace::DroneHover::SineLayer*>* compoundSins_ = {}, System::Collections::Generic::List_1<UnityEngine::Transform*>* tiltTransforms_ = {}, float maxTiltAmount_ = {}, float tiltSpeed_ = {}, float tiltAheadOfTime_ = {}, bool tiltToTarget_ = {}, UnityEngine::Vector3 startPos_ = {}, UnityEngine::Cloth* cloth_ = {}) noexcept : hoverAreaPerAxis{hoverAreaPerAxis_}, speed{speed_}, compoundSins{compoundSins_}, tiltTransforms{tiltTransforms_}, maxTiltAmount{maxTiltAmount_}, tiltSpeed{tiltSpeed_}, tiltAheadOfTime{tiltAheadOfTime_}, tiltToTarget{tiltToTarget_}, startPos{startPos_}, cloth{cloth_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x101ACB8
    void Start();
    // protected System.Void Update()
    // Offset: 0x101ACF4
    void Update();
    // private UnityEngine.Vector3 GetNoiseVec3(System.Single time)
    // Offset: 0x101AEA8
    UnityEngine::Vector3 GetNoiseVec3(float time);
    // private System.Single GetNoise(System.Single time, System.Single offset)
    // Offset: 0x101B1EC
    float GetNoise(float time, float offset);
    // private System.Void UpdateTiltTransform()
    // Offset: 0x101AF54
    void UpdateTiltTransform();
    // public System.Void .ctor()
    // Offset: 0x101B328
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DroneHover* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DroneHover::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DroneHover*, creationType>()));
    }
  }; // DroneHover
  #pragma pack(pop)
  static check_size<sizeof(DroneHover), 88 + sizeof(UnityEngine::Cloth*)> __GlobalNamespace_DroneHoverSizeCheck;
  static_assert(sizeof(DroneHover) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DroneHover*, "", "DroneHover");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DroneHover::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DroneHover::*)()>(&GlobalNamespace::DroneHover::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroneHover*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroneHover::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DroneHover::*)()>(&GlobalNamespace::DroneHover::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroneHover*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroneHover::GetNoiseVec3
// Il2CppName: GetNoiseVec3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::DroneHover::*)(float)>(&GlobalNamespace::DroneHover::GetNoiseVec3)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroneHover*), "GetNoiseVec3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroneHover::GetNoise
// Il2CppName: GetNoise
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DroneHover::*)(float, float)>(&GlobalNamespace::DroneHover::GetNoise)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroneHover*), "GetNoise", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroneHover::UpdateTiltTransform
// Il2CppName: UpdateTiltTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DroneHover::*)()>(&GlobalNamespace::DroneHover::UpdateTiltTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroneHover*), "UpdateTiltTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroneHover::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
