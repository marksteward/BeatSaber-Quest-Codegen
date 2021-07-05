// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: CollisionDetectionMode
  struct CollisionDetectionMode;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: ForceMode
  struct ForceMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rigidbody
  // [NativeHeaderAttribute] Offset: DA32D8
  // [RequireComponent] Offset: DA32D8
  class Rigidbody : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: Rigidbody
    Rigidbody() noexcept {}
    // public System.Void set_velocity(UnityEngine.Vector3 value)
    // Offset: 0x23DA4BC
    void set_velocity(UnityEngine::Vector3 value);
    // public System.Void set_angularVelocity(UnityEngine.Vector3 value)
    // Offset: 0x23DA564
    void set_angularVelocity(UnityEngine::Vector3 value);
    // public System.Void set_mass(System.Single value)
    // Offset: 0x23DA60C
    void set_mass(float value);
    // public System.Void set_useGravity(System.Boolean value)
    // Offset: 0x23DA65C
    void set_useGravity(bool value);
    // public System.Boolean get_isKinematic()
    // Offset: 0x23DA6AC
    bool get_isKinematic();
    // public System.Void set_isKinematic(System.Boolean value)
    // Offset: 0x23DA6EC
    void set_isKinematic(bool value);
    // public System.Void set_collisionDetectionMode(UnityEngine.CollisionDetectionMode value)
    // Offset: 0x23DA73C
    void set_collisionDetectionMode(UnityEngine::CollisionDetectionMode value);
    // public UnityEngine.Vector3 get_worldCenterOfMass()
    // Offset: 0x23DA78C
    UnityEngine::Vector3 get_worldCenterOfMass();
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x23DA83C
    UnityEngine::Vector3 get_position();
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x23DA8EC
    void set_position(UnityEngine::Vector3 value);
    // public System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x23DA994
    void set_rotation(UnityEngine::Quaternion value);
    // public System.Single get_maxAngularVelocity()
    // Offset: 0x23DAA3C
    float get_maxAngularVelocity();
    // public System.Void MovePosition(UnityEngine.Vector3 position)
    // Offset: 0x23DAA7C
    void MovePosition(UnityEngine::Vector3 position);
    // public System.Void MoveRotation(UnityEngine.Quaternion rot)
    // Offset: 0x23DAB24
    void MoveRotation(UnityEngine::Quaternion rot);
    // public System.Void WakeUp()
    // Offset: 0x23DABCC
    void WakeUp();
    // public System.Void AddForce(UnityEngine.Vector3 force, UnityEngine.ForceMode mode)
    // Offset: 0x23DAC0C
    void AddForce(UnityEngine::Vector3 force, UnityEngine::ForceMode mode);
    // public System.Void AddForceAtPosition(UnityEngine.Vector3 force, UnityEngine.Vector3 position, UnityEngine.ForceMode mode)
    // Offset: 0x23DACCC
    void AddForceAtPosition(UnityEngine::Vector3 force, UnityEngine::Vector3 position, UnityEngine::ForceMode mode);
    // public System.Void AddForceAtPosition(UnityEngine.Vector3 force, UnityEngine.Vector3 position)
    // Offset: 0x23DADA8
    void AddForceAtPosition(UnityEngine::Vector3 force, UnityEngine::Vector3 position);
    // private System.Void set_velocity_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23DA514
    void set_velocity_Injected(UnityEngine::Vector3& value);
    // private System.Void set_angularVelocity_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23DA5BC
    void set_angularVelocity_Injected(UnityEngine::Vector3& value);
    // private System.Void get_worldCenterOfMass_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x23DA7EC
    void get_worldCenterOfMass_Injected(UnityEngine::Vector3& ret);
    // private System.Void get_position_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x23DA89C
    void get_position_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_position_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23DA944
    void set_position_Injected(UnityEngine::Vector3& value);
    // private System.Void set_rotation_Injected(ref UnityEngine.Quaternion value)
    // Offset: 0x23DA9EC
    void set_rotation_Injected(UnityEngine::Quaternion& value);
    // private System.Void MovePosition_Injected(ref UnityEngine.Vector3 position)
    // Offset: 0x23DAAD4
    void MovePosition_Injected(UnityEngine::Vector3& position);
    // private System.Void MoveRotation_Injected(ref UnityEngine.Quaternion rot)
    // Offset: 0x23DAB7C
    void MoveRotation_Injected(UnityEngine::Quaternion& rot);
    // private System.Void AddForce_Injected(ref UnityEngine.Vector3 force, UnityEngine.ForceMode mode)
    // Offset: 0x23DAC74
    void AddForce_Injected(UnityEngine::Vector3& force, UnityEngine::ForceMode mode);
    // private System.Void AddForceAtPosition_Injected(ref UnityEngine.Vector3 force, ref UnityEngine.Vector3 position, UnityEngine.ForceMode mode)
    // Offset: 0x23DAD40
    void AddForceAtPosition_Injected(UnityEngine::Vector3& force, UnityEngine::Vector3& position, UnityEngine::ForceMode mode);
    // public System.Void .ctor()
    // Offset: 0x23DADB0
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Rigidbody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Rigidbody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Rigidbody*, creationType>()));
    }
  }; // UnityEngine.Rigidbody
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_velocity
// Il2CppName: set_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3)>(&UnityEngine::Rigidbody::set_velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_angularVelocity
// Il2CppName: set_angularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3)>(&UnityEngine::Rigidbody::set_angularVelocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_angularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_mass
// Il2CppName: set_mass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(float)>(&UnityEngine::Rigidbody::set_mass)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_mass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_useGravity
// Il2CppName: set_useGravity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(bool)>(&UnityEngine::Rigidbody::set_useGravity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_useGravity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_isKinematic
// Il2CppName: get_isKinematic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_isKinematic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_isKinematic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_isKinematic
// Il2CppName: set_isKinematic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(bool)>(&UnityEngine::Rigidbody::set_isKinematic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_isKinematic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_collisionDetectionMode
// Il2CppName: set_collisionDetectionMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::CollisionDetectionMode)>(&UnityEngine::Rigidbody::set_collisionDetectionMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "CollisionDetectionMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_collisionDetectionMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_worldCenterOfMass
// Il2CppName: get_worldCenterOfMass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_worldCenterOfMass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_worldCenterOfMass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3)>(&UnityEngine::Rigidbody::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Quaternion)>(&UnityEngine::Rigidbody::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_maxAngularVelocity
// Il2CppName: get_maxAngularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::get_maxAngularVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_maxAngularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::MovePosition
// Il2CppName: MovePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3)>(&UnityEngine::Rigidbody::MovePosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "MovePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::MoveRotation
// Il2CppName: MoveRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Quaternion)>(&UnityEngine::Rigidbody::MoveRotation)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "MoveRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::WakeUp
// Il2CppName: WakeUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)()>(&UnityEngine::Rigidbody::WakeUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "WakeUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddForce
// Il2CppName: AddForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3, UnityEngine::ForceMode)>(&UnityEngine::Rigidbody::AddForce)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ForceMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddForceAtPosition
// Il2CppName: AddForceAtPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::ForceMode)>(&UnityEngine::Rigidbody::AddForceAtPosition)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ForceMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddForceAtPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, position, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddForceAtPosition
// Il2CppName: AddForceAtPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Rigidbody::AddForceAtPosition)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddForceAtPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_velocity_Injected
// Il2CppName: set_velocity_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3&)>(&UnityEngine::Rigidbody::set_velocity_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_velocity_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_angularVelocity_Injected
// Il2CppName: set_angularVelocity_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3&)>(&UnityEngine::Rigidbody::set_angularVelocity_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_angularVelocity_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_worldCenterOfMass_Injected
// Il2CppName: get_worldCenterOfMass_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3&)>(&UnityEngine::Rigidbody::get_worldCenterOfMass_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_worldCenterOfMass_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::get_position_Injected
// Il2CppName: get_position_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3&)>(&UnityEngine::Rigidbody::get_position_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "get_position_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_position_Injected
// Il2CppName: set_position_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3&)>(&UnityEngine::Rigidbody::set_position_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_position_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::set_rotation_Injected
// Il2CppName: set_rotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Quaternion&)>(&UnityEngine::Rigidbody::set_rotation_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "set_rotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::MovePosition_Injected
// Il2CppName: MovePosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3&)>(&UnityEngine::Rigidbody::MovePosition_Injected)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "MovePosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::MoveRotation_Injected
// Il2CppName: MoveRotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Quaternion&)>(&UnityEngine::Rigidbody::MoveRotation_Injected)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "MoveRotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddForce_Injected
// Il2CppName: AddForce_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3&, UnityEngine::ForceMode)>(&UnityEngine::Rigidbody::AddForce_Injected)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ForceMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddForce_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::AddForceAtPosition_Injected
// Il2CppName: AddForceAtPosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody::*)(UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::ForceMode)>(&UnityEngine::Rigidbody::AddForceAtPosition_Injected)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ForceMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody*), "AddForceAtPosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, position, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
