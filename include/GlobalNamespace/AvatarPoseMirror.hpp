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
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPoseMirror
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarPoseMirror : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xDFF710
    // private readonly AvatarPoseController _avatarPoseController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController*) == 0x8);
    // Creating value type constructor for type: AvatarPoseMirror
    AvatarPoseMirror(GlobalNamespace::AvatarPoseController* avatarPoseController_ = {}) noexcept : avatarPoseController{avatarPoseController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x10E0B34
    void Start();
    // static private System.Void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition)
    // Offset: 0x10E0BE0
    static void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Vector3& newHeadPosition, UnityEngine::Vector3& newLeftHandPosition, UnityEngine::Vector3& newRightHandPosition);
    // static private System.Void HandleAvatarPoseControllerRotationsWillBeSet(UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation, out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation)
    // Offset: 0x10E0CAC
    static void HandleAvatarPoseControllerRotationsWillBeSet(UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation, UnityEngine::Quaternion& newHeadRotation, UnityEngine::Quaternion& newLeftHandRotation, UnityEngine::Quaternion& newRightHandRotation);
    // static private UnityEngine.Quaternion MirrorRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x10E0D54
    static UnityEngine::Quaternion MirrorRotation(UnityEngine::Quaternion rotation);
    // static private UnityEngine.Vector3 MirrorPosition(UnityEngine.Vector3 position)
    // Offset: 0x10E0C74
    static UnityEngine::Vector3 MirrorPosition(UnityEngine::Vector3 position);
    // public System.Void .ctor()
    // Offset: 0x10E0D8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPoseMirror* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPoseMirror::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPoseMirror*, creationType>()));
    }
  }; // AvatarPoseMirror
  #pragma pack(pop)
  static check_size<sizeof(AvatarPoseMirror), 24 + sizeof(GlobalNamespace::AvatarPoseController*)> __GlobalNamespace_AvatarPoseMirrorSizeCheck;
  static_assert(sizeof(AvatarPoseMirror) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseMirror*, "", "AvatarPoseMirror");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseMirror::*)()>(&GlobalNamespace::AvatarPoseMirror::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerPositionsWillBeSet
// Il2CppName: HandleAvatarPoseControllerPositionsWillBeSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Vector3&)>(&GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerPositionsWillBeSet)> {
  static const MethodInfo* get() {
    static auto* headPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* leftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* newHeadPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newLeftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newRightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "HandleAvatarPoseControllerPositionsWillBeSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerRotationsWillBeSet
// Il2CppName: HandleAvatarPoseControllerRotationsWillBeSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Quaternion, UnityEngine::Quaternion, UnityEngine::Quaternion, UnityEngine::Quaternion&, UnityEngine::Quaternion&, UnityEngine::Quaternion&)>(&GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerRotationsWillBeSet)> {
  static const MethodInfo* get() {
    static auto* headRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* leftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* rightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* newHeadRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newLeftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newRightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "HandleAvatarPoseControllerRotationsWillBeSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headRotation, leftHandRotation, rightHandRotation, newHeadRotation, newLeftHandRotation, newRightHandRotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::MirrorRotation
// Il2CppName: MirrorRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion)>(&GlobalNamespace::AvatarPoseMirror::MirrorRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "MirrorRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::MirrorPosition
// Il2CppName: MirrorPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarPoseMirror::MirrorPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "MirrorPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
