// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: NoteController
  class NoteController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7D
  #pragma pack(push, 1)
  // Autogenerated type: NoteLineConnectionController
  class NoteLineConnectionController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteLineConnectionController::Pool
    class Pool;
    // private UnityEngine.LineRenderer _lineRenderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::LineRenderer* lineRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::LineRenderer*) == 0x8);
    // [InjectAttribute] Offset: 0xE196FC
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0xE1970C
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1971C
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1972C
    // private System.Action`1<NoteLineConnectionController> didFinishEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::NoteLineConnectionController*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteLineConnectionController*>*) == 0x8);
    // private NoteController _noteController0
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::NoteController* noteController0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteController*) == 0x8);
    // private NoteController _noteController1
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::NoteController* noteController1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteController*) == 0x8);
    // private UnityEngine.Color _color0
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color color0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _color1
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color color1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _fadeOutStartDistance
    // Size: 0x4
    // Offset: 0x70
    float fadeOutStartDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutEndDistance
    // Size: 0x4
    // Offset: 0x74
    float fadeOutEndDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteTime
    // Size: 0x4
    // Offset: 0x78
    float noteTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _didFinish
    // Size: 0x1
    // Offset: 0x7C
    bool didFinish;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NoteLineConnectionController
    NoteLineConnectionController(UnityEngine::LineRenderer* lineRenderer_ = {}, GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, System::Action_1<GlobalNamespace::NoteLineConnectionController*>* didFinishEvent_ = {}, GlobalNamespace::NoteController* noteController0_ = {}, GlobalNamespace::NoteController* noteController1_ = {}, UnityEngine::Color color0_ = {}, UnityEngine::Color color1_ = {}, float fadeOutStartDistance_ = {}, float fadeOutEndDistance_ = {}, float noteTime_ = {}, bool didFinish_ = {}) noexcept : lineRenderer{lineRenderer_}, playerTransforms{playerTransforms_}, audioTimeSyncController{audioTimeSyncController_}, colorManager{colorManager_}, didFinishEvent{didFinishEvent_}, noteController0{noteController0_}, noteController1{noteController1_}, color0{color0_}, color1{color1_}, fadeOutStartDistance{fadeOutStartDistance_}, fadeOutEndDistance{fadeOutEndDistance_}, noteTime{noteTime_}, didFinish{didFinish_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didFinishEvent(System.Action`1<NoteLineConnectionController> value)
    // Offset: 0x11DAC48
    void add_didFinishEvent(System::Action_1<GlobalNamespace::NoteLineConnectionController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<NoteLineConnectionController> value)
    // Offset: 0x11DACEC
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::NoteLineConnectionController*>* value);
    // public System.Void Setup(NoteController noteController0, NoteController noteController1, System.Single fadeOutStartDistance, System.Single fadeOutEndDistance, System.Single noteTime)
    // Offset: 0x11DAD90
    void Setup(GlobalNamespace::NoteController* noteController0, GlobalNamespace::NoteController* noteController1, float fadeOutStartDistance, float fadeOutEndDistance, float noteTime);
    // protected System.Void Update()
    // Offset: 0x11DB024
    void Update();
    // private System.Void UpdatePositionsAndColors()
    // Offset: 0x11DAE38
    void UpdatePositionsAndColors();
    // public System.Void .ctor()
    // Offset: 0x11DB0BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteLineConnectionController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteLineConnectionController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteLineConnectionController*, creationType>()));
    }
  }; // NoteLineConnectionController
  #pragma pack(pop)
  static check_size<sizeof(NoteLineConnectionController), 124 + sizeof(bool)> __GlobalNamespace_NoteLineConnectionControllerSizeCheck;
  static_assert(sizeof(NoteLineConnectionController) == 0x7D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteLineConnectionController*, "", "NoteLineConnectionController");
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)(System::Action_1<GlobalNamespace::NoteLineConnectionController*>*)>(&GlobalNamespace::NoteLineConnectionController::add_didFinishEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteLineConnectionController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)(System::Action_1<GlobalNamespace::NoteLineConnectionController*>*)>(&GlobalNamespace::NoteLineConnectionController::remove_didFinishEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteLineConnectionController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)(GlobalNamespace::NoteController*, GlobalNamespace::NoteController*, float, float, float)>(&GlobalNamespace::NoteLineConnectionController::Setup)> {
  const MethodInfo* get() {
    static auto* noteController0 = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteController1 = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* fadeOutStartDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeOutEndDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController0, noteController1, fadeOutStartDistance, fadeOutEndDistance, noteTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)()>(&GlobalNamespace::NoteLineConnectionController::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::UpdatePositionsAndColors
// Il2CppName: UpdatePositionsAndColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)()>(&GlobalNamespace::NoteLineConnectionController::UpdatePositionsAndColors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "UpdatePositionsAndColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
