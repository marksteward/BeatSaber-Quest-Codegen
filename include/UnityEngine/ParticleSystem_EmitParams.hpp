// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color32
  struct Color32;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8F
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.EmitParams
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::EmitParams/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xDAE328
    // private UnityEngine.ParticleSystem/UnityEngine.Particle m_Particle
    // Size: 0x84
    // Offset: 0x0
    UnityEngine::ParticleSystem::Particle m_Particle;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::Particle) == 0x84);
    // [NativeNameAttribute] Offset: 0xDAE360
    // private System.Boolean m_PositionSet
    // Size: 0x1
    // Offset: 0x84
    bool m_PositionSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE398
    // private System.Boolean m_VelocitySet
    // Size: 0x1
    // Offset: 0x85
    bool m_VelocitySet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE3D0
    // private System.Boolean m_AxisOfRotationSet
    // Size: 0x1
    // Offset: 0x86
    bool m_AxisOfRotationSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE408
    // private System.Boolean m_RotationSet
    // Size: 0x1
    // Offset: 0x87
    bool m_RotationSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE440
    // private System.Boolean m_AngularVelocitySet
    // Size: 0x1
    // Offset: 0x88
    bool m_AngularVelocitySet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE478
    // private System.Boolean m_StartSizeSet
    // Size: 0x1
    // Offset: 0x89
    bool m_StartSizeSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE4B0
    // private System.Boolean m_StartColorSet
    // Size: 0x1
    // Offset: 0x8A
    bool m_StartColorSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE4E8
    // private System.Boolean m_RandomSeedSet
    // Size: 0x1
    // Offset: 0x8B
    bool m_RandomSeedSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE520
    // private System.Boolean m_StartLifetimeSet
    // Size: 0x1
    // Offset: 0x8C
    bool m_StartLifetimeSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE558
    // private System.Boolean m_MeshIndexSet
    // Size: 0x1
    // Offset: 0x8D
    bool m_MeshIndexSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDAE590
    // private System.Boolean m_ApplyShapeToPosition
    // Size: 0x1
    // Offset: 0x8E
    bool m_ApplyShapeToPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EmitParams
    constexpr EmitParams(UnityEngine::ParticleSystem::Particle m_Particle_ = {}, bool m_PositionSet_ = {}, bool m_VelocitySet_ = {}, bool m_AxisOfRotationSet_ = {}, bool m_RotationSet_ = {}, bool m_AngularVelocitySet_ = {}, bool m_StartSizeSet_ = {}, bool m_StartColorSet_ = {}, bool m_RandomSeedSet_ = {}, bool m_StartLifetimeSet_ = {}, bool m_MeshIndexSet_ = {}, bool m_ApplyShapeToPosition_ = {}) noexcept : m_Particle{m_Particle_}, m_PositionSet{m_PositionSet_}, m_VelocitySet{m_VelocitySet_}, m_AxisOfRotationSet{m_AxisOfRotationSet_}, m_RotationSet{m_RotationSet_}, m_AngularVelocitySet{m_AngularVelocitySet_}, m_StartSizeSet{m_StartSizeSet_}, m_StartColorSet{m_StartColorSet_}, m_RandomSeedSet{m_RandomSeedSet_}, m_StartLifetimeSet{m_StartLifetimeSet_}, m_MeshIndexSet{m_MeshIndexSet_}, m_ApplyShapeToPosition{m_ApplyShapeToPosition_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0xF0EBAC
    void set_position(UnityEngine::Vector3 value);
    // public System.Void set_applyShapeToPosition(System.Boolean value)
    // Offset: 0xF0EBC0
    void set_applyShapeToPosition(bool value);
    // public System.Void set_rotation3D(UnityEngine.Vector3 value)
    // Offset: 0xF0EBCC
    void set_rotation3D(UnityEngine::Vector3 value);
    // public System.Void set_startColor(UnityEngine.Color32 value)
    // Offset: 0xF0EBF8
    void set_startColor(UnityEngine::Color32 value);
  }; // UnityEngine.ParticleSystem/UnityEngine.EmitParams
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::EmitParams), 142 + sizeof(bool)> __UnityEngine_ParticleSystem_EmitParamsSizeCheck;
  static_assert(sizeof(ParticleSystem::EmitParams) == 0x8F);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmitParams::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmitParams::*)(UnityEngine::Vector3)>(&UnityEngine::ParticleSystem::EmitParams::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmitParams), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmitParams::set_applyShapeToPosition
// Il2CppName: set_applyShapeToPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmitParams::*)(bool)>(&UnityEngine::ParticleSystem::EmitParams::set_applyShapeToPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmitParams), "set_applyShapeToPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmitParams::set_rotation3D
// Il2CppName: set_rotation3D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmitParams::*)(UnityEngine::Vector3)>(&UnityEngine::ParticleSystem::EmitParams::set_rotation3D)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmitParams), "set_rotation3D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmitParams::set_startColor
// Il2CppName: set_startColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmitParams::*)(UnityEngine::Color32)>(&UnityEngine::ParticleSystem::EmitParams::set_startColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmitParams), "set_startColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
