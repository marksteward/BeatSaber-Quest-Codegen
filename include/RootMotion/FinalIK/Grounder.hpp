// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.Grounding
#include "RootMotion/FinalIK/Grounding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Grounder
  // [TokenAttribute] Offset: FFFFFFFF
  class Grounder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::Grounder::GrounderDelegate
    class GrounderDelegate;
    // [TooltipAttribute] Offset: 0xDF2B4C
    // [RangeAttribute] Offset: 0xDF2B4C
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: weight and: solver
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0xDF2BA0
    // public RootMotion.FinalIK.Grounding solver
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::Grounding* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounding*) == 0x8);
    // public RootMotion.FinalIK.Grounder/RootMotion.FinalIK.GrounderDelegate OnPreGrounder
    // Size: 0x8
    // Offset: 0x28
    RootMotion::FinalIK::Grounder::GrounderDelegate* OnPreGrounder;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounder::GrounderDelegate*) == 0x8);
    // public RootMotion.FinalIK.Grounder/RootMotion.FinalIK.GrounderDelegate OnPostGrounder
    // Size: 0x8
    // Offset: 0x30
    RootMotion::FinalIK::Grounder::GrounderDelegate* OnPostGrounder;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounder::GrounderDelegate*) == 0x8);
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Grounder
    Grounder(float weight_ = {}, RootMotion::FinalIK::Grounding* solver_ = {}, RootMotion::FinalIK::Grounder::GrounderDelegate* OnPreGrounder_ = {}, RootMotion::FinalIK::Grounder::GrounderDelegate* OnPostGrounder_ = {}, bool initiated_ = {}) noexcept : weight{weight_}, solver{solver_}, OnPreGrounder{OnPreGrounder_}, OnPostGrounder{OnPostGrounder_}, initiated{initiated_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public System.Single weight
    float _get_weight();
    // Set instance field: public System.Single weight
    void _set_weight(float value);
    // Get instance field: public RootMotion.FinalIK.Grounding solver
    RootMotion::FinalIK::Grounding* _get_solver();
    // Set instance field: public RootMotion.FinalIK.Grounding solver
    void _set_solver(RootMotion::FinalIK::Grounding* value);
    // Get instance field: public RootMotion.FinalIK.Grounder/RootMotion.FinalIK.GrounderDelegate OnPreGrounder
    RootMotion::FinalIK::Grounder::GrounderDelegate* _get_OnPreGrounder();
    // Set instance field: public RootMotion.FinalIK.Grounder/RootMotion.FinalIK.GrounderDelegate OnPreGrounder
    void _set_OnPreGrounder(RootMotion::FinalIK::Grounder::GrounderDelegate* value);
    // Get instance field: public RootMotion.FinalIK.Grounder/RootMotion.FinalIK.GrounderDelegate OnPostGrounder
    RootMotion::FinalIK::Grounder::GrounderDelegate* _get_OnPostGrounder();
    // Set instance field: public RootMotion.FinalIK.Grounder/RootMotion.FinalIK.GrounderDelegate OnPostGrounder
    void _set_OnPostGrounder(RootMotion::FinalIK::Grounder::GrounderDelegate* value);
    // Get instance field: private System.Boolean <initiated>k__BackingField
    bool _get_$initiated$k__BackingField();
    // Set instance field: private System.Boolean <initiated>k__BackingField
    void _set_$initiated$k__BackingField(bool value);
    // public System.Boolean get_initiated()
    // Offset: 0x1C89A2C
    bool get_initiated();
    // protected System.Void set_initiated(System.Boolean value)
    // Offset: 0x1C89A34
    void set_initiated(bool value);
    // public System.Void ResetPosition()
    // Offset: 0xFFFFFFFF
    void ResetPosition();
    // protected UnityEngine.Vector3 GetSpineOffsetTarget()
    // Offset: 0x1C89A40
    UnityEngine::Vector3 GetSpineOffsetTarget();
    // protected System.Void LogWarning(System.String message)
    // Offset: 0x1C89D14
    void LogWarning(::Il2CppString* message);
    // private UnityEngine.Vector3 GetLegSpineBendVector(RootMotion.FinalIK.Grounding/RootMotion.FinalIK.Leg leg)
    // Offset: 0x1C89B84
    UnityEngine::Vector3 GetLegSpineBendVector(RootMotion::FinalIK::Grounding::Leg* leg);
    // private UnityEngine.Vector3 GetLegSpineTangent(RootMotion.FinalIK.Grounding/RootMotion.FinalIK.Leg leg)
    // Offset: 0x1C89D48
    UnityEngine::Vector3 GetLegSpineTangent(RootMotion::FinalIK::Grounding::Leg* leg);
    // protected System.Void OpenUserManual()
    // Offset: 0xFFFFFFFF
    void OpenUserManual();
    // protected System.Void OpenScriptReference()
    // Offset: 0xFFFFFFFF
    void OpenScriptReference();
    // protected System.Void .ctor()
    // Offset: 0x1C89F50
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Grounder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Grounder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Grounder*, creationType>()));
    }
  }; // RootMotion.FinalIK.Grounder
  #pragma pack(pop)
  static check_size<sizeof(Grounder), 56 + sizeof(bool)> __RootMotion_FinalIK_GrounderSizeCheck;
  static_assert(sizeof(Grounder) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounder*, "RootMotion.FinalIK", "Grounder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::get_initiated
// Il2CppName: get_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::Grounder::*)()>(&RootMotion::FinalIK::Grounder::get_initiated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounder*), "get_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::set_initiated
// Il2CppName: set_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounder::*)(bool)>(&RootMotion::FinalIK::Grounder::set_initiated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounder*), "set_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::ResetPosition
// Il2CppName: ResetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounder::*)()>(&RootMotion::FinalIK::Grounder::ResetPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounder*), "ResetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::GetSpineOffsetTarget
// Il2CppName: GetSpineOffsetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::Grounder::*)()>(&RootMotion::FinalIK::Grounder::GetSpineOffsetTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounder*), "GetSpineOffsetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounder::*)(::Il2CppString*)>(&RootMotion::FinalIK::Grounder::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounder*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::GetLegSpineBendVector
// Il2CppName: GetLegSpineBendVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::Grounder::*)(RootMotion::FinalIK::Grounding::Leg*)>(&RootMotion::FinalIK::Grounder::GetLegSpineBendVector)> {
  static const MethodInfo* get() {
    static auto* leg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "Grounding/Leg")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounder*), "GetLegSpineBendVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leg});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::GetLegSpineTangent
// Il2CppName: GetLegSpineTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::Grounder::*)(RootMotion::FinalIK::Grounding::Leg*)>(&RootMotion::FinalIK::Grounder::GetLegSpineTangent)> {
  static const MethodInfo* get() {
    static auto* leg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "Grounding/Leg")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounder*), "GetLegSpineTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leg});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounder::*)()>(&RootMotion::FinalIK::Grounder::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounder*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounder::*)()>(&RootMotion::FinalIK::Grounder::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounder*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
