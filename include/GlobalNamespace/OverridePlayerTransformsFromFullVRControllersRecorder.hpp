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
  // Forward declaring type: FullVRControllersRecorder
  class FullVRControllersRecorder;
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: PlayerVRControllersManager
  class PlayerVRControllersManager;
  // Forward declaring type: VRController
  class VRController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OverridePlayerTransformsFromFullVRControllersRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class OverridePlayerTransformsFromFullVRControllersRecorder : public UnityEngine::MonoBehaviour {
    public:
    // private FullVRControllersRecorder _fullVRControllersRecorder
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FullVRControllersRecorder* fullVRControllersRecorder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FullVRControllersRecorder*) == 0x8);
    // [InjectAttribute] Offset: 0xE122D8
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0xE122E8
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE122F8
    // private readonly PlayerVRControllersManager _playerVRControllersManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PlayerVRControllersManager* playerVRControllersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerVRControllersManager*) == 0x8);
    // Creating value type constructor for type: OverridePlayerTransformsFromFullVRControllersRecorder
    OverridePlayerTransformsFromFullVRControllersRecorder(GlobalNamespace::FullVRControllersRecorder* fullVRControllersRecorder_ = {}, GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, GlobalNamespace::PlayerVRControllersManager* playerVRControllersManager_ = {}) noexcept : fullVRControllersRecorder{fullVRControllersRecorder_}, playerTransforms{playerTransforms_}, saberManager{saberManager_}, playerVRControllersManager{playerVRControllersManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFFBC9C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFFBD40
    void OnDestroy();
    // private System.Void HandleFullVRControllersRecorderDidSetControllerTransform(VRController controller)
    // Offset: 0xFFBE1C
    void HandleFullVRControllersRecorderDidSetControllerTransform(GlobalNamespace::VRController* controller);
    // public System.Void .ctor()
    // Offset: 0xFFBF34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverridePlayerTransformsFromFullVRControllersRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverridePlayerTransformsFromFullVRControllersRecorder*, creationType>()));
    }
  }; // OverridePlayerTransformsFromFullVRControllersRecorder
  #pragma pack(pop)
  static check_size<sizeof(OverridePlayerTransformsFromFullVRControllersRecorder), 48 + sizeof(GlobalNamespace::PlayerVRControllersManager*)> __GlobalNamespace_OverridePlayerTransformsFromFullVRControllersRecorderSizeCheck;
  static_assert(sizeof(OverridePlayerTransformsFromFullVRControllersRecorder) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder*, "", "OverridePlayerTransformsFromFullVRControllersRecorder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::*)()>(&GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::*)()>(&GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::HandleFullVRControllersRecorderDidSetControllerTransform
// Il2CppName: HandleFullVRControllersRecorderDidSetControllerTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::*)(GlobalNamespace::VRController*)>(&GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::HandleFullVRControllersRecorderDidSetControllerTransform)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("", "VRController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder*), "HandleFullVRControllersRecorderDidSetControllerTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
