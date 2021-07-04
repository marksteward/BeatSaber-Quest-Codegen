// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Forward declaring type: Color
  struct Color;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleSaberSparkleEffect
  class ObstacleSaberSparkleEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _sparkleParticleSystem
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ParticleSystem* sparkleParticleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _burnParticleSystem
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ParticleSystem* burnParticleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem/EmissionModule _sparkleParticleSystemEmissionModule
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ParticleSystem::EmissionModule sparkleParticleSystemEmissionModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmissionModule) == 0x8);
    // private UnityEngine.ParticleSystem/EmissionModule _burnParticleSystemEmissionModule
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ParticleSystem::EmissionModule burnParticleSystemEmissionModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmissionModule) == 0x8);
    // Creating value type constructor for type: ObstacleSaberSparkleEffect
    ObstacleSaberSparkleEffect(UnityEngine::ParticleSystem* sparkleParticleSystem_ = {}, UnityEngine::ParticleSystem* burnParticleSystem_ = {}, UnityEngine::ParticleSystem::EmissionModule sparkleParticleSystemEmissionModule_ = {}, UnityEngine::ParticleSystem::EmissionModule burnParticleSystemEmissionModule_ = {}) noexcept : sparkleParticleSystem{sparkleParticleSystem_}, burnParticleSystem{burnParticleSystem_}, sparkleParticleSystemEmissionModule{sparkleParticleSystemEmissionModule_}, burnParticleSystemEmissionModule{burnParticleSystemEmissionModule_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x11DE29C
    void set_color(UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0x11DE3A8
    void Awake();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x11DE410
    void SetPositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // public System.Void StartEmission()
    // Offset: 0x11DE48C
    void StartEmission();
    // public System.Void StopEmission()
    // Offset: 0x11DE4E4
    void StopEmission();
    // public System.Void .ctor()
    // Offset: 0x11DE550
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleSaberSparkleEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleSaberSparkleEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleSaberSparkleEffect*, creationType>()));
    }
  }; // ObstacleSaberSparkleEffect
  #pragma pack(pop)
  static check_size<sizeof(ObstacleSaberSparkleEffect), 48 + sizeof(UnityEngine::ParticleSystem::EmissionModule)> __GlobalNamespace_ObstacleSaberSparkleEffectSizeCheck;
  static_assert(sizeof(ObstacleSaberSparkleEffect) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleSaberSparkleEffect*, "", "ObstacleSaberSparkleEffect");
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffect::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffect::*)(UnityEngine::Color)>(&GlobalNamespace::ObstacleSaberSparkleEffect::set_color)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffect*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffect::*)()>(&GlobalNamespace::ObstacleSaberSparkleEffect::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffect::SetPositionAndRotation
// Il2CppName: SetPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffect::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&GlobalNamespace::ObstacleSaberSparkleEffect::SetPositionAndRotation)> {
  const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffect*), "SetPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, rot});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffect::StartEmission
// Il2CppName: StartEmission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffect::*)()>(&GlobalNamespace::ObstacleSaberSparkleEffect::StartEmission)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffect*), "StartEmission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffect::StopEmission
// Il2CppName: StopEmission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffect::*)()>(&GlobalNamespace::ObstacleSaberSparkleEffect::StopEmission)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffect*), "StopEmission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
