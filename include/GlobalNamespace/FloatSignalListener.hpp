// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: FloatSignal
  class FloatSignal;
  // Forward declaring type: FloatUnityEvent
  class FloatUnityEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FloatSignalListener
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatSignalListener : public UnityEngine::MonoBehaviour {
    public:
    // private FloatSignal _floatSignal
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FloatSignal* floatSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSignal*) == 0x8);
    // private FloatUnityEvent _unityEvent
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FloatUnityEvent* unityEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatUnityEvent*) == 0x8);
    // Creating value type constructor for type: FloatSignalListener
    FloatSignalListener(GlobalNamespace::FloatSignal* floatSignal_ = {}, GlobalNamespace::FloatUnityEvent* unityEvent_ = {}) noexcept : floatSignal{floatSignal_}, unityEvent{unityEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private FloatSignal _floatSignal
    GlobalNamespace::FloatSignal* _get__floatSignal();
    // Set instance field: private FloatSignal _floatSignal
    void _set__floatSignal(GlobalNamespace::FloatSignal* value);
    // Get instance field: private FloatUnityEvent _unityEvent
    GlobalNamespace::FloatUnityEvent* _get__unityEvent();
    // Set instance field: private FloatUnityEvent _unityEvent
    void _set__unityEvent(GlobalNamespace::FloatUnityEvent* value);
    // protected System.Void OnEnable()
    // Offset: 0x20424CC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x2042568
    void OnDisable();
    // private System.Void HandleEvent(System.Single f)
    // Offset: 0x2042604
    void HandleEvent(float f);
    // public System.Void .ctor()
    // Offset: 0x204266C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatSignalListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FloatSignalListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatSignalListener*, creationType>()));
    }
  }; // FloatSignalListener
  #pragma pack(pop)
  static check_size<sizeof(FloatSignalListener), 32 + sizeof(GlobalNamespace::FloatUnityEvent*)> __GlobalNamespace_FloatSignalListenerSizeCheck;
  static_assert(sizeof(FloatSignalListener) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatSignalListener*, "", "FloatSignalListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FloatSignalListener::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)()>(&GlobalNamespace::FloatSignalListener::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatSignalListener*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloatSignalListener::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)()>(&GlobalNamespace::FloatSignalListener::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatSignalListener*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloatSignalListener::HandleEvent
// Il2CppName: HandleEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)(float)>(&GlobalNamespace::FloatSignalListener::HandleEvent)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatSignalListener*), "HandleEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloatSignalListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
