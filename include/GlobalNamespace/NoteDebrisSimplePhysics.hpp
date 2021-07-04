// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteDebrisPhysics
#include "GlobalNamespace/NoteDebrisPhysics.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x45
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebrisSimplePhysics
  class NoteDebrisSimplePhysics : public GlobalNamespace::NoteDebrisPhysics {
    public:
    // private UnityEngine.Vector3 _currentForce
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 currentForce;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _currentTorque
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 currentTorque;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _gravity
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 gravity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean _firstUpdate
    // Size: 0x1
    // Offset: 0x44
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NoteDebrisSimplePhysics
    NoteDebrisSimplePhysics(UnityEngine::Vector3 currentForce_ = {}, UnityEngine::Vector3 currentTorque_ = {}, UnityEngine::Transform* transform_ = {}, UnityEngine::Vector3 gravity_ = {}, bool firstUpdate_ = {}) noexcept : currentForce{currentForce_}, currentTorque{currentTorque_}, transform{transform_}, gravity{gravity_}, firstUpdate{firstUpdate_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x11D787C
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0x11D78B4
    void LateUpdate();
    // public override UnityEngine.Vector3 get_position()
    // Offset: 0x11D7860
    // Implemented from: NoteDebrisPhysics
    // Base method: UnityEngine.Vector3 NoteDebrisPhysics::get_position()
    UnityEngine::Vector3 get_position();
    // public override System.Void Init(UnityEngine.Vector3 force, UnityEngine.Vector3 torque)
    // Offset: 0x11D7AB0
    // Implemented from: NoteDebrisPhysics
    // Base method: System.Void NoteDebrisPhysics::Init(UnityEngine.Vector3 force, UnityEngine.Vector3 torque)
    void Init(UnityEngine::Vector3 force, UnityEngine::Vector3 torque);
    // public override System.Void AddVelocity(UnityEngine.Vector3 force)
    // Offset: 0x11D7B74
    // Implemented from: NoteDebrisPhysics
    // Base method: System.Void NoteDebrisPhysics::AddVelocity(UnityEngine.Vector3 force)
    void AddVelocity(UnityEngine::Vector3 force);
    // public System.Void .ctor()
    // Offset: 0x11D7C28
    // Implemented from: NoteDebrisPhysics
    // Base method: System.Void NoteDebrisPhysics::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebrisSimplePhysics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteDebrisSimplePhysics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebrisSimplePhysics*, creationType>()));
    }
  }; // NoteDebrisSimplePhysics
  #pragma pack(pop)
  static check_size<sizeof(NoteDebrisSimplePhysics), 68 + sizeof(bool)> __GlobalNamespace_NoteDebrisSimplePhysicsSizeCheck;
  static_assert(sizeof(NoteDebrisSimplePhysics) == 0x45);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisSimplePhysics*, "", "NoteDebrisSimplePhysics");
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSimplePhysics::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSimplePhysics::*)()>(&GlobalNamespace::NoteDebrisSimplePhysics::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSimplePhysics*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSimplePhysics::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSimplePhysics::*)()>(&GlobalNamespace::NoteDebrisSimplePhysics::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSimplePhysics*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSimplePhysics::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteDebrisSimplePhysics::*)()>(&GlobalNamespace::NoteDebrisSimplePhysics::get_position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSimplePhysics*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSimplePhysics::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSimplePhysics::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisSimplePhysics::Init)> {
  const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* torque = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSimplePhysics*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, torque});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSimplePhysics::AddVelocity
// Il2CppName: AddVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSimplePhysics::*)(UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisSimplePhysics::AddVelocity)> {
  const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSimplePhysics*), "AddVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSimplePhysics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
