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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: TickableManager
  class TickableManager;
  // Forward declaring type: InitializableManager
  class InitializableManager;
  // Forward declaring type: DisposableManager
  class DisposableManager;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MonoKernel
  class MonoKernel : public UnityEngine::MonoBehaviour {
    public:
    // [InjectLocalAttribute] Offset: 0xD048FC
    // private Zenject.TickableManager _tickableManager
    // Size: 0x8
    // Offset: 0x18
    Zenject::TickableManager* tickableManager;
    // Field size check
    static_assert(sizeof(Zenject::TickableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0xD0490C
    // private Zenject.InitializableManager _initializableManager
    // Size: 0x8
    // Offset: 0x20
    Zenject::InitializableManager* initializableManager;
    // Field size check
    static_assert(sizeof(Zenject::InitializableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0xD0491C
    // private Zenject.DisposableManager _disposablesManager
    // Size: 0x8
    // Offset: 0x28
    Zenject::DisposableManager* disposablesManager;
    // Field size check
    static_assert(sizeof(Zenject::DisposableManager*) == 0x8);
    // private System.Boolean _hasInitialized
    // Size: 0x1
    // Offset: 0x30
    bool hasInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isDestroyed
    // Size: 0x1
    // Offset: 0x31
    bool isDestroyed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MonoKernel
    MonoKernel(Zenject::TickableManager* tickableManager_ = {}, Zenject::InitializableManager* initializableManager_ = {}, Zenject::DisposableManager* disposablesManager_ = {}, bool hasInitialized_ = {}, bool isDestroyed_ = {}) noexcept : tickableManager{tickableManager_}, initializableManager{initializableManager_}, disposablesManager{disposablesManager_}, hasInitialized{hasInitialized_}, isDestroyed{isDestroyed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Boolean get_IsDestroyed()
    // Offset: 0x152EE78
    bool get_IsDestroyed();
    // public System.Void Start()
    // Offset: 0x152EE80
    void Start();
    // public System.Void Initialize()
    // Offset: 0x152EE84
    void Initialize();
    // public System.Void Update()
    // Offset: 0x152EEB8
    void Update();
    // public System.Void FixedUpdate()
    // Offset: 0x152EEC8
    void FixedUpdate();
    // public System.Void LateUpdate()
    // Offset: 0x152EED8
    void LateUpdate();
    // public System.Void OnDestroy()
    // Offset: 0x152EEE8
    void OnDestroy();
    // protected System.Void .ctor()
    // Offset: 0x152EF54
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoKernel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoKernel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoKernel*, creationType>()));
    }
  }; // Zenject.MonoKernel
  #pragma pack(pop)
  static check_size<sizeof(MonoKernel), 49 + sizeof(bool)> __Zenject_MonoKernelSizeCheck;
  static_assert(sizeof(MonoKernel) == 0x32);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoKernel*, "Zenject", "MonoKernel");
