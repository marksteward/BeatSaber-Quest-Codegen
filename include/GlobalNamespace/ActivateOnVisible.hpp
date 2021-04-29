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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ActivateOnVisible
  class ActivateOnVisible : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.GameObject[] _gameObjects
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::GameObject*>* gameObjects;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // Creating value type constructor for type: ActivateOnVisible
    ActivateOnVisible(::Array<UnityEngine::GameObject*>* gameObjects_ = {}) noexcept : gameObjects{gameObjects_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1174D34
    void Awake();
    // private System.Void OnBecameVisible()
    // Offset: 0x1174DA4
    void OnBecameVisible();
    // private System.Void OnBecameInvisible()
    // Offset: 0x1174E14
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0x1174E84
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivateOnVisible* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ActivateOnVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivateOnVisible*, creationType>()));
    }
  }; // ActivateOnVisible
  #pragma pack(pop)
  static check_size<sizeof(ActivateOnVisible), 24 + sizeof(::Array<UnityEngine::GameObject*>*)> __GlobalNamespace_ActivateOnVisibleSizeCheck;
  static_assert(sizeof(ActivateOnVisible) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ActivateOnVisible*, "", "ActivateOnVisible");
