// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Behaviour because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: EnableOnVisible
  // [] Offset: FFFFFFFF
  class EnableOnVisible : public UnityEngine::MonoBehaviour {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD98E38
    // private System.Action`1<System.Boolean> VisibilityChangedEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<bool>* VisibilityChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // public UnityEngine.Behaviour[] _components
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Behaviour*>* components;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Behaviour*>*) == 0x8);
    // Creating value type constructor for type: EnableOnVisible
    EnableOnVisible(System::Action_1<bool>* VisibilityChangedEvent_ = {}, ::Array<UnityEngine::Behaviour*>* components_ = {}) noexcept : VisibilityChangedEvent{VisibilityChangedEvent_}, components{components_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_VisibilityChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x102E9A4
    void add_VisibilityChangedEvent(System::Action_1<bool>* value);
    // public System.Void remove_VisibilityChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x102EA48
    void remove_VisibilityChangedEvent(System::Action_1<bool>* value);
    // protected System.Void Awake()
    // Offset: 0x102EAEC
    void Awake();
    // protected System.Void OnBecameVisible()
    // Offset: 0x102EB5C
    void OnBecameVisible();
    // protected System.Void OnBecameInvisible()
    // Offset: 0x102EC14
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0x102ECCC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableOnVisible* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnableOnVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableOnVisible*, creationType>()));
    }
  }; // EnableOnVisible
  static check_size<sizeof(EnableOnVisible), 32 + sizeof(::Array<UnityEngine::Behaviour*>*)> __GlobalNamespace_EnableOnVisibleSizeCheck;
  static_assert(sizeof(EnableOnVisible) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableOnVisible*, "", "EnableOnVisible");
#pragma pack(pop)
