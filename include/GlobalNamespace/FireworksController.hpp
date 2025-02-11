// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: FireworkItemController
#include "GlobalNamespace/FireworkItemController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: FireworksController
  // [TokenAttribute] Offset: FFFFFFFF
  class FireworksController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FireworksController::$SpawningCoroutine$d__8
    class $SpawningCoroutine$d__8;
    // private UnityEngine.Vector3 _spawnSize
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 spawnSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _minSpawnInterval
    // Size: 0x4
    // Offset: 0x24
    float minSpawnInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxSpawnInterval
    // Size: 0x4
    // Offset: 0x28
    float maxSpawnInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxSpawnInterval and: directionalLights
    char __padding2[0x4] = {};
    // [HeaderAttribute] Offset: 0xEB16F4
    // [NullAllowed] Offset: 0xEB16F4
    // private DirectionalLight[] _directionalLights
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::DirectionalLight*>* directionalLights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::DirectionalLight*>*) == 0x8);
    // private System.Single _lightsIntensity
    // Size: 0x4
    // Offset: 0x38
    float lightsIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _currentLightId
    // Size: 0x4
    // Offset: 0x3C
    int currentLightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [InjectAttribute] Offset: 0xEB1760
    // private readonly FireworkItemController/Pool _fireworkItemPool
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::FireworkItemController::Pool* fireworkItemPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworkItemController::Pool*) == 0x8);
    // Creating value type constructor for type: FireworksController
    FireworksController(UnityEngine::Vector3 spawnSize_ = {}, float minSpawnInterval_ = {}, float maxSpawnInterval_ = {}, ::Array<GlobalNamespace::DirectionalLight*>* directionalLights_ = {}, float lightsIntensity_ = {}, int currentLightId_ = {}, GlobalNamespace::FireworkItemController::Pool* fireworkItemPool_ = {}) noexcept : spawnSize{spawnSize_}, minSpawnInterval{minSpawnInterval_}, maxSpawnInterval{maxSpawnInterval_}, directionalLights{directionalLights_}, lightsIntensity{lightsIntensity_}, currentLightId{currentLightId_}, fireworkItemPool{fireworkItemPool_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Vector3 _spawnSize
    UnityEngine::Vector3 _get__spawnSize();
    // Set instance field: private UnityEngine.Vector3 _spawnSize
    void _set__spawnSize(UnityEngine::Vector3 value);
    // Get instance field: private System.Single _minSpawnInterval
    float _get__minSpawnInterval();
    // Set instance field: private System.Single _minSpawnInterval
    void _set__minSpawnInterval(float value);
    // Get instance field: private System.Single _maxSpawnInterval
    float _get__maxSpawnInterval();
    // Set instance field: private System.Single _maxSpawnInterval
    void _set__maxSpawnInterval(float value);
    // Get instance field: private DirectionalLight[] _directionalLights
    ::Array<GlobalNamespace::DirectionalLight*>* _get__directionalLights();
    // Set instance field: private DirectionalLight[] _directionalLights
    void _set__directionalLights(::Array<GlobalNamespace::DirectionalLight*>* value);
    // Get instance field: private System.Single _lightsIntensity
    float _get__lightsIntensity();
    // Set instance field: private System.Single _lightsIntensity
    void _set__lightsIntensity(float value);
    // Get instance field: private System.Int32 _currentLightId
    int _get__currentLightId();
    // Set instance field: private System.Int32 _currentLightId
    void _set__currentLightId(int value);
    // Get instance field: private readonly FireworkItemController/Pool _fireworkItemPool
    GlobalNamespace::FireworkItemController::Pool* _get__fireworkItemPool();
    // Set instance field: private readonly FireworkItemController/Pool _fireworkItemPool
    void _set__fireworkItemPool(GlobalNamespace::FireworkItemController::Pool* value);
    // protected System.Void OnEnable()
    // Offset: 0x1E931AC
    void OnEnable();
    // private System.Collections.IEnumerator SpawningCoroutine()
    // Offset: 0x1E931D8
    System::Collections::IEnumerator* SpawningCoroutine();
    // private System.Void HandleFireworkItemControllerDidFinish(FireworkItemController fireworkItemController)
    // Offset: 0x1E93274
    void HandleFireworkItemControllerDidFinish(GlobalNamespace::FireworkItemController* fireworkItemController);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x1E93320
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x1E933A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworksController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FireworksController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworksController*, creationType>()));
    }
  }; // FireworksController
  #pragma pack(pop)
  static check_size<sizeof(FireworksController), 64 + sizeof(GlobalNamespace::FireworkItemController::Pool*)> __GlobalNamespace_FireworksControllerSizeCheck;
  static_assert(sizeof(FireworksController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworksController*, "", "FireworksController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworksController::*)()>(&GlobalNamespace::FireworksController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworksController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::SpawningCoroutine
// Il2CppName: SpawningCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::FireworksController::*)()>(&GlobalNamespace::FireworksController::SpawningCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworksController*), "SpawningCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::HandleFireworkItemControllerDidFinish
// Il2CppName: HandleFireworkItemControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworksController::*)(GlobalNamespace::FireworkItemController*)>(&GlobalNamespace::FireworksController::HandleFireworkItemControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* fireworkItemController = &::il2cpp_utils::GetClassFromName("", "FireworkItemController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworksController*), "HandleFireworkItemControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fireworkItemController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworksController::*)()>(&GlobalNamespace::FireworksController::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworksController*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FireworksController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
