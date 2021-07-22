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
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteDebrisSimplePhysics
  class NoteDebrisSimplePhysics;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebrisRigidbodyPhysics
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: DFB8B4
  class NoteDebrisRigidbodyPhysics : public GlobalNamespace::NoteDebrisPhysics {
    public:
    // private UnityEngine.Rigidbody _rigidbody
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // private NoteDebrisSimplePhysics _simplePhysics
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteDebrisSimplePhysics* simplePhysics;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebrisSimplePhysics*) == 0x8);
    // private System.Boolean _firstUpdate
    // Size: 0x1
    // Offset: 0x28
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NoteDebrisRigidbodyPhysics
    NoteDebrisRigidbodyPhysics(UnityEngine::Rigidbody* rigidbody_ = {}, GlobalNamespace::NoteDebrisSimplePhysics* simplePhysics_ = {}, bool firstUpdate_ = {}) noexcept : rigidbody{rigidbody_}, simplePhysics{simplePhysics_}, firstUpdate{firstUpdate_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void FixedUpdate()
    // Offset: 0x11E3344
    void FixedUpdate();
    // public override UnityEngine.Vector3 get_position()
    // Offset: 0x11E3328
    // Implemented from: NoteDebrisPhysics
    // Base method: UnityEngine.Vector3 NoteDebrisPhysics::get_position()
    UnityEngine::Vector3 get_position();
    // public System.Void .ctor()
    // Offset: 0x11E34D8
    // Implemented from: NoteDebrisPhysics
    // Base method: System.Void NoteDebrisPhysics::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebrisRigidbodyPhysics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteDebrisRigidbodyPhysics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebrisRigidbodyPhysics*, creationType>()));
    }
    // public override System.Void Init(UnityEngine.Vector3 force, UnityEngine.Vector3 torque)
    // Offset: 0x11E339C
    // Implemented from: NoteDebrisPhysics
    // Base method: System.Void NoteDebrisPhysics::Init(UnityEngine.Vector3 force, UnityEngine.Vector3 torque)
    void Init(UnityEngine::Vector3 force, UnityEngine::Vector3 torque);
    // public override System.Void AddVelocity(UnityEngine.Vector3 force)
    // Offset: 0x11E346C
    // Implemented from: NoteDebrisPhysics
    // Base method: System.Void NoteDebrisPhysics::AddVelocity(UnityEngine.Vector3 force)
    void AddVelocity(UnityEngine::Vector3 force);
  }; // NoteDebrisRigidbodyPhysics
  #pragma pack(pop)
  static check_size<sizeof(NoteDebrisRigidbodyPhysics), 40 + sizeof(bool)> __GlobalNamespace_NoteDebrisRigidbodyPhysicsSizeCheck;
  static_assert(sizeof(NoteDebrisRigidbodyPhysics) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisRigidbodyPhysics*, "", "NoteDebrisRigidbodyPhysics");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisRigidbodyPhysics::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisRigidbodyPhysics::*)()>(&GlobalNamespace::NoteDebrisRigidbodyPhysics::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisRigidbodyPhysics*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisRigidbodyPhysics::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteDebrisRigidbodyPhysics::*)()>(&GlobalNamespace::NoteDebrisRigidbodyPhysics::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisRigidbodyPhysics*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisRigidbodyPhysics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisRigidbodyPhysics::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisRigidbodyPhysics::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisRigidbodyPhysics::Init)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* torque = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisRigidbodyPhysics*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, torque});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisRigidbodyPhysics::AddVelocity
// Il2CppName: AddVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisRigidbodyPhysics::*)(UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisRigidbodyPhysics::AddVelocity)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisRigidbodyPhysics*), "AddVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
